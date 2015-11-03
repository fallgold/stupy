/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "Zend53/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2013 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
#define OPLINE_NUM(var) var.u.opline_num
#else
#define OPLINE_NUM(var) var.u.op.opline_num
#endif


/* Line 371 of yacc.c  */
#line 128 "Zend53/zend_language_parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "zend_language_parser.h".  */
#ifndef YY_ZEND_ZEND53_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND53_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int zenddebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_GLOBAL = 341,
     T_PUBLIC = 342,
     T_PROTECTED = 343,
     T_PRIVATE = 344,
     T_FINAL = 345,
     T_ABSTRACT = 346,
     T_STATIC = 347,
     T_VAR = 348,
     T_UNSET = 349,
     T_ISSET = 350,
     T_EMPTY = 351,
     T_HALT_COMPILER = 352,
     T_CLASS = 353,
     T_INTERFACE = 354,
     T_EXTENDS = 355,
     T_IMPLEMENTS = 356,
     T_OBJECT_OPERATOR = 357,
     T_DOUBLE_ARROW = 358,
     T_LIST = 359,
     T_ARRAY = 360,
     T_CLASS_C = 361,
     T_METHOD_C = 362,
     T_FUNC_C = 363,
     T_LINE = 364,
     T_FILE = 365,
     T_COMMENT = 366,
     T_DOC_COMMENT = 367,
     T_OPEN_TAG = 368,
     T_OPEN_TAG_WITH_ECHO = 369,
     T_CLOSE_TAG = 370,
     T_WHITESPACE = 371,
     T_START_HEREDOC = 372,
     T_END_HEREDOC = 373,
     T_DOLLAR_OPEN_CURLY_BRACES = 374,
     T_CURLY_OPEN = 375,
     T_PAAMAYIM_NEKUDOTAYIM = 376,
     T_NAMESPACE = 377,
     T_NS_C = 378,
     T_DIR = 379,
     T_NS_SEPARATOR = 380,
     T_START_TPL = 381,
     T_START_TPL_WITH_ECHO = 382,
     T_START_TPL_WITH_SCRIPT = 383,
     T_END_TPL = 384,
     T_ATTR_FILE = 385,
     T_IN = 386,
     T_START_TPL_TRANSLATE = 387,
     T_TPL_INCLUDE = 388
   };
