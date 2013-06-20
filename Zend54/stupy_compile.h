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

#ifndef STUPY_COMPILE_H
#define STUPY_COMPILE_H

ZEND_API zend_op_array *stupy_compile_file(zend_file_handle *file_handle, int type TSRMLS_DC);
ZEND_API zend_op_array *stupy_compile_string(zval *source_string, char *filename TSRMLS_DC);
int stupy_extend_file(char *filename, int type TSRMLS_DC);
void stupy_extend_string(char *str, int len TSRMLS_DC);

void tpl_do_function(znode *result, znode *modifier, znode *attr_list, znode *open_token TSRMLS_DC);
void tpl_do_include(znode *result, znode *file TSRMLS_DC);
void tpl_do_assign(znode *var, znode *value TSRMLS_DC);

#endif
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
