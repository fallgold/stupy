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

/* $Id$ */
#define STUPY_VERSION "1.0.0"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "ext/standard/file.h"

#include "stupy.h"

/* add module header here */
#include "tpl.h"
#include "yaf/php_yaf.h"

ZEND_DECLARE_MODULE_GLOBALS(stupy);

const zend_function_entry stupy_functions[] = {
	/* add module function here */
	PHP_FE(_stupy_check_extend, NULL)
	PHP_FE(_stupy_pre_tag, NULL)
	PHP_FE(_stupy_post_tag, NULL)
	PHP_FE(stupy_mod_default, NULL)
	PHP_FE(stupy_mod_e, NULL)
	PHP_FE(stupy_mod_df, NULL)
	PHP_FE_END
};

zend_module_entry stupy_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
	STANDARD_MODULE_HEADER,
#endif
	"stupy",
	stupy_functions,
	PHP_MINIT(stupy),
	PHP_MSHUTDOWN(stupy),
	PHP_RINIT(stupy),	
	PHP_RSHUTDOWN(stupy),
	PHP_MINFO(stupy),
#if ZEND_MODULE_API_NO >= 20010901
	STUPY_VERSION,
#endif
	STANDARD_MODULE_PROPERTIES
};


#ifdef COMPILE_DL_STUPY
BEGIN_EXTERN_C()
ZEND_GET_MODULE(stupy)
END_EXTERN_C()
#endif


// file_get_contents
// and then 
// parse all tags
static void parse_sys_tags(const char *filename) 
{
	long size, maxsize;
	int error = 0;

	FILE *fp = VCWD_FOPEN(filename, "rb");
	if (!fp) {
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "tpl_tags file error(%s)", filename);
		return ;
	}
	fseek(fp, 0, SEEK_END);
	maxsize = ftell(fp);
	rewind(fp);
	if (maxsize > 2097152) // 2M limit
		maxsize = 2097152;
	char *contents = (char *)emalloc(maxsize + 1);
	size = fread(contents, 1, maxsize, fp);
	fclose(fp);
	if (size < 0)
		php_error_docref(NULL TSRMLS_CC, E_WARNING, "tpl_tags file error(%s)", filename);
	if (size <= 0)
		return;
	contents[size] = '\0';

	// parse
	const int S_KEY_START = 0, S_KEY_END = 1, S_CONT_START = 2;
	int state = S_KEY_START;
	char *tag_name, *tag_content;
	char *p, *cur = contents, *end = contents + size - 1;
	while (cur < end) {
		p = strstr(cur, "---");
		if (p == NULL) {
			cur = end;
			if (state != S_CONT_START)
				break;
		} else {
			cur = p + 3;
			p--;
		}
		if (state == S_CONT_START) {
			if (p == NULL)
				p = end;
			while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r')
				p--;
			*++p = '\0';
			// add tag
			char *tmp_s = pestrdup(tag_content, 1);
			zend_hash_update(STU_G(tpl_tags_sys), tag_name, strlen(tag_name) + 1, &tmp_s, sizeof(char *), NULL);
			state = S_KEY_START;
			if (cur == end) 
				break;
		}
		if (state == S_KEY_START) {
			while (cur < end && (*cur == ' ' || *cur == '\t' || *cur == '-')) // cannot has newline arround tag_name
				cur++;
			if ((*cur >= 'A' && *cur <= 'Z') || (*cur >= 'a' && *cur <= 'z') || *cur == '_')
				tag_name = cur;
			else {
				// tag name must start with [a-zA-Z_]
				php_error_docref(NULL TSRMLS_CC, E_WARNING, "tag name must start with [a-zA-Z_] (%s)", tag_name);
				break;
			}
			state = S_KEY_END;
		} else if (state == S_KEY_END) {
			while (*p == ' ' || *p == '\t' || *cur == '-') // cannot has newline arround tag_name
				p--;
			*++p = '\0';
			while (cur < end && (*cur == ' ' || *cur++ == '\t' || *cur == '\n' || *cur == '\r'))
				cur++;
			tag_content = cur;
			state = S_CONT_START;
		}
	}
	efree(contents);
}

/** {{{ PHP_INI_MH(OnUpdateTplTag)
 */
PHP_INI_MH(OnUpdateTplTag) {
	// process multi file, separate by ;
	char *file = new_value, *p = new_value, *end = new_value + new_value_length;
	while (p < end) {
		p = strchr(file, ';');
		if (NULL != p) {
			while (*--p == ' ' || *p == '\t') // rtrim
				;
			*++p = '\0';
		}
		while (*file == ' ' || *file == '\t') // ltrim
			file++;
		if (strlen(file))
			parse_sys_tags(file);
		if (NULL == p)
			break;
		file = ++p;
	}

	return SUCCESS;
}
/* }}} */

/** {{{ PHP_INI
 */
PHP_INI_BEGIN()
	STD_PHP_INI_ENTRY("stupy.tpl_tags", "", PHP_INI_ALL, OnUpdateTplTag, tpl_tags, zend_stupy_globals, stupy_globals)
PHP_INI_END();
/* }}} */

PHP_MINIT_FUNCTION(stupy)
{
	/* add module startup here */
	STU_MINIT(tpl);

	// attention: must register later than STU_MINIT, because we use tpl_tags while register ini and it is init at STU_MINIT
	REGISTER_INI_ENTRIES();
	return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(stupy)
{
	/* add module shutdown here */
	STU_MSHUTDOWN(tpl);

	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}

PHP_RINIT_FUNCTION(stupy)
{
	STU_G(st_tpl_compiling)	= 0;
	STU_G(tpl_include_dir)	= NULL; 
	STU_G(tpl_mod_file_pattern) = NULL; 
	STU_G(tpl_mod_pattern)	= estrdup("stupy_mod_%s");
	STU_G(tpl_suppress)		= E_NOTICE;
	STU_G(tpl_include_extend)  = 1;
	STU_G(tpl_opti_spaces)	= 0;
	STU_G(tpl_tag_symbol)	= 1;
	STU_G(use_request_time)	= 1;

	YAF_G(view_directory)	= NULL;
#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
	YAF_G(buffer)			= NULL;
	YAF_G(owrite_handler)	= NULL;
	YAF_G(buf_nesting)		= 0;
#endif
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(stupy)
{
	// when debug on, report memleak if clean at RINIT
	zend_hash_clean(&STU_G(tpl_tags)); 
	zend_hash_clean(&STU_G(mtime_cache));

	if (STU_G(tpl_mod_pattern))
		efree(STU_G(tpl_mod_pattern));
	if (STU_G(tpl_mod_file_pattern))
		efree(STU_G(tpl_mod_file_pattern));
	if (STU_G(tpl_include_dir))
		efree(STU_G(tpl_include_dir));
	return SUCCESS;
}

PHP_MINFO_FUNCTION(stupy)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "Stupy support", "enabled");
    php_info_print_table_row(2, "Version", STUPY_VERSION);
	php_info_print_table_end();
}

