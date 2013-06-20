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

#include "zend_compile.c"
#include "zend_language_parser.c"
#include "zend_language_scanner.c"


/* zend.c */

#define zend_vspprintf vspprintf

ZEND_API void zend_error(int type, const char *format, ...) /* {{{ */
{
	va_list args;
	va_list usr_copy;
	zval ***params;
	zval *retval;
	zval *z_error_type, *z_error_message, *z_error_filename, *z_error_lineno, *z_context;
	const char *error_filename;
	uint error_lineno;
	zval *orig_user_error_handler;
	zend_bool in_compilation;
	zend_class_entry *saved_class_entry;
	zend_stack bp_stack;
	zend_stack function_call_stack;
	zend_stack switch_cond_stack;
	zend_stack foreach_copy_stack;
	zend_stack object_stack;
	zend_stack declare_stack;
	zend_stack list_stack;
	zend_stack context_stack;
	TSRMLS_FETCH();

	/* Report about uncaught exception in case of fatal errors */
	if (EG(exception)) {
		switch (type) {
			case E_CORE_ERROR:
			case E_ERROR:
			case E_RECOVERABLE_ERROR:
			case E_PARSE:
			case E_COMPILE_ERROR:
			case E_USER_ERROR:
				if (zend_is_executing(TSRMLS_C)) {
					error_lineno = zend_get_executed_lineno(TSRMLS_C);
				}
				zend_exception_error(EG(exception), E_WARNING TSRMLS_CC);
				EG(exception) = NULL;
				if (zend_is_executing(TSRMLS_C) && EG(opline_ptr)) {
					active_opline->lineno = error_lineno;
				}
				break;
			default:
				break;
		}
	}

	/* Obtain relevant filename and lineno */
	switch (type) {
		case E_CORE_ERROR:
		case E_CORE_WARNING:
			error_filename = NULL;
			error_lineno = 0;
			break;
		case E_PARSE:
		case E_COMPILE_ERROR:
		case E_COMPILE_WARNING:
		case E_ERROR:
		case E_NOTICE:
		case E_STRICT:
		case E_DEPRECATED:
		case E_WARNING:
		case E_USER_ERROR:
		case E_USER_WARNING:
		case E_USER_NOTICE:
		case E_USER_DEPRECATED:
		case E_RECOVERABLE_ERROR:
			if (zend_is_compiling(TSRMLS_C)) {
				error_filename = zend_get_compiled_filename(TSRMLS_C);
				error_lineno = zend_get_compiled_lineno(TSRMLS_C);
			} else if (zend_is_executing(TSRMLS_C)) {
				error_filename = zend_get_executed_filename(TSRMLS_C);
				error_lineno = zend_get_executed_lineno(TSRMLS_C);
			} else {
				error_filename = NULL;
				error_lineno = 0;
			}
			break;
		default:
			error_filename = NULL;
			error_lineno = 0;
			break;
	}
	if (!error_filename) {
		error_filename = "Unknown";
	}

	va_start(args, format);

#ifdef HAVE_DTRACE
	if(DTRACE_ERROR_ENABLED()) {
		char *dtrace_error_buffer;
		zend_vspprintf(&dtrace_error_buffer, 0, format, args);
		DTRACE_ERROR(dtrace_error_buffer, error_filename, error_lineno);
		efree(dtrace_error_buffer);
	}
#endif /* HAVE_DTRACE */

	/* if we don't have a user defined error handler */
	if (!EG(user_error_handler)
		|| !(EG(user_error_handler_error_reporting) & type)
		|| EG(error_handling) != EH_NORMAL) {
		zend_error_cb(type, error_filename, error_lineno, format, args);
	} else switch (type) {
		case E_ERROR:
		case E_PARSE:
		case E_CORE_ERROR:
		case E_CORE_WARNING:
		case E_COMPILE_ERROR:
		case E_COMPILE_WARNING:
			/* The error may not be safe to handle in user-space */
			zend_error_cb(type, error_filename, error_lineno, format, args);
			break;
		default:
			/* Handle the error in user space */
			ALLOC_INIT_ZVAL(z_error_message);
			ALLOC_INIT_ZVAL(z_error_type);
			ALLOC_INIT_ZVAL(z_error_filename);
			ALLOC_INIT_ZVAL(z_error_lineno);
			ALLOC_INIT_ZVAL(z_context);

/* va_copy() is __va_copy() in old gcc versions.
 * According to the autoconf manual, using
 * memcpy(&dst, &src, sizeof(va_list))
 * gives maximum portability. */
#ifndef va_copy
# ifdef __va_copy
#  define va_copy(dest, src)	__va_copy((dest), (src))
# else
#  define va_copy(dest, src)	memcpy(&(dest), &(src), sizeof(va_list))
# endif
#endif
			va_copy(usr_copy, args);
			Z_STRLEN_P(z_error_message) = zend_vspprintf(&Z_STRVAL_P(z_error_message), 0, format, usr_copy);
#ifdef va_copy
			va_end(usr_copy);
#endif
			Z_TYPE_P(z_error_message) = IS_STRING;

			Z_LVAL_P(z_error_type) = type;
			Z_TYPE_P(z_error_type) = IS_LONG;

			if (error_filename) {
				ZVAL_STRING(z_error_filename, error_filename, 1);
			}

			Z_LVAL_P(z_error_lineno) = error_lineno;
			Z_TYPE_P(z_error_lineno) = IS_LONG;

			if (!EG(active_symbol_table)) {
				zend_rebuild_symbol_table(TSRMLS_C);
			}

			/* during shutdown the symbol table table can be still null */
			if (!EG(active_symbol_table)) {
				Z_TYPE_P(z_context) = IS_NULL;
			} else {
				Z_ARRVAL_P(z_context) = EG(active_symbol_table);
				Z_TYPE_P(z_context) = IS_ARRAY;
				zval_copy_ctor(z_context);
			}

			params = (zval ***) emalloc(sizeof(zval **)*5);
			params[0] = &z_error_type;
			params[1] = &z_error_message;
			params[2] = &z_error_filename;
			params[3] = &z_error_lineno;
			params[4] = &z_context;

			orig_user_error_handler = EG(user_error_handler);
			EG(user_error_handler) = NULL;

			/* User error handler may include() additinal PHP files.
			 * If an error was generated during comilation PHP will compile
			 * such scripts recursivly, but some CG() variables may be
			 * inconsistent. */

			in_compilation = zend_is_compiling(TSRMLS_C);
			if (in_compilation) {
				saved_class_entry = CG(active_class_entry);
				CG(active_class_entry) = NULL;
				SAVE_STACK(bp_stack);
				SAVE_STACK(function_call_stack);
				SAVE_STACK(switch_cond_stack);
				SAVE_STACK(foreach_copy_stack);
				SAVE_STACK(object_stack);
				SAVE_STACK(declare_stack);
				SAVE_STACK(list_stack);
				SAVE_STACK(context_stack);
			}

			if (call_user_function_ex(CG(function_table), NULL, orig_user_error_handler, &retval, 5, params, 1, NULL TSRMLS_CC) == SUCCESS) {
				if (retval) {
					if (Z_TYPE_P(retval) == IS_BOOL && Z_LVAL_P(retval) == 0) {
						zend_error_cb(type, error_filename, error_lineno, format, args);
					}
					zval_ptr_dtor(&retval);
				}
			} else if (!EG(exception)) {
				/* The user error handler failed, use built-in error handler */
				zend_error_cb(type, error_filename, error_lineno, format, args);
			}

			if (in_compilation) {
				CG(active_class_entry) = saved_class_entry;
				RESTORE_STACK(bp_stack);
				RESTORE_STACK(function_call_stack);
				RESTORE_STACK(switch_cond_stack);
				RESTORE_STACK(foreach_copy_stack);
				RESTORE_STACK(object_stack);
				RESTORE_STACK(declare_stack);
				RESTORE_STACK(list_stack);
				RESTORE_STACK(context_stack);
			}

			if (!EG(user_error_handler)) {
				EG(user_error_handler) = orig_user_error_handler;
			}
			else {
				zval_ptr_dtor(&orig_user_error_handler);
			}

			efree(params);
			zval_ptr_dtor(&z_error_message);
			zval_ptr_dtor(&z_error_type);
			zval_ptr_dtor(&z_error_filename);
			zval_ptr_dtor(&z_error_lineno);
			zval_ptr_dtor(&z_context);
			break;
	}

	va_end(args);

	if (type == E_PARSE) {
		/* eval() errors do not affect exit_status */
		if (!(EG(current_execute_data) &&
			EG(current_execute_data)->opline &&
			EG(current_execute_data)->opline->opcode == ZEND_INCLUDE_OR_EVAL &&
			EG(current_execute_data)->opline->extended_value == ZEND_EVAL)) {
			EG(exit_status) = 255;
		}
		zend_init_compiler_data_structures(TSRMLS_C);
	}
}
/* }}} */