#endif
/* Tokens.  */
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_GOTO 333
#define T_FUNCTION 334
#define T_CONST 335
#define T_RETURN 336
#define T_TRY 337
#define T_CATCH 338
#define T_THROW 339
#define T_USE 340
#define T_GLOBAL 341
#define T_PUBLIC 342
#define T_PROTECTED 343
#define T_PRIVATE 344
#define T_FINAL 345
#define T_ABSTRACT 346
#define T_STATIC 347
#define T_VAR 348
#define T_UNSET 349
#define T_ISSET 350
#define T_EMPTY 351
#define T_HALT_COMPILER 352
#define T_CLASS 353
#define T_INTERFACE 354
#define T_EXTENDS 355
#define T_IMPLEMENTS 356
#define T_OBJECT_OPERATOR 357
#define T_DOUBLE_ARROW 358
#define T_LIST 359
#define T_ARRAY 360
#define T_CLASS_C 361
#define T_METHOD_C 362
#define T_FUNC_C 363
#define T_LINE 364
#define T_FILE 365
#define T_COMMENT 366
#define T_DOC_COMMENT 367
#define T_OPEN_TAG 368
#define T_OPEN_TAG_WITH_ECHO 369
#define T_CLOSE_TAG 370
#define T_WHITESPACE 371
#define T_START_HEREDOC 372
#define T_END_HEREDOC 373
#define T_DOLLAR_OPEN_CURLY_BRACES 374
#define T_CURLY_OPEN 375
#define T_PAAMAYIM_NEKUDOTAYIM 376
#define T_NAMESPACE 377
#define T_NS_C 378
#define T_DIR 379
#define T_NS_SEPARATOR 380
#define T_START_TPL 381
#define T_START_TPL_WITH_ECHO 382
#define T_START_TPL_WITH_SCRIPT 383
#define T_END_TPL 384
#define T_ATTR_FILE 385
#define T_IN 386
#define T_START_TPL_TRANSLATE 387
#define T_TPL_INCLUDE 388



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int zendparse (void *YYPARSE_PARAM);
#else
int zendparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int zendparse (void);
#else
int zendparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_ZEND_ZEND53_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 459 "Zend53/zend_language_parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  215
/* YYNRULES -- Number of rules.  */
#define YYNRULES  533
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1071

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   388

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   161,     2,   158,    47,    31,     2,
     153,   154,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   155,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   159,    30,     2,   160,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   156,    29,   157,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      56,    60,    62,    64,    68,    71,    76,    82,    87,    88,
      92,    93,    95,    97,    99,   101,   106,   108,   111,   115,
     116,   117,   127,   128,   129,   142,   143,   144,   152,   153,
     154,   164,   165,   166,   167,   180,   181,   188,   191,   195,
     198,   202,   205,   209,   213,   217,   221,   225,   227,   230,
     236,   237,   238,   249,   250,   251,   262,   263,   270,   272,
     273,   274,   275,   276,   277,   296,   300,   304,   307,   310,
     311,   313,   316,   317,   323,   324,   330,   331,   332,   337,
     339,   341,   343,   345,   350,   351,   356,   357,   363,   365,
     368,   370,   372,   374,   378,   382,   387,   391,   395,   401,
     405,   410,   411,   412,   413,   432,   433,   434,   450,   451,
     452,   464,   465,   466,   467,   486,   487,   488,   506,   507,
     508,   524,   526,   527,   529,   532,   533,   534,   545,   547,
     551,   553,   555,   557,   558,   560,   561,   572,   573,   582,
     583,   591,   593,   596,   599,   600,   603,   605,   606,   609,
     610,   613,   615,   619,   620,   623,   625,   628,   630,   635,
     637,   642,   644,   649,   653,   659,   663,   668,   673,   679,
     680,   681,   688,   689,   695,   697,   699,   701,   706,   707,
     708,   716,   717,   718,   726,   727,   736,   737,   738,   747,
     748,   751,   752,   757,   761,   762,   766,   767,   772,   774,
     775,   778,   782,   788,   793,   798,   804,   812,   819,   820,
     822,   824,   826,   827,   829,   831,   834,   838,   842,   847,
     851,   853,   855,   858,   863,   867,   873,   875,   879,   882,
     883,   884,   889,   892,   893,   903,   905,   909,   911,   913,
     914,   916,   918,   921,   923,   925,   927,   929,   931,   933,
     937,   943,   945,   949,   955,   960,   964,   966,   967,   969,
     970,   975,   977,   978,   986,   990,   995,   996,  1004,  1005,
    1010,  1013,  1017,  1021,  1025,  1029,  1033,  1037,  1041,  1045,
    1049,  1053,  1057,  1060,  1063,  1066,  1069,  1070,  1075,  1076,
    1081,  1082,  1087,  1088,  1093,  1097,  1101,  1105,  1109,  1113,
    1117,  1121,  1125,  1129,  1133,  1137,  1140,  1143,  1146,  1149,
    1153,  1157,  1161,  1165,  1169,  1173,  1177,  1181,  1185,  1189,
    1190,  1191,  1199,  1200,  1206,  1208,  1211,  1214,  1217,  1220,
    1223,  1226,  1229,  1232,  1233,  1237,  1239,  1244,  1248,  1252,
    1255,  1256,  1267,  1269,  1270,  1275,  1279,  1284,  1286,  1289,
    1290,  1296,  1297,  1305,  1306,  1313,  1314,  1322,  1323,  1331,
    1332,  1340,  1341,  1349,  1350,  1356,  1358,  1360,  1364,  1367,
    1369,  1373,  1376,  1378,  1380,  1381,  1382,  1389,  1391,  1394,
    1395,  1398,  1399,  1402,  1406,  1407,  1409,  1411,  1412,  1416,
    1418,  1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,
    1440,  1443,  1445,  1447,  1451,  1454,  1457,  1460,  1465,  1469,
    1471,  1475,  1477,  1479,  1481,  1485,  1488,  1490,  1494,  1498,
    1499,  1502,  1503,  1505,  1511,  1515,  1519,  1521,  1523,  1525,
    1527,  1529,  1531,  1532,  1533,  1541,  1543,  1546,  1547,  1548,
    1553,  1554,  1559,  1560,  1562,  1565,  1569,  1573,  1575,  1577,
    1579,  1581,  1584,  1586,  1588,  1591,  1596,  1601,  1603,  1605,
    1610,  1611,  1613,  1615,  1616,  1619,  1624,  1629,  1631,  1633,
    1637,  1639,  1642,  1646,  1648,  1650,  1651,  1657,  1658,  1659,
    1662,  1668,  1672,  1676,  1678,  1685,  1690,  1695,  1698,  1701,
    1704,  1706,  1709,  1711,  1712,  1718,  1722,  1726,  1733,  1737,
    1739,  1741,  1743,  1748,  1753,  1756,  1759,  1764,  1767,  1770,
    1772,  1773,  1778,  1782
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     163,     0,    -1,   164,    -1,    -1,   164,   165,   167,    -1,
      -1,    71,    -1,   166,   144,    71,    -1,   176,    -1,   234,
      -1,   235,    -1,   116,   153,   154,   155,    -1,   141,   166,
     155,    -1,    -1,   141,   166,   156,   168,   164,   157,    -1,
      -1,   141,   156,   169,   164,   157,    -1,   104,   170,   155,
      -1,   172,   155,    -1,   212,    -1,   170,     8,   171,    -1,
     171,    -1,   166,    -1,   166,    90,    71,    -1,   144,   166,
      -1,   144,   166,    90,    71,    -1,   172,     8,    71,    13,
     332,    -1,    99,    71,    13,   332,    -1,    -1,   173,   174,
     175,    -1,    -1,   176,    -1,   212,    -1,   234,    -1,   235,
      -1,   116,   153,   154,   155,    -1,   177,    -1,    71,    26,
      -1,   156,   173,   157,    -1,    -1,    -1,    65,   153,   338,
     154,   178,   176,   179,   260,   267,    -1,    -1,    -1,    65,
     153,   338,   154,    26,   180,   173,   181,   265,   270,    68,
     155,    -1,    -1,    -1,    82,   153,   182,   338,   154,   183,
     259,    -1,    -1,    -1,    81,   184,   176,    82,   153,   185,
     338,   154,   155,    -1,    -1,    -1,    -1,    84,   153,   292,
     155,   186,   292,   155,   187,   292,   154,   188,   250,    -1,
      -1,    91,   153,   338,   154,   189,   254,    -1,    95,   155,
      -1,    95,   338,   155,    -1,    96,   155,    -1,    96,   338,
     155,    -1,   100,   155,    -1,   100,   295,   155,    -1,   100,
     342,   155,    -1,   105,   277,   155,    -1,   111,   279,   155,
      -1,    80,   291,   155,    -1,    75,    -1,   338,   155,    -1,
     113,   153,   232,   154,   155,    -1,    -1,    -1,    86,   153,
     342,    90,   190,   249,   248,   154,   191,   251,    -1,    -1,
      -1,    86,   153,   295,    90,   192,   342,   248,   154,   193,
     251,    -1,    -1,    88,   194,   153,   253,   154,   252,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,   101,   195,   156,
     173,   157,   102,   153,   196,   321,   197,    73,   154,   198,
     156,   173,   157,   199,   227,    -1,   103,   338,   155,    -1,
      97,    71,   155,    -1,   200,   212,    -1,   200,    75,    -1,
      -1,   339,    -1,   339,   155,    -1,    -1,    79,    29,    71,
     202,   204,    -1,    -1,   201,    29,    71,   203,   204,    -1,
      -1,    -1,   204,    26,   205,   338,    -1,    71,    -1,    79,
      -1,   355,    -1,   331,    -1,   124,   153,   367,   154,    -1,
      -1,   206,    13,   209,   338,    -1,    -1,   208,   206,    13,
     210,   338,    -1,   207,    -1,   208,   207,    -1,    79,    -1,
      78,    -1,   369,    -1,   145,   201,   148,    -1,   145,   295,
     148,    -1,   145,   295,   155,   148,    -1,   147,   173,   148,
      -1,   152,   338,   148,    -1,   152,   149,    13,   338,   148,
      -1,   151,   211,   148,    -1,   145,    71,   208,   148,    -1,
      -1,    -1,    -1,   145,    86,   153,   338,    90,   213,   249,
     248,   154,   148,   214,   200,   145,   215,   271,    46,    86,
     148,    -1,    -1,    -1,   145,    86,   338,    90,   249,   248,
     148,   216,   200,   145,   217,   271,    46,    86,   148,    -1,
      -1,    -1,   145,    65,   338,   148,   218,   200,   145,   219,
     262,   268,   269,    -1,    -1,    -1,    -1,   145,    84,   153,
     292,   155,   220,   292,   155,   221,   292,   154,   148,   222,
     200,   145,    46,    84,   148,    -1,    -1,    -1,   145,    84,
     153,   249,   248,   150,   338,   154,   148,   223,   200,   145,
     224,   271,    46,    84,   148,    -1,    -1,    -1,   145,    84,
     249,   248,   150,   338,   148,   225,   200,   145,   226,   271,
      46,    84,   148,    -1,   228,    -1,    -1,   229,    -1,   228,
     229,    -1,    -1,    -1,   102,   153,   321,   230,    73,   154,
     231,   156,   173,   157,    -1,   233,    -1,   232,     8,   233,
      -1,   342,    -1,   237,    -1,   239,    -1,    -1,    31,    -1,
      -1,   308,   236,    71,   238,   153,   272,   154,   156,   173,
     157,    -1,    -1,   242,    71,   243,   240,   246,   156,   280,
     157,    -1,    -1,   244,    71,   241,   245,   156,   280,   157,
      -1,   117,    -1,   110,   117,    -1,   109,   117,    -1,    -1,
     119,   321,    -1,   118,    -1,    -1,   119,   247,    -1,    -1,
     120,   247,    -1,   321,    -1,   247,     8,   321,    -1,    -1,
     122,   249,    -1,   342,    -1,    31,   342,    -1,   176,    -1,
      26,   173,    85,   155,    -1,   176,    -1,    26,   173,    87,
     155,    -1,   176,    -1,    26,   173,    89,   155,    -1,    71,
      13,   332,    -1,   253,     8,    71,    13,   332,    -1,   156,
     255,   157,    -1,   156,   155,   255,   157,    -1,    26,   255,
      92,   155,    -1,    26,   155,   255,    92,   155,    -1,    -1,
      -1,   255,    93,   338,   258,   256,   173,    -1,    -1,   255,
      94,   258,   257,   173,    -1,    26,    -1,   155,    -1,   176,
      -1,    26,   173,    83,   155,    -1,    -1,    -1,   260,    66,
     153,   338,   154,   261,   176,    -1,    -1,    -1,   262,    66,
     338,   148,   263,   200,   145,    -1,    -1,   262,    67,    65,
     338,   148,   264,   200,   145,    -1,    -1,    -1,   265,    66,
     153,   338,   154,    26,   266,   173,    -1,    -1,    67,   176,
      -1,    -1,    67,   148,   200,   145,    -1,    46,    65,   148,
      -1,    -1,    67,    26,   173,    -1,    -1,    67,   148,   200,
     145,    -1,   273,    -1,    -1,   274,    73,    -1,   274,    31,
      73,    -1,   274,    31,    73,    13,   332,    -1,   274,    73,
      13,   332,    -1,   273,     8,   274,    73,    -1,   273,     8,
     274,    31,    73,    -1,   273,     8,   274,    31,    73,    13,
     332,    -1,   273,     8,   274,    73,    13,   332,    -1,    -1,
     321,    -1,   124,    -1,   276,    -1,    -1,   295,    -1,   342,
      -1,    31,   340,    -1,   276,     8,   295,    -1,   276,     8,
     342,    -1,   276,     8,    31,   340,    -1,   277,     8,   278,
      -1,   278,    -1,    73,    -1,   158,   339,    -1,   158,   156,
     338,   157,    -1,   279,     8,    73,    -1,   279,     8,    73,
      13,   332,    -1,    73,    -1,    73,    13,   332,    -1,   280,
     281,    -1,    -1,    -1,   285,   282,   289,   155,    -1,   290,
     155,    -1,    -1,   286,   308,   236,    71,   283,   153,   272,
     154,   284,    -1,   155,    -1,   156,   173,   157,    -1,   287,
      -1,   112,    -1,    -1,   287,    -1,   288,    -1,   287,   288,
      -1,   106,    -1,   107,    -1,   108,    -1,   111,    -1,   110,
      -1,   109,    -1,   289,     8,    73,    -1,   289,     8,    73,
      13,   332,    -1,    73,    -1,    73,    13,   332,    -1,   290,
       8,    71,    13,   332,    -1,    99,    71,    13,   332,    -1,
     291,     8,   338,    -1,   338,    -1,    -1,   293,    -1,    -1,
     293,     8,   294,   338,    -1,   338,    -1,    -1,   123,   153,
     296,   364,   154,    13,   338,    -1,   342,    13,   338,    -1,
     342,    13,    31,   342,    -1,    -1,   342,    13,    31,    63,
     322,   297,   330,    -1,    -1,    63,   322,   298,   330,    -1,
      62,   338,    -1,   342,    24,   338,    -1,   342,    23,   338,
      -1,   342,    22,   338,    -1,   342,    21,   338,    -1,   342,
      20,   338,    -1,   342,    19,   338,    -1,   342,    18,   338,
      -1,   342,    17,   338,    -1,   342,    16,   338,    -1,   342,
      15,   338,    -1,   342,    14,   338,    -1,   341,    60,    -1,
      60,   341,    -1,   341,    59,    -1,    59,   341,    -1,    -1,
     338,    27,   299,   338,    -1,    -1,   338,    28,   300,   338,
      -1,    -1,   338,     9,   301,   338,    -1,    -1,   338,    11,
     302,   338,    -1,   338,    10,   338,    -1,   338,    31,   338,
      -1,   338,    30,   338,    -1,   338,    44,   338,    -1,   338,
      42,   338,    -1,   338,    43,   338,    -1,   338,    45,   338,
      -1,   338,    46,   338,    -1,   338,    47,   338,    -1,   338,
      41,   338,    -1,   338,    40,   338,    -1,    42,   338,    -1,
      43,   338,    -1,    48,   338,    -1,    50,   338,    -1,   338,
      33,   338,    -1,   338,    32,   338,    -1,   338,    35,   338,
      -1,   338,    34,   338,    -1,   338,    36,   338,    -1,   338,
      39,   338,    -1,   338,    37,   338,    -1,   338,    38,   338,
      -1,   338,    49,   322,    -1,   153,   338,   154,    -1,    -1,
      -1,   338,    25,   303,   338,    26,   304,   338,    -1,    -1,
     338,    25,    26,   305,   338,    -1,   373,    -1,    58,   338,
      -1,    57,   338,    -1,    56,   338,    -1,    55,   338,    -1,
      54,   338,    -1,    53,   338,    -1,    52,   338,    -1,    64,
     328,    -1,    -1,    51,   306,   338,    -1,   334,    -1,   124,
     153,   367,   154,    -1,    61,   367,   159,    -1,   160,   329,
     160,    -1,    12,   338,    -1,    -1,   308,   236,   153,   307,
     272,   154,   309,   156,   173,   157,    -1,    98,    -1,    -1,
     104,   153,   310,   154,    -1,   310,     8,    73,    -1,   310,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     166,   153,   312,   275,   154,    -1,    -1,   141,   144,   166,
     153,   313,   275,   154,    -1,    -1,   144,   166,   153,   314,
     275,   154,    -1,    -1,   320,   140,    71,   153,   315,   275,
     154,    -1,    -1,   320,   140,   350,   153,   316,   275,   154,
      -1,    -1,   352,   140,    71,   153,   317,   275,   154,    -1,
      -1,   352,   140,   350,   153,   318,   275,   154,    -1,    -1,
     350,   153,   319,   275,   154,    -1,   111,    -1,   166,    -1,
     141,   144,   166,    -1,   144,   166,    -1,   166,    -1,   141,
     144,   166,    -1,   144,   166,    -1,   320,    -1,   323,    -1,
      -1,    -1,   354,   121,   324,   359,   325,   326,    -1,   354,
      -1,   326,   327,    -1,    -1,   121,   359,    -1,    -1,   153,
     154,    -1,   153,   338,   154,    -1,    -1,    78,    -1,   369,
      -1,    -1,   153,   275,   154,    -1,    69,    -1,    70,    -1,
      79,    -1,   128,    -1,   129,    -1,   143,    -1,   125,    -1,
     126,    -1,   127,    -1,   142,    -1,   136,    78,   137,    -1,
     136,   137,    -1,   331,    -1,   166,    -1,   141,   144,   166,
      -1,   144,   166,    -1,    42,   332,    -1,    43,   332,    -1,
     124,   153,   335,   154,    -1,    61,   335,   159,    -1,   333,
      -1,   320,   140,    71,    -1,    72,    -1,   376,    -1,   166,
      -1,   141,   144,   166,    -1,   144,   166,    -1,   331,    -1,
     161,   369,   161,    -1,   136,   369,   137,    -1,    -1,   337,
     336,    -1,    -1,     8,    -1,   337,     8,   332,   122,   332,
      -1,   337,     8,   332,    -1,   332,   122,   332,    -1,   332,
      -1,   339,    -1,   295,    -1,   342,    -1,   342,    -1,   342,
      -1,    -1,    -1,   353,   121,   343,   359,   344,   348,   345,
      -1,   353,    -1,   345,   346,    -1,    -1,    -1,   121,   359,
     347,   348,    -1,    -1,   153,   349,   275,   154,    -1,    -1,
     356,    -1,   363,   356,    -1,   320,   140,   350,    -1,   352,
     140,   350,    -1,   356,    -1,   354,    -1,   311,    -1,   356,
      -1,   363,   356,    -1,   351,    -1,   356,    -1,   363,   356,
      -1,   356,    61,   358,   159,    -1,   356,   156,   338,   157,
      -1,   357,    -1,    73,    -1,   158,   156,   338,   157,    -1,
      -1,   338,    -1,   361,    -1,    -1,   350,   360,    -1,   361,
      61,   358,   159,    -1,   361,   156,   338,   157,    -1,   362,
      -1,    71,    -1,   156,   338,   157,    -1,   158,    -1,   363,
     158,    -1,   364,     8,   365,    -1,   365,    -1,   342,    -1,
      -1,   123,   153,   366,   364,   154,    -1,    -1,    -1,   368,
     336,    -1,   368,     8,   338,   122,   338,    -1,   368,     8,
     338,    -1,   338,   122,   338,    -1,   338,    -1,   368,     8,
     338,   122,    31,   340,    -1,   368,     8,    31,   340,    -1,
     338,   122,    31,   340,    -1,    31,   340,    -1,   369,   370,
      -1,   369,    78,    -1,   370,    -1,    78,   370,    -1,    73,
      -1,    -1,    73,    61,   371,   372,   159,    -1,    73,   121,
      71,    -1,   138,   338,   157,    -1,   138,    72,    61,   338,
     159,   157,    -1,   139,   342,   157,    -1,    71,    -1,    74,
      -1,    73,    -1,   114,   153,   374,   154,    -1,   115,   153,
     342,   154,    -1,     7,   338,    -1,     6,   338,    -1,     5,
     153,   338,   154,    -1,     4,   338,    -1,     3,   338,    -1,
     342,    -1,    -1,   374,     8,   375,   342,    -1,   320,   140,
      71,    -1,   352,   140,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   169,   169,   173,   173,   174,   178,   179,   183,   184,
     185,   186,   187,   188,   188,   190,   190,   192,   193,   194,
     198,   199,   203,   204,   205,   206,   210,   211,   215,   215,
     216,   221,   222,   223,   224,   225,   230,   231,   235,   236,
     236,   236,   237,   237,   237,   238,   238,   238,   239,   239,
     239,   243,   245,   247,   240,   249,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     264,   265,   263,   268,   269,   267,   271,   271,   272,   273,
     274,   275,   276,   277,   273,   279,   280,   284,   285,   286,
     290,   291,   292,   292,   294,   294,   300,   301,   301,   305,
     306,   310,   311,   312,   316,   316,   317,   317,   318,   319,
     323,   324,   325,   332,   334,   341,   346,   347,   348,   350,
     354,   356,   357,   358,   356,   361,   362,   360,   365,   368,
     365,   373,   374,   375,   372,   380,   381,   379,   384,   385,
     383,   390,   391,   395,   396,   401,   401,   401,   406,   407,
     411,   415,   419,   424,   425,   430,   430,   436,   435,   442,
     441,   451,   452,   453,   457,   458,   462,   465,   467,   470,
     472,   476,   477,   481,   482,   487,   488,   492,   493,   498,
     499,   504,   505,   510,   511,   516,   517,   518,   519,   524,
     525,   525,   526,   526,   531,   532,   537,   538,   543,   545,
     545,   548,   550,   550,   551,   551,   554,   556,   556,   560,
     562,   565,   567,   571,   574,   576,   579,   581,   585,   586,
     591,   592,   593,   594,   595,   596,   597,   598,   603,   604,
     605,   610,   611,   616,   617,   618,   619,   620,   621,   625,
     626,   631,   632,   633,   638,   639,   640,   641,   647,   648,
     653,   653,   654,   655,   655,   661,   662,   666,   667,   671,
     672,   676,   677,   681,   682,   683,   684,   685,   686,   690,
     691,   692,   693,   697,   698,   702,   703,   708,   709,   713,
     713,   714,   718,   718,   719,   720,   721,   721,   722,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   739,   740,   740,
     741,   741,   742,   742,   743,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   770,   773,   773,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   784,   785,   786,   787,   788,   789,
     790,   790,   795,   798,   800,   804,   805,   806,   807,   811,
     811,   814,   814,   817,   817,   820,   820,   823,   823,   826,
     826,   829,   829,   832,   832,   838,   839,   840,   841,   845,
     846,   847,   853,   854,   859,   860,   859,   862,   867,   868,
     873,   877,   878,   879,   883,   884,   885,   890,   891,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     924,   928,   929,   930,   931,   932,   933,   934,   935,   940,
     941,   944,   946,   950,   951,   952,   953,   957,   958,   963,
     968,   973,   978,   979,   978,   981,   985,   986,   991,   991,
     995,   995,   999,  1003,  1004,  1008,  1009,  1014,  1018,  1019,
    1024,  1025,  1026,  1030,  1031,  1035,  1036,  1037,  1042,  1043,
    1047,  1048,  1053,  1054,  1054,  1058,  1059,  1060,  1064,  1065,
    1069,  1070,  1074,  1075,  1080,  1081,  1081,  1082,  1087,  1088,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1103,  1104,
    1105,  1106,  1112,  1113,  1113,  1114,  1115,  1116,  1117,  1122,
    1123,  1124,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1139,
    1140,  1140,  1144,  1145
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_GOTO",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR",
  "\"tpl left delim (T_START_TPL)\"",
  "\"tpl left delim with echo (T_START_TPL_WITH_ECHO)\"",
  "\"tpl left delim with script (T_START_TPL_WITH_SCRIPT)\"",
  "\"tpl right delim (T_END_TPL)\"", "\"attr file (T_ATTR_FILE)\"",
  "\"in (T_IN)\"", "\"{t (T_START_TPL_TRANSLATE)\"",
  "\"{include (T_TPL_INCLUDE)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "tpl_block", "tpl_modifier_list", "$@27", "$@28",
  "tpl_modifier_param_list", "$@29", "tpl_inner_tpl_attr_name",
  "tpl_inner_tpl_attr_anony", "tpl_inner_tpl_attr_list", "$@30", "$@31",
  "tpl_encaps_list", "tpl_statement", "@32", "$@33", "$@34", "@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@46", "$@47", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@48",
  "unticked_class_declaration_statement", "$@49", "$@50",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@51", "$@52", "case_separator",
  "while_statement", "elseif_list", "$@53", "tpl_elseif_list", "$@54",
  "$@55", "new_elseif_list", "$@56", "else_single", "tpl_else_single",
  "tpl_endif", "new_else_single", "tpl_loopelse", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@57", "$@58", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "$@59", "expr_without_variable", "$@60", "$@61",
  "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70",
  "@71", "function", "lexical_vars", "lexical_var_list", "function_call",
  "$@72", "$@73", "$@74", "$@75", "$@76", "$@77", "$@78", "$@79",
  "class_name", "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@80", "$@81",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@82", "$@83",
  "variable_properties", "variable_property", "$@84", "method_or_not",
  "$@85", "variable_without_objects", "static_member",
  "variable_class_name", "base_variable_with_function_calls",
  "base_variable", "tpl_base_variable", "reference_variable",
  "compound_variable", "dim_offset", "object_property", "$@86",
  "object_dim_list", "variable_name", "simple_indirect_reference",
  "assignment_list", "assignment_list_element", "$@87", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@88",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@89", "class_constant", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,    40,    41,    59,   123,   125,    36,    93,
      96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   162,   163,   165,   164,   164,   166,   166,   167,   167,
     167,   167,   167,   168,   167,   169,   167,   167,   167,   167,
     170,   170,   171,   171,   171,   171,   172,   172,   174,   173,
     173,   175,   175,   175,   175,   175,   176,   176,   177,   178,
     179,   177,   180,   181,   177,   182,   183,   177,   184,   185,
     177,   186,   187,   188,   177,   189,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     190,   191,   177,   192,   193,   177,   194,   177,   177,   195,
     196,   197,   198,   199,   177,   177,   177,   200,   200,   200,
     201,   201,   202,   201,   203,   201,   204,   205,   204,   206,
     206,   207,   207,   207,   209,   208,   210,   208,   208,   208,
     211,   211,   211,   212,   212,   212,   212,   212,   212,   212,
     212,   213,   214,   215,   212,   216,   217,   212,   218,   219,
     212,   220,   221,   222,   212,   223,   224,   212,   225,   226,
     212,   227,   227,   228,   228,   230,   231,   229,   232,   232,
     233,   234,   235,   236,   236,   238,   237,   240,   239,   241,
     239,   242,   242,   242,   243,   243,   244,   245,   245,   246,
     246,   247,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   253,   254,   254,   254,   254,   255,
     256,   255,   257,   255,   258,   258,   259,   259,   260,   261,
     260,   262,   263,   262,   264,   262,   265,   266,   265,   267,
     267,   268,   268,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   275,   275,   276,   276,   276,   276,   276,   276,   277,
     277,   278,   278,   278,   279,   279,   279,   279,   280,   280,
     282,   281,   281,   283,   281,   284,   284,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   288,   288,   289,
     289,   289,   289,   290,   290,   291,   291,   292,   292,   294,
     293,   293,   296,   295,   295,   295,   297,   295,   298,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   299,   295,   300,   295,
     301,   295,   302,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   303,
     304,   295,   305,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   306,   295,   295,   295,   295,   295,   295,
     307,   295,   308,   309,   309,   310,   310,   310,   310,   312,
     311,   313,   311,   314,   311,   315,   311,   316,   311,   317,
     311,   318,   311,   319,   311,   320,   320,   320,   320,   321,
     321,   321,   322,   322,   324,   325,   323,   323,   326,   326,
     327,   328,   328,   328,   329,   329,   329,   330,   330,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   334,   334,   334,   334,   334,   334,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   337,   338,   338,   339,
     340,   341,   343,   344,   342,   342,   345,   345,   347,   346,
     349,   348,   348,   350,   350,   351,   351,   352,   353,   353,
     354,   354,   354,   355,   355,   356,   356,   356,   357,   357,
     358,   358,   359,   360,   359,   361,   361,   361,   362,   362,
     363,   363,   364,   364,   365,   366,   365,   365,   367,   367,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   369,
     369,   369,   370,   371,   370,   370,   370,   370,   370,   372,
     372,   372,   373,   373,   373,   373,   373,   373,   373,   374,
     375,   374,   376,   376
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     1,
       3,     1,     1,     3,     2,     4,     5,     4,     0,     3,
       0,     1,     1,     1,     1,     4,     1,     2,     3,     0,
       0,     9,     0,     0,    12,     0,     0,     7,     0,     0,
       9,     0,     0,     0,    12,     0,     6,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     1,     2,     5,
       0,     0,    10,     0,     0,    10,     0,     6,     1,     0,
       0,     0,     0,     0,    18,     3,     3,     2,     2,     0,
       1,     2,     0,     5,     0,     5,     0,     0,     4,     1,
       1,     1,     1,     4,     0,     4,     0,     5,     1,     2,
       1,     1,     1,     3,     3,     4,     3,     3,     5,     3,
       4,     0,     0,     0,    18,     0,     0,    15,     0,     0,
      11,     0,     0,     0,    18,     0,     0,    17,     0,     0,
      15,     1,     0,     1,     2,     0,     0,    10,     1,     3,
       1,     1,     1,     0,     1,     0,    10,     0,     8,     0,
       7,     1,     2,     2,     0,     2,     1,     0,     2,     0,
       2,     1,     3,     0,     2,     1,     2,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       0,     6,     0,     5,     1,     1,     1,     4,     0,     0,
       7,     0,     0,     7,     0,     8,     0,     0,     8,     0,
       2,     0,     4,     3,     0,     3,     0,     4,     1,     0,
       2,     3,     5,     4,     4,     5,     7,     6,     0,     1,
       1,     1,     0,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       0,     4,     2,     0,     9,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     0,     7,     3,     4,     0,     7,     0,     4,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       0,     7,     0,     5,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     4,     3,     3,     2,
       0,    10,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     0,     7,     0,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     5,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     2,     2,     2,     4,     3,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     0,
       2,     0,     1,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     0,     0,     7,     1,     2,     0,     0,     4,
       0,     4,     0,     1,     2,     3,     3,     1,     1,     1,
       1,     2,     1,     1,     2,     4,     4,     1,     1,     4,
       0,     1,     1,     0,     2,     4,     4,     1,     1,     3,
       1,     2,     3,     1,     1,     0,     5,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     0,     5,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   498,     0,     0,   401,     0,
     409,   410,     6,   431,   478,    67,   411,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   362,     0,     0,
      79,     0,     0,     0,     0,     0,   385,     0,     0,     0,
       0,   161,   166,     0,     0,   415,   416,   417,   412,   413,
       0,     0,   418,   414,     0,     0,    30,     0,     0,     0,
      78,    30,   490,   404,     0,   433,     4,     0,     8,    36,
      19,     9,    10,   151,   152,     0,     0,   448,   153,   469,
       0,   436,   355,     0,   447,     0,   449,     0,   472,     0,
     455,   468,   470,   477,     0,   344,   432,     6,   385,     0,
     153,   528,   527,     0,   525,   524,   359,   325,   326,   327,
     328,     0,   351,   350,   349,   348,   347,   346,   345,     0,
       0,   386,     0,   305,   451,     0,   303,     0,   503,     0,
     441,   290,     0,     0,   386,   392,   288,   393,     0,   397,
     470,     0,     0,   352,     0,    37,     0,   276,     0,    45,
     277,     0,     0,     0,    57,     0,    59,     0,     0,     0,
      61,   448,     0,   449,     0,     0,     0,    22,     0,    21,
     241,     0,     0,   240,   163,   162,   246,     0,     0,     0,
       0,     0,   282,   498,   512,     0,   420,     0,     0,     0,
     510,     0,    15,     0,   435,     0,     6,   411,     0,     0,
       0,   448,   447,    28,   111,   110,     0,   112,     0,     0,
       0,    28,     0,   405,     0,   406,     0,     0,     0,   369,
       0,    18,   164,   159,   154,     0,     0,   310,     0,   312,
     339,   306,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,   304,   302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   383,     0,   452,
     480,     0,   491,   471,     0,     0,   354,     0,   388,     0,
       0,   507,   450,     0,   357,   442,   499,     0,   388,     0,
     407,     0,   394,   471,   402,     0,     0,     0,    66,     0,
       0,     0,   278,   281,   448,   449,     0,     0,    58,    60,
      86,     0,    62,    63,    30,    85,    24,     0,     0,    17,
       0,   242,   449,     0,    64,     0,     0,    65,     0,   148,
     150,   529,     0,     0,     0,   497,     0,   513,     0,   419,
     511,   431,     0,     0,   509,   438,   508,   434,     5,    12,
      13,   373,     0,    99,   411,     0,     0,     0,   108,     0,
     102,   101,   473,     0,     0,     0,   277,   173,   175,     0,
       0,     0,   113,   114,     0,    91,   116,     0,   119,     0,
     117,   338,    38,     0,   358,   437,     7,   232,     0,     0,
     157,   167,   155,   360,   532,   465,   463,     0,     0,   314,
       0,   342,     0,     0,     0,   316,   315,   330,   329,   332,
     331,   333,   335,   336,   334,   324,   323,   318,   319,   317,
     320,   321,   322,   337,     0,   284,   301,   300,   299,   298,
     297,   296,   295,   294,   293,   292,   291,   232,   533,   466,
       0,   481,     0,     0,   526,   387,     0,     0,     0,   502,
       0,   501,   387,   465,   232,   289,   466,     0,   403,    39,
     275,     0,     0,    51,   279,    73,    70,     0,     0,    55,
       0,     0,   439,     0,     0,     0,   422,     0,   421,    27,
     429,    28,     0,    23,    20,     0,   239,   247,   244,     0,
       0,   530,   522,   523,    11,     0,   494,     0,   493,   356,
       0,   515,     0,   516,   518,   371,     3,     5,   232,   128,
     498,     0,   104,   120,     0,   109,   474,    92,   176,   173,
       0,   449,     0,     0,     0,     0,    94,   115,     0,    29,
      31,    32,    33,    34,     0,   479,     0,     0,   231,   448,
     449,     0,     0,     0,   389,   165,   169,     0,     0,     0,
     228,   375,   377,   464,   311,   313,     0,     0,   307,   309,
       0,   285,     0,   379,   381,   488,     0,   483,   453,   482,
     487,   475,   476,   506,   505,     0,     0,   395,    42,     0,
      49,    46,   277,     0,     0,     0,     0,     0,     0,     0,
     425,   426,   446,     0,   441,   439,     0,   424,     0,     0,
      25,   243,     0,   149,    69,     0,   495,   497,     0,   519,
     521,   520,     0,     0,   232,    16,     3,     0,    89,     0,
       0,   106,    96,     0,   131,   174,     0,   121,   173,    96,
       0,   118,   235,   370,     0,    26,     0,   391,     0,     0,
     168,   171,   249,   228,   230,     0,   218,     0,   229,   232,
     232,   343,   340,   286,   384,   232,   232,     0,   484,   462,
     480,     0,     0,   500,   408,   399,    30,    40,     0,     0,
       0,   280,   173,   173,   183,     0,    30,   181,    77,   189,
     189,    56,     0,   428,   442,   440,     0,   423,   430,     0,
     245,   531,   497,   492,     0,   514,     0,     0,    14,   374,
       0,   103,   105,     0,    93,     0,   277,     0,     0,     0,
      95,     0,     0,   448,   449,   390,   170,   249,     0,   259,
       0,   363,   228,     0,   220,     0,     0,     0,   407,     0,
       0,   489,   460,   457,     0,     0,   504,   396,    28,   198,
       0,    30,   196,    47,    52,     0,     0,     0,    28,   189,
       0,   189,     0,   445,   444,   427,    80,     0,   283,   517,
     372,    88,   129,    87,   107,    97,     0,     0,   138,   173,
     125,    35,   238,   259,   172,     0,   263,   264,   265,   268,
     267,   266,   258,   160,   248,   250,     0,   257,   261,     0,
       0,     0,     0,     0,   221,     0,   376,   378,   341,   287,
     380,   382,   232,   454,   485,   486,     0,   398,   206,   209,
       0,    28,   277,    74,    71,   184,     0,     0,     0,     0,
       0,     0,   185,     0,     0,   496,   201,     0,     0,   132,
      89,     0,    89,   158,     0,     0,   153,   262,     0,   252,
      30,     0,    30,     0,   224,     0,   223,     0,     0,   456,
     400,   214,     0,     0,    41,    50,     0,     0,     0,     0,
     182,     0,   187,     0,   194,   195,   192,   186,   443,    81,
     211,    98,   135,   277,     0,     0,     0,     0,   271,     0,
       0,     0,    28,     0,   367,     0,    28,   225,     0,   222,
     461,   458,     0,     0,     0,     0,   210,   197,    53,    30,
     179,    75,    72,   188,   190,    30,     0,     0,     0,     0,
      89,     0,   139,   122,   126,   274,     0,     0,   251,   253,
       0,   156,   368,     0,   364,   361,     0,   227,   462,     0,
      30,     0,     0,     0,    28,    30,    28,     0,     0,     0,
      89,     0,   130,     0,     0,   216,    89,   216,   272,   269,
       0,   273,     0,   365,   226,   459,     0,    28,    44,   199,
      30,   177,    54,     0,    28,    82,   202,     0,     0,     0,
     136,   133,     0,     0,     0,     0,     0,   228,   366,     0,
       0,    28,   180,     0,    89,   204,   212,   213,   216,    89,
      89,     0,   123,     0,   270,     0,   207,   200,     0,    30,
       0,    89,     0,     0,     0,     0,   216,     0,     0,    30,
     178,    28,   203,     0,     0,     0,   217,   140,     0,   127,
     255,    30,   254,    28,    83,   205,     0,     0,     0,    28,
     142,   137,     0,     0,   256,     0,    84,   141,   143,   134,
     124,     0,   144,   145,     0,     0,   146,     0,    30,    28,
     147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    85,    86,   527,   368,   188,   189,
      87,   223,   397,   549,   920,    89,   599,   759,   686,   828,
     320,   689,   168,   688,   602,   832,   953,   609,   605,   879,
     604,   878,   172,   184,   844,   926,  1003,  1050,   720,   220,
     642,   649,   724,   847,   377,   378,   379,   640,   723,   226,
     783,   728,   966,  1026,   852,   967,   638,   846,   726,   893,
    1009,   930,  1008,   850,   965,  1056,  1057,  1058,  1064,  1067,
     348,   349,    91,    92,   245,    93,   569,    94,   566,   411,
      95,   410,    96,   568,   659,   660,   543,   387,   982,   921,
     698,   488,   701,   770,   955,   925,   886,   763,   829,  1000,
     890,  1004,  1021,   871,  1029,   874,   929,   962,   914,   993,
     665,   666,   667,   557,   558,   192,   193,   197,   739,   804,
     855,   970,  1042,   805,   806,   807,   808,   899,   809,   166,
     321,   322,   603,    97,   355,   748,   310,   423,   424,   418,
     420,   422,   747,   576,   131,   570,   120,   812,   905,    99,
     407,   634,   528,   669,   670,   675,   676,   457,   100,   668,
     156,   157,   477,   685,   757,   827,   163,   234,   475,   101,
     612,   500,   102,   613,   306,   614,   182,   104,   301,   105,
     106,   460,   679,   823,   869,   948,   753,   822,   107,   108,
     109,   110,   111,   381,   112,   113,   462,   588,   678,   589,
     590,   114,   517,   518,   712,   149,   150,   209,   210,   520,
     632,   115,   352,   625,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -813
