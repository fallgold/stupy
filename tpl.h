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

/* $Id: header 321634 2012-01-01 13:15:04Z felipe $ */

#ifndef PHP_TPL_H
#define PHP_TPL_H

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_set_static_option_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(yaf_view_stupy_set_tag_arginfo, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

PHP_FUNCTION(_stupy_check_extend);
PHP_FUNCTION(_stupy_pre_tag);
PHP_FUNCTION(_stupy_post_tag);

PHP_FUNCTION(stupy_mod_default);
PHP_FUNCTION(stupy_mod_e);
PHP_FUNCTION(stupy_mod_df);

STU_MINIT_FUNCTION(tpl);
STU_MSHUTDOWN_FUNCTION(tpl);

#endif	/* PHP_TPL_H */
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