/* this should be compatible with the standard zenderror */
void zenderror(char *error) /* {{{ */
{
	zend_error(E_PARSE, "%s", error);
}
/* }}} */

/*  end zend.c  */


/*  zend_opcode.c  */
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array)
{
	op_array->last_brk_cont++;
	op_array->brk_cont_array = erealloc(op_array->brk_cont_array, sizeof(zend_brk_cont_element)*op_array->last_brk_cont);
	return &op_array->brk_cont_array[op_array->last_brk_cont-1];
}

static void op_array_alloc_ops(zend_op_array *op_array, zend_uint size)
{
	op_array->opcodes = erealloc(op_array->opcodes, size * sizeof(zend_op));
}

void init_op(zend_op *op TSRMLS_DC)
{
	memset(op, 0, sizeof(zend_op));
	op->lineno = CG(zend_lineno);
	SET_UNUSED(op->result);
}

zend_op *get_next_op(zend_op_array *op_array TSRMLS_DC)
{
	zend_uint next_op_num = op_array->last++;
	zend_op *next_op;

	if (next_op_num >= CG(context).opcodes_size) {
		if (op_array->fn_flags & ZEND_ACC_INTERACTIVE) {
			/* we messed up */
			zend_printf("Ran out of opcode space!\n"
						"You should probably consider writing this huge script into a file!\n");
			zend_bailout();
		}
		CG(context).opcodes_size *= 4;
		op_array_alloc_ops(op_array, CG(context).opcodes_size);
	}
	
	next_op = &(op_array->opcodes[next_op_num]);
	
	init_op(next_op TSRMLS_CC);

	return next_op;
}

