/*
  +----------------------------------------------------------------------+
  | Yet Another Framework                                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Xinchen Hui  <laruence@php.net>                              |
  +----------------------------------------------------------------------+
*/

/* $Id: yaf_view.h 328256 2012-11-06 08:44:52Z laruence $ */

#ifndef YAF_VIEW_H
#define YAF_VIEW_H

#define yaf_view_instance yaf_view_stupy_instance
#define yaf_view_ce		 yaf_view_stupy_ce

#define YAF_VIEW_PROPERTY_NAME_TPLVARS 	"_tpl_vars"
#define YAF_VIEW_PROPERTY_NAME_TPLDIR	"_tpl_dir"
#define YAF_VIEW_PROPERTY_NAME_OPTS 	"_options"

/* {{{ ARG_INFO
 */
ZEND_BEGIN_ARG_INFO_EX(yaf_view_assign_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(yaf_view_display_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, tpl)
	ZEND_ARG_INFO(0, tpl_vars)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(yaf_view_render_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, tpl)
	ZEND_ARG_INFO(0, tpl_vars)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(yaf_view_setpath_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, template_dir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(yaf_view_getpath_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()
/* }}} */

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
struct _yaf_view_stupy_buffer {
	char *buffer;
	unsigned long size;
	unsigned long len;
	struct _yaf_view_stupy_buffer *prev;
};

typedef struct _yaf_view_stupy_buffer yaf_view_stupy_buffer;

typedef int(*yaf_body_write_func)(const char *str, uint str_length TSRMLS_DC);

#define YAF_REDIRECT_OUTPUT_BUFFER(seg) \
	do { \
		if (!YAF_G(owrite_handler)) { \
			YAF_G(owrite_handler) = (void *)OG(php_body_write); \
		} \
		OG(php_body_write) = yaf_view_stupy_render_write; \
		old_scope = EG(scope); \
		EG(scope) = yaf_view_stupy_ce; \
		seg = (yaf_view_stupy_buffer *)emalloc(sizeof(yaf_view_stupy_buffer)); \
		memset(seg, 0, sizeof(yaf_view_stupy_buffer)); \
		seg->prev  	 = (yaf_view_stupy_buffer *)YAF_G(buffer);\
		YAF_G(buffer) = seg; \
		YAF_G(buf_nesting)++;\
	} while (0)

#define YAF_RESTORE_OUTPUT_BUFFER(seg) \
	do { \
		EG(scope) 			= old_scope; \
		YAF_G(buffer)  		= seg->prev; \
		if (!(--YAF_G(buf_nesting))) { \
		    OG(php_body_write) 	= (yaf_body_write_func)YAF_G(owrite_handler); \
			if (YAF_G(buffer)) { \
				php_error_docref(NULL TSRMLS_CC, E_ERROR, "Yaf output buffer collapsed"); \
			} else { \
				YAF_G(owrite_handler) = NULL; \
			} \
		} \
		if (seg->size) { \
			efree(seg->buffer); \
		} \
		efree(seg); \
	} while (0)
#endif

#endif
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
