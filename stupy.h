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

#ifndef PHP_STUPY_H
#define PHP_STUPY_H

extern zend_module_entry stupy_module_entry;
#define phpext_stupy_ptr &stupy_module_entry

#ifdef PHP_WIN32
#	define PHP_STUPY_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_STUPY_API __attribute__ ((visibility("default")))
#else
#	define PHP_STUPY_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#define STU_MINIT_FUNCTION(module)   	ZEND_MINIT_FUNCTION(stu_##module)
#define STU_MSHUTDOWN_FUNCTION(module) 	ZEND_MSHUTDOWN_FUNCTION(stu_##module)
#define STU_MINIT(module)				ZEND_MINIT(stu_##module)(INIT_FUNC_ARGS_PASSTHRU)
#define STU_MSHUTDOWN(module)			ZEND_MSHUTDOWN(stu_##module)(SHUTDOWN_FUNC_ARGS_PASSTHRU)

#include "SAPI.h"
#define stu_time() ((STU_G(use_request_time) > 0) ? (time_t) sapi_get_request_time(TSRMLS_C) : time(0))


ZEND_BEGIN_MODULE_GLOBALS(stupy)
	// compile state
	int st_tpl_compiling;
	int st_tpl;					/* tpl left delim { nesting level */
	int st_tpl_with_script;		/* tpl left delim {? , implicit ; in the end */
	int st_tpl_no_constant;
	HashTable tpl_modifiers;	/* tpl modifiers need auto load */
	HashTable *tpl_tags_sys;
	HashTable tpl_tags;
	HashTable mtime_cache;
	long tpl_compile_time;
	int tpl_assign_idx;
	// config
	char* tpl_include_dir;
	char* tpl_mod_file_pattern;
	char* tpl_mod_pattern;
	// @tpl_include_extend: 
	// if no opcode cache, this flag is useless
	// if opcode cached,  when sub tpl is modified after cached, we have to choice cached or use include to recompiled sub tpl every request.
	//		include means sub tpl use php include, compile every time
	//		extend means sub tpl compiled into top tpl, then they all be cached
	//		check means we will compare the mtime, if the cached expired then force include (a warning triggered, if tpl_include_extend is 1)
	int tpl_include_extend;		/* 0:just include , 1:check+warning, 2:check, 3+: just extend */
	int tpl_suppress;			/* suppress error_report */
	int tpl_opti_spaces;		/* strip tail space[ \r\n] after } */
	int tpl_tag_symbol;			/* 0: inherit symbol_table, 1: independent symbol_table */
	int use_request_time;
ZEND_END_MODULE_GLOBALS(stupy)

PHP_MINIT_FUNCTION(stupy);
PHP_MSHUTDOWN_FUNCTION(stupy);
PHP_RINIT_FUNCTION(stupy);
PHP_RSHUTDOWN_FUNCTION(stupy);
PHP_MINFO_FUNCTION(stupy);

extern ZEND_DECLARE_MODULE_GLOBALS(stupy);

#ifdef ZTS
#define STUPY_G(v) TSRMG(stupy_globals_id, zend_stupy_globals *, v)
#else
#define STUPY_G(v) (stupy_globals.v)
#endif

#define STU_G(v) STUPY_G(v)

#endif


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