static const yytype_int16 yypact[] =
{
    -813,    44,    69,  -813,  1590,  4396,  4396,   -62,  4396,  4396,
    4396,  4396,  4396,  4396,  4396,  -813,  4396,  4396,  4396,  4396,
    4396,  4396,  4396,   443,   443,  2738,  4396,   527,   -37,   -18,
    -813,  -813,   138,  -813,  -813,  -813,  -813,  4396,  -813,    62,
      67,    77,  -813,    91,  2865,  2992,   137,  -813,   183,  3119,
    -813,  4396,   -49,   -47,   132,   142,   200,   130,   157,   180,
     239,  -813,  -813,   242,   251,  -813,  -813,  -813,  -813,  -813,
     366,    89,  -813,  -813,   250,  2610,  -813,   159,  3246,  4396,
    -813,  -813,   261,   162,   403,   141,  -813,    10,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   335,   341,  -813,   394,  -813,
     287,  -813,  -813,  1437,  -813,    30,  1329,   279,  -813,   300,
     322,  -813,     0,  -813,   -43,  -813,  -813,  -813,  -813,   318,
     394,  6139,  6139,  4396,  6139,  6139,  2788,  -813,  -813,   422,
    -813,  4396,  -813,  -813,  -813,  -813,  -813,  -813,  -813,   336,
     250,   -97,   348,  -813,  -813,   367,  -813,   443,  5939,   358,
     507,  -813,   379,   250,   381,   391,  -813,  -813,   397,   400,
      66,   -43,  3373,  -813,  4396,  -813,    16,  6139,  2356,  -813,
    4396,  4396,   386,  4396,  -813,  5084,  -813,  5125,   390,   537,
    -813,   401,  6139,   835,   396,  5169,   250,   -24,    23,  -813,
    -813,   453,    27,  -813,  -813,  -813,   548,    28,   443,   443,
     443,   405,  -813,  2738,    -2,   191,  -813,  4523,   443,   563,
    -813,   250,  -813,   305,   258,  4396,  1251,   551,   402,  4650,
      13,   -90,    39,   438,   150,  -813,   441,   475,   593,  5691,
    5274,   463,  4396,   150,   467,   475,   150,    64,   558,  -813,
     560,  -813,   518,  -813,  -813,    17,   -11,  -813,  4396,  -813,
     613,  -813,  -813,  4396,  4396,  4396,  4396,  4396,  4396,  4396,
    4396,  4396,  4396,  4396,  4396,  4396,  4396,  4396,  4396,  4396,
    4396,   527,  -813,  -813,  -813,  3501,  4396,  4396,  4396,  4396,
    4396,  4396,  4396,  4396,  4396,  4396,  4396,  -813,     1,  -813,
    4396,  4396,   261,   -15,   498,  5316,  -813,   250,   -10,    55,
      73,  -813,  -813,  3629,  -813,  3757,  -813,   250,   381,    -3,
     516,    -3,  -813,    -4,  -813,  5357,  5399,  4396,  -813,   565,
    4396,   515,   664,  6139,   594,  1036,   602,  5441,  -813,  -813,
    -813,  1167,  -813,  -813,  -813,  -813,    68,   615,   -49,  -813,
    4396,  -813,  -813,   -47,  -813,  1167,   619,  -813,     8,  -813,
    -813,  -813,    20,   534,   539,   312,   543,  -813,   627,  -813,
    -813,   646,  4787,   555,  -813,  -813,  -813,   297,  -813,  -813,
    -813,  -813,  5732,  -813,   700,   561,   253,   703,  -813,  1124,
    -813,  -813,    -4,   -43,   650,   443,  3885,   595,  -813,  4396,
    6032,   655,  -813,  -813,   579,  -813,  -813,  1717,  -813,  4396,
    -813,  -813,  -813,  4828,  -813,  -813,  -813,  4013,   716,   134,
    -813,   612,  -813,  -813,   580,   582,    -4,   -43,  4396,  6176,
    4396,  -813,  4396,  4396,  4396,  3042,  3167,  3294,  3294,  3294,
    3294,  1497,  1497,  1497,  1497,   899,   899,   483,   483,   483,
     422,   422,   422,  -813,   155,  2788,  2788,  2788,  2788,  2788,
    2788,  2788,  2788,  2788,  2788,  2788,  2788,  4013,   586,   589,
      58,  6139,   590,  4869,  -813,   158,   580,   586,   443,  6139,
     443,  5980,   381,  -813,  4013,  -813,  -813,    58,  -813,   712,
    6139,   600,  5482,  -813,  -813,  -813,  -813,   744,    25,  -813,
    1167,  1167,  1167,   605,   617,   250,   282,   622,  -813,  -813,
    -813,   606,   688,  -813,  -813,  4915,  -813,  -813,   751,   443,
     611,  -813,  -813,  -813,  -813,   621,  -813,    35,  -813,  -813,
     494,  -813,  4396,  -813,  -813,  -813,   616,  -813,  4013,  -813,
    2738,   642,  -813,  -813,   762,  -813,    -4,  -813,  -813,   595,
     629,  1011,   447,   632,  5210,   447,  -813,  -813,   641,  -813,
    -813,  -813,  -813,  -813,  5774,  -813,   443,   644,   787,    37,
      63,  1167,   656,   250,   381,  -813,   683,   134,   643,   651,
     256,  -813,  -813,    -4,  1479,  2788,  4396,  6098,  1393,  1529,
     527,  -813,   652,  -813,  -813,  -813,  4396,  -813,  -813,    51,
    -813,  -813,  -813,  -813,  -813,  4141,   654,  -813,  -813,  2356,
    -813,  -813,  4396,  4396,   443,   447,  1167,   738,  1845,    -7,
    -813,  -813,   690,   658,   802,  1167,   250,   298,   747,   713,
    -813,  -813,  1167,  -813,  -813,   443,  -813,   312,   809,  -813,
    -813,  -813,   665,  1579,  4013,  -813,   669,   676,  -813,   678,
    4396,  -813,  -813,   684,  -813,  -813,  4396,  -813,   595,  -813,
     685,  -813,  -813,  -813,  4269,  -813,   250,   381,   134,   677,
     829,  -813,  -813,   256,  -813,   691,   830,   173,  -813,  4013,
    4013,  2915,  -813,  -813,  -813,  4013,  4013,  4956,  -813,   694,
    4396,  4396,   443,  6139,  -813,  -813,  -813,  -813,  4396,  1973,
     689,  6139,   595,   595,  -813,   847,  -813,  -813,  -813,   706,
     707,  -813,  1167,  -813,  1167,  -813,   709,   311,  -813,   711,
    -813,  -813,   312,  -813,  4396,  -813,   708,   715,  -813,  -813,
     135,  -813,  6139,  4396,   840,  4396,  4396,  5815,   447,   722,
     840,   717,   443,    45,   476,   381,   829,  -813,   134,   546,
     721,   776,   168,   808,   869,   730,   732,  4396,   516,   739,
     742,  -813,  -813,  -813,   740,  4997,  -813,   782,   556,  -813,
    5524,  -813,  -813,  -813,  -813,   750,   755,  1167,   816,  -813,
     583,  -813,   149,  -813,   788,  -813,  -813,    46,  2788,  -813,
    -813,  -813,  2610,  -813,  6139,  -813,  5566,   756,  -813,   595,
    -813,  -813,  -813,   679,  -813,   841,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   817,   781,  -813,    29,
     758,   763,   765,   356,   905,  1167,  -813,  -813,  2915,  -813,
    -813,  -813,  4013,   798,  -813,  -813,    58,  -813,  -813,   272,
     769,   842,  4396,  -813,  -813,  -813,   771,   653,   773,  4396,
      -5,   232,  -813,  1167,   134,  -813,  -813,  4396,   784,  -813,
    -813,   779,  -813,  -813,   921,   863,   394,  -813,   876,  -813,
    -813,   357,  -813,   878,   942,  1167,  -813,   804,    58,  -813,
    -813,   503,   806,  2356,  -813,  -813,   805,   811,  2101,  2101,
    -813,   813,  -813,  5043,  -813,  -813,  -813,  -813,  -813,  -813,
     529,  6139,  -813,  4396,   172,   815,   262,  1167,   956,    31,
     900,   957,   820,   909,  -813,    47,   827,   972,  1167,  -813,
    -813,  -813,   834,   962,   923,  4396,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   919,  4396,    86,   947,
    -813,   843,  2610,  -813,  2610,  -813,  1167,   922,  -813,  -813,
    1167,  -813,  -813,   363,  -813,  -813,  1167,  -813,   694,  4396,
    -813,   839,  5607,  2229,   913,  -813,   178,   851,  5856,  4396,
    -813,   943,  -813,   307,   859,   945,  -813,   945,  -813,  1000,
     861,  -813,   944,  -813,  -813,  -813,  5649,   948,  -813,  -813,
    -813,  -813,  -813,   866,   326,  -813,  -813,  5898,   426,   870,
    2610,  -813,   888,   993,   474,   994,  1167,   256,  -813,  1019,
    2356,   961,  -813,   892,  -813,  -813,  2610,  -813,   945,  -813,
    -813,   978,  2610,   977,  -813,   910,  -813,  -813,   911,  -813,
     559,  -813,  1021,   573,   585,   917,   945,   924,   460,  -813,
    -813,   912,  2610,   620,   989,  2483,  2610,  -813,  1028,  -813,
    -813,  -813,  -813,   599,  -813,  2610,   927,   992,   996,   926,
     976,  -813,   932,   937,  -813,   934,  -813,   976,  -813,  -813,
    -813,   134,  -813,  -813,  1017,   938,  -813,   935,  -813,   936,
    -813
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -813,  -813,  -354,  -813,   -23,  -813,  -813,  -813,  -813,   760,
    -813,   -79,  -813,  -813,     4,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -812,  -813,
    -813,  -813,   451,  -813,   723,   724,  -813,  -813,  -813,  -813,
       2,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,    48,  -813,  -813,
    -813,   597,   704,   710,  -115,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,   446,  -512,  -352,  -813,   230,
    -813,  -813,  -813,  -504,  -813,  -813,   227,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,  -592,
    -638,  -813,   369,  -407,  -813,  -813,   772,  -813,   375,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,   313,  -813,  -813,  -813,
    -366,  -813,  -813,   -26,  -813,  -813,  -813,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,    -1,  -813,  -813,  -813,
    -813,  -813,  -813,  -813,  -813,  -813,  -813,  -813,   552,  -398,
    -262,  -813,  -813,  -813,  -813,  -813,  -813,  -813,   370,   462,
     377,  -813,  -813,   499,   505,  -813,    88,   -34,  -453,   638,
     731,  -813,  -813,  -813,  -813,  -813,   174,  -813,  -236,  -813,
     952,  -813,   -14,  -813,   263,  -813,   444,  -465,  -813,  -813,
    -813,     5,   409,   496,  -813,  -196,  -813,   380,   592,  -813,
    -813,  -813,  -813,  -813,  -813
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -468
static const yytype_int16 yytable[] =
{
     141,   141,   231,    98,   154,   294,    90,   356,    88,   443,
     415,   565,   597,   159,   526,   593,   509,   594,   240,   699,
     540,   884,   117,   181,   317,   740,   190,   643,   511,   187,
      34,   338,   161,   607,   539,   343,   346,   858,   894,   937,
     896,   222,   391,   627,     3,  -233,   290,   238,   213,   221,
     582,   214,   459,  -236,   627,   943,   239,   290,   393,   357,
     414,   290,    34,   415,   459,   394,   337,   596,   -90,    -2,
      34,  -234,   458,   473,    34,   476,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   412,   273,
     274,   123,   103,   121,   122,   186,   124,   125,   126,   127,
     128,   129,   130,   652,   132,   133,   134,   135,   136,   137,
     138,   191,   680,   148,   151,   292,   162,   298,   963,   358,
     238,   637,  -451,  -451,   141,   167,   466,   290,    34,   585,
     308,    34,   175,   177,   238,   164,   729,   204,  -464,   185,
    -467,   291,   364,   371,   467,   324,    34,    82,   988,   700,
     885,   959,   291,  -463,   994,    82,   291,   341,   502,    82,
     117,   392,   510,   336,   165,   241,   229,   230,   141,   661,
     413,   318,   319,   636,   512,   141,   141,   141,   339,   608,
     765,   766,   344,   347,   859,   141,   938,   -90,   367,   628,
     645,  -233,  1020,   648,   395,   141,   772,  1023,  1024,  -236,
     845,   944,   207,   208,   743,   117,  -467,   681,   178,  1033,
     781,   295,   238,    82,   586,   169,    82,  -234,   580,   296,
     170,   383,   291,   204,   587,   405,   117,   717,    34,   756,
     171,    82,   204,   211,   960,   204,   690,   224,   225,   117,
     233,   587,   839,   840,   173,   212,   744,   781,   154,   194,
     315,   417,   316,   693,   179,   501,   103,   159,   323,   195,
     661,   327,   745,   746,   204,   837,   118,   841,   749,   750,
    -193,  -193,  -193,   196,   465,   562,   161,   851,   563,   792,
     782,  -386,    76,   198,   472,   238,    77,    78,   207,   208,
     160,   148,   664,   417,   239,   362,   139,   207,   208,   140,
     207,   208,   238,   372,   417,   417,   842,   390,   496,   562,
     199,   525,   563,    82,   417,   187,   417,   932,   673,    76,
     403,   117,   496,    77,    78,   839,   840,   117,   359,   207,
     208,   531,   141,   200,   639,  -193,   419,   781,   872,   873,
     794,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,  1015,
     787,   870,   141,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   995,   789,   293,   461,   463,
     664,   559,   781,   117,   383,    34,   564,   863,   903,   887,
     206,   469,   201,   471,   972,   202,    98,   562,  -388,   551,
     563,   550,   238,   911,   203,   480,   242,   934,   482,    76,
    -219,   371,   243,    77,    78,   867,  1022,   232,  -191,  -191,
    -191,   141,  -386,   118,   313,   244,   238,   246,   505,   864,
     904,   559,   287,   385,  1038,   515,   973,  -387,  -388,   204,
     288,   238,   238,   289,   205,   141,   889,   141,   559,   238,
     525,  -387,   990,   139,    76,   238,   140,   227,    77,    78,
     369,   370,   211,   235,   237,   417,   877,   496,   496,   496,
      82,   271,   617,   117,   323,    34,   204,   544,   385,   382,
     297,   236,   417,  -191,  -237,   103,   141,   554,   299,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   781,   559,   206,   207,   208,   574,   300,   575,   416,
     577,   578,   579,   118,   117,   305,    34,   304,   117,   141,
      34,   312,   141,   307,   117,   238,    34,   931,   268,   269,
     270,   309,   271,   141,   160,  -451,  -451,   311,   496,   326,
     657,   207,   208,   139,   564,   330,   140,   564,   204,   781,
     331,   416,   334,   364,   118,   386,   332,   154,   118,   354,
      82,   345,   416,   416,   118,   629,   159,   630,   631,   912,
     913,  1006,   416,    76,   416,   142,   142,    77,    78,   155,
     384,   141,   141,   496,   139,   161,   396,   140,   139,   398,
     587,   140,   496,   707,   139,   927,   928,   140,   117,   496,
      34,    82,   141,   687,   141,    82,   399,   758,   559,   340,
     633,    82,   697,   207,   208,  1040,  1041,   768,   148,  1012,
     402,    76,   -43,   -43,   -43,    77,    78,   404,   733,   406,
    -237,   408,   587,   735,   781,   564,   204,   409,   118,   421,
     564,   364,   382,   559,   559,   795,   536,   481,   781,   559,
     559,   413,   796,   797,   798,   799,   800,   801,   802,   141,
     781,   143,   146,  1063,   671,  -208,  -208,  -208,   152,   474,
     483,   153,   484,   487,   677,   838,   839,   840,   380,   496,
     573,   496,   831,   683,   485,    82,   503,   103,   513,   141,
     323,   691,   508,   762,   514,   781,   103,   519,   521,   142,
     365,   207,   208,   803,  1032,   141,    76,   522,   499,   141,
      77,    78,   524,  -100,   530,   564,   532,   542,  1035,   564,
      76,   537,   507,   416,    77,    78,   546,   547,   722,   561,
    1036,   567,    76,   571,   727,   572,    77,    78,   598,   583,
     416,   900,   584,   142,   496,   881,   839,   840,   222,   591,
     142,   142,   142,   600,   144,   144,   221,   606,   615,   620,
     142,   616,   618,   619,   622,  1045,   624,    76,   461,   755,
     142,    77,    78,   635,   626,   641,   760,   103,   795,   359,
     183,   902,   646,   906,   644,   796,   797,   798,   799,   800,
     801,   802,   496,   498,   650,   654,   559,   360,   653,   662,
     656,   366,   778,   658,   663,   856,   674,   498,   684,   695,
     704,   784,   702,   786,   323,   709,   360,   703,   708,   366,
     496,   564,   714,   155,   715,   360,   718,   366,   360,   366,
     719,   417,   721,   737,   725,   818,   853,   738,   742,   731,
     954,   380,   496,   160,   764,   741,   956,   752,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     767,   769,   771,   775,   776,   779,   785,   610,   611,   780,
     790,   977,   791,   417,   496,   810,   984,   916,   302,  -260,
     811,   814,   815,   497,   816,   496,   817,   796,   797,   798,
     799,   800,   801,   820,  -451,  -451,   821,   497,   222,   824,
     222,  1001,   325,   826,   833,   836,   221,   142,   221,   834,
     843,   849,   854,   496,   860,    47,   861,   496,   865,   868,
     323,   862,   342,   496,   875,   876,   880,   883,   882,   350,
     351,   353,   892,   895,   897,   891,   898,   142,   655,   363,
    1031,   265,   266,   267,   268,   269,   270,   901,   271,   388,
    1043,   907,   498,   498,   498,   908,   222,   981,   910,   915,
     917,   103,  1049,   933,   221,   918,   103,   103,   923,   936,
     940,   939,   222,   496,   564,   145,   145,   941,   222,   158,
     221,   323,   942,   694,   945,   946,   221,   949,   950,  1069,
     333,   951,   957,   961,   978,   969,   142,   964,   222,   710,
     983,   222,   222,   952,  1017,   985,   221,   991,   989,   221,
     221,   222,   992,   996,   997,   958,  -215,   998,  1007,   221,
     142,  1002,   142,   498,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,  1010,   976,   564,  1011,
    1013,   103,   497,   497,   497,  1016,  1018,   987,  1019,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   142,  1025,  1027,  1028,  1037,  1030,  1034,   498,  1044,
    -451,  -451,  1039,  1046,  1048,  1051,  1052,   498,  1055,   773,
    1059,   774,  1053,  1054,   498,  1060,   516,  1061,   103,   416,
    1065,  1068,  1066,  1070,   142,  -451,  -451,   142,   504,   145,
     730,   552,   534,   535,   736,  1062,   623,   553,   142,   922,
     924,   813,   793,   497,   706,   506,   538,   541,   819,   705,
     857,   777,   975,   713,   754,     0,   486,     0,     0,     0,
       0,   416,   155,  -175,     0,     0,     0,     0,   560,     0,
       0,     0,     0,   145,   835,     0,     0,     0,     0,     0,
     145,   145,   145,     0,     0,     0,   142,   142,   497,     0,
     145,  -175,     0,     0,   498,     0,   498,   497,     0,     0,
     145,     0,     0,     0,   497,   581,     0,   142,     0,   142,
       0,     0,     0,     0,     0,     0,     0,     0,   560,     0,
       0,     0,   866,    30,    31,   373,     0,    34,     0,   302,
       0,   302,     0,   374,     0,   560,     0,     0,     0,   490,
     491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     888,     0,     0,   158,     0,     0,     0,     0,   492,   498,
       0,     0,     0,     0,   142,     0,    30,    31,   117,     0,
     350,     0,   909,     0,     0,     0,    36,     0,   375,    65,
      66,    67,    68,    69,   497,     0,   497,     0,     0,   560,
     376,     0,     0,     0,   142,     0,    72,    73,     0,     0,
       0,     0,   533,   388,   935,     0,   388,   498,   118,     0,
     142,     0,    82,     0,   142,   947,     0,   302,     0,     0,
       0,   493,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,   376,     0,   498,     0,   145,   494,    72,
      73,   495,     0,   968,     0,     0,     0,   971,     0,   497,
      30,    31,   373,   974,    34,     0,     0,   498,     0,     0,
     374,     0,     0,     0,     0,   692,   388,   145,     0,     0,
       0,     0,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,     0,   711,     0,   516,   498,
       0,     0,     0,     0,     0,   560,     0,   497,     0,     0,
     498,     0,     0,  1014,     0,   375,    65,    66,    67,    68,
      69,     0,     0,     0,     0,   734,     0,   376,  -451,  -451,
       0,     0,     0,    72,    73,   497,   145,     0,   498,     0,
     560,   560,   498,     0,     0,     0,   560,   560,   498,    82,
       0,     0,     0,   302,     0,     0,     0,   497,     0,     0,
     145,   252,   145,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     0,   271,   516,     0,     0,   247,   248,   249,   497,
       0,     0,     0,     0,     0,     0,     0,     0,   498,   388,
     497,   145,   250,   302,   251,   252,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,     0,   497,   248,
     249,     0,   497,     0,   145,     0,     0,   145,   497,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   145,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,     0,
       0,     0,   158,  -468,  -468,  -468,  -468,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,     0,   497,     0,
       0,     0,     0,   560,     0,     0,   145,   145,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   145,   271,   145,
       0,     0,     0,     0,     0,     0,     0,     0,   247,   248,
     249,     0,   272,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,     0,   250,     0,   251,   252,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,     0,
       0,     0,    11,    12,   145,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,   145,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
     145,    43,     0,     0,   145,    44,    45,    46,    47,    48,
      49,    50,     0,    51,    52,    53,     0,     0,     0,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       5,     6,     7,     8,     9,     0,    70,     0,     0,    10,
       0,    71,    72,    73,    74,    75,     0,    76,   716,     0,
       0,    77,    78,    79,     0,    80,    81,     0,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,    53,     0,     0,     0,    54,    55,    56,     0,
      57,    58,    59,   548,    61,    62,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     0,     5,     6,
       7,     8,     9,    70,     0,     0,     0,    10,   119,    72,
      73,    74,    75,     0,    76,     0,     0,     0,    77,    78,
      79,   696,    80,    81,     0,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
      53,     0,     0,     0,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,     0,     5,     6,     7,     8,
       9,    70,     0,     0,     0,    10,   119,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    79,   761,
      80,    81,     0,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,    53,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     0,     5,     6,     7,     8,     9,    70,
       0,     0,     0,    10,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,   919,    80,    81,
       0,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,    53,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     5,     6,     7,     8,     9,    70,     0,     0,
       0,    10,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,   980,    80,    81,     0,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,    53,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     5,
       6,     7,     8,     9,     0,    70,     0,     0,    10,     0,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    80,    81,     0,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,     8,
       9,     0,    70,     0,     0,    10,     0,   119,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,    80,    81,     0,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,  1047,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   215,     0,
       0,     0,    30,    31,   216,    33,    34,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,   218,     0,   219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   215,     0,     0,     0,    30,
      31,   216,    33,    34,     0,     0,     0,     0,     0,   217,
       0,     0,     0,     0,   218,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,     5,     6,     7,     8,     9,    70,     0,     0,     0,
      10,   119,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,    82,   147,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   117,
      33,    34,     0,   250,     0,   251,   252,    36,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    47,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,     5,     6,
       7,     8,     9,     0,    70,     0,     0,    10,     0,   119,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,    82,     0,    83,    84,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   117,    33,    34,     0,
       0,     0,   251,   252,    36,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,    47,   271,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,     5,     6,     7,     8,     9,
       0,    70,     0,     0,    10,     0,   119,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
     174,     0,     0,    82,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   117,    33,    34,     0,     0,     0,     0,
       0,    36,     0,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
      47,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,     5,     6,     7,     8,     9,     0,    70,     0,
       0,    10,     0,   119,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,    79,     0,   176,     0,     0,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     117,    33,    34,     0,     0,     0,     0,     0,    36,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     5,
       6,     7,     8,     9,     0,    70,     0,     0,    10,     0,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,   180,     0,     0,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   117,    33,    34,
       0,     0,     0,     0,     0,    36,  -468,  -468,  -468,  -468,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,     8,
       9,     0,    70,     0,     0,    10,     0,   119,    72,    73,
      74,     0,     0,     0,     0,   228,     0,     0,     0,    79,
       0,     0,     0,     0,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     0,     5,     6,     7,     8,     9,    70,
       0,     0,     0,    10,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,   314,     0,     0,
       0,    82,   444,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   117,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     5,     6,     7,     8,     9,    70,     0,     0,
       0,    10,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    82,
     468,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     117,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     0,
       5,     6,     7,     8,     9,    70,     0,     0,     0,    10,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,    82,   470,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   117,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     0,     5,     6,
       7,     8,     9,    70,     0,     0,     0,    10,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,    82,   385,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   117,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,     0,     5,     6,     7,     8,
       9,    70,     0,     0,     0,    10,   119,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,    82,   556,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     0,     5,     6,     7,     8,     9,    70,
       0,     0,     0,    10,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    82,   682,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   117,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     5,     6,     7,     8,     9,    70,     0,     0,
       0,    10,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    82,
     732,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     117,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     5,
       6,     7,     8,     9,     0,    70,     0,     0,    10,     0,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   117,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,     8,
       9,     0,    70,     0,     0,    10,     0,   119,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,   361,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   117,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,   119,    72,    73,    74,     0,   247,   248,   249,     0,
       0,     0,     0,   389,     0,     0,     0,     0,    82,     0,
      83,    84,   250,     0,   251,   252,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,   247,   248,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,   251,   252,     0,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,   271,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,     0,
       0,     0,     0,     0,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,     0,   251,   252,   523,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,   555,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     0,   271,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   251,   252,   592,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,     0,     0,     0,
       0,     0,   247,   248,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   884,
     251,   252,   621,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,     0,   271,   247,   248,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
       0,   251,   252,   751,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,     0,   251,   252,   825,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,     0,     0,     0,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   885,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   247,
     248,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,   251,   252,   328,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,   247,   248,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     647,   251,   252,     0,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,   335,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   401,   271,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   251,   252,     0,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,     0,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   401,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,     0,
     247,   248,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,   251,   252,
     464,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,     0,
     271,   247,   248,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   478,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
       0,   271,     0,   247,   248,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
       0,   251,   252,   479,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,     0,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,   489,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     0,   271,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,   251,   252,   601,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,   271,     0,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,   830,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,     0,
     247,   248,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,   251,   252,
     848,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,     0,
     271,   247,   248,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   979,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
       0,   271,     0,   247,   248,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
       0,   251,   252,   999,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,     0,   271,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   400,
     250,     0,   251,   252,     0,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,   271,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     529,   250,     0,   251,   252,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     0,   271,     0,   247,   248,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   651,   250,     0,   251,   252,     0,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,   271,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   788,   250,     0,   251,   252,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   247,
     248,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   986,   250,     0,   251,   252,     0,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,   248,   249,     0,     0,  1005,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,   251,
     252,   303,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
       0,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   595,     0,     0,     0,     0,   247,   248,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   545,   250,   672,   251,   252,     0,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,     0,   271,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,   251,   252,     0,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   249,   271,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     0,   251,   252,     0,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     0,   271
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-813)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-468)))