int get_next_op_number(zend_op_array *op_array)
{
	return op_array->last;
}

/*  end zend_opcode.c  */


/*  zend_execute_API.c  */

#define MAX_ABSTRACT_INFO_CNT 3
#define MAX_ABSTRACT_INFO_FMT "%s%s%s%s"
#define DISPLAY_ABSTRACT_FN(idx) \
	ai.afn[idx] ? ZEND_FN_SCOPE_NAME(ai.afn[idx]) : "", \
	ai.afn[idx] ? "::" : "", \
	ai.afn[idx] ? ai.afn[idx]->common.function_name : "", \
	ai.afn[idx] && ai.afn[idx + 1] ? ", " : (ai.afn[idx] && ai.cnt > MAX_ABSTRACT_INFO_CNT ? ", ..." : "")

typedef struct _zend_abstract_info {
	zend_function *afn[MAX_ABSTRACT_INFO_CNT + 1];
	int cnt;
	int ctor;
} zend_abstract_info;


static int zend_verify_abstract_class_function(zend_function *fn, zend_abstract_info *ai TSRMLS_DC) /* {{{ */
{
	if (fn->common.fn_flags & ZEND_ACC_ABSTRACT) {
		if (ai->cnt < MAX_ABSTRACT_INFO_CNT) {
			ai->afn[ai->cnt] = fn;
		}
		if (fn->common.fn_flags & ZEND_ACC_CTOR) {
			if (!ai->ctor) {
				ai->cnt++;
				ai->ctor = 1;
			} else {
				ai->afn[ai->cnt] = NULL;
			}
		} else {
			ai->cnt++;
		}
	}
	return 0;
}
/* }}} */

void zend_verify_abstract_class(zend_class_entry *ce TSRMLS_DC) /* {{{ */
{
	zend_abstract_info ai;

	if ((ce->ce_flags & ZEND_ACC_IMPLICIT_ABSTRACT_CLASS) && !(ce->ce_flags & ZEND_ACC_EXPLICIT_ABSTRACT_CLASS)) {
		memset(&ai, 0, sizeof(ai));

		zend_hash_apply_with_argument(&ce->function_table, (apply_func_arg_t) zend_verify_abstract_class_function, &ai TSRMLS_CC);

		if (ai.cnt) {
			zend_error(E_ERROR, "Class %s contains %d abstract method%s and must therefore be declared abstract or implement the remaining methods (" MAX_ABSTRACT_INFO_FMT MAX_ABSTRACT_INFO_FMT MAX_ABSTRACT_INFO_FMT ")",
				ce->name, ai.cnt,
				ai.cnt > 1 ? "s" : "",
				DISPLAY_ABSTRACT_FN(0),
				DISPLAY_ABSTRACT_FN(1),
				DISPLAY_ABSTRACT_FN(2)
				);
		}
	}
}
/* }}} */

/*  end zend_execute_API.c  */



/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
