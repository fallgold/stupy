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

/* $Id: yaf.c 328979 2013-01-04 10:50:55Z laruence $ */

#include "yaf_loader.h"
#include "yaf_view.h"
#include "php_yaf.h"

#define yaf_view_t 			zval

#define YAF_ERR_STARTUP_FAILED 		512
#define YAF_ERR_ROUTE_FAILED 		513
#define YAF_ERR_DISPATCH_FAILED 	514
#define YAF_ERR_NOTFOUND_MODULE 	515
#define YAF_ERR_NOTFOUND_CONTROLLER 516
#define YAF_ERR_NOTFOUND_ACTION 	517
#define YAF_ERR_NOTFOUND_VIEW 		518
#define YAF_ERR_CALL_FAILED			519
#define YAF_ERR_AUTOLOAD_FAILED 	520
#define YAF_ERR_TYPE_ERROR			521

/** {{{void yaf_trigger_error(int type TSRMLS_DC, char *format, ...)
 */
void yaf_trigger_error(int type TSRMLS_DC, const char *format, ...) {
	va_list args;
	char *message;
	uint msg_len;

	va_start(args, format);
	msg_len = vspprintf(&message, 0, format, args);
	va_end(args);

	php_error_docref(NULL TSRMLS_CC, E_RECOVERABLE_ERROR, "%s", message);
	efree(message);
}
/* }}} */

#define YAF_UNINITIALIZED_OBJECT(obj) \
	do { \
		zval_dtor(obj); \
		ZVAL_FALSE(obj); \
	} while(0)


ZEND_DECLARE_MODULE_GLOBALS(yaf);

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
