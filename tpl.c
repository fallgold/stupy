/*
  +----------------------------------------------------------------------+
  | Stupy                                                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: weils <fallgold@gmail.com>                                   |
  +----------------------------------------------------------------------+
*/

/* $Id: tpl.c 321634 2012-01-01 13:15:04Z felipe $ */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/html.h"
#include "stupy_compile.h"
#include "ext/standard/php_filestat.h"
#include "ext/date/php_date.h"
#include "ext/standard/php_var.h"

#include "stupy.h"
#include "tpl.h"
#include "yaf/yaf.c"

#include "main/php_output.h"

#define VIEW_BUFFER_BLOCK_SIZE	4096
#define VIEW_BUFFER_SIZE_MASK 	4095

zend_class_entry *yaf_view_stupy_ce;
static zend_op_array *(*zend_orig_compile_file)(zend_file_handle *file_handle, int type TSRMLS_DC);
static zend_op_array *(*zend_orig_compile_string)(zval *source_string, char *filename TSRMLS_DC);

extern zend_op_array *stupy_compile_file(zend_file_handle *file_handle, int type TSRMLS_DC);
extern zend_op_array *stupy_compile_string(zval *source_string, char *filename TSRMLS_DC);

/** {{{ ARG_INFO */
ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_construct_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, tempalte_dir)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_get_arginfo, 0, 0, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_isset_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_assign_by_ref_arginfo, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(1, value)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_eval_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, tpl_str)
	ZEND_ARG_INFO(0, vars)
ZEND_END_ARG_INFO();

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_clear_arginfo, 0, 0, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();
/* }}} */

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
/** {{{ static int yaf_view_stupy_render_write(const char *str, uint str_length TSRMLS_DC)
*/
static int yaf_view_stupy_render_write(const char *str, uint str_length TSRMLS_DC) {
	char *target;
	yaf_view_stupy_buffer *buffer = (yaf_view_stupy_buffer *)YAF_G(buffer);

	if (!buffer->size) {
		buffer->size   = (str_length | VIEW_BUFFER_SIZE_MASK) + 1;
		buffer->len	   = str_length;
		buffer->buffer = (char *)emalloc(buffer->size);
		target = buffer->buffer;
	} else {
		size_t len = buffer->len + str_length;

		if (buffer->size < len + 1) {
			buffer->size   = (len | VIEW_BUFFER_SIZE_MASK) + 1;
			buffer->buffer = (char *)erealloc(buffer->buffer, buffer->size);
			if (!buffer->buffer) {
				php_error_docref(NULL TSRMLS_CC, E_ERROR, "Yaf output buffer collapsed");
			}
		}

		target = buffer->buffer + buffer->len;
		buffer->len = len;
	}

	memcpy(target, str, str_length);
	target[str_length] = '\0';

	return str_length;
}
/* }}} */
#endif

static int yaf_view_stupy_valid_var_name(char *var_name, int len) /* {{{ */
{
	int i, ch;

	if (!var_name)
		return 0;

	/* These are allowed as first char: [a-zA-Z_\x7f-\xff] */
	ch = (int)((unsigned char *)var_name)[0];
	if (var_name[0] != '_' &&
			(ch < 65  /* A    */ || /* Z    */ ch > 90)  &&
			(ch < 97  /* a    */ || /* z    */ ch > 122) &&
			(ch < 127 /* 0x7f */ || /* 0xff */ ch > 255)
	   ) {
		return 0;
	}

	/* And these as the rest: [a-zA-Z0-9_\x7f-\xff] */
	if (len > 1) {
		for (i = 1; i < len; i++) {
			ch = (int)((unsigned char *)var_name)[i];
			if (var_name[i] != '_' &&
					(ch < 48  /* 0    */ || /* 9    */ ch > 57)  &&
					(ch < 65  /* A    */ || /* Z    */ ch > 90)  &&
					(ch < 97  /* a    */ || /* z    */ ch > 122) &&
					(ch < 127 /* 0x7f */ || /* 0xff */ ch > 255)
			   ) {
				return 0;
			}
		}
	}
	return 1;
}
/* }}} */

/** {{{ static int yaf_view_stupy_extract(zval *tpl_vars, zval *vars TSRMLS_DC)
*/
static int yaf_view_stupy_extract(zval *tpl_vars, zval *vars TSRMLS_DC) {
	zval **entry;
	char *var_name;
	ulong num_key;
	uint var_name_len;
	HashPosition pos;

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION > 2)) || (PHP_MAJOR_VERSION > 5)
	if (!EG(active_symbol_table)) {
		/*zend_rebuild_symbol_table(TSRMLS_C);*/
		return 1;
	}
#endif

	if (tpl_vars && Z_TYPE_P(tpl_vars) == IS_ARRAY) {
		for(zend_hash_internal_pointer_reset_ex(Z_ARRVAL_P(tpl_vars), &pos);
				zend_hash_get_current_data_ex(Z_ARRVAL_P(tpl_vars), (void **)&entry, &pos) == SUCCESS;
				zend_hash_move_forward_ex(Z_ARRVAL_P(tpl_vars), &pos)) {
			if (zend_hash_get_current_key_ex(Z_ARRVAL_P(tpl_vars), &var_name, &var_name_len, &num_key, 0, &pos) != HASH_KEY_IS_STRING) {
				continue;
			}

			/* GLOBALS protection */
			if (var_name_len == sizeof("GLOBALS") && !strcmp(var_name, "GLOBALS")) {
				continue;
			}

			if (var_name_len == sizeof("this")  && !strcmp(var_name, "this") && EG(scope) && EG(scope)->name_length != 0) {
				continue;
			}


			if (yaf_view_stupy_valid_var_name(var_name, var_name_len - 1)) {
				ZEND_SET_SYMBOL_WITH_LENGTH(EG(active_symbol_table), var_name, var_name_len,
						*entry, Z_REFCOUNT_P(*entry) + 1, PZVAL_IS_REF(*entry));
			}
		}
	}

	if (vars && Z_TYPE_P(vars) == IS_ARRAY) {
		for(zend_hash_internal_pointer_reset_ex(Z_ARRVAL_P(vars), &pos);
				zend_hash_get_current_data_ex(Z_ARRVAL_P(vars), (void **)&entry, &pos) == SUCCESS;
				zend_hash_move_forward_ex(Z_ARRVAL_P(vars), &pos)) {
			if (zend_hash_get_current_key_ex(Z_ARRVAL_P(vars), &var_name, &var_name_len, &num_key, 0, &pos) != HASH_KEY_IS_STRING) {
				continue;
			}

			/* GLOBALS protection */
			if (var_name_len == sizeof("GLOBALS") && !strcmp(var_name, "GLOBALS")) {
				continue;
			}

			if (var_name_len == sizeof("this")  && !strcmp(var_name, "this") && EG(scope) && EG(scope)->name_length != 0) {
				continue;
			}

			if (yaf_view_stupy_valid_var_name(var_name, var_name_len - 1)) {
				ZEND_SET_SYMBOL_WITH_LENGTH(EG(active_symbol_table), var_name, var_name_len,
						*entry, Z_REFCOUNT_P(*entry) + 1, 0 /**PZVAL_IS_REF(*entry)*/);
			}
		}
	}

	return 1;
}
/* }}} */

/** {{{ static int yaf_view_stupy_extract(zval *tpl_vars, zval *vars TSRMLS_DC)
*/
static int yaf_view_stupy_restore_attrs(zval *vars TSRMLS_DC) {
	zval **entry;
	char *var_name;
	ulong num_key;
	uint var_name_len;
	HashPosition pos;

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION > 2)) || (PHP_MAJOR_VERSION > 5)
	if (!EG(active_symbol_table)) {
		/*zend_rebuild_symbol_table(TSRMLS_C);*/
		return 1;
	}