static const yytype_int16 yycheck[] =
{
      23,    24,    81,     4,    27,   120,     4,   203,     4,   271,
     246,   409,   477,    27,   368,   468,     8,   470,     8,    26,
     386,    26,    71,    49,     8,   663,    73,   539,     8,    52,
      73,     8,    27,     8,   386,     8,     8,     8,   850,     8,
     852,    75,    29,     8,     0,     8,    61,   144,    71,    75,
     457,    74,   288,     8,     8,     8,   153,    61,   148,    61,
      71,    61,    73,   299,   300,   155,    90,   474,    29,     0,
      73,     8,    71,   309,    73,   311,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    71,    59,
      60,   153,     4,     5,     6,   144,     8,     9,    10,    11,
      12,    13,    14,   556,    16,    17,    18,    19,    20,    21,
      22,   158,    61,    25,    26,   158,   153,   140,   930,   121,
     144,   528,    59,    60,   147,    37,    71,    61,    73,    71,
     153,    73,    44,    45,   144,   153,   648,    73,   153,    51,
     140,   156,    78,   153,    71,   171,    73,   158,   960,   156,
     155,    65,   156,   153,   966,   158,   156,   191,    90,   158,
      71,   148,   154,   186,    26,   155,    78,    79,   191,   567,
     153,   155,   168,   527,   154,   198,   199,   200,   155,   154,
     692,   693,   155,   155,   155,   208,   155,   148,   211,   154,
     542,   154,  1004,   545,   155,   218,   700,  1009,  1010,   154,
     154,   154,   138,   139,    31,    71,   140,   156,    71,  1021,
      75,   123,   144,   158,   156,   153,   158,   154,    63,   131,
     153,   216,   156,    73,   460,   161,    71,   634,    73,   682,
     153,   158,    73,   144,   148,    73,   602,    78,    79,    71,
      78,   477,    93,    94,   153,   156,    73,    75,   271,   117,
     162,   246,   164,   605,    71,   334,   168,   271,   170,   117,
     658,   173,   669,   670,    73,   769,   111,   771,   675,   676,
      92,    93,    94,    73,   297,   141,   271,   789,   144,   732,
     145,   140,   147,   153,   307,   144,   151,   152,   138,   139,
      27,   203,   124,   288,   153,   207,   141,   138,   139,   144,
     138,   139,   144,   215,   299,   300,   157,   219,   331,   141,
     153,   153,   144,   158,   309,   338,   311,   145,   580,   147,
     232,    71,   345,   151,   152,    93,    94,    71,   137,   138,
     139,    78,   355,   153,   530,   157,   248,    75,    66,    67,
     738,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   997,
     726,   826,   385,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   967,   728,   114,   290,   291,
     124,   407,    75,    71,   379,    73,   409,    31,    31,   157,
     137,   303,   153,   305,    31,   153,   397,   141,   140,   397,
     144,   397,   144,   868,   153,   317,    71,   145,   320,   147,
     154,   153,    71,   151,   152,   822,  1008,   156,    92,    93,
      94,   444,   140,   111,   161,    31,   144,   140,   340,    73,
      73,   457,   153,    31,  1026,   123,    73,   140,   140,    73,
     140,   144,   144,   121,    78,   468,   844,   470,   474,   144,
     153,   140,   145,   141,   147,   144,   144,    77,   151,   152,
     155,   156,   144,    83,    84,   460,   832,   490,   491,   492,
     158,    49,   495,    71,   386,    73,    73,   389,    31,   216,
     144,    78,   477,   157,     8,   397,   509,   399,   140,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    75,   528,   137,   138,   139,   418,   140,   420,   246,
     422,   423,   424,   111,    71,     8,    73,   159,    71,   542,
      73,   121,   545,   144,    71,   144,    73,   893,    45,    46,
      47,   140,    49,   556,   271,    59,    60,   140,   561,   153,
     563,   138,   139,   141,   567,   155,   144,   570,    73,    75,
      13,   288,   156,    78,   111,   153,   155,   580,   111,   154,
     158,    13,   299,   300,   111,    71,   580,    73,    74,    66,
      67,   145,   309,   147,   311,    23,    24,   151,   152,    27,
      29,   604,   605,   606,   141,   580,   148,   144,   141,   148,
     826,   144,   615,   616,   141,    66,    67,   144,    71,   622,
      73,   158,   625,   599,   627,   158,    13,   686,   634,   156,
     522,   158,   608,   138,   139,   155,   156,   696,   530,   145,
     157,   147,    66,    67,    68,   151,   152,   160,   654,    71,
     154,    71,   868,   656,    75,   658,    73,   119,   111,    26,
     663,    78,   379,   669,   670,    99,   383,    82,    75,   675,
     676,   153,   106,   107,   108,   109,   110,   111,   112,   682,
      75,    23,    24,  1061,   576,    66,    67,    68,   141,   153,
     155,   144,     8,    71,   586,    92,    93,    94,   216,   702,
     417,   704,   761,   595,    90,   158,    71,   599,   154,   712,
     602,   603,    73,   689,   155,    75,   608,   154,    71,   147,
     137,   138,   139,   157,   145,   728,   147,    61,   331,   732,
     151,   152,   157,    13,   153,   738,    13,   122,   145,   742,
     147,    71,   345,   460,   151,   152,    71,   148,   640,    13,
     145,   119,   147,   153,   646,   153,   151,   152,    26,   153,
     477,   856,   153,   191,   767,    92,    93,    94,   782,   159,
     198,   199,   200,   153,    23,    24,   782,    13,   153,    71,
     208,   144,   140,   157,    13,   145,   155,   147,   680,   681,
     218,   151,   152,   157,   153,    13,   688,   689,    99,   137,
      49,   860,   150,   862,   155,   106,   107,   108,   109,   110,
     111,   112,   815,   331,   153,     8,   822,   205,   154,   156,
     144,   209,   714,   120,   153,   806,   154,   345,   154,    71,
       8,   723,   122,   725,   726,   102,   224,   159,    71,   227,
     843,   844,    13,   271,   159,   233,   157,   235,   236,   237,
     154,   826,   154,   156,   150,   747,   157,     8,     8,   154,
     919,   379,   865,   580,   155,   154,   925,   153,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      13,   155,   155,   154,   153,   157,    26,   490,   491,   154,
     148,   950,   155,   868,   897,   154,   955,   873,   147,    98,
     104,    73,    13,   331,   154,   908,   154,   106,   107,   108,
     109,   110,   111,   154,    59,    60,   154,   345,   932,   159,
     934,   980,   171,   121,   154,    89,   932,   355,   934,   154,
     122,   155,    71,   936,   156,    98,   153,   940,    13,   121,
     832,   156,   191,   946,   155,    83,   155,   839,   155,   198,
     199,   200,   148,   154,    13,   847,    73,   385,   561,   208,
    1019,    42,    43,    44,    45,    46,    47,    71,    49,   218,
    1029,    73,   490,   491,   492,    13,   990,   953,   154,   153,
     155,   873,  1041,   148,   990,   154,   878,   879,   155,    13,
      13,    71,  1006,   996,   997,    23,    24,   157,  1012,    27,
    1006,   893,    73,   606,   157,    13,  1012,   153,    26,  1068,
     155,    68,    73,    46,   155,    73,   444,   154,  1032,   622,
      87,  1035,  1036,   915,  1000,   154,  1032,   148,    65,  1035,
    1036,  1045,    67,    13,   153,   927,    68,    73,   148,  1045,
     468,   155,   470,   561,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   148,   949,  1061,    46,
      46,   953,   490,   491,   492,    26,    85,   959,   156,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   509,    84,    86,   154,   148,   155,    46,   606,   157,
      59,    60,   148,    84,    46,   148,    84,   615,   102,   702,
     148,   704,    86,   157,   622,   148,   355,   153,  1000,   826,
      73,   156,   154,   157,   542,    59,    60,   545,   338,   147,
     649,   397,   379,   379,   658,  1057,   509,   397,   556,   879,
     883,   742,   737,   561,   615,   343,   385,   386,   748,   614,
     807,   712,   948,   627,   680,    -1,    90,    -1,    -1,    -1,
      -1,   868,   580,   122,    -1,    -1,    -1,    -1,   407,    -1,
      -1,    -1,    -1,   191,   767,    -1,    -1,    -1,    -1,    -1,
     198,   199,   200,    -1,    -1,    -1,   604,   605,   606,    -1,
     208,   150,    -1,    -1,   702,    -1,   704,   615,    -1,    -1,
     218,    -1,    -1,    -1,   622,   444,    -1,   625,    -1,   627,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   457,    -1,
      -1,    -1,   815,    69,    70,    71,    -1,    73,    -1,   468,
      -1,   470,    -1,    79,    -1,   474,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     843,    -1,    -1,   271,    -1,    -1,    -1,    -1,    61,   767,
      -1,    -1,    -1,    -1,   682,    -1,    69,    70,    71,    -1,
     509,    -1,   865,    -1,    -1,    -1,    79,    -1,   124,   125,
     126,   127,   128,   129,   702,    -1,   704,    -1,    -1,   528,
     136,    -1,    -1,    -1,   712,    -1,   142,   143,    -1,    -1,
      -1,    -1,   148,   542,   897,    -1,   545,   815,   111,    -1,
     728,    -1,   158,    -1,   732,   908,    -1,   556,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,   843,    -1,   355,   141,   142,
     143,   144,    -1,   936,    -1,    -1,    -1,   940,    -1,   767,
      69,    70,    71,   946,    73,    -1,    -1,   865,    -1,    -1,
      79,    -1,    -1,    -1,    -1,   604,   605,   385,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,   625,    -1,   627,   897,
      -1,    -1,    -1,    -1,    -1,   634,    -1,   815,    -1,    -1,
     908,    -1,    -1,   996,    -1,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,   654,    -1,   136,    59,    60,
      -1,    -1,    -1,   142,   143,   843,   444,    -1,   936,    -1,
     669,   670,   940,    -1,    -1,    -1,   675,   676,   946,   158,
      -1,    -1,    -1,   682,    -1,    -1,    -1,   865,    -1,    -1,
     468,    28,   470,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   712,    -1,    -1,     9,    10,    11,   897,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   996,   728,
     908,   509,    25,   732,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,   936,    10,
      11,    -1,   940,    -1,   542,    -1,    -1,   545,   946,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   556,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,   580,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,   996,    -1,
      -1,    -1,    -1,   822,    -1,    -1,   604,   605,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   625,    49,   627,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,   155,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    42,    43,   682,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,   712,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
     728,    91,    -1,    -1,   732,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,   145,    -1,   147,   159,    -1,
      -1,   151,   152,   153,    -1,   155,   156,    -1,   158,    -1,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,     3,     4,
       5,     6,     7,   136,    -1,    -1,    -1,    12,   141,   142,
     143,   144,   145,    -1,   147,    -1,    -1,    -1,   151,   152,
     153,    26,   155,   156,    -1,   158,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,     3,     4,     5,     6,
       7,   136,    -1,    -1,    -1,    12,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    26,
     155,   156,    -1,   158,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,     3,     4,     5,     6,     7,   136,
      -1,    -1,    -1,    12,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    26,   155,   156,
      -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,     6,     7,   136,    -1,    -1,
      -1,    12,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    26,   155,   156,    -1,   158,
      -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,   155,   156,    -1,   158,    -1,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,   158,    -1,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
      -1,     3,     4,     5,     6,     7,   136,    -1,    -1,    -1,
      12,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,    31,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    25,    -1,    27,    28,    79,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    98,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    27,    28,    79,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    98,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
     155,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,     3,     4,     5,     6,     7,   136,
      -1,    -1,    -1,    12,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,   154,    -1,    -1,
      -1,   158,    31,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,     6,     7,   136,    -1,    -1,
      -1,    12,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
      31,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
       3,     4,     5,     6,     7,   136,    -1,    -1,    -1,    12,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   158,    31,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,     3,     4,
       5,     6,     7,   136,    -1,    -1,    -1,    12,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,    31,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,     3,     4,     5,     6,
       7,   136,    -1,    -1,    -1,    12,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   158,    31,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,     3,     4,     5,     6,     7,   136,
      -1,    -1,    -1,    12,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,    31,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,     6,     7,   136,    -1,    -1,
      -1,    12,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
      31,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   158,    -1,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,    -1,
     160,   161,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   157,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   157,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   157,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,   157,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   157,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   157,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   155,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   155,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      90,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,   155,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   154,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     154,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   154,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   154,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   154,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   154,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     154,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   154,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   154,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    25,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   122,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    11,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   163,   164,     0,   165,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   105,   109,   110,   111,   113,   114,   115,
     116,   117,   118,   123,   124,   125,   126,   127,   128,   129,
     136,   141,   142,   143,   144,   145,   147,   151,   152,   153,
     155,   156,   158,   160,   161,   166,   167,   172,   176,   177,
     212,   234,   235,   237,   239,   242,   244,   295,   308,   311,
     320,   331,   334,   338,   339,   341,   342,   350,   351,   352,
     353,   354,   356,   357,   363,   373,   376,    71,   111,   141,
     308,   338,   338,   153,   338,   338,   338,   338,   338,   338,
     338,   306,   338,   338,   338,   338,   338,   338,   338,   141,
     144,   166,   320,   341,   342,   352,   341,    31,   338,   367,
     368,   338,   141,   144,   166,   320,   322,   323,   352,   354,
     356,   363,   153,   328,   153,    26,   291,   338,   184,   153,
     153,   153,   194,   153,   155,   338,   155,   338,    71,    71,
     155,   295,   338,   342,   195,   338,   144,   166,   170,   171,
      73,   158,   277,   278,   117,   117,    73,   279,   153,   153,
     153,   153,   153,   153,    73,    78,   137,   138,   139,   369,
     370,   144,   156,   166,   166,    65,    71,    79,    84,    86,
     201,   295,   339,   173,    78,    79,   211,   369,   149,   338,
     338,   173,   156,    78,   329,   369,    78,   369,   144,   153,
       8,   155,    71,    71,    31,   236,   140,     9,    10,    11,
      25,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    49,   155,    59,    60,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   153,   140,   121,
      61,   156,   158,   356,   236,   338,   338,   144,   166,   140,
     140,   340,   342,   122,   159,     8,   336,   144,   166,   140,
     298,   140,   121,   356,   154,   338,   338,     8,   155,   176,
     182,   292,   293,   338,   295,   342,   153,   338,   155,   155,
     155,    13,   155,   155,   156,   155,   166,    90,     8,   155,
     156,   339,   342,     8,   155,    13,     8,   155,   232,   233,
     342,   342,   374,   342,   154,   296,   367,    61,   121,   137,
     370,    72,   338,   342,    78,   137,   370,   166,   169,   155,
     156,   153,   338,    71,    79,   124,   136,   206,   207,   208,
     331,   355,   356,   363,    29,    31,   153,   249,   342,   153,
     338,    29,   148,   148,   155,   155,   148,   174,   148,    13,
     148,   154,   157,   338,   160,   161,    71,   312,    71,   119,
     243,   241,    71,   153,    71,   350,   356,   363,   301,   338,
     302,    26,   303,   299,   300,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   322,    31,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   319,    71,   350,
     343,   338,   358,   338,   154,   166,    71,    71,    31,   338,
      31,   338,   166,   350,   153,   330,   350,   324,   154,   154,
     338,    82,   338,   155,     8,    90,    90,    71,   253,   154,
      42,    43,    61,   124,   141,   144,   166,   320,   331,   332,
     333,   173,    90,    71,   171,   338,   278,   332,    73,     8,
     154,     8,   154,   154,   155,   123,   342,   364,   365,   154,
     371,    71,    61,   157,   157,   153,   164,   168,   314,   148,
     153,    78,    13,   148,   206,   207,   356,    71,   342,   249,
     292,   342,   122,   248,   338,    90,    71,   148,   116,   175,
     176,   212,   234,   235,   338,   157,    31,   275,   276,   295,
     342,    13,   141,   144,   166,   321,   240,   119,   245,   238,
     307,   153,   153,   356,   338,   338,   305,   338,   338,   338,
      63,   342,   275,   153,   153,    71,   156,   350,   359,   361,
     362,   159,   157,   340,   340,   122,   275,   359,    26,   178,
     153,   154,   186,   294,   192,   190,    13,     8,   154,   189,
     332,   332,   332,   335,   337,   153,   144,   166,   140,   157,
      71,   157,    13,   233,   155,   375,   153,     8,   154,    71,
      73,    74,   372,   338,   313,   157,   164,   275,   218,   367,
     209,    13,   202,   248,   155,   249,   150,    90,   249,   203,
     153,   148,   340,   154,     8,   332,   144,   166,   120,   246,
     247,   321,   156,   153,   124,   272,   273,   274,   321,   315,
     316,   338,    26,   322,   154,   317,   318,   338,   360,   344,
      61,   156,    31,   338,   154,   325,   180,   176,   185,   183,
     292,   338,   342,   249,   332,    71,    26,   176,   252,    26,
     156,   254,   122,   159,     8,   336,   335,   166,    71,   102,
     332,   342,   366,   365,    13,   159,   159,   275,   157,   154,
     200,   154,   338,   210,   204,   150,   220,   338,   213,   248,
     204,   154,    31,   295,   342,   166,   247,   156,     8,   280,
     272,   154,     8,    31,    73,   275,   275,   304,   297,   275,
     275,   157,   153,   348,   358,   338,   340,   326,   173,   179,
     338,    26,   176,   259,   155,   248,   248,    13,   173,   155,
     255,   155,   255,   332,   332,   154,   153,   364,   338,   157,
     154,    75,   145,   212,   338,    26,   338,   292,   148,   249,
     148,   155,   340,   280,   321,    99,   106,   107,   108,   109,
     110,   111,   112,   157,   281,   285,   286,   287,   288,   290,
     154,   104,   309,   274,    73,    13,   154,   154,   338,   330,
     154,   154,   349,   345,   159,   157,   121,   327,   181,   260,
     154,   173,   187,   154,   154,   332,    89,   255,    92,    93,
      94,   255,   157,   122,   196,   154,   219,   205,   154,   155,
     225,   248,   216,   157,    71,   282,   308,   288,     8,   155,
     156,   153,   156,    31,    73,    13,   332,   275,   121,   346,
     359,   265,    66,    67,   267,   155,    83,   292,   193,   191,
     155,    92,   155,   338,    26,   155,   258,   157,   332,   321,
     262,   338,   148,   221,   200,   154,   200,    13,    73,   289,
     236,    71,   173,    31,    73,   310,   173,    73,    13,   332,
     154,   359,    66,    67,   270,   153,   176,   155,   154,    26,
     176,   251,   251,   155,   258,   257,   197,    66,    67,   268,
     223,   292,   145,   148,   145,   332,    13,     8,   155,    71,
      13,   157,    73,     8,   154,   157,    13,   332,   347,   153,
      26,    68,   338,   188,   173,   256,   173,    73,   338,    65,
     148,    46,   269,   200,   154,   226,   214,   217,   332,    73,
     283,   332,    31,    73,   332,   348,   338,   173,   155,   154,
      26,   176,   250,    87,   173,   154,   148,   338,   200,    65,
     145,   148,    67,   271,   200,   271,    13,   153,    73,   154,
     261,   173,   155,   198,   263,   148,   145,   148,   224,   222,
     148,    46,   145,    46,   332,   272,    26,   176,    85,   156,
     200,   264,   271,   200,   200,    84,   215,    86,   154,   266,
     155,   173,   145,   200,    46,   145,   145,   148,   271,   148,
     155,   156,   284,   173,   157,   145,    84,    46,    46,   173,
     199,   148,    84,    86,   157,   102,   227,   228,   229,   148,
     148,   153,   229,   321,   230,    73,   154,   231,   156,   173,
     157
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 169 "Zend53/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 173 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 173 "Zend53/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 178 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 179 "Zend53/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 183 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 184 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 185 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 186 "Zend53/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 187 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 188 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 189 "Zend53/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 190 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 191 "Zend53/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 192 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 193 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 194 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 203 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 204 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 205 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 206 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 210 "Zend53/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 211 "Zend53/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 215 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 215 "Zend53/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 225 "Zend53/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 230 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 231 "Zend53/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (2)])) = get_next_op_number(CG(active_op_array));  }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 243 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 245 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 247 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 248 "Zend53/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 249 "Zend53/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 249 "Zend53/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 250 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 251 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 252 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 253 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 254 "Zend53/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 255 "Zend53/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 256 "Zend53/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 260 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 261 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 264 "Zend53/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 265 "Zend53/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 266 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 268 "Zend53/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 269 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 270 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 271 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 271 "Zend53/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 273 "Zend53/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 274 "Zend53/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 275 "Zend53/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 276 "Zend53/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 277 "Zend53/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 278 "Zend53/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 279 "Zend53/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 280 "Zend53/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 285 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 290 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 291 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 292 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 293 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 294 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 295 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 300 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 301 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 301 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 305 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 306 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 310 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 312 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 316 "Zend53/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 316 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 317 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 317 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 318 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 319 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 323 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 324 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 325 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 332 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 334 "Zend53/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 341 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 346 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 347 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 348 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 350 "Zend53/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 354 "Zend53/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 356 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 357 "Zend53/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 358 "Zend53/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 359 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 361 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 362 "Zend53/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 363 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 365 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 368 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 370 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 373 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 374 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 375 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 377 "Zend53/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 380 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 381 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 382 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 384 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 385 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 386 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 390 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 391 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 395 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 396 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 401 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 401 "Zend53/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 401 "Zend53/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 411 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 415 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 419 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 424 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 425 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 430 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 431 "Zend53/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 436 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 440 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 442 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 446 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 451 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 452 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 453 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 457 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 458 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 462 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 476 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 477 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 481 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 482 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 487 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 488 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 510 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 511 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 516 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 517 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 518 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 519 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 524 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 525 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 525 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 526 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 526 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 545 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 545 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 550 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 550 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 551 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 551 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 556 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 556 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 591 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 592 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 593 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 594 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 595 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 596 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 597 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 598 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 603 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 604 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 605 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 610 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 611 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 616 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 617 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 618 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 619 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 620 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 621 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 625 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 626 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 631 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 632 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 633 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 638 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 639 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 640 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 641 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 653 "Zend53/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 655 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 656 "Zend53/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 661 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 662 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 666 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 667 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 671 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 672 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 676 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 677 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 681 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 682 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 683 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 684 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 685 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 686 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 690 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 691 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 692 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 693 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 697 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 698 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 702 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 703 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 708 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 709 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 713 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 713 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 714 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 718 "Zend53/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 718 "Zend53/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 719 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 720 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 721 "Zend53/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 721 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).u.EA.type = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 722 "Zend53/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 722 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 723 "Zend53/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 724 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 725 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 726 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 727 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 728 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 729 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 730 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 731 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 732 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 733 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 734 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 735 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 736 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 737 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 738 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 739 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 739 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 740 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 740 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 741 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 741 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 742 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 742 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 743 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 746 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 747 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 748 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 749 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 750 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 751 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 752 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 753 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 754 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 755 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 756 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 757 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 758 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 759 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 760 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 761 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 762 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 763 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 764 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 765 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 766 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 767 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 768 "Zend53/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 769 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 770 "Zend53/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 771 "Zend53/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 772 "Zend53/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 773 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 774 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 775 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 776 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 777 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 778 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 779 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 780 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 781 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 782 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 783 "Zend53/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 784 "Zend53/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 784 "Zend53/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 785 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 786 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 787 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 788 "Zend53/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 789 "Zend53/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 790 "Zend53/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 791 "Zend53/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 795 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 804 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 805 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 806 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 807 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 811 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 813 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 814 "Zend53/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 816 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 817 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 819 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 820 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 822 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 823 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 825 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 826 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 828 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 829 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 831 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 832 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 834 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 838 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 839 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 840 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 841 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 845 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 846 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 847 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 853 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 854 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 859 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 860 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 861 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 862 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 873 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 877 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 878 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 879 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 883 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 884 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 885 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 890 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 891 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 896 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 897 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 898 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 899 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 900 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 901 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 902 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 903 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 904 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 905 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 906 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 907 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 912 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 913 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 914 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 915 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 916 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 917 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 918 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 919 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 920 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 924 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 928 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 929 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 930 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 931 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 932 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 933 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 934 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 935 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 940 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 941 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 950 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 951 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 952 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 953 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 957 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 958 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 963 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 968 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 973 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 978 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 979 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 980 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 981 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 985 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 986 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = 0; }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 991 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 991 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 995 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 997 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 999 "Zend53/zend_language_parser.y"
    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1003 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1004 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1008 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1009 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1014 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1018 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1019 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1024 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1025 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1026 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1030 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1031 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1035 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1036 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1037 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1042 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1043 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1047 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1048 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1053 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1054 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1054 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1058 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1059 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1060 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1064 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1065 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1069 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1070 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1080 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1081 "Zend53/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1081 "Zend53/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1082 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1087 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1088 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1092 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1093 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1094 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1095 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1096 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1097 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1098 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1099 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1103 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1104 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1105 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1106 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1112 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1113 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1113 "Zend53/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1114 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1115 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1116 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1117 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1122 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1123 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1124 "Zend53/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1129 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1130 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1131 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1132 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1133 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1134 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1135 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1139 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1140 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1140 "Zend53/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1144 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1145 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 6608 "Zend53/zend_language_parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 1148 "Zend53/zend_language_parser.y"


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