#endif

	if (vars && Z_TYPE_P(vars) == IS_ARRAY) {
		for(zend_hash_internal_pointer_reset_ex(Z_ARRVAL_P(vars), &pos);
				zend_hash_get_current_data_ex(Z_ARRVAL_P(vars), (void **)&entry, &pos) == SUCCESS;
				zend_hash_move_forward_ex(Z_ARRVAL_P(vars), &pos)) {
			if (zend_hash_get_current_key_ex(Z_ARRVAL_P(vars), &var_name, &var_name_len, &num_key, 0, &pos) != HASH_KEY_IS_STRING) {
				continue;
			}

			if (!strncmp(var_name, "___", 3)) {
				ZEND_SET_SYMBOL_WITH_LENGTH(EG(active_symbol_table), (var_name + 3), (var_name_len - 3), *entry, Z_REFCOUNT_P(*entry) + 1, 0 /**PZVAL_IS_REF(*entry)*/);
			}
		}
	}
}
/* }}} */

/** {{{ static int yaf_view_stupy_extract(zval *tpl_vars, zval *vars TSRMLS_DC)
*/
static int yaf_view_stupy_extract_attrs(zval *vars TSRMLS_DC) {
	zval **entry;
	char *var_name;
	ulong num_key;
	uint var_name_len;
	HashPosition pos;
	char anony_name[sizeof(ulong)];
	char new_name[128];
	int new_name_len;

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION > 2)) || (PHP_MAJOR_VERSION > 5)
	if (!EG(active_symbol_table)) {
		if (STU_G(tpl_tag_symbol))
			zend_rebuild_symbol_table(TSRMLS_C);
		else {
			/*zend_rebuild_symbol_table(TSRMLS_C);*/
			return 1;
		}
	}
#endif

	if (vars && Z_TYPE_P(vars) == IS_ARRAY) {
		for(zend_hash_internal_pointer_reset_ex(Z_ARRVAL_P(vars), &pos);
				zend_hash_get_current_data_ex(Z_ARRVAL_P(vars), (void **)&entry, &pos) == SUCCESS;
				zend_hash_move_forward_ex(Z_ARRVAL_P(vars), &pos)) {
			int key_type = zend_hash_get_current_key_ex(Z_ARRVAL_P(vars), &var_name, &var_name_len, &num_key, 0, &pos);
			if (key_type == HASH_KEY_IS_LONG) {
				var_name_len = sprintf(anony_name, "_%d", num_key);
				anony_name[var_name_len++] = '\0';
				var_name = anony_name;
			} else if (key_type != HASH_KEY_IS_STRING) {
				continue;
			}

			if (!strncmp(var_name, "___", 3)) {
				// @attention: the below zend_hash_update will affect current loop
				continue;
			}

			/* GLOBALS protection */
			if (var_name_len == sizeof("GLOBALS") && !strcmp(var_name, "GLOBALS")) {
				continue;
			}

			if (var_name_len == sizeof("this")  && !strcmp(var_name, "this") && EG(scope) && EG(scope)->name_length != 0) {
				continue;
			}

			/* // when tpl_tag_symbol option is 1, extract attrs should avoid the key name is same as the attrs paramater itself
			if (var_name_len == sizeof("p")  && !strcmp(var_name, "p")) {
				continue;
			} */

			if (yaf_view_stupy_valid_var_name(var_name, var_name_len - 1)) {
				zval **orig_var;
				if (zend_hash_find(EG(active_symbol_table), var_name, var_name_len, (void **) &orig_var)==SUCCESS) {
					Z_ADDREF_PP(orig_var);
					new_name_len = snprintf(new_name, 128, "___%s", var_name);
					zend_hash_update(Z_ARRVAL_P(vars), new_name, new_name_len + 1, orig_var, sizeof(zval *), NULL);
				}
				ZEND_SET_SYMBOL_WITH_LENGTH(EG(active_symbol_table), var_name, var_name_len, *entry, Z_REFCOUNT_P(*entry) + 1, 0 /**PZVAL_IS_REF(*entry)*/);
			}
		}
	}
}
/* }}} */

/** {{{ yaf_view_t * yaf_view_stupy_instance(yaf_view_t *view, zval *tpl_dir, zval *options TSRMLS_DC)
*/
yaf_view_t * yaf_view_stupy_instance(yaf_view_t *view, zval *tpl_dir, zval *options TSRMLS_DC) {
	zval *instance, *tpl_vars;

	instance = view;
	if (!instance) {
		MAKE_STD_ZVAL(instance);
		object_init_ex(instance, yaf_view_stupy_ce);
	}

	MAKE_STD_ZVAL(tpl_vars);
	array_init(tpl_vars);
	zend_update_property(yaf_view_stupy_ce, instance, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), tpl_vars TSRMLS_CC);
	zval_ptr_dtor(&tpl_vars);

	if (tpl_dir && Z_TYPE_P(tpl_dir) == IS_STRING) {
		if (IS_ABSOLUTE_PATH(Z_STRVAL_P(tpl_dir), Z_STRLEN_P(tpl_dir))) {
			zend_update_property(yaf_view_stupy_ce, instance, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR), tpl_dir TSRMLS_CC);
		} else {
			if (!view) {
				zval_ptr_dtor(&instance);
			}
			yaf_trigger_error(YAF_ERR_TYPE_ERROR TSRMLS_CC, "Expects an absolute path for templates directory");
			return NULL;
		}
	} 

	if (options && IS_ARRAY == Z_TYPE_P(options)) {
		zend_update_property(yaf_view_stupy_ce, instance, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_OPTS), options TSRMLS_CC);
	}

	return instance;
}
/* }}} */

/** {{{ int yaf_view_stupy_render(yaf_view_t *view, zval *tpl, zval * vars, zval *ret TSRMLS_DC)
*/
int yaf_view_stupy_render(yaf_view_t *view, zval *tpl, zval * vars, zval *ret TSRMLS_DC) {
	zval *tpl_vars;
	char *script;
	uint len;
	HashTable *calling_symbol_table;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	zend_class_entry *old_scope;
	yaf_view_stupy_buffer *buffer;
	zend_bool short_open_tag;
#endif
	int old_error_reporting;
	int import_ret;
	char *efile;
	int efile_len;
	char cwd[MAXPATHLEN];

	if (IS_STRING != Z_TYPE_P(tpl)) {
		return 0;
	}

	ZVAL_NULL(ret);

	tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);
	if (EG(active_symbol_table)) {
		calling_symbol_table = EG(active_symbol_table);
	} else {
		calling_symbol_table = NULL;
	}

	ALLOC_HASHTABLE(EG(active_symbol_table));
	zend_hash_init(EG(active_symbol_table), 0, NULL, ZVAL_PTR_DTOR, 0);

	(void)yaf_view_stupy_extract(tpl_vars, vars TSRMLS_CC);

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	short_open_tag = CG(short_tags);
	YAF_REDIRECT_OUTPUT_BUFFER(buffer);
	{
		zval **short_tag;
		zval *options = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_OPTS), 0 TSRMLS_CC);
		if (IS_ARRAY != Z_TYPE_P(options)
				|| (zend_hash_find(Z_ARRVAL_P(options), ZEND_STRS("short_tag"), (void **)&short_tag) == FAILURE)
				|| zend_is_true(*short_tag)) {
			CG(short_tags) = 1;
		}
	}
#else
	if (php_output_start_user(NULL, 0, PHP_OUTPUT_HANDLER_STDFLAGS TSRMLS_CC) == FAILURE) {
		php_error_docref("ref.outcontrol" TSRMLS_CC, E_WARNING, "failed to create buffer");
		return 0;
	}
#endif

	if (IS_ABSOLUTE_PATH(Z_STRVAL_P(tpl), Z_STRLEN_P(tpl))) {
		script 	= Z_STRVAL_P(tpl);
		len 	= Z_STRLEN_P(tpl);

		old_error_reporting = EG(error_reporting);
		EG(error_reporting) &= ~STU_G(tpl_suppress);
		STU_G(st_tpl_compiling) = 1;
		import_ret = yaf_loader_import(script, len + 1, 0 TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0;
		EG(error_reporting)  = old_error_reporting;
		if (import_ret == 0) {
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
			YAF_RESTORE_OUTPUT_BUFFER(buffer);
			CG(short_tags) = short_open_tag;
#else
			php_output_end(TSRMLS_C);
#endif
			if (calling_symbol_table) {
				zend_hash_destroy(EG(active_symbol_table));
				FREE_HASHTABLE(EG(active_symbol_table));
				EG(active_symbol_table) = calling_symbol_table;
			}

			yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC, "Failed opening template(%s) %s", script, strerror(errno));
			return 0;
		}
	} else {
		zval *tpl_dir = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR), 0 TSRMLS_CC);

		if (IS_STRING != Z_TYPE_P(tpl_dir)) {
			if (YAF_G(view_directory)) {
				len = spprintf(&script, 0, "%s%c%s", YAF_G(view_directory), DEFAULT_SLASH, Z_STRVAL_P(tpl));
			} else {
				efile = zend_get_executed_filename(TSRMLS_C);
				efile_len = strlen(efile);
				if (efile && IS_ABSOLUTE_PATH(efile, efile_len) && efile_len < MAXPATHLEN) {
					memcpy(cwd, efile, efile_len);
					zend_dirname(cwd, efile_len);
					if (!STU_G(tpl_include_dir))
						STU_G(tpl_include_dir) = estrdup(cwd);
					len = spprintf(&script, 0, "%s%c%s", cwd, DEFAULT_SLASH, Z_STRVAL_P(tpl));
				} else {
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
					YAF_RESTORE_OUTPUT_BUFFER(buffer);
					CG(short_tags) = short_open_tag;
#else
					php_output_end(TSRMLS_C);
#endif

					if (calling_symbol_table) {
						zend_hash_destroy(EG(active_symbol_table));
						FREE_HASHTABLE(EG(active_symbol_table));
						EG(active_symbol_table) = calling_symbol_table;
					}

					yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC,
							"Could not determine the view script path, you should call %s::setScriptPath to specific it", yaf_view_stupy_ce->name);
					return 0;
				}
			}
		} else {
			len = spprintf(&script, 0, "%s%c%s", Z_STRVAL_P(tpl_dir), DEFAULT_SLASH, Z_STRVAL_P(tpl));
		}

		old_error_reporting = EG(error_reporting);
		EG(error_reporting) &= ~STU_G(tpl_suppress);
		STU_G(st_tpl_compiling) = 1;
		script[len] = '\0';
		import_ret = yaf_loader_import(script, len + 1, 0 TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0;
		EG(error_reporting) = old_error_reporting;
		if (import_ret == 0) {
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
			YAF_RESTORE_OUTPUT_BUFFER(buffer);
			CG(short_tags) = short_open_tag;
#else
			php_output_end(TSRMLS_C);
#endif
			if (calling_symbol_table) {
				zend_hash_destroy(EG(active_symbol_table));
				FREE_HASHTABLE(EG(active_symbol_table));
				EG(active_symbol_table) = calling_symbol_table;
			}

			yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC, "Failed opening template(%s) %s", script, strerror(errno));
			efree(script);
			return 0;
		}
		efree(script);
	}

	if (calling_symbol_table) {
		zend_hash_destroy(EG(active_symbol_table));
		FREE_HASHTABLE(EG(active_symbol_table));
		EG(active_symbol_table) = calling_symbol_table;
	}

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	CG(short_tags) = short_open_tag;
	if (buffer->len) {
		ZVAL_STRINGL(ret, buffer->buffer, buffer->len, 1);
	}
#else
	if (php_output_get_contents(ret TSRMLS_CC) == FAILURE) {
		php_output_end(TSRMLS_C);
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "Unable to fetch ob content");
		return 0;
	}

	if (php_output_discard(TSRMLS_C) != SUCCESS ) {
		return 0;
	}
#endif

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	YAF_RESTORE_OUTPUT_BUFFER(buffer);
#endif
	return 1;
}
/* }}} */

/** {{{ int yaf_view_stupy_display(yaf_view_t *view, zval *tpl, zval * vars, zval *ret TSRMLS_DC)
*/
int yaf_view_stupy_display(yaf_view_t *view, zval *tpl, zval *vars, zval *ret TSRMLS_DC) {
	zval *tpl_vars;
	char *script;
	uint len;
	zend_class_entry *old_scope;
	HashTable *calling_symbol_table;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	zend_bool short_open_tag;
#endif
	char *efile;
	int old_error_reporting;
	int import_ret;
	zval *tpl_dir;
	int efile_len;
	char cwd[MAXPATHLEN];
	zval **short_tag;
	zval *options;

	if (IS_STRING != Z_TYPE_P(tpl)) {
		return 0;
	}

	tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);
	if (EG(active_symbol_table)) {
		calling_symbol_table = EG(active_symbol_table);
	} else {
		calling_symbol_table = NULL;
	}

	ALLOC_HASHTABLE(EG(active_symbol_table));
	zend_hash_init(EG(active_symbol_table), 0, NULL, ZVAL_PTR_DTOR, 0);

	(void)yaf_view_stupy_extract(tpl_vars, vars TSRMLS_CC);

	old_scope = EG(scope);
	EG(scope) = yaf_view_stupy_ce;

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	short_open_tag = CG(short_tags);
	{
		options = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_OPTS), 0 TSRMLS_CC);
		if (IS_ARRAY != Z_TYPE_P(options)
				|| (zend_hash_find(Z_ARRVAL_P(options), ZEND_STRS("short_tag"), (void **)&short_tag) == FAILURE)
				|| zend_is_true(*short_tag)) {
			CG(short_tags) = 1;
		}
	}
#endif

	if (IS_ABSOLUTE_PATH(Z_STRVAL_P(tpl), Z_STRLEN_P(tpl))) {
		script 	= Z_STRVAL_P(tpl);
		len 	= Z_STRLEN_P(tpl);
		old_error_reporting = EG(error_reporting);
		EG(error_reporting) &= ~STU_G(tpl_suppress);
		STU_G(st_tpl_compiling) = 1;
		import_ret = yaf_loader_import(script, len + 1, 0 TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0;
		EG(error_reporting) = old_error_reporting;
		if (import_ret == 0) {
			yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC, "Failed opening template(%s) %s", script, strerror(errno));
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
			CG(short_tags) = short_open_tag;
#endif
			EG(scope) = old_scope;
			if (calling_symbol_table) {
				zend_hash_destroy(EG(active_symbol_table));
				FREE_HASHTABLE(EG(active_symbol_table));
				EG(active_symbol_table) = calling_symbol_table;
			}
			return 0;
		}
	} else {
		tpl_dir = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR), 0 TSRMLS_CC);

		if (IS_STRING != Z_TYPE_P(tpl_dir)) {
			if (YAF_G(view_directory)) {
				len = spprintf(&script, 0, "%s%c%s", YAF_G(view_directory), DEFAULT_SLASH, Z_STRVAL_P(tpl));
			} else {
				efile = zend_get_executed_filename(TSRMLS_C);
				efile_len = strlen(efile);
				if (efile && IS_ABSOLUTE_PATH(efile, efile_len) && efile_len < MAXPATHLEN) {
					memcpy(cwd, efile, efile_len);
					zend_dirname(cwd, efile_len);
					if (!STU_G(tpl_include_dir))
						STU_G(tpl_include_dir) = estrdup(cwd);
					len = spprintf(&script, 0, "%s%c%s", cwd, DEFAULT_SLASH, Z_STRVAL_P(tpl));
				} else {
					yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC,
							"Could not determine the view script path, you should call %s::setScriptPath to specific it", yaf_view_stupy_ce->name);
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
					CG(short_tags) = short_open_tag;
#endif
					EG(scope) = old_scope;
					if (calling_symbol_table) {
						zend_hash_destroy(EG(active_symbol_table));
						FREE_HASHTABLE(EG(active_symbol_table));
						EG(active_symbol_table) = calling_symbol_table;
					}
					return 0;
				}
			}
		} else {
			len = spprintf(&script, 0, "%s%c%s", Z_STRVAL_P(tpl_dir), DEFAULT_SLASH, Z_STRVAL_P(tpl));
		}

		old_error_reporting = EG(error_reporting);
		EG(error_reporting) &= ~STU_G(tpl_suppress);
		STU_G(st_tpl_compiling) = 1;
		script[len] = '\0';
		import_ret = yaf_loader_import(script, len + 1, 0 TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0;
		EG(error_reporting) = old_error_reporting;
		if (import_ret == 0) {
			yaf_trigger_error(YAF_ERR_NOTFOUND_VIEW TSRMLS_CC, "Failed opening template(%s) %s", script, strerror(errno));
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
			CG(short_tags) = short_open_tag;
#endif
			efree(script);
			EG(scope) = old_scope;
			if (calling_symbol_table) {
				zend_hash_destroy(EG(active_symbol_table));
				FREE_HASHTABLE(EG(active_symbol_table));
				EG(active_symbol_table) = calling_symbol_table;
			}
			return 0;
		}
		efree(script);
	}

	EG(scope) = old_scope;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	CG(short_tags) = short_open_tag;
#endif
	if (calling_symbol_table) {
		zend_hash_destroy(EG(active_symbol_table));
		FREE_HASHTABLE(EG(active_symbol_table));
		EG(active_symbol_table) = calling_symbol_table;
	}

	return 1;
}
/* }}} */

/** {{{ int yaf_view_stupy_eval(yaf_view_t *view, zval *tpl, zval * vars, zval *ret TSRMLS_DC)
*/
int yaf_view_stupy_eval(yaf_view_t *view, zval *tpl, zval * vars, zval *ret TSRMLS_DC) {
	zval *tpl_vars;
	HashTable *calling_symbol_table;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	zend_class_entry *old_scope;
	yaf_view_stupy_buffer *buffer;
	zend_bool short_open_tag;
#endif
	zval phtml;
	zend_op_array *new_op_array;
	char *eval_desc;
	int old_error_reporting;

	if (IS_STRING != Z_TYPE_P(tpl)) {
		return 0;
	}

	ZVAL_NULL(ret);

	tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);
	if (EG(active_symbol_table)) {
		calling_symbol_table = EG(active_symbol_table);
	} else {
		calling_symbol_table = NULL;
	}

	ALLOC_HASHTABLE(EG(active_symbol_table));
	zend_hash_init(EG(active_symbol_table), 0, NULL, ZVAL_PTR_DTOR, 0);

	(void)yaf_view_stupy_extract(tpl_vars, vars TSRMLS_CC);

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	short_open_tag = CG(short_tags);
	YAF_REDIRECT_OUTPUT_BUFFER(buffer);
	{
		zval **short_tag;
		zval *options = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_OPTS), 0 TSRMLS_CC);
		if (IS_ARRAY != Z_TYPE_P(options)
				|| (zend_hash_find(Z_ARRVAL_P(options), ZEND_STRS("short_tag"), (void **)&short_tag) == FAILURE)
				|| zend_is_true(*short_tag)) {
			CG(short_tags) = 1;
		}
	}
#else
	if (php_output_start_user(NULL, 0, PHP_OUTPUT_HANDLER_STDFLAGS TSRMLS_CC) == FAILURE) {
		php_error_docref("ref.outcontrol" TSRMLS_CC, E_WARNING, "failed to create buffer");
		return 0;
	}
#endif

	if (Z_STRLEN_P(tpl)) {
		eval_desc = zend_make_compiled_string_description("template code" TSRMLS_CC);
		
		/* eval require code mustn't be wrapped in opening and closing PHP tags */
		INIT_ZVAL(phtml);
		Z_TYPE(phtml)   = IS_STRING;
		Z_STRLEN(phtml) = Z_STRLEN_P(tpl) + 2;
		Z_STRVAL(phtml) = (char *)emalloc(Z_STRLEN(phtml) + 1);
		snprintf(Z_STRVAL(phtml), Z_STRLEN(phtml) + 1, "?>%s", Z_STRVAL_P(tpl));

		old_error_reporting = EG(error_reporting);
		EG(error_reporting) &= ~STU_G(tpl_suppress);
		STU_G(st_tpl_compiling) = 1;
		new_op_array = zend_compile_string(&phtml, eval_desc TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0;

		zval_dtor(&phtml);
		efree(eval_desc);

		if (new_op_array) {
			zval *result = NULL;

			YAF_STORE_EG_ENVIRON();

			EG(return_value_ptr_ptr) 	= &result;
			EG(active_op_array) 		= new_op_array;

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION > 2)) || (PHP_MAJOR_VERSION > 5)
			if (!EG(active_symbol_table)) {
				zend_rebuild_symbol_table(TSRMLS_C);
			}
#endif
			zend_execute(new_op_array TSRMLS_CC);

			destroy_op_array(new_op_array TSRMLS_CC);
			efree(new_op_array);

			if (!EG(exception)) {
				if (EG(return_value_ptr_ptr) && *EG(return_value_ptr_ptr)) {
					zval_ptr_dtor(EG(return_value_ptr_ptr));
				}
			}

			YAF_RESTORE_EG_ENVIRON();
		}
		EG(error_reporting) = old_error_reporting;
	}

	if (calling_symbol_table) {
		zend_hash_destroy(EG(active_symbol_table));
		FREE_HASHTABLE(EG(active_symbol_table));
		EG(active_symbol_table) = calling_symbol_table;
	}

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	CG(short_tags) = short_open_tag;
	if (buffer->len) {
		ZVAL_STRINGL(ret, buffer->buffer, buffer->len, 1);
	}
#else
	if (php_output_get_contents(ret TSRMLS_CC) == FAILURE) {
		php_output_end(TSRMLS_C);
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "Unable to fetch ob content");
		return 0;
	}

	if (php_output_discard(TSRMLS_C) != SUCCESS ) {
		return 0;
	}
#endif

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	YAF_RESTORE_OUTPUT_BUFFER(buffer);
#endif
	return 1;
}
/* }}} */

/** {{{ int yaf_view_stupy_assign_single(yaf_view_t *view, char *name, uint len, zval *value TSRMLS_DC)
 */
int yaf_view_stupy_assign_single(yaf_view_t *view, char *name, uint len, zval *value TSRMLS_DC) {
	zval *tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);
	Z_ADDREF_P(value);
	if (zend_hash_update(Z_ARRVAL_P(tpl_vars), name, len + 1, &value, sizeof(zval *), NULL) == SUCCESS) {
		return 1;
	}
	return 0;
}
/* }}} */

/** {{{ int yaf_view_stupy_assign_single(yaf_view_t *view, zval *name, zval *value TSRMLS_DC)
 */
int yaf_view_stupy_assign_multi(yaf_view_t *view, zval *value TSRMLS_DC) {
	zval *tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);
	if (Z_TYPE_P(value) == IS_ARRAY) {
		zend_hash_copy(Z_ARRVAL_P(tpl_vars), Z_ARRVAL_P(value), (copy_ctor_func_t) zval_add_ref, NULL, sizeof(zval *));
		return 1;
	}
	return 0;
}
/* }}} */

/** {{{ void yaf_view_stupy_clear_assign(yaf_view_t *view, char *name, uint len TSRMLS_DC)
 */
void yaf_view_stupy_clear_assign(yaf_view_t *view, char *name, uint len TSRMLS_DC) {
	zval *tpl_vars = zend_read_property(yaf_view_stupy_ce, view, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);
	if (tpl_vars && Z_TYPE_P(tpl_vars) == IS_ARRAY) {
		if (len) {
			zend_symtable_del(Z_ARRVAL_P(tpl_vars), name, len + 1);
		} else {
			zend_hash_clean(Z_ARRVAL_P(tpl_vars));
		}
	} 
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::__construct(string $tpl_dir, array $options = NULL)
*/
PHP_METHOD(yaf_view_stupy, __construct) {
	zval *tpl_dir = NULL, *options = NULL;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|za", &tpl_dir, &options) == FAILURE) {
		YAF_UNINITIALIZED_OBJECT(getThis());
		return;
	}

	yaf_view_stupy_instance(getThis(), tpl_dir, options TSRMLS_CC);
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::__isset($name)
*/
PHP_METHOD(yaf_view_stupy, __isset) {
	char *name;
	uint len;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &name, &len) == FAILURE) {
		return;
	} else {
		zval *tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);
		RETURN_BOOL(zend_hash_exists(Z_ARRVAL_P(tpl_vars), name, len + 1));
	}
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::setStaticOption(string name, zval* value)
*/
PHP_METHOD(yaf_view_stupy, setStaticOption) {
	zval *value;
	char *name;
	uint len;
	char *c;
	int need_free = 0;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sz", &name, &len, &value) == FAILURE) {
		WRONG_PARAM_COUNT;
	}
	
	if (len == strlen("tpl_mod_pattern") && !strcmp(name, "tpl_mod_pattern")) {
		if (IS_STRING != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_string_ex(&value);
		}
		c = strchr(Z_STRVAL_P(value), '%');
		if (*c == NULL || *(c+1) != 's' || strchr(c+1, '%') != NULL) {
			php_error_docref(NULL TSRMLS_CC, E_ERROR, "tpl_mod_pattern should use one \"%%s\" to expand the mod name");
		}
		if (STU_G(tpl_mod_pattern))	
			efree(STU_G(tpl_mod_pattern));
		STU_G(tpl_mod_pattern) = zend_str_tolower_dup(Z_STRVAL_P(value), Z_STRLEN_P(value));
	} else if (len == strlen("tpl_mod_file_pattern") && !strcmp(name, "tpl_mod_file_pattern")) {
		if (IS_STRING != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_string_ex(&value);
		}
		if (!IS_ABSOLUTE_PATH(Z_STRVAL_P(value), Z_STRLEN_P(value))) {
			php_error_docref(NULL TSRMLS_CC, E_ERROR, "Expects an absolute path for modifiers directory");
			RETURN_FALSE;
		}
		c = strchr(Z_STRVAL_P(value), '%');
		if (c != NULL && (*(c+1) != 's' || strchr(c+1, '%') != NULL)) {
			php_error_docref(NULL TSRMLS_CC, E_ERROR, "tpl_mod_file_pattern should be a file or use one \"%%s\" to expand the mod name");
		}
		if (STU_G(tpl_mod_file_pattern))	
			efree(STU_G(tpl_mod_file_pattern));
		STU_G(tpl_mod_file_pattern) = estrdup(Z_STRVAL_P(value));
	} else if (len == strlen("tpl_opti_spaces") && !strcmp(name, "tpl_opti_spaces")) {
		if (IS_LONG != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_long_ex(&value);
		}
		STU_G(tpl_opti_spaces) = Z_LVAL_P(value);
	} else if (len == strlen("tpl_include_dir") && !strcmp(name, "tpl_include_dir")) {
		if (IS_STRING != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_string_ex(&value);
		}
		if (!IS_ABSOLUTE_PATH(Z_STRVAL_P(value), Z_STRLEN_P(value))) {
			php_error_docref(NULL TSRMLS_CC, E_ERROR, "Expects an absolute path for include directory");
			RETURN_FALSE;
		}
		if (STU_G(tpl_include_dir))	
			efree(STU_G(tpl_include_dir));
		STU_G(tpl_include_dir) = estrdup(Z_STRVAL_P(value));
	} else if (len == strlen("tpl_include_extend") && !strcmp(name, "tpl_include_extend")) {
		if (IS_LONG != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_long_ex(&value);
		}
		STU_G(tpl_include_extend) = Z_LVAL_P(value);
	} else if (len == strlen("tpl_suppress") && !strcmp(name, "tpl_suppress")) {
		if (IS_LONG != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_long_ex(&value);
		}
		STU_G(tpl_suppress) = Z_LVAL_P(value);
	} else if (len == strlen("tpl_tag_symbol") && !strcmp(name, "tpl_tag_symbol")) {
		if (IS_LONG != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_long_ex(&value);
		}
		STU_G(tpl_tag_symbol) = Z_LVAL_P(value);
	} else if (len == strlen("use_request_time") && !strcmp(name, "use_request_time")) {
		if (IS_LONG != Z_TYPE_P(value)) {
			need_free = 1;
			Z_ADDREF_P(value);
			convert_to_long_ex(&value);
		}
		STU_G(use_request_time) = Z_LVAL_P(value);
	} else {
		php_error_docref(NULL TSRMLS_CC, E_ERROR, "only support this static options: tpl_mod_pattern(string), tpl_opti_spaces(int), tpl_mod_file_pattern(string), tpl_include_dir(string), tpl_include_extend(int), tpl_suppress(int), tpl_tag_symbol(int), use_request_time(int)");
		RETURN_FALSE;
	}
	if (need_free) {
		zval_dtor(value);
		zval_ptr_dtor(&value);
	}

	RETURN_TRUE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::setTag(string name, zval* value)
*/
PHP_METHOD(yaf_view_stupy, setTag) {
	char *name, *value;
	uint name_len, value_len;
	char *p;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "ss", &name, &name_len, &value, &value_len) == FAILURE) {
		WRONG_PARAM_COUNT;
	}
	p = estrndup(value, (value_len + 1));
	p[value_len] = '\0';
	zend_hash_update(&STU_G(tpl_tags), name, name_len+1, &p, sizeof(char *), NULL);
	RETURN_TRUE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::setScriptPath(string $tpl_dir)
*/
PHP_METHOD(yaf_view_stupy, setScriptPath) {
	zval *tpl_dir;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &tpl_dir) == FAILURE) {
		return;
	}

	if (Z_TYPE_P(tpl_dir) == IS_STRING && IS_ABSOLUTE_PATH(Z_STRVAL_P(tpl_dir), Z_STRLEN_P(tpl_dir))) {
		if (STU_G(tpl_include_dir))	
			efree(STU_G(tpl_include_dir));
		STU_G(tpl_include_dir) = estrdup(Z_STRVAL_P(tpl_dir));
		zend_update_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR), tpl_dir TSRMLS_CC);
		RETURN_ZVAL(getThis(), 1, 0);
	}

	RETURN_FALSE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::getScriptPath(void)
*/
PHP_METHOD(yaf_view_stupy, getScriptPath) {
	zval *tpl_dir = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR), 0 TSRMLS_CC);
	if (IS_STRING != Z_TYPE_P(tpl_dir) && YAF_G(view_directory)) {
		RETURN_STRING(YAF_G(view_directory), 1);
	} 
	RETURN_ZVAL(tpl_dir, 1, 0);
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::compose(string $script, zval *args)
*/
PHP_METHOD(yaf_view_stupy, compose) {
	char *script;
	uint len;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &script, &len) == FAILURE) {
		return;
	}

	if (!len) {
		RETURN_FALSE;
	}

}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::assign(mixed $value, mixed $value = null)
*/
PHP_METHOD(yaf_view_stupy, assign) {
	uint argc = ZEND_NUM_ARGS();
	zval *value;
	char *name;
	uint len;
		
	if (argc == 1) {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z", &value) == FAILURE) {
			return;
		}
		RETURN_BOOL(yaf_view_stupy_assign_multi(getThis(), value TSRMLS_CC));
	} else if (argc == 2) {
		if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sz", &name, &len, &value) == FAILURE) {
			return;
		}
        RETURN_BOOL(yaf_view_stupy_assign_single(getThis(), name, len, value TSRMLS_CC));
	} else {
		WRONG_PARAM_COUNT;
	}

	RETURN_FALSE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::assignRef(mixed $value, mixed $value)
*/
PHP_METHOD(yaf_view_stupy, assignRef) {
	char * name; int len;
	zval * value, * tpl_vars;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sz", &name, &len, &value) == FAILURE) {
		WRONG_PARAM_COUNT;
	}

	tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);

	Z_ADDREF_P(value);
	if (zend_hash_update(Z_ARRVAL_P(tpl_vars), name, len + 1, &value, sizeof(zval *), NULL) == SUCCESS) {
		RETURN_TRUE;
	}
	RETURN_FALSE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::get($name)
*/
PHP_METHOD(yaf_view_stupy, get) {
	char *name;
	uint len = 0;
	zval *tpl_vars, **ret;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|s", &name, &len) == FAILURE) {
		return;
	}

	tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);

	if (tpl_vars && Z_TYPE_P(tpl_vars) == IS_ARRAY) {
		if (len) {
			if (zend_hash_find(Z_ARRVAL_P(tpl_vars), name, len + 1, (void **) &ret) == SUCCESS) {
				RETURN_ZVAL(*ret, 1, 0);
			} 
		} else {
			RETURN_ZVAL(tpl_vars, 1, 0);
		}
	}

	RETURN_NULL();
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::render(string $tpl, array $vars = NULL)
*/
PHP_METHOD(yaf_view_stupy, render) {
	zval *tpl, *vars = NULL; /*, *tpl_vars;*/

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &tpl, &vars) == FAILURE) {
		return;
	}

	/*tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);*/
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	zend_try {
#endif
		STU_G(tpl_assign_idx) = 0;
		STU_G(tpl_compile_time) = 0;
		if (!yaf_view_stupy_render(getThis(), tpl, vars, return_value TSRMLS_CC)) {
			RETVAL_FALSE;
		}
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	} zend_catch {
		yaf_view_stupy_buffer *buffer;

		if (!(--YAF_G(buf_nesting))) {
			if (YAF_G(owrite_handler)) {
				OG(php_body_write) 	= (yaf_body_write_func)YAF_G(owrite_handler);
				YAF_G(owrite_handler) = NULL;
			}
		}

		if (YAF_G(buffer)) {
			buffer = (yaf_view_stupy_buffer *)YAF_G(buffer);
			YAF_G(buffer) = buffer->prev;
			if (buffer->len) {
				PHPWRITE(buffer->buffer, buffer->len);
				efree(buffer->buffer);
			}
			efree(buffer);
		}
		zend_bailout();
	} zend_end_try();
#endif

}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::eval(string $tpl_content, array $vars = NULL)
*/
PHP_METHOD(yaf_view_stupy, eval) {
	zval *tpl, *vars = NULL; /*, *tpl_vars;*/

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &tpl, &vars) == FAILURE) {
		return;
	}

	/*tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 1 TSRMLS_CC);*/
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	zend_try {
#endif
		STU_G(tpl_assign_idx) = 0;
		STU_G(tpl_compile_time) = 0;
		if (!yaf_view_stupy_eval(getThis(), tpl, vars, return_value TSRMLS_CC)) {
			RETVAL_FALSE;
		}
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	} zend_catch {
		yaf_view_stupy_buffer *buffer;

		if (!(--YAF_G(buf_nesting))) {
			if (YAF_G(owrite_handler)) {
				OG(php_body_write) 	= (yaf_body_write_func)YAF_G(owrite_handler);
				YAF_G(owrite_handler) = NULL;
			}
		}

		if (YAF_G(buffer)) {
			buffer = (yaf_view_stupy_buffer *)YAF_G(buffer);
			YAF_G(buffer) = buffer->prev;
			if (buffer->len) {
				PHPWRITE(buffer->buffer, buffer->len);
				efree(buffer->buffer);
			}
			efree(buffer);
		}
		zend_bailout();
	} zend_end_try();
#endif

}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::display(string $tpl, array $vars = NULL)
*/
PHP_METHOD(yaf_view_stupy, display) {
	zval *tpl, *vars = NULL; /* , *tpl_vars*/

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|z", &tpl, &vars) == FAILURE) {
		return;
	}

	STU_G(tpl_assign_idx) = 0;
	STU_G(tpl_compile_time) = 0;
	/*tpl_vars = zend_read_property(yaf_view_stupy_ce, getThis(), ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), 0 TSRMLS_CC);*/
	if (!yaf_view_stupy_display(getThis(), tpl, vars, return_value TSRMLS_CC)) {
		RETURN_FALSE;
	}

	RETURN_TRUE;
}
/* }}} */

/** {{{ proto public Yaf_View_Stupy::clear(string $name)
*/
PHP_METHOD(yaf_view_stupy, clear) {
	char *name;
	uint len = 0;

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "|s", &name, &len) == FAILURE) {
		return;
	}
    
	yaf_view_stupy_clear_assign(getThis(), name, len TSRMLS_CC);

	RETURN_ZVAL(getThis(), 1, 0);
}
/* }}} */

static int autoload_modifier(char **ppModifier TSRMLS_DC) /* {{{ */
{
	char file[MAXPATHLEN];
	int len;
	int ret;
	char path_pattern[MAXPATHLEN];
	char *efile;
	int efile_len;
	char cwd[MAXPATHLEN];
	
	if (!STU_G(tpl_mod_file_pattern)) {
		efile = zend_get_executed_filename(TSRMLS_C);
		efile_len = strlen(efile);
		if (efile && IS_ABSOLUTE_PATH(efile, efile_len) && efile_len < MAXPATHLEN) {
			memcpy(cwd, efile, efile_len);
			zend_dirname(cwd, efile_len);
			len = snprintf(path_pattern, MAXPATHLEN, "%s/%s.php", cwd, STU_G(tpl_mod_pattern));
		} else {
			len = snprintf(path_pattern, MAXPATHLEN, "%s.php", STU_G(tpl_mod_pattern));
		}
		STU_G(tpl_mod_file_pattern) = estrdup(path_pattern);
		len = snprintf(file, MAXPATHLEN, path_pattern, *ppModifier);
	} else {
		len = snprintf(file, MAXPATHLEN, STU_G(tpl_mod_file_pattern), *ppModifier);
	}
	file[len] = '\0';
	ret = yaf_loader_import(file, len + 1, 0 TSRMLS_CC);
	if (!ret)
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "modifier %s not exist(autoload failed: %s)", *ppModifier, file);
	return 0;
}

static zend_op_array *_stupy_compile_file(zend_file_handle *file_handle, int type TSRMLS_DC) 
{
	char *mod_name;
	ulong num_key;
	char *c;
	zend_op_array *ret;
	
	if (STU_G(st_tpl_compiling)) {
		STU_G(st_tpl) = 0;
		STU_G(st_tpl_with_script) = 0;
		STU_G(st_tpl_no_constant) = 0;
		zend_hash_clean(&STU_G(tpl_modifiers));
		ret = stupy_compile_file(file_handle, type TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0; // autoload modifiers, use the zend_orig_compile_file
		for(zend_hash_internal_pointer_reset(&STU_G(tpl_modifiers));
				zend_hash_has_more_elements(&STU_G(tpl_modifiers)) == SUCCESS;
				zend_hash_move_forward(&STU_G(tpl_modifiers))) {
			if (zend_hash_get_current_key(&STU_G(tpl_modifiers), &mod_name, &num_key, 0) == HASH_KEY_IS_STRING) {
				autoload_modifier(&mod_name TSRMLS_CC);
				if (STU_G(tpl_mod_file_pattern)) {
					c = strchr(STU_G(tpl_mod_file_pattern), '%');
					if (c == NULL) { // all mod in one file, load_once
						break;
					}
				}
			}
		}
		STU_G(st_tpl_compiling) = 1; // restore
		return ret;
	} else {
		return zend_orig_compile_file(file_handle, type TSRMLS_CC);
	}
}

static zend_op_array *_stupy_compile_string(zval *source_string, char *filename TSRMLS_DC)
{
	char *mod_name;
	ulong num_key;
	char *c;
	zend_op_array *ret;
	
	if (STU_G(st_tpl_compiling)) {
		STU_G(st_tpl) = 0;
		STU_G(st_tpl_with_script) = 0;
		STU_G(st_tpl_no_constant) = 0;
		zend_hash_clean(&STU_G(tpl_modifiers));
		ret = stupy_compile_string(source_string, filename TSRMLS_CC);
		STU_G(st_tpl_compiling) = 0; // autoload modifiers, use the zend_orig_compile_string
		for(zend_hash_internal_pointer_reset(&STU_G(tpl_modifiers));
				zend_hash_has_more_elements(&STU_G(tpl_modifiers)) == SUCCESS;
				zend_hash_move_forward(&STU_G(tpl_modifiers))) {
			if (zend_hash_get_current_key(&STU_G(tpl_modifiers), &mod_name, &num_key, 0) == HASH_KEY_IS_STRING) {
				autoload_modifier(&mod_name TSRMLS_CC);
				if (STU_G(tpl_mod_file_pattern)) {
					c = strchr(STU_G(tpl_mod_file_pattern), '%');
					if (c == NULL) { // all mod in one file, load_once
						break;
					}
				}
			}
		}
		STU_G(st_tpl_compiling) = 1; // restore
		return ret;
	} else {
		return zend_orig_compile_string(source_string, filename TSRMLS_CC);
	}
}

/** {{{ yaf_view_stupy_methods
*/
zend_function_entry yaf_view_stupy_methods[] = {
	PHP_ME(yaf_view_stupy, __construct, yaf_view_stupy_construct_arginfo, ZEND_ACC_CTOR|ZEND_ACC_FINAL|ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, __isset, yaf_view_stupy_isset_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, get, yaf_view_stupy_get_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, assign, yaf_view_assign_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, render, yaf_view_render_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, eval,  yaf_view_stupy_eval_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, display, yaf_view_display_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, assignRef, yaf_view_stupy_assign_by_ref_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, clear, yaf_view_stupy_clear_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, setScriptPath, yaf_view_setpath_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, getScriptPath, yaf_view_getpath_arginfo, ZEND_ACC_PUBLIC)
	PHP_MALIAS(yaf_view_stupy, __get, get, yaf_view_stupy_get_arginfo, ZEND_ACC_PUBLIC)
	PHP_MALIAS(yaf_view_stupy, __set, assign, yaf_view_assign_arginfo, ZEND_ACC_PUBLIC)
	PHP_ME(yaf_view_stupy, setStaticOption, yaf_view_stupy_set_static_option_arginfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(yaf_view_stupy, setTag, yaf_view_stupy_set_tag_arginfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	{NULL, NULL, NULL}
};
/* }}} */

static void pefree_estring(char **str_p) /* {{{ */
{
	pefree(*str_p, 1);
}
/* }}} */

/* {{{ PHP_MINIT_FUNCTION
 */
STU_MINIT_FUNCTION(tpl)
{
	zend_class_entry ce;
	const char* tags[][2] = {
		{"js", "<script language=\"javascript\" src=\"{$p[0]}\"></script>\n"},
		{"css", "<link rel=\"stylesheet\" type=\"text/css\" href=\"{$p[0]}\" />\n"},
		{"options", 
"{? list($vals, $val_seleted) = $p; ?} \
{if is_array($val_seleted)}{? list($val_name, $label_name, $val_seleted_tmp) = $val_seleted; $val_seleted = $val_seleted_tmp; ?} \
	{foreach $vals as $item}{? $val = $item[$val_name]; $label = $item[$label_name]; ?}<option value=\"{$val}\"{if $val_seleted == $val} selected=\"selected\"{/if}>{$label}</option>\n \
	{/foreach} \
{else} \
	{foreach $vals as $val => $label}<option value=\"{$val}\"{if $val_seleted == $val} selected=\"selected\"{/if}>{$label}</option>\n \
	{/foreach} \
{/if}"
		},
		{"radios", 
"{? list($radio_name, $vals, $val_seleted) = $p; ?} \
{if is_array($val_seleted)}{? list($val_name, $label_name, $val_seleted_tmp) = $val_seleted; $val_seleted = $val_seleted_tmp; ?} \
	{foreach $vals as $item}{? $val = $item[$val_name]; $label = $item[$label_name]; ?}<li><input id=\"id_radio_{$radio_name}_{$val}\" value=\"{$val}\" type=\"radio\" name=\"{$radio_name}\" {if $val_seleted == $val} checked=\"checked\"{/if}/><label for=\"id_radio_{$radio_name}_{$val}\">{$label}</label></li>\n \
	{/foreach} \
{else} \
	{foreach $vals as $val => $label}<li><input id=\"id_radio_{$radio_name}_{$val}\" value=\"{$val}\" type=\"radio\" name=\"{$radio_name}\" {if $val_seleted == $val} checked=\"checked\"{/if}/><label for=\"id_radio_{$radio_name}_{$val}\">{$label}</label></li>\n \
	{/foreach} \
{/if}"
		},
		{"ckboxes", 
"{? list($ckbox_name, $vals, $val_seleted) = $p; ?} \
{if is_array($val_seleted) && count($val_seleted) > 1 && is_array($val_seleted[2])}{? list($val_name, $label_name, $val_seleted_tmp) = $val_seleted; $val_seleted = $val_seleted_tmp; ?} \
	{foreach $vals as $item}{? $val = $item[$val_name]; $label = $item[$label_name]; ?}<li><input id=\"id_ckbox_{$ckbox_name}_{$val}\" value=\"{$val}\" type=\"checkbox\" name=\"{$ckbox_name}[]\" {if in_array($val, $val_seleted)} checked=\"checked\"{/if}/><label for=\"id_ckbox_{$ckbox_name}_{$val}\">{$label}</label></li>\n \
	{/foreach} \
{else} \
	{foreach $vals as $val => $label}<li><input id=\"id_ckbox_{$ckbox_name}_{$val}\" value=\"{$val}\" type=\"checkbox\" name=\"{$ckbox_name}[]\" {if in_array($val, $val_seleted)} checked=\"checked\"{/if}/><label for=\"id_ckbox_{$ckbox_name}_{$val}\">{$label}</label></li>\n \
	{/foreach} \
{/if}"
		}
	};
	int i, row = sizeof(tags) / sizeof(char*) / 2;
	char *s;

	INIT_CLASS_ENTRY(ce, "StupyTpl", yaf_view_stupy_methods);
	yaf_view_stupy_ce = zend_register_internal_class_ex(&ce, NULL, NULL TSRMLS_CC);

	zend_declare_property_null(yaf_view_stupy_ce, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLVARS), ZEND_ACC_PROTECTED TSRMLS_CC);
	zend_declare_property_null(yaf_view_stupy_ce, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_TPLDIR),  ZEND_ACC_PROTECTED TSRMLS_CC);
	zend_declare_property_null(yaf_view_stupy_ce, ZEND_STRL(YAF_VIEW_PROPERTY_NAME_OPTS),  ZEND_ACC_PROTECTED TSRMLS_CC);

	//zend_class_implements(yaf_view_stupy_ce TSRMLS_CC, 1, yaf_view_interface_ce);

	zend_hash_init(&STU_G(tpl_modifiers), 0, NULL, NULL, 1);
	zend_hash_init(&STU_G(tpl_tags), 0, NULL, (dtor_func_t) free_estring, 1);
	zend_hash_init(&STU_G(mtime_cache), 0, NULL, NULL, 1);

	STU_G(tpl_tags_sys) = (HashTable *)pemalloc(sizeof(HashTable), 1);
	if (!STU_G(tpl_tags_sys)) {
		return FAILURE;
	}
	zend_hash_init(STU_G(tpl_tags_sys), 0, NULL, (dtor_func_t) pefree_estring, 1);

	// init the default tags
	// @attention: php.ini config(stupy.tpl_tags) make precedence than these
	for (i = 0; i < row; i++) {
		s = pestrdup(tags[i][1], 1);
		zend_hash_update(STU_G(tpl_tags_sys), tags[i][0], strlen(tags[i][0]) + 1, &s, sizeof(char *), NULL);
	}

	// override zend_comple_file and zend_compile_string
	zend_orig_compile_file = zend_compile_file;
	zend_compile_file = _stupy_compile_file;
	zend_orig_compile_string = zend_compile_string;
	zend_compile_string = _stupy_compile_string;

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINIT_FUNCTION
 */
STU_MSHUTDOWN_FUNCTION(tpl)
{
	zend_hash_destroy(&STU_G(tpl_modifiers));
	zend_hash_destroy(&STU_G(tpl_tags));
	zend_hash_destroy(STU_G(tpl_tags_sys));
	pefree(STU_G(tpl_tags_sys), 1);
	zend_hash_destroy(&STU_G(mtime_cache));
	zend_compile_file = zend_orig_compile_file;
	zend_compile_string = zend_orig_compile_string;
}
/* }}} */

// filemtime only cache one file, and the open_basedir check is really slow down 
// so we don't use php_stat to get mtime
static long stu_mtime(char* file, uint file_len TSRMLS_DC)
{
	long mtime, *pmtime;
	if (zend_hash_find(&STU_G(mtime_cache), file, file_len+1, (void **) &pmtime) == SUCCESS) {
		mtime = *pmtime;
	} else {
		php_stream_statbuf ssb;

		if (!php_stream_stat_path_ex(file, 0, &ssb, NULL))
			mtime = (long)ssb.sb.st_mtime;
		else
			return 0; 
		
		zend_hash_update(&STU_G(mtime_cache), file, file_len + 1, (void *)&mtime, sizeof(long), NULL);
	}
	return mtime;
}

/** {{{ 
*/
PHP_FUNCTION(_stupy_check_extend)
{
	char *file = NULL;
	uint file_len;
	long file_mtime, compile_time;
	int tolerance;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "sl", &file, &file_len, &compile_time) == FAILURE) {
		WRONG_PARAM_COUNT;
	}

	if (!STU_G(tpl_compile_time)) {
		STU_G(tpl_compile_time) = stu_time();
	}

	// if opcode cache module is not used, the compile_time always the same, return directly, avoid mtime check
	// STU_G(use_request_time) < 0 is a trick, by include_options.phpt, it always need mtime check
	if (STU_G(use_request_time) >= 0 && STU_G(tpl_compile_time) == compile_time) { 
		RETURN_TRUE; // use extend
	}

	file_mtime = stu_mtime(file, file_len TSRMLS_CC);
	if (!file_mtime)
		RETURN_FALSE; // get file mtime failed, use include

	// check if the sub tpl is modified after last compile or not
	// 3 seconds's tolerance, or if compile in the very second the tpl is modified may trigger this following warnning
	// STU_G(use_request_time) < 0 is a trick, by include_options.phpt, it need non tolerance
	tolerance = (STU_G(use_request_time) >= 0) ? 3 : 0; 
	if (file_mtime >= compile_time + tolerance) {
		if (STU_G(tpl_include_extend) == 1) {
			php_error_docref(NULL TSRMLS_CC, E_WARNING, "sub tpl(%s) is modified, and may be it is opcode cached, you should clean the opcode cache, or just touch the top tpl.", file);
		}
		RETURN_FALSE; // use include
	} 
	RETURN_TRUE; // use extend
}
/* }}} */

/** {{{ 
*/
PHP_FUNCTION(_stupy_pre_tag)
{
	zval *name, *attrs;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &name, &attrs) == FAILURE) {
		WRONG_PARAM_COUNT;
	}

	// since the process is so different when tpl_tag_symbol config on/off
	// keep the tag param can write in the same way
	{
		zval *wrapper;
		MAKE_STD_ZVAL(wrapper);
		array_init(wrapper);
		Z_ADDREF_P(attrs);
		add_assoc_zval(wrapper, "p", attrs);
		yaf_view_stupy_extract_attrs(wrapper TSRMLS_CC);

		RETURN_ZVAL(wrapper, 0, 1);
	}
	/* // or, we can extract every key and value
	{
		yaf_view_stupy_extract_attrs(attrs TSRMLS_CC);
		RETURN_ZVAL(attrs, 1, 0);
	}
	*/
}
/* }}} */

/** {{{ 
*/
PHP_FUNCTION(_stupy_post_tag)
{
	zval *name, *attrs;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &name, &attrs) == FAILURE) {
		WRONG_PARAM_COUNT;
	}

	yaf_view_stupy_restore_attrs(attrs TSRMLS_CC);

	RETURN_TRUE;
}
/* }}} */

/** {{{ 
*/
PHP_FUNCTION(stupy_mod_default)
{
	zval *var = NULL;
	zval *value = NULL;
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "zz", &var, &value) == FAILURE) {
		WRONG_PARAM_COUNT;
	}
	if (ZVAL_IS_NULL(var)) {
		RETURN_ZVAL(value, 1, 0);
	} else {
		RETURN_ZVAL(var, 1, 0);
	}
}
/* }}} */

/** {{{ 
*/
PHP_FUNCTION(stupy_mod_e)
{
	uint str_len, charset_len, flags = ENT_QUOTES;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	int escaped_len;
#else
	ulong escaped_len;
#endif
	char *str, *escaped, *charset = "utf-8";

	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s|ls", &str, &str_len, &flags, &charset, &charset_len) == FAILURE) {
		WRONG_PARAM_COUNT;
	}

	escaped = php_escape_html_entities((unsigned char*) str, str_len, &escaped_len, 0, flags, charset TSRMLS_CC);

	RETURN_STRINGL(escaped, escaped_len, 0);
}
/* }}} */

/** {{{ 
*/
PHP_FUNCTION(stupy_mod_df)
{
	long ts = 0, fmt_len;
	char *fmt = NULL;
	zval * z_ts;
	char *p;
	zval function, *z_ts_ret;
	zval **call_params[1];
	int localtime = 1;
	char *s;
	zval *z_f_ret, *z_param_fmt, *z_param_ts;
	zval **call_params2[2];
	int c_ret;
	
	if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "z|s", &z_ts, &fmt, &fmt_len) == FAILURE) {
		WRONG_PARAM_COUNT;
	}
	
	if (!fmt) {
		fmt = "Y-m-d H:i";
		fmt_len = 11;
	}

	if (Z_TYPE_P(z_ts) == IS_LONG)
		ts = Z_LVAL_P(z_ts);
	else if (Z_TYPE_P(z_ts) == IS_STRING) {
		p = Z_STRVAL_P(z_ts);
		while (*p == ' ' || *p == '\t') p++;
		while (*p >= '0' && *p <= '9') p++;
		while (*p == ' ' || *p == '\t') p++;
		if (p - Z_STRVAL_P(z_ts) == Z_STRLEN_P(z_ts)) {
			// all digit, just convert_to_long
		} else {
			// call strtotime
			call_params[0] = &z_ts;
			ZVAL_STRING(&function, "strtotime", 0);
			if (call_user_function_ex(CG(function_table), NULL, &function, &z_ts_ret, 1, call_params, 0, NULL TSRMLS_CC) == SUCCESS) {
				ts = Z_LVAL_P(z_ts_ret);
				zval_ptr_dtor(&z_ts_ret);
			}
		}
	}

	if (!ts) {
		Z_ADDREF_P(z_ts);
		convert_to_long_ex(&z_ts);
		ts = Z_LVAL_P(z_ts);
		zval_ptr_dtor(&z_ts);
	}

	if (!ts)
		ts = time(NULL);

	if (strchr(fmt, '%') == NULL) {
		s = php_format_date(fmt, fmt_len, ts, localtime TSRMLS_CC);
		RETVAL_STRING(s, 0);

	} else {
		// call strftime
		ZVAL_STRING(&function, "strftime", 0);
		MAKE_STD_ZVAL(z_param_fmt);
		ZVAL_STRINGL(z_param_fmt, fmt, fmt_len, 1);
		MAKE_STD_ZVAL(z_param_ts);
		ZVAL_LONG(z_param_ts, ts);
		call_params2[0] = &z_param_fmt;
		call_params2[1] = &z_param_ts;
		c_ret = call_user_function_ex(CG(function_table), NULL, &function, &z_f_ret, 2, call_params2, 0, NULL TSRMLS_CC);
		zval_ptr_dtor(&z_param_fmt);
		zval_ptr_dtor(&z_param_ts);
		if (c_ret == SUCCESS) {
			RETURN_ZVAL(z_f_ret, 0, 1);
		} else {
			RETURN_ZVAL(z_ts, 1, 0);
		}
	}
}
/* }}} */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
