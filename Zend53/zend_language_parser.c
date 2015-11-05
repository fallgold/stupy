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
#define YYLAST   6685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  541
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1092

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
       2,     2,     2,    48,   158,     2,   159,    47,    31,     2,
     153,   154,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   155,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   160,    30,     2,   161,     2,     2,     2,
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
     339,   341,   343,   345,   347,   351,   356,   357,   362,   363,
     369,   371,   374,   376,   378,   380,   384,   388,   393,   397,
     401,   407,   411,   416,   417,   418,   419,   438,   439,   440,
     456,   457,   458,   470,   471,   472,   473,   492,   493,   494,
     512,   513,   514,   530,   532,   533,   535,   538,   539,   540,
     551,   553,   557,   559,   561,   563,   564,   566,   567,   578,
     579,   588,   589,   597,   599,   602,   605,   606,   609,   611,
     612,   615,   616,   619,   621,   625,   626,   629,   631,   634,
     636,   641,   643,   648,   650,   655,   659,   665,   669,   674,
     679,   685,   686,   687,   694,   695,   701,   703,   705,   707,
     712,   713,   714,   722,   723,   724,   732,   733,   742,   743,
     744,   753,   754,   757,   758,   763,   767,   768,   772,   773,
     778,   780,   781,   784,   788,   794,   799,   804,   810,   818,
     825,   826,   828,   830,   832,   833,   835,   837,   840,   844,
     848,   853,   857,   859,   861,   864,   869,   873,   879,   881,
     885,   888,   889,   890,   895,   898,   899,   909,   911,   915,
     917,   919,   920,   922,   924,   927,   929,   931,   933,   935,
     937,   939,   943,   949,   951,   955,   961,   966,   970,   972,
     973,   975,   976,   981,   983,   984,   992,   996,  1001,  1002,
    1010,  1011,  1016,  1019,  1023,  1027,  1031,  1035,  1039,  1043,
    1047,  1051,  1055,  1059,  1063,  1066,  1069,  1072,  1075,  1076,
    1081,  1082,  1087,  1088,  1093,  1094,  1099,  1103,  1107,  1111,
    1115,  1119,  1123,  1127,  1131,  1135,  1139,  1143,  1146,  1149,
    1152,  1155,  1159,  1163,  1167,  1171,  1175,  1179,  1183,  1187,
    1191,  1195,  1196,  1197,  1205,  1206,  1212,  1214,  1217,  1220,
    1223,  1226,  1229,  1232,  1235,  1238,  1239,  1243,  1245,  1250,
    1254,  1258,  1261,  1262,  1273,  1275,  1276,  1281,  1285,  1290,
    1292,  1295,  1296,  1302,  1303,  1311,  1312,  1319,  1320,  1328,
    1329,  1337,  1338,  1346,  1347,  1355,  1356,  1362,  1364,  1366,
    1370,  1373,  1375,  1379,  1382,  1384,  1386,  1387,  1388,  1395,
    1397,  1400,  1401,  1404,  1405,  1408,  1412,  1413,  1415,  1417,
    1418,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1446,  1449,  1451,  1453,  1457,  1460,  1463,  1466,
    1471,  1475,  1477,  1481,  1483,  1485,  1487,  1491,  1494,  1496,
    1500,  1504,  1505,  1508,  1509,  1511,  1517,  1521,  1525,  1527,
    1529,  1531,  1533,  1535,  1537,  1538,  1539,  1547,  1549,  1552,
    1553,  1554,  1559,  1560,  1565,  1566,  1568,  1571,  1575,  1579,
    1581,  1583,  1585,  1587,  1590,  1592,  1594,  1597,  1602,  1607,
    1609,  1611,  1616,  1617,  1619,  1621,  1622,  1625,  1630,  1635,
    1637,  1639,  1643,  1645,  1648,  1652,  1654,  1656,  1657,  1663,
    1664,  1665,  1668,  1674,  1678,  1682,  1684,  1691,  1696,  1701,
    1704,  1707,  1710,  1712,  1715,  1717,  1720,  1723,  1726,  1728,
    1729,  1735,  1739,  1743,  1750,  1754,  1758,  1762,  1764,  1766,
    1768,  1773,  1778,  1781,  1784,  1789,  1792,  1795,  1797,  1798,
    1803,  1807
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
      -1,   355,    -1,   331,    -1,    78,    -1,   158,   369,   158,
      -1,   124,   153,   367,   154,    -1,    -1,   206,    13,   209,
     338,    -1,    -1,   208,   206,    13,   210,   338,    -1,   207,
      -1,   208,   207,    -1,    79,    -1,    78,    -1,   369,    -1,
     145,   201,   148,    -1,   145,   295,   148,    -1,   145,   295,
     155,   148,    -1,   147,   173,   148,    -1,   152,   338,   148,
      -1,   152,   149,    13,   338,   148,    -1,   151,   211,   148,
      -1,   145,    71,   208,   148,    -1,    -1,    -1,    -1,   145,
      86,   153,   338,    90,   213,   249,   248,   154,   148,   214,
     200,   145,   215,   271,    46,    86,   148,    -1,    -1,    -1,
     145,    86,   338,    90,   249,   248,   148,   216,   200,   145,
     217,   271,    46,    86,   148,    -1,    -1,    -1,   145,    65,
     338,   148,   218,   200,   145,   219,   262,   268,   269,    -1,
      -1,    -1,    -1,   145,    84,   153,   292,   155,   220,   292,
     155,   221,   292,   154,   148,   222,   200,   145,    46,    84,
     148,    -1,    -1,    -1,   145,    84,   153,   249,   248,   150,
     338,   154,   148,   223,   200,   145,   224,   271,    46,    84,
     148,    -1,    -1,    -1,   145,    84,   249,   248,   150,   338,
     148,   225,   200,   145,   226,   271,    46,    84,   148,    -1,
     228,    -1,    -1,   229,    -1,   228,   229,    -1,    -1,    -1,
     102,   153,   321,   230,    73,   154,   231,   156,   173,   157,
      -1,   233,    -1,   232,     8,   233,    -1,   342,    -1,   237,
      -1,   239,    -1,    -1,    31,    -1,    -1,   308,   236,    71,
     238,   153,   272,   154,   156,   173,   157,    -1,    -1,   242,
      71,   243,   240,   246,   156,   280,   157,    -1,    -1,   244,
      71,   241,   245,   156,   280,   157,    -1,   117,    -1,   110,
     117,    -1,   109,   117,    -1,    -1,   119,   321,    -1,   118,
      -1,    -1,   119,   247,    -1,    -1,   120,   247,    -1,   321,
      -1,   247,     8,   321,    -1,    -1,   122,   249,    -1,   342,
      -1,    31,   342,    -1,   176,    -1,    26,   173,    85,   155,
      -1,   176,    -1,    26,   173,    87,   155,    -1,   176,    -1,
      26,   173,    89,   155,    -1,    71,    13,   332,    -1,   253,
       8,    71,    13,   332,    -1,   156,   255,   157,    -1,   156,
     155,   255,   157,    -1,    26,   255,    92,   155,    -1,    26,
     155,   255,    92,   155,    -1,    -1,    -1,   255,    93,   338,
     258,   256,   173,    -1,    -1,   255,    94,   258,   257,   173,
      -1,    26,    -1,   155,    -1,   176,    -1,    26,   173,    83,
     155,    -1,    -1,    -1,   260,    66,   153,   338,   154,   261,
     176,    -1,    -1,    -1,   262,    66,   338,   148,   263,   200,
     145,    -1,    -1,   262,    67,    65,   338,   148,   264,   200,
     145,    -1,    -1,    -1,   265,    66,   153,   338,   154,    26,
     266,   173,    -1,    -1,    67,   176,    -1,    -1,    67,   148,
     200,   145,    -1,    46,    65,   148,    -1,    -1,    67,    26,
     173,    -1,    -1,    67,   148,   200,   145,    -1,   273,    -1,
      -1,   274,    73,    -1,   274,    31,    73,    -1,   274,    31,
      73,    13,   332,    -1,   274,    73,    13,   332,    -1,   273,
       8,   274,    73,    -1,   273,     8,   274,    31,    73,    -1,
     273,     8,   274,    31,    73,    13,   332,    -1,   273,     8,
     274,    73,    13,   332,    -1,    -1,   321,    -1,   124,    -1,
     276,    -1,    -1,   295,    -1,   342,    -1,    31,   340,    -1,
     276,     8,   295,    -1,   276,     8,   342,    -1,   276,     8,
      31,   340,    -1,   277,     8,   278,    -1,   278,    -1,    73,
      -1,   159,   339,    -1,   159,   156,   338,   157,    -1,   279,
       8,    73,    -1,   279,     8,    73,    13,   332,    -1,    73,
      -1,    73,    13,   332,    -1,   280,   281,    -1,    -1,    -1,
     285,   282,   289,   155,    -1,   290,   155,    -1,    -1,   286,
     308,   236,    71,   283,   153,   272,   154,   284,    -1,   155,
      -1,   156,   173,   157,    -1,   287,    -1,   112,    -1,    -1,
     287,    -1,   288,    -1,   287,   288,    -1,   106,    -1,   107,
      -1,   108,    -1,   111,    -1,   110,    -1,   109,    -1,   289,
       8,    73,    -1,   289,     8,    73,    13,   332,    -1,    73,
      -1,    73,    13,   332,    -1,   290,     8,    71,    13,   332,
      -1,    99,    71,    13,   332,    -1,   291,     8,   338,    -1,
     338,    -1,    -1,   293,    -1,    -1,   293,     8,   294,   338,
      -1,   338,    -1,    -1,   123,   153,   296,   364,   154,    13,
     338,    -1,   342,    13,   338,    -1,   342,    13,    31,   342,
      -1,    -1,   342,    13,    31,    63,   322,   297,   330,    -1,
      -1,    63,   322,   298,   330,    -1,    62,   338,    -1,   342,
      24,   338,    -1,   342,    23,   338,    -1,   342,    22,   338,
      -1,   342,    21,   338,    -1,   342,    20,   338,    -1,   342,
      19,   338,    -1,   342,    18,   338,    -1,   342,    17,   338,
      -1,   342,    16,   338,    -1,   342,    15,   338,    -1,   342,
      14,   338,    -1,   341,    60,    -1,    60,   341,    -1,   341,
      59,    -1,    59,   341,    -1,    -1,   338,    27,   299,   338,
      -1,    -1,   338,    28,   300,   338,    -1,    -1,   338,     9,
     301,   338,    -1,    -1,   338,    11,   302,   338,    -1,   338,
      10,   338,    -1,   338,    31,   338,    -1,   338,    30,   338,
      -1,   338,    44,   338,    -1,   338,    42,   338,    -1,   338,
      43,   338,    -1,   338,    45,   338,    -1,   338,    46,   338,
      -1,   338,    47,   338,    -1,   338,    41,   338,    -1,   338,
      40,   338,    -1,    42,   338,    -1,    43,   338,    -1,    48,
     338,    -1,    50,   338,    -1,   338,    33,   338,    -1,   338,
      32,   338,    -1,   338,    35,   338,    -1,   338,    34,   338,
      -1,   338,    36,   338,    -1,   338,    39,   338,    -1,   338,
      37,   338,    -1,   338,    38,   338,    -1,   338,    49,   322,
      -1,   153,   338,   154,    -1,    -1,    -1,   338,    25,   303,
     338,    26,   304,   338,    -1,    -1,   338,    25,    26,   305,
     338,    -1,   374,    -1,    58,   338,    -1,    57,   338,    -1,
      56,   338,    -1,    55,   338,    -1,    54,   338,    -1,    53,
     338,    -1,    52,   338,    -1,    64,   328,    -1,    -1,    51,
     306,   338,    -1,   334,    -1,   124,   153,   367,   154,    -1,
      61,   367,   160,    -1,   161,   329,   161,    -1,    12,   338,
      -1,    -1,   308,   236,   153,   307,   272,   154,   309,   156,
     173,   157,    -1,    98,    -1,    -1,   104,   153,   310,   154,
      -1,   310,     8,    73,    -1,   310,     8,    31,    73,    -1,
      73,    -1,    31,    73,    -1,    -1,   166,   153,   312,   275,
     154,    -1,    -1,   141,   144,   166,   153,   313,   275,   154,
      -1,    -1,   144,   166,   153,   314,   275,   154,    -1,    -1,
     320,   140,    71,   153,   315,   275,   154,    -1,    -1,   320,
     140,   350,   153,   316,   275,   154,    -1,    -1,   352,   140,
      71,   153,   317,   275,   154,    -1,    -1,   352,   140,   350,
     153,   318,   275,   154,    -1,    -1,   350,   153,   319,   275,
     154,    -1,   111,    -1,   166,    -1,   141,   144,   166,    -1,
     144,   166,    -1,   166,    -1,   141,   144,   166,    -1,   144,
     166,    -1,   320,    -1,   323,    -1,    -1,    -1,   354,   121,
     324,   359,   325,   326,    -1,   354,    -1,   326,   327,    -1,
      -1,   121,   359,    -1,    -1,   153,   154,    -1,   153,   338,
     154,    -1,    -1,    78,    -1,   369,    -1,    -1,   153,   275,
     154,    -1,    69,    -1,    70,    -1,    79,    -1,   128,    -1,
     129,    -1,   143,    -1,   125,    -1,   126,    -1,   127,    -1,
     142,    -1,   136,    78,   137,    -1,   136,   137,    -1,   331,
      -1,   166,    -1,   141,   144,   166,    -1,   144,   166,    -1,
      42,   332,    -1,    43,   332,    -1,   124,   153,   335,   154,
      -1,    61,   335,   160,    -1,   333,    -1,   320,   140,    71,
      -1,    72,    -1,   377,    -1,   166,    -1,   141,   144,   166,
      -1,   144,   166,    -1,   331,    -1,   158,   369,   158,    -1,
     136,   369,   137,    -1,    -1,   337,   336,    -1,    -1,     8,
      -1,   337,     8,   332,   122,   332,    -1,   337,     8,   332,
      -1,   332,   122,   332,    -1,   332,    -1,   339,    -1,   295,
      -1,   342,    -1,   342,    -1,   342,    -1,    -1,    -1,   353,
     121,   343,   359,   344,   348,   345,    -1,   353,    -1,   345,
     346,    -1,    -1,    -1,   121,   359,   347,   348,    -1,    -1,
     153,   349,   275,   154,    -1,    -1,   356,    -1,   363,   356,
      -1,   320,   140,   350,    -1,   352,   140,   350,    -1,   356,
      -1,   354,    -1,   311,    -1,   356,    -1,   363,   356,    -1,
     351,    -1,   356,    -1,   363,   356,    -1,   356,    61,   358,
     160,    -1,   356,   156,   338,   157,    -1,   357,    -1,    73,
      -1,   159,   156,   338,   157,    -1,    -1,   338,    -1,   361,
      -1,    -1,   350,   360,    -1,   361,    61,   358,   160,    -1,
     361,   156,   338,   157,    -1,   362,    -1,    71,    -1,   156,
     338,   157,    -1,   159,    -1,   363,   159,    -1,   364,     8,
     365,    -1,   365,    -1,   342,    -1,    -1,   123,   153,   366,
     364,   154,    -1,    -1,    -1,   368,   336,    -1,   368,     8,
     338,   122,   338,    -1,   368,     8,   338,    -1,   338,   122,
     338,    -1,   338,    -1,   368,     8,   338,   122,    31,   340,
      -1,   368,     8,    31,   340,    -1,   338,   122,    31,   340,
      -1,    31,   340,    -1,   369,   370,    -1,   369,    78,    -1,
     370,    -1,    78,   370,    -1,   372,    -1,    78,   372,    -1,
     369,   372,    -1,    78,    78,    -1,    73,    -1,    -1,    73,
      61,   371,   373,   160,    -1,    73,   121,    71,    -1,   138,
     338,   157,    -1,   138,    72,    61,   338,   160,   157,    -1,
     139,   342,   157,    -1,   156,   351,   157,    -1,   156,   377,
     157,    -1,    71,    -1,    74,    -1,    73,    -1,   114,   153,
     375,   154,    -1,   115,   153,   342,   154,    -1,     7,   338,
      -1,     6,   338,    -1,     5,   153,   338,   154,    -1,     4,
     338,    -1,     3,   338,    -1,   342,    -1,    -1,   375,     8,
     376,   342,    -1,   320,   140,    71,    -1,   352,   140,    71,
      -1
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
     306,   310,   311,   312,   313,   314,   318,   318,   319,   319,
     320,   321,   325,   326,   327,   334,   336,   343,   348,   349,
     350,   352,   356,   358,   359,   360,   358,   363,   364,   362,
     367,   370,   367,   375,   376,   377,   374,   382,   383,   381,
     386,   387,   385,   392,   393,   397,   398,   403,   403,   403,
     408,   409,   413,   417,   421,   426,   427,   432,   432,   438,
     437,   444,   443,   453,   454,   455,   459,   460,   464,   467,
     469,   472,   474,   478,   479,   483,   484,   489,   490,   494,
     495,   500,   501,   506,   507,   512,   513,   518,   519,   520,
     521,   526,   527,   527,   528,   528,   533,   534,   539,   540,
     545,   547,   547,   550,   552,   552,   553,   553,   556,   558,
     558,   562,   564,   567,   569,   573,   576,   578,   581,   583,
     587,   588,   593,   594,   595,   596,   597,   598,   599,   600,
     605,   606,   607,   612,   613,   618,   619,   620,   621,   622,
     623,   627,   628,   633,   634,   635,   640,   641,   642,   643,
     649,   650,   655,   655,   656,   657,   657,   663,   664,   668,
     669,   673,   674,   678,   679,   683,   684,   685,   686,   687,
     688,   692,   693,   694,   695,   699,   700,   704,   705,   710,
     711,   715,   715,   716,   720,   720,   721,   722,   723,   723,
     724,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,   741,
     742,   742,   743,   743,   744,   744,   745,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   772,   775,   775,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   786,   787,   788,   789,
     790,   791,   792,   792,   797,   800,   802,   806,   807,   808,
     809,   813,   813,   816,   816,   819,   819,   822,   822,   825,
     825,   828,   828,   831,   831,   834,   834,   840,   841,   842,
     843,   847,   848,   849,   855,   856,   861,   862,   861,   864,
     869,   870,   875,   879,   880,   881,   885,   886,   887,   892,
     893,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   926,   930,   931,   932,   933,   934,   935,   936,
     937,   942,   943,   946,   948,   952,   953,   954,   955,   959,
     960,   965,   970,   975,   980,   981,   980,   983,   987,   988,
     993,   993,   997,   997,  1001,  1005,  1006,  1010,  1011,  1016,
    1020,  1021,  1026,  1027,  1028,  1032,  1033,  1037,  1038,  1039,
    1044,  1045,  1049,  1050,  1055,  1056,  1056,  1060,  1061,  1062,
    1066,  1067,  1071,  1072,  1076,  1077,  1082,  1083,  1083,  1084,
    1089,  1090,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1118,  1119,
    1119,  1120,  1121,  1122,  1123,  1124,  1128,  1132,  1133,  1134,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1149,  1150,  1150,
    1154,  1155
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
  "\"{include (T_TPL_INCLUDE)\"", "'('", "')'", "';'", "'{'", "'}'",
  "'\"'", "'$'", "']'", "'`'", "$accept", "start", "top_statement_list",
  "$@1", "namespace_name", "top_statement", "$@2", "$@3",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "$@4", "inner_statement", "statement",
  "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "tpl_block",
  "tpl_modifier_list", "$@27", "$@28", "tpl_modifier_param_list", "$@29",
  "tpl_inner_tpl_attr_name", "tpl_inner_tpl_attr_anony",
  "tpl_inner_tpl_attr_list", "$@30", "$@31", "tpl_encaps_list",
  "tpl_statement", "@32", "$@33", "$@34", "@35", "$@36", "$@37", "$@38",
  "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
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
  "tpl_encaps_var", "encaps_var_offset", "internal_functions_in_yacc",
  "isset_variables", "$@89", "class_constant", YY_NULL
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
     386,   387,   388,    40,    41,    59,   123,   125,    34,    36,
      93,    96
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
     206,   207,   207,   207,   207,   207,   209,   208,   210,   208,
     208,   208,   211,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   213,   214,   215,   212,   216,   217,   212,
     218,   219,   212,   220,   221,   222,   212,   223,   224,   212,
     225,   226,   212,   227,   227,   228,   228,   230,   231,   229,
     232,   232,   233,   234,   235,   236,   236,   238,   237,   240,
     239,   241,   239,   242,   242,   242,   243,   243,   244,   245,
     245,   246,   246,   247,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   254,
     254,   255,   256,   255,   257,   255,   258,   258,   259,   259,
     260,   261,   260,   262,   263,   262,   264,   262,   265,   266,
     265,   267,   267,   268,   268,   269,   270,   270,   271,   271,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   273,
     274,   274,   274,   275,   275,   276,   276,   276,   276,   276,
     276,   277,   277,   278,   278,   278,   279,   279,   279,   279,
     280,   280,   282,   281,   281,   283,   281,   284,   284,   285,
     285,   286,   286,   287,   287,   288,   288,   288,   288,   288,
     288,   289,   289,   289,   289,   290,   290,   291,   291,   292,
     292,   294,   293,   293,   296,   295,   295,   295,   297,   295,
     298,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   299,   295,
     300,   295,   301,   295,   302,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   303,   304,   295,   305,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   306,   295,   295,   295,   295,
     295,   295,   307,   295,   308,   309,   309,   310,   310,   310,
     310,   312,   311,   313,   311,   314,   311,   315,   311,   316,
     311,   317,   311,   318,   311,   319,   311,   320,   320,   320,
     320,   321,   321,   321,   322,   322,   324,   325,   323,   323,
     326,   326,   327,   328,   328,   328,   329,   329,   329,   330,
     330,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   334,   334,   334,   334,   334,   334,   334,
     334,   335,   335,   336,   336,   337,   337,   337,   337,   338,
     338,   339,   340,   341,   343,   344,   342,   342,   345,   345,
     347,   346,   349,   348,   348,   350,   350,   351,   351,   352,
     353,   353,   354,   354,   354,   355,   355,   356,   356,   356,
     357,   357,   358,   358,   359,   360,   359,   361,   361,   361,
     362,   362,   363,   363,   364,   364,   365,   366,   365,   365,
     367,   367,   368,   368,   368,   368,   368,   368,   368,   368,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   371,
     370,   370,   370,   370,   370,   370,   372,   373,   373,   373,
     374,   374,   374,   374,   374,   374,   374,   375,   376,   375,
     377,   377
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
       1,     1,     1,     1,     3,     4,     0,     4,     0,     5,
       1,     2,     1,     1,     1,     3,     3,     4,     3,     3,
       5,     3,     4,     0,     0,     0,    18,     0,     0,    15,
       0,     0,    11,     0,     0,     0,    18,     0,     0,    17,
       0,     0,    15,     1,     0,     1,     2,     0,     0,    10,
       1,     3,     1,     1,     1,     0,     1,     0,    10,     0,
       8,     0,     7,     1,     2,     2,     0,     2,     1,     0,
       2,     0,     2,     1,     3,     0,     2,     1,     2,     1,
       4,     1,     4,     1,     4,     3,     5,     3,     4,     4,
       5,     0,     0,     6,     0,     5,     1,     1,     1,     4,
       0,     0,     7,     0,     0,     7,     0,     8,     0,     0,
       8,     0,     2,     0,     4,     3,     0,     3,     0,     4,
       1,     0,     2,     3,     5,     4,     4,     5,     7,     6,
       0,     1,     1,     1,     0,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     2,     4,     3,     5,     1,     3,
       2,     0,     0,     4,     2,     0,     9,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     0,     7,     3,     4,     0,     7,
       0,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     0,     7,     0,     5,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     3,     1,     4,     3,
       3,     2,     0,    10,     1,     0,     4,     3,     4,     1,
       2,     0,     5,     0,     7,     0,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     5,     1,     1,     3,
       2,     1,     3,     2,     1,     1,     0,     0,     6,     1,
       2,     0,     2,     0,     2,     3,     0,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     3,     2,     2,     2,     4,
       3,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     1,     2,     0,
       0,     4,     0,     4,     0,     1,     2,     3,     3,     1,
       1,     1,     1,     2,     1,     1,     2,     4,     4,     1,
       1,     4,     0,     1,     1,     0,     2,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     0,     5,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     2,     2,     2,     1,     0,
       5,     3,     3,     6,     3,     3,     3,     1,     1,     1,
       4,     4,     2,     2,     4,     2,     2,     1,     0,     4,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,     0,     0,   403,     0,
     411,   412,     6,   433,   480,    67,   413,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   364,     0,     0,
      79,     0,     0,     0,     0,     0,   387,     0,     0,     0,
       0,   163,   168,     0,     0,   417,   418,   419,   414,   415,
       0,     0,   420,   416,     0,     0,    30,     0,     0,     0,
      78,    30,     0,   492,   406,   435,     4,     0,     8,    36,
      19,     9,    10,   153,   154,     0,     0,   450,   155,   471,
       0,   438,   357,     0,   449,     0,   451,     0,   474,     0,
     457,   470,   472,   479,     0,   346,   434,     6,   387,     0,
     155,   536,   535,     0,   533,   532,   361,   327,   328,   329,
     330,     0,   353,   352,   351,   350,   349,   348,   347,     0,
       0,   388,     0,   307,   453,     0,   305,     0,   505,     0,
     443,   292,     0,     0,   388,   394,   290,   395,     0,   399,
     472,     0,     0,   354,     0,    37,     0,   278,     0,    45,
     279,     0,     0,     0,    57,     0,    59,     0,     0,     0,
      61,   450,     0,   451,     0,     0,     0,    22,     0,    21,
     243,     0,     0,   242,   165,   164,   248,     0,     0,     0,
       0,     0,   284,   500,   518,     0,   422,     0,     0,     0,
       0,   512,   514,     0,    15,     0,   437,     0,     6,   413,
       0,     0,     0,   450,   449,    28,   113,   112,     0,   114,
       0,     0,     0,    28,     0,     0,     0,   407,     0,   408,
       0,   371,     0,    18,   166,   161,   156,     0,     0,   312,
       0,   314,   341,   308,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,   306,   304,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
       0,   454,   482,     0,   493,   473,     0,     0,   356,     0,
     390,     0,     0,   509,   452,     0,   359,   444,   501,     0,
     390,     0,   409,     0,   396,   473,   404,     0,     0,     0,
      66,     0,     0,     0,   280,   283,   450,   451,     0,     0,
      58,    60,    86,     0,    62,    63,    30,    85,    24,     0,
       0,    17,     0,   244,   451,     0,    64,     0,     0,    65,
       0,   150,   152,   537,     0,     0,     0,   499,     0,   519,
       0,   517,   421,   513,   515,   433,     0,     0,     0,     0,
       0,     0,   469,     0,   511,   440,   510,   516,   436,     5,
      12,    13,   375,     0,    99,   103,   413,     0,     0,     0,
       0,   110,     0,   102,   101,   475,     0,     0,     0,   279,
     175,   177,     0,     0,     0,   115,   116,     0,    91,   118,
       0,   121,     0,   119,   340,    38,   439,     0,   360,     7,
     234,     0,     0,   159,   169,   157,   362,   540,   467,   465,
       0,     0,   316,     0,   344,     0,     0,     0,   318,   317,
     332,   331,   334,   333,   335,   337,   338,   336,   326,   325,
     320,   321,   319,   322,   323,   324,   339,     0,   286,   303,
     302,   301,   300,   299,   298,   297,   296,   295,   294,   293,
     234,   541,   468,     0,   483,     0,     0,   534,   389,     0,
       0,     0,   504,     0,   503,   389,   467,   234,   291,   468,
       0,   405,    39,   277,     0,     0,    51,   281,    73,    70,
       0,     0,    55,     0,     0,   441,     0,     0,     0,   424,
       0,   423,    27,   431,    28,     0,    23,    20,     0,   241,
     249,   246,     0,     0,   538,   530,   531,    11,     0,   496,
       0,   495,   358,     0,   521,     0,   522,   524,     0,   525,
       0,   526,   373,     3,     5,   234,   130,   500,     0,     0,
     106,   122,     0,   111,   476,    92,   178,   175,     0,   451,
       0,     0,     0,     0,    94,   117,     0,    29,    31,    32,
      33,    34,     0,   481,     0,     0,   233,   450,   451,     0,
       0,     0,   391,   167,   171,     0,     0,     0,   230,   377,
     379,   466,   313,   315,     0,     0,   309,   311,     0,   287,
       0,   381,   383,   490,     0,   485,   455,   484,   489,   477,
     478,   508,   507,     0,     0,   397,    42,     0,    49,    46,
     279,     0,     0,     0,     0,     0,     0,     0,   427,   428,
     448,     0,   443,   441,     0,   426,     0,     0,    25,   245,
       0,   151,    69,     0,   497,   499,     0,   527,   529,   528,
       0,     0,   540,   541,   234,    16,     3,     0,    89,     0,
     104,     0,   108,    96,     0,   133,   176,     0,   123,   175,
      96,     0,   120,   237,   372,     0,    26,     0,   393,     0,
       0,   170,   173,   251,   230,   232,     0,   220,     0,   231,
     234,   234,   345,   342,   288,   386,   234,   234,     0,   486,
     464,   482,     0,     0,   502,   410,   401,    30,    40,     0,
       0,     0,   282,   175,   175,   185,     0,    30,   183,    77,
     191,   191,    56,     0,   430,   444,   442,     0,   425,   432,
       0,   247,   539,   499,   494,     0,   520,     0,     0,    14,
     376,     0,   105,   107,     0,    93,     0,   279,     0,     0,
       0,    95,     0,     0,   450,   451,   392,   172,   251,     0,
     261,     0,   365,   230,     0,   222,     0,     0,     0,   409,
       0,     0,   491,   462,   459,     0,     0,   506,   398,    28,
     200,     0,    30,   198,    47,    52,     0,     0,     0,    28,
     191,     0,   191,     0,   447,   446,   429,    80,     0,   285,
     523,   374,    88,   131,    87,   109,    97,     0,     0,   140,
     175,   127,    35,   240,   261,   174,     0,   265,   266,   267,
     270,   269,   268,   260,   162,   250,   252,     0,   259,   263,
       0,     0,     0,     0,     0,   223,     0,   378,   380,   343,
     289,   382,   384,   234,   456,   487,   488,     0,   400,   208,
     211,     0,    28,   279,    74,    71,   186,     0,     0,     0,
       0,     0,     0,   187,     0,     0,   498,   203,     0,     0,
     134,    89,     0,    89,   160,     0,     0,   155,   264,     0,
     254,    30,     0,    30,     0,   226,     0,   225,     0,     0,
     458,   402,   216,     0,     0,    41,    50,     0,     0,     0,
       0,   184,     0,   189,     0,   196,   197,   194,   188,   445,
      81,   213,    98,   137,   279,     0,     0,     0,     0,   273,
       0,     0,     0,    28,     0,   369,     0,    28,   227,     0,
     224,   463,   460,     0,     0,     0,     0,   212,   199,    53,
      30,   181,    75,    72,   190,   192,    30,     0,     0,     0,
       0,    89,     0,   141,   124,   128,   276,     0,     0,   253,
     255,     0,   158,   370,     0,   366,   363,     0,   229,   464,
       0,    30,     0,     0,     0,    28,    30,    28,     0,     0,
       0,    89,     0,   132,     0,     0,   218,    89,   218,   274,
     271,     0,   275,     0,   367,   228,   461,     0,    28,    44,
     201,    30,   179,    54,     0,    28,    82,   204,     0,     0,
       0,   138,   135,     0,     0,     0,     0,     0,   230,   368,
       0,     0,    28,   182,     0,    89,   206,   214,   215,   218,
      89,    89,     0,   125,     0,   272,     0,   209,   202,     0,
      30,     0,    89,     0,     0,     0,     0,   218,     0,     0,
      30,   180,    28,   205,     0,     0,     0,   219,   142,     0,
     129,   257,    30,   256,    28,    83,   207,     0,     0,     0,
      28,   144,   139,     0,     0,   258,     0,    84,   143,   145,
     136,   126,     0,   146,   147,     0,     0,   148,     0,    30,
      28,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    85,    86,   544,   379,   188,   189,
      87,   225,   410,   567,   941,    89,   617,   780,   707,   849,
     322,   710,   168,   709,   620,   853,   974,   627,   623,   900,
     622,   899,   172,   184,   865,   947,  1024,  1071,   741,   222,
     663,   670,   745,   868,   390,   391,   392,   661,   744,   228,
     804,   749,   987,  1047,   873,   988,   658,   867,   747,   914,
    1030,   951,  1029,   871,   986,  1077,  1078,  1079,  1085,  1088,
     350,   351,    91,    92,   247,    93,   587,    94,   584,   424,
      95,   423,    96,   586,   680,   681,   561,   400,  1003,   942,
     719,   501,   722,   791,   976,   946,   907,   784,   850,  1021,
     911,  1025,  1042,   892,  1050,   895,   950,   983,   935,  1014,
     686,   687,   688,   575,   576,   192,   193,   197,   760,   825,
     876,   991,  1063,   826,   827,   828,   829,   920,   830,   166,
     323,   324,   621,    97,   357,   769,   312,   436,   437,   431,
     433,   435,   768,   594,   131,   588,   120,   833,   926,    99,
     420,   654,   545,   690,   691,   696,   697,   470,   100,   689,
     156,   157,   490,   706,   778,   848,   163,   238,   488,   101,
     630,   513,   102,   631,   308,   632,   182,   104,   303,   105,
     106,   473,   700,   844,   890,   969,   774,   843,   107,   108,
     109,   110,   111,   394,   112,   113,   475,   606,   699,   607,
     608,   114,   530,   531,   733,   149,   150,   210,   211,   533,
     212,   650,   115,   354,   643,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -923
static const yytype_int16 yypact[] =
{
    -923,    65,   106,  -923,  1984,  4903,  4903,   -42,  4903,  4903,
    4903,  4903,  4903,  4903,  4903,  -923,  4903,  4903,  4903,  4903,
    4903,  4903,  4903,   330,   330,  3146,  4903,   419,   -31,   -27,
    -923,  -923,   212,  -923,  -923,  -923,  -923,  4903,  -923,    95,
     119,   129,  -923,   131,  3273,  3400,   222,  -923,   249,  3527,
    -923,  4903,   178,    97,   195,   238,   287,   209,   214,   216,
     235,  -923,  -923,   245,   252,  -923,  -923,  -923,  -923,  -923,
     394,   210,  -923,  -923,   308,  3004,  -923,   469,  3654,  4903,
    -923,  -923,   495,   230,   508,   -45,  -923,    18,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,   320,   342,  -923,   384,  -923,
     321,  -923,  -923,  5463,  -923,    42,  1378,   322,  -923,   337,
     348,  -923,   143,  -923,   126,  -923,  -923,  -923,  -923,   339,
     384,  6559,  6559,  4903,  6559,  6559,  3196,  -923,  -923,   437,
    -923,  4903,  -923,  -923,  -923,  -923,  -923,  -923,  -923,   343,
     308,   -73,   374,  -923,  -923,   382,  -923,   330,  6359,   352,
     518,  -923,   390,   308,   402,   398,  -923,  -923,   415,   440,
      49,   126,  3781,  -923,  4903,  -923,    19,  6559,  2750,  -923,
    4903,  4903,   421,  4903,  -923,  5504,  -923,  5548,   422,   571,
    -923,   442,  6559,  1219,   439,  5589,   308,   -16,    27,  -923,
    -923,   248,    45,  -923,  -923,  -923,   589,    46,   330,   330,
     330,   451,  -923,  3146,   176,   450,  -923,  5030,   330,   468,
     476,  -923,  -923,   308,  -923,   -40,   197,  4903,   377,   575,
     187,  5157,    69,   -61,    47,   471,   520,  -923,   490,   550,
     611,  6110,  5691,   486,   520,   359,  4903,   520,   483,   550,
     578,  -923,   579,  -923,   526,  -923,  -923,    25,   149,  -923,
    4903,  -923,   626,  -923,  -923,  4903,  4903,  4903,  4903,  4903,
    4903,  4903,  4903,  4903,  4903,  4903,  4903,  4903,  4903,  4903,
    4903,  4903,  4903,   419,  -923,  -923,  -923,  3924,  4903,  4903,
    4903,  4903,  4903,  4903,  4903,  4903,  4903,  4903,  4903,  -923,
     156,  -923,  4903,  4903,   230,    68,   500,  5732,  -923,   308,
     -65,   174,   193,  -923,  -923,  4066,  -923,  4208,  -923,   308,
     402,   155,   504,   155,  -923,     6,  -923,  5776,  5819,  4903,
    -923,   581,  4903,   515,   663,  6559,   587,  1507,   607,  5860,
    -923,  -923,  -923,  1363,  -923,  -923,  -923,  -923,   179,   608,
     178,  -923,  4903,  -923,  -923,    97,  -923,  1363,   617,  -923,
      13,  -923,  -923,  -923,    17,   527,   537,   329,   539,  -923,
     623,  -923,  -923,  -923,  -923,   634,  1278,   540,   230,   558,
     542,   561,     6,   546,  -923,  -923,  -923,  -923,   241,  -923,
    -923,  -923,  -923,  6151,  -923,  -923,   691,   552,    -3,   495,
     695,  -923,  1067,  -923,  -923,     6,   126,   642,   330,  4350,
     595,  -923,  4903,  6452,   647,  -923,  -923,   573,  -923,  -923,
    2111,  -923,  4903,  -923,  -923,  -923,  -923,  1837,  -923,  -923,
    4492,   706,   159,  -923,   603,  -923,  -923,   570,   585,     6,
     126,  4903,  6636,  4903,  -923,  4903,  4903,  4903,  1549,  1966,
    3702,  3702,  3702,  3702,  1702,  1702,  1702,  1702,   882,   882,
     298,   298,   298,   437,   437,   437,  -923,    20,  3196,  3196,
    3196,  3196,  3196,  3196,  3196,  3196,  3196,  3196,  3196,  3196,
    4492,   588,   594,    87,  6559,   569,  1919,  -923,   -44,   570,
     588,   330,  6559,   330,  6400,   402,  -923,  4492,  -923,  -923,
      87,  -923,   705,  6559,   596,  5901,  -923,  -923,  -923,  -923,
     732,    30,  -923,  1363,  1363,  1363,   597,   604,   308,   -63,
     612,  -923,  -923,  -923,   600,   680,  -923,  -923,  5294,  -923,
    -923,   740,   330,   625,  -923,  -923,  -923,  -923,   628,  -923,
      55,  -923,  -923,   493,  -923,  4903,  -923,  -923,   202,  -923,
     217,  -923,  -923,   629,  -923,  4492,  -923,  3146,   648,   371,
    -923,  -923,   769,  -923,     6,  -923,  -923,   595,   633,  1318,
     194,   641,  5630,   194,  -923,  -923,   640,  -923,  -923,  -923,
    -923,  -923,  6194,  -923,   330,   644,   791,    56,   403,  1363,
     656,   308,   402,  -923,   683,   159,   649,   653,   367,  -923,
    -923,     6,  6599,  3196,  4903,  6518,  3450,  3577,   419,  -923,
     661,  -923,  -923,  -923,  4903,  -923,  -923,    36,  -923,  -923,
    -923,  -923,  -923,  4634,   662,  -923,  -923,  2750,  -923,  -923,
    4903,  4903,   330,   194,  1363,   736,  2239,    10,  -923,  -923,
     688,   651,   812,  1363,   308,   -26,   751,   721,  -923,  -923,
    1363,  -923,  -923,   330,  -923,   329,   817,  -923,  -923,  -923,
     678,   110,  -923,  -923,  4492,  -923,   682,   689,  -923,   694,
    -923,  4903,  -923,  -923,   703,  -923,  -923,  4903,  -923,   595,
    -923,   707,  -923,  -923,  -923,  4776,  -923,   308,   402,   159,
     693,   837,  -923,  -923,   367,  -923,   708,   856,    54,  -923,
    4492,  4492,  3323,  -923,  -923,  -923,  4492,  4492,  5335,  -923,
     713,  4903,  4903,   330,  6559,  -923,  -923,  -923,  -923,  4903,
    2367,   714,  6559,   595,   595,  -923,   855,  -923,  -923,  -923,
     715,   716,  -923,  1363,  -923,  1363,  -923,   718,    92,  -923,
     723,  -923,  -923,   329,  -923,  4903,  -923,   717,   724,  -923,
    -923,   226,  -923,  6559,  4903,   853,  4903,  4903,  6235,   194,
     735,   853,   729,   330,    60,  1104,   402,   837,  -923,   159,
     725,   734,   782,   335,   816,   877,   737,   738,  4903,   504,
     739,   742,  -923,  -923,  -923,   741,  5376,  -923,   776,   316,
    -923,  5944,  -923,  -923,  -923,  -923,   745,   746,  1363,   813,
    -923,   336,  -923,   236,  -923,   781,  -923,  -923,    61,  3196,
    -923,  -923,  -923,  3004,  -923,  6559,  -923,  5985,   749,  -923,
     595,  -923,  -923,  -923,   748,  -923,   836,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,   810,   576,  -923,
      48,   753,   757,   755,    59,   900,  1363,  -923,  -923,  3323,
    -923,  -923,  -923,  4492,   794,  -923,  -923,    87,  -923,  -923,
     369,   761,   834,  4903,  -923,  -923,  -923,   764,   477,   766,
    4903,    14,   459,  -923,  1363,   159,  -923,  -923,  4903,   774,
    -923,  -923,   778,  -923,  -923,   917,   860,   384,  -923,   864,
    -923,  -923,   240,  -923,   863,   924,  1363,  -923,   785,    87,
    -923,  -923,   376,   788,  2750,  -923,  -923,   787,   792,  2495,
    2495,  -923,   790,  -923,  5422,  -923,  -923,  -923,  -923,  -923,
    -923,   387,  6559,  -923,  4903,   484,   799,   521,  1363,   935,
      51,   878,   937,   795,   881,  -923,    62,   798,   938,  1363,
    -923,  -923,  -923,   803,   932,   892,  4903,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,   888,  4903,   -15,
     916,  -923,   809,  3004,  -923,  3004,  -923,  1363,   891,  -923,
    -923,  1363,  -923,  -923,   263,  -923,  -923,  1363,  -923,   713,
    4903,  -923,   811,  6026,  2623,   883,  -923,   233,   814,  6276,
    4903,  -923,   904,  -923,   564,   824,   906,  -923,   906,  -923,
     961,   822,  -923,   903,  -923,  -923,  -923,  6069,   909,  -923,
    -923,  -923,  -923,  -923,   825,   498,  -923,  -923,  6318,   592,
     831,  3004,  -923,   833,   936,   632,   941,  1363,   367,  -923,
     957,  2750,   899,  -923,   835,  -923,  -923,  3004,  -923,   906,
    -923,  -923,   912,  3004,   907,  -923,   843,  -923,  -923,   844,
    -923,   645,  -923,   955,   657,   667,   854,   906,   875,   310,
    -923,  -923,   846,  3004,   699,   920,  2877,  3004,  -923,   978,
    -923,  -923,  -923,  -923,   574,  -923,  3004,   896,   942,   954,
     889,   943,  -923,   901,   902,  -923,   894,  -923,   943,  -923,
    -923,  -923,   159,  -923,  -923,   979,   897,  -923,   898,  -923,
     905,  -923
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -923,  -923,  -356,  -923,   -23,  -923,  -923,  -923,  -923,   720,
    -923,   158,  -923,  -923,     4,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -768,  -923,
    -923,  -923,   383,  -923,   664,   666,  -923,  -923,  -923,  -923,
       2,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,   -17,  -923,  -923,
    -923,   541,   655,   658,  -104,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,   388,  -533,  -369,  -923,   166,
    -923,  -923,  -923,  -488,  -923,  -923,   167,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  -922,
    -669,  -923,   311,  -456,  -923,  -923,   728,  -923,   317,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,   250,  -923,  -923,  -923,
    -389,  -923,  -923,    37,  -923,  -923,  -923,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,    -1,  -923,  -923,  -923,
    -923,  -923,  -923,  -923,  -923,  -923,  -923,  -923,  1057,  -420,
    -256,  -923,  -923,  -923,  -923,  -923,  -923,  -923,   307,  -140,
    -292,  -923,  -923,   444,   447,  -923,   750,   -68,  -461,   372,
    1082,  -923,  -923,  -923,  -923,  -923,   113,  -923,  -229,   874,
    1152,  -923,   -18,  -923,   -22,  -923,   385,  -479,  -923,  -923,
    -923,     5,   354,   443,  -923,  -191,  -923,   -38,  -192,  -923,
    -177,  -923,  -923,  -923,  -923,   876
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -470
static const yytype_int16 yytable[] =
{
     141,   141,   583,    98,   154,   160,    90,   224,    88,   159,
     558,   615,   358,   363,   600,   761,   296,   456,   376,   428,
     611,   522,   612,   543,   664,   524,   242,   319,   364,   187,
     557,   614,   161,   377,   363,   340,   720,   376,   625,   229,
     905,   512,   363,   376,   235,   363,   239,   376,   215,   364,
     980,   216,   377,   345,   348,   520,   879,   364,   377,   958,
     364,   472,   377,   645,  -235,     3,  1016,   292,  -238,   645,
     964,   240,   428,   472,   339,   548,   -90,  -388,   393,   240,
     241,   240,   486,   598,   489,   764,   181,   406,   382,   657,
     884,   117,   295,    34,   407,  -388,   425,   701,   404,   240,
     240,   275,   276,   915,   240,   917,    -2,  1043,   241,   542,
     292,   123,   223,   673,  -390,   380,   381,   300,   240,   249,
     250,   251,   162,   343,   141,  1059,   164,   765,   240,   292,
     310,   118,   885,   981,   206,   252,   750,   253,   254,   315,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   603,   273,
      34,   139,   293,   338,   140,   682,   721,   523,   141,   906,
     190,   525,   321,   243,   320,   141,   141,   141,   426,    83,
     786,   787,   341,   984,   626,   141,   154,   372,   656,  -469,
     378,   666,   702,   511,   669,   -90,   395,   141,   738,    34,
     346,   349,   408,   880,   292,   293,   959,   511,   326,   646,
    -235,   628,   629,  1009,  -238,   866,   965,   405,   398,  1015,
     427,  -466,    34,   396,   293,   398,   429,   471,    34,    34,
     117,   711,  -389,   793,   766,   767,   240,   359,   165,   233,
     770,   771,   777,   604,   605,   479,    83,    34,   169,   117,
     154,   160,   393,   430,   714,   159,   191,  1041,   117,   682,
      34,   605,  1044,  1045,   480,   117,    34,    34,   429,   515,
     737,   924,   170,   652,  1054,    34,   478,   872,   161,   429,
     429,   117,   171,  -469,   173,   294,   485,   676,   653,   429,
      34,   429,   813,   178,   993,   430,  -465,   360,   118,   293,
     580,   802,   858,   581,   862,   118,   430,   430,    83,   486,
     509,   489,   194,   925,    83,    83,   430,   187,   430,   117,
     179,    34,   186,   240,   509,  -195,  -195,  -195,   139,   860,
     861,   140,   715,    83,   141,   139,   994,  -390,   140,   815,
     399,   240,   694,   270,   271,   272,    83,   273,   731,  1036,
     382,   549,    83,    83,   213,   195,   659,   376,   808,   118,
     196,    83,   198,   511,   511,   511,   214,   199,   891,   200,
     395,   803,   377,    76,   554,   141,    83,    77,    78,   117,
     810,  -389,   -43,   -43,   -43,   240,   236,   888,   201,   139,
    -195,   244,   140,   863,   542,   143,   146,   396,   202,   582,
     117,   117,    34,    34,   342,   203,   117,    83,   591,    98,
     932,  -236,   569,   245,   568,   246,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   859,   860,
     861,   794,   204,   795,   141,   893,   894,   374,   117,   511,
     118,   118,   933,   934,   204,   910,    30,    31,   384,   374,
      34,   429,   528,   948,   949,   385,   386,   577,   141,   685,
     141,   248,  -453,  -453,   898,  1061,  1062,   204,   429,   291,
     139,   139,   205,   140,   140,   289,   580,   290,   430,   581,
     509,   509,   509,   213,   511,   635,   273,   299,    83,    83,
     117,   685,    34,   511,   514,   430,   856,   207,   208,   141,
     511,   387,    65,    66,    67,    68,    69,   577,   580,   207,
     208,   581,   306,   388,   301,   209,   429,   416,   429,    72,
      73,  -221,   302,   204,   577,   952,   307,   209,   361,   660,
     118,   206,   207,   208,   309,   389,    83,   141,   311,   117,
     141,    34,   204,   430,   887,   430,   240,   226,   227,   204,
     209,   141,   860,   861,   374,   313,   509,  -236,   678,   802,
     152,   314,   582,   153,   647,   582,   648,   649,   204,   902,
     860,   861,   909,   234,   328,   154,   160,   332,    83,   118,
     159,   204,   577,   511,   333,   511,   237,   362,   207,   208,
    -193,  -193,  -193,   204,   930,   336,   802,   334,   361,   141,
     141,   509,   347,   161,   397,   356,   209,   207,   208,   152,
     509,   728,   153,   375,   207,   208,   908,   509,   605,   409,
     141,   708,   141,   204,   412,   209,   956,   368,   374,   953,
     718,    76,   209,   207,   208,    77,    78,   968,   411,   802,
    -210,  -210,  -210,   415,   418,   422,   207,   208,   511,   419,
     421,   209,   434,   426,   756,  -193,   582,   487,   207,   208,
     605,   582,  1084,   494,   209,   989,   955,   802,    76,   992,
     496,   497,    77,    78,  -262,   995,   209,   498,   500,   516,
     141,   526,   817,   818,   819,   820,   821,   822,   207,   208,
     521,   577,   527,   532,   534,   535,   511,   537,   538,   539,
     509,   540,   509,   541,  -100,   547,   209,   802,   550,  1011,
     141,    76,   754,   555,   783,    77,    78,   560,   564,   579,
     802,   565,   585,   589,   511,  1035,   141,   577,   577,   609,
     141,   616,   802,   577,   577,   224,   582,  1027,   590,    76,
     582,   601,   802,    77,    78,   624,   511,   602,   634,   618,
     633,   638,   636,   640,   103,   121,   122,   637,   124,   125,
     126,   127,   128,   129,   130,   509,   132,   133,   134,   135,
     136,   137,   138,   921,   802,   148,   151,  1033,   511,    76,
     642,   644,   662,    77,    78,   362,   655,   167,   665,   511,
    1053,   667,    76,   671,   175,   177,    77,    78,   674,   675,
     677,   185,  1056,   679,    76,   683,   684,   716,    77,    78,
     723,   724,  1057,   509,    76,   695,   705,   511,    77,    78,
     725,   511,   729,   730,   816,   429,   877,   511,   231,   232,
     735,   817,   818,   819,   820,   821,   822,   823,   736,   739,
     223,   509,   582,   740,  1066,   759,    76,   816,   742,   758,
      77,    78,   430,   746,   817,   818,   819,   820,   821,   822,
     823,   752,   762,   509,   763,   779,   773,   429,   788,   785,
     790,   792,   796,   297,   800,   789,   797,   511,   801,   806,
     577,   298,   824,   811,   812,   224,   832,   224,   831,   835,
     836,   837,   838,   841,   430,   509,   842,   847,   937,   854,
     855,   845,   857,   864,   870,   874,   509,   875,    47,   881,
     882,   883,   317,   886,   318,   889,   896,   897,   103,   901,
     325,   903,   913,   329,   267,   268,   269,   270,   271,   272,
     918,   273,   916,   919,   509,   922,   928,   929,   509,   931,
     852,   936,   938,   224,   509,   944,   939,   954,   957,   960,
     961,   967,   962,   148,   963,   966,   970,   366,   971,   224,
     972,   978,   982,   985,   990,   224,   999,   383,  1006,  1010,
    1004,   403,  1012,  1013,  1017,  1018,  1019,  -217,  1002,  1028,
    1023,  1031,  1032,  1037,  1039,   224,   417,  1034,   224,   224,
     223,  1040,   223,  1048,   509,   582,  1046,  1049,   224,  1051,
     432,  1055,  1058,  1065,  1067,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,  1060,  1069,  1038,  1073,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   923,
    1074,   927,   474,   476,  1072,  1076,  1075,  1082,   223,  1080,
    1081,  1087,  1086,   751,  1089,   482,   552,   484,   553,   582,
     517,  1083,  1091,   641,   223,   570,   943,   757,   571,   493,
     223,   945,   495,   519,   834,   814,   840,   727,   878,   726,
     142,   142,   996,   370,   155,   373,   775,   798,   734,     0,
     223,     0,   518,   223,   223,     0,     0,     0,   975,     0,
       0,     0,     0,   223,   977,   144,   144,     0,     0,     0,
       0,     0,  -239,     0,     0,     0,     0,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   998,
       0,   183,     0,     0,  1005,     0,    30,    31,   384,     0,
      34,     0,     0,     0,     0,   385,   386,     0,     0,   325,
       0,     0,   562,     0,     0,     0,     0,     0,     0,  1022,
     103,     0,   572,  -453,  -453,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,   145,     0,     0,   158,
       0,   592,     0,   593,     0,   595,   596,   597,     0,     0,
       0,   387,    65,    66,    67,    68,    69,     0,  1052,     0,
       0,     0,     0,   388,   142,     0,     0,     0,  1064,    72,
      73,     0,     0,     0,     0,   551,     0,     0,     0,     0,
    1070,     0,     0,     0,     0,   389,    83,     0,     0,   304,
       0,     0,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,     0,     0,     0,  1090,   142,     0,
       0,     0,     0,   327,     0,   142,   142,   142,  -239,     0,
       0,     0,     0,     0,     0,   142,   369,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,   142,  -453,  -453,
     352,   353,   355,     0,     0,   651,     0,   249,   250,   251,
     367,     0,     0,     0,     0,     0,     0,   148,     0,   145,
       0,     0,   401,   252,     0,   253,   254,     0,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,     0,     0,
     155,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   145,   692,     0,     0,     0,     0,     0,
     145,   145,   145,     0,   698,     0,     0,     0,     0,     0,
     145,   371,     0,   704,     0,     0,     0,   103,     0,     0,
     325,   712,   145,     0,   335,     0,   103,  -453,  -453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     510,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,     0,   510,   503,   504,     0,     0,     0,
       0,   743,     0,     0,   142,     0,     0,   748,     0,     0,
       0,     0,     0,     0,   505,   158,     0,     0,     0,     0,
       0,     0,    30,    31,   117,   536,     0,  -453,  -453,   529,
    -177,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,   474,   776,     0,     0,   142,     0,     0,     0,   781,
     103,     0,     0,     0,     0,     0,     0,     0,  -177,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
     556,   559,     0,     0,     0,   799,     0,   506,    65,    66,
      67,    68,    69,     0,   805,     0,   807,   325,     0,   388,
       0,     0,   578,     0,   507,    72,    73,   508,     0,   145,
       0,     0,     0,     0,   142,     0,     0,     0,   839,     0,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,     0,     0,     0,   142,   599,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,   578,     0,     0,     0,     0,     0,     0,     0,
     510,   510,   510,   304,     0,   304,  -453,  -453,     0,   578,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   499,   273,     0,
       0,     0,     0,   325,   352,     0,     0,     0,     0,   145,
     904,     0,     0,     0,     0,     0,     0,   142,   912,     0,
     142,     0,     0,     0,     0,     0,     0,   578,     0,     0,
       0,   142,     0,   145,     0,   145,   510,     0,     0,     0,
       0,     0,   401,     0,   103,   401,     0,     0,     0,   103,
     103,     0,     0,     0,     0,   155,   304,     0,     0,     0,
       0,     0,     0,     0,   325,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,     0,     0,   142,
     142,   510,     0,     0,     0,     0,   973,     0,     0,     0,
     510,     0,     0,     0,     0,     0,     0,   510,   979,     0,
     142,     0,   142,     0,   713,   401,     0,     0,     0,     0,
       0,     0,   145,     0,     0,   145,     0,     0,     0,     0,
     997,     0,     0,     0,   103,   732,   145,   529,     0,     0,
    1008,     0,     0,     0,     0,     0,   578,     0,  -470,  -470,
    -470,  -470,   265,   266,   267,   268,   269,   270,   271,   272,
     158,   273,     0,     0,     0,     0,     0,   755,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   578,   578,   145,   145,     0,     0,   578,   578,
     510,     0,   510,     0,     0,   304,     0,     0,     0,     0,
     142,     0,     0,     0,     0,   145,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
     142,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,     0,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   510,   249,   250,   251,     0,
       0,     0,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,   252,     0,   253,   254,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   145,   273,     0,     0,     0,
       0,     0,     0,   510,     0,     0,     0,     0,     0,     0,
       0,   145,     0,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   510,     0,     0,     0,   578,     0,     0,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   510,   252,     0,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,     0,
       0,     0,     0,     0,     0,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   510,     5,     6,     7,
       8,     9,     0,     0,   573,     0,    10,     0,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   510,   273,     0,     0,   510,     0,
       0,     0,     0,     0,   510,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,   510,    43,   610,     0,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    51,    52,    53,
       0,     0,     0,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     5,     6,     7,     8,     9,     0,
      70,     0,     0,    10,     0,    71,    72,    73,    74,    75,
       0,    76,     0,     0,     0,    77,    78,    79,     0,    80,
      81,     0,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,    53,     0,     0,     0,
      54,    55,    56,     0,    57,    58,    59,   566,    61,    62,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     5,     6,     7,     8,     9,    70,     0,     0,
       0,    10,   119,    72,    73,    74,    75,     0,    76,     0,
       0,     0,    77,    78,    79,   717,    80,    81,     0,    82,
      83,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,    53,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     0,
       5,     6,     7,     8,     9,    70,     0,     0,     0,    10,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,   782,    80,    81,     0,    82,    83,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     0,     5,     6,
       7,     8,     9,    70,     0,     0,     0,    10,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,   940,    80,    81,     0,    82,    83,     0,    84,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,    79,  1001,
      80,    81,     0,    82,    83,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,    53,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,    80,    81,
       0,    82,    83,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,    51,     0,    53,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       5,     6,     7,     8,     9,     0,    70,     0,     0,    10,
       0,   119,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,    80,    81,     0,    82,    83,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,  1068,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   217,     0,     0,     0,    30,    31,   218,    33,
      34,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,   220,     0,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     5,     6,     7,
       8,     9,     0,    70,     0,     0,    10,     0,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,    82,    83,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   217,
       0,     0,     0,    30,    31,   218,    33,    34,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,   220,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,   119,    72,    73,    74,     5,
       6,     7,     8,     9,     0,     0,     0,    79,    10,     0,
       0,     0,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   117,    33,    34,
       0,   252,     0,   253,   254,    36,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    47,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,     8,
       9,     0,    70,     0,     0,    10,     0,   119,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,    82,    83,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,    33,    34,     0,     0,     0,
     253,   254,    36,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    47,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,   174,     0,
       0,    82,    83,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   117,    33,    34,     0,     0,     0,     0,   254,    36,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    47,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       5,     6,     7,     8,     9,     0,    70,     0,     0,    10,
       0,   119,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,   176,     0,     0,    82,    83,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   117,    33,
      34,     0,     0,     0,     0,     0,    36,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    47,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     5,     6,     7,
       8,     9,     0,    70,     0,     0,    10,     0,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,   180,     0,     0,    82,    83,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   117,    33,    34,     0,     0,
       0,     0,     0,    36,  -470,  -470,  -470,  -470,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     5,     6,     7,     8,     9,     0,
      70,     0,     0,    10,     0,   119,    72,    73,    74,     0,
       0,     0,     0,   230,     0,     0,     0,    79,     0,     0,
       0,     0,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   117,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,   119,    72,    73,    74,     0,     5,     6,     7,
       8,     9,     0,     0,    79,   316,    10,     0,     0,    82,
      83,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   457,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   117,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,   119,    72,    73,    74,     5,
       6,     7,     8,     9,     0,     0,     0,    79,    10,     0,
       0,     0,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   117,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,   119,    72,    73,
      74,     5,     6,     7,     8,     9,     0,     0,     0,    79,
      10,     0,     0,     0,    82,    83,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   117,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,   119,
      72,    73,    74,     5,     6,     7,     8,     9,     0,     0,
       0,    79,    10,     0,     0,     0,    82,    83,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,   119,    72,    73,    74,     5,     6,     7,     8,     9,
       0,     0,     0,    79,    10,     0,     0,     0,    82,    83,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   574,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   117,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,   119,    72,    73,    74,     5,     6,     7,
       8,     9,     0,     0,     0,    79,    10,     0,     0,     0,
      82,    83,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   703,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   117,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,   119,    72,    73,    74,     5,
       6,     7,     8,     9,     0,     0,     0,    79,    10,     0,
       0,     0,    82,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   753,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
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
       0,     0,     0,     0,    82,    83,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,    82,    83,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   117,   365,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       5,     6,     7,     8,     9,     0,    70,     0,     0,    10,
       0,   119,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,    82,    83,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   117,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,   119,    72,
      73,    74,     0,   249,   250,   251,     0,     0,     0,     0,
     402,     0,     0,     0,     0,    82,    83,     0,    84,   252,
       0,   253,   254,     0,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,   253,   254,     0,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   253,   254,     0,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,     0,     0,
       0,   249,   250,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   905,   253,
     254,   639,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,   249,   250,   251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,     0,
     253,   254,   772,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,   253,   254,   846,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,     0,     0,     0,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,   253,   254,   906,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,   253,   254,   274,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,   253,   254,   330,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,   250,   251,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,   253,   254,
     668,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   249,   250,   251,   337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,   253,
     254,     0,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,     0,     0,   414,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   253,   254,     0,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,   414,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,   477,   253,   254,     0,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     249,   250,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,   253,   254,
     491,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,     0,     0,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,   253,   254,   492,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,   253,   254,   502,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   253,   254,   619,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,     0,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,   253,   254,   851,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,   253,   254,   869,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
     249,   250,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,   253,   254,
    1000,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,     0,     0,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,   253,   254,  1020,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     0,   273,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   413,     0,
     252,     0,   253,   254,     0,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   546,
       0,   252,     0,   253,   254,     0,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273,     0,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   672,   252,     0,   253,   254,     0,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   809,   252,     0,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1007,   252,     0,   253,   254,     0,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     0,   273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,   250,   251,     0,     0,  1026,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,   253,
     254,   305,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
       0,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   613,     0,     0,     0,     0,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   563,   252,   693,   253,   254,     0,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     0,   273,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,   253,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   251,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   253,   254,     0,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     0,   273
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-923)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-470)))

static const yytype_int16 yycheck[] =
{
      23,    24,   422,     4,    27,    27,     4,    75,     4,    27,
     399,   490,   203,   205,   470,   684,   120,   273,   210,   248,
     481,     8,   483,   379,   557,     8,     8,     8,   205,    52,
     399,   487,    27,   210,   226,     8,    26,   229,     8,    77,
      26,   333,   234,   235,    82,   237,    84,   239,    71,   226,
      65,    74,   229,     8,     8,   347,     8,   234,   235,     8,
     237,   290,   239,     8,     8,     0,   988,    61,     8,     8,
       8,   144,   301,   302,    90,    78,    29,   140,   218,   144,
     153,   144,   311,    63,   313,    31,    49,   148,   153,   545,
      31,    71,   114,    73,   155,   140,    71,    61,    29,   144,
     144,    59,    60,   871,   144,   873,     0,  1029,   153,   153,
      61,   153,    75,   574,   140,   155,   156,   140,   144,     9,
      10,    11,   153,   191,   147,  1047,   153,    73,   144,    61,
     153,   111,    73,   148,   137,    25,   669,    27,    28,   161,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    71,    49,
      73,   141,   156,   186,   144,   585,   156,   154,   191,   155,
      73,   154,   168,   155,   155,   198,   199,   200,   153,   159,
     713,   714,   155,   951,   154,   208,   209,   209,   544,   140,
     213,   560,   156,   333,   563,   148,   218,   220,   654,    73,
     155,   155,   155,   155,    61,   156,   155,   347,   171,   154,
     154,   503,   504,   981,   154,   154,   154,   148,    31,   987,
      71,   153,    73,   218,   156,    31,   248,    71,    73,    73,
      71,   620,   140,   721,   690,   691,   144,    61,    26,    81,
     696,   697,   703,   156,   473,    71,   159,    73,   153,    71,
     273,   273,   392,   248,   623,   273,   159,  1025,    71,   679,
      73,   490,  1030,  1031,    71,    71,    73,    73,   290,    90,
     160,    31,   153,    71,  1042,    73,   299,   810,   273,   301,
     302,    71,   153,   140,   153,   159,   309,   579,    71,   311,
      73,   313,   753,    71,    31,   290,   153,   121,   111,   156,
     141,    75,   790,   144,   792,   111,   301,   302,   159,   538,
     333,   540,   117,    73,   159,   159,   311,   340,   313,    71,
      71,    73,   144,   144,   347,    92,    93,    94,   141,    93,
      94,   144,   624,   159,   357,   141,    73,   140,   144,   759,
     153,   144,   598,    45,    46,    47,   159,    49,   640,  1018,
     153,   389,   159,   159,   144,   117,   547,   549,   747,   111,
      73,   159,   153,   503,   504,   505,   156,   153,   847,   153,
     392,   145,   549,   147,   396,   398,   159,   151,   152,    71,
     749,   140,    66,    67,    68,   144,   156,   843,   153,   141,
     157,    71,   144,   157,   153,    23,    24,   392,   153,   422,
      71,    71,    73,    73,   156,   153,    71,   159,   430,   410,
     889,     8,   410,    71,   410,    31,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    92,    93,
      94,   723,    73,   725,   457,    66,    67,    78,    71,   579,
     111,   111,    66,    67,    73,   865,    69,    70,    71,    78,
      73,   473,   123,    66,    67,    78,    79,   420,   481,   124,
     483,   140,    59,    60,   853,   155,   156,    73,   490,   121,
     141,   141,    78,   144,   144,   153,   141,   140,   473,   144,
     503,   504,   505,   144,   624,   508,    49,   144,   159,   159,
      71,   124,    73,   633,   336,   490,   788,   138,   139,   522,
     640,   124,   125,   126,   127,   128,   129,   470,   141,   138,
     139,   144,   160,   136,   140,   156,   538,   158,   540,   142,
     143,   154,   140,    73,   487,   914,     8,   156,    78,   158,
     111,   137,   138,   139,   144,   158,   159,   560,   140,    71,
     563,    73,    73,   538,   836,   540,   144,    78,    79,    73,
     156,   574,    93,    94,    78,   140,   579,   154,   581,    75,
     141,   121,   585,   144,    71,   588,    73,    74,    73,    92,
      93,    94,   864,    78,   153,   598,   598,   155,   159,   111,
     598,    73,   545,   723,    13,   725,    78,   137,   138,   139,
      92,    93,    94,    73,   886,   156,    75,   155,    78,   622,
     623,   624,    13,   598,    29,   154,   156,   138,   139,   141,
     633,   634,   144,   137,   138,   139,   157,   640,   847,   148,
     643,   617,   645,    73,    13,   156,   918,   159,    78,   145,
     626,   147,   156,   138,   139,   151,   152,   929,   148,    75,
      66,    67,    68,   157,   161,   119,   138,   139,   788,    71,
      71,   156,    26,   153,   677,   157,   679,   153,   138,   139,
     889,   684,  1082,    82,   156,   957,   145,    75,   147,   961,
     155,     8,   151,   152,    98,   967,   156,    90,    71,    71,
     703,   154,   106,   107,   108,   109,   110,   111,   138,   139,
      73,   654,   155,   154,    71,    61,   836,   157,   140,   157,
     723,   140,   725,   157,    13,   153,   156,    75,    13,   145,
     733,   147,   675,    71,   710,   151,   152,   122,    71,    13,
      75,   148,   119,   153,   864,  1017,   749,   690,   691,   160,
     753,    26,    75,   696,   697,   803,   759,   145,   153,   147,
     763,   153,    75,   151,   152,    13,   886,   153,   144,   153,
     153,    71,   140,    13,     4,     5,     6,   157,     8,     9,
      10,    11,    12,    13,    14,   788,    16,    17,    18,    19,
      20,    21,    22,   877,    75,    25,    26,   145,   918,   147,
     155,   153,    13,   151,   152,   137,   157,    37,   155,   929,
     145,   150,   147,   153,    44,    45,   151,   152,   154,     8,
     144,    51,   145,   120,   147,   156,   153,    71,   151,   152,
     122,   160,   145,   836,   147,   154,   154,   957,   151,   152,
       8,   961,    71,   102,    99,   847,   827,   967,    78,    79,
      13,   106,   107,   108,   109,   110,   111,   112,   160,   157,
     803,   864,   865,   154,   145,     8,   147,    99,   154,   156,
     151,   152,   847,   150,   106,   107,   108,   109,   110,   111,
     112,   154,   154,   886,     8,   707,   153,   889,    13,   155,
     155,   155,   154,   123,   157,   717,   153,  1017,   154,    26,
     843,   131,   157,   148,   155,   953,   104,   955,   154,    73,
      13,   154,   154,   154,   889,   918,   154,   121,   894,   154,
     154,   160,    89,   122,   155,   157,   929,    71,    98,   156,
     153,   156,   162,    13,   164,   121,   155,    83,   168,   155,
     170,   155,   148,   173,    42,    43,    44,    45,    46,    47,
      13,    49,   154,    73,   957,    71,    73,    13,   961,   154,
     782,   153,   155,  1011,   967,   155,   154,   148,    13,    71,
      13,    13,   157,   203,    73,   157,   153,   207,    26,  1027,
      68,    73,    46,   154,    73,  1033,   155,   217,   154,    65,
      87,   221,   148,    67,    13,   153,    73,    68,   974,   148,
     155,   148,    46,    26,    85,  1053,   236,    46,  1056,  1057,
     953,   156,   955,    86,  1017,  1018,    84,   154,  1066,   155,
     250,    46,   148,   157,    84,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   148,    46,  1021,    84,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   881,
      86,   883,   292,   293,   148,   102,   157,   153,  1011,   148,
     148,   154,    73,   670,   156,   305,   392,   307,   392,  1082,
     340,  1078,   157,   522,  1027,   410,   900,   679,   410,   319,
    1033,   904,   322,   345,   763,   758,   769,   633,   828,   632,
      23,    24,   969,   209,    27,   209,   701,   733,   645,    -1,
    1053,    -1,   342,  1056,  1057,    -1,    -1,    -1,   940,    -1,
      -1,    -1,    -1,  1066,   946,    23,    24,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   971,
      -1,    49,    -1,    -1,   976,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,   399,
      -1,    -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,  1001,
     410,    -1,   412,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    27,
      -1,   431,    -1,   433,    -1,   435,   436,   437,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,    -1,  1040,    -1,
      -1,    -1,    -1,   136,   147,    -1,    -1,    -1,  1050,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
    1062,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,   147,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,  1089,   191,    -1,
      -1,    -1,    -1,   171,    -1,   198,   199,   200,   154,    -1,
      -1,    -1,    -1,    -1,    -1,   208,   209,    -1,    -1,    -1,
      -1,    -1,    -1,   191,    -1,    -1,    -1,   220,    59,    60,
     198,   199,   200,    -1,    -1,   535,    -1,     9,    10,    11,
     208,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,   147,
      -1,    -1,   220,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
     273,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   191,   594,    -1,    -1,    -1,    -1,    -1,
     198,   199,   200,    -1,   604,    -1,    -1,    -1,    -1,    -1,
     208,   209,    -1,   613,    -1,    -1,    -1,   617,    -1,    -1,
     620,   621,   220,    -1,   155,    -1,   626,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,   347,    42,    43,    -1,    -1,    -1,
      -1,   661,    -1,    -1,   357,    -1,    -1,   667,    -1,    -1,
      -1,    -1,    -1,    -1,    61,   273,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,   157,    -1,    59,    60,   357,
     122,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   701,   702,    -1,    -1,   398,    -1,    -1,    -1,   709,
     710,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,
     398,   399,    -1,    -1,    -1,   735,    -1,   124,   125,   126,
     127,   128,   129,    -1,   744,    -1,   746,   747,    -1,   136,
      -1,    -1,   420,    -1,   141,   142,   143,   144,    -1,   357,
      -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,   768,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,   481,   457,
     483,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     398,    -1,   470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     503,   504,   505,   481,    -1,   483,    59,    60,    -1,   487,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    90,    49,    -1,
      -1,    -1,    -1,   853,   522,    -1,    -1,    -1,    -1,   457,
     860,    -1,    -1,    -1,    -1,    -1,    -1,   560,   868,    -1,
     563,    -1,    -1,    -1,    -1,    -1,    -1,   545,    -1,    -1,
      -1,   574,    -1,   481,    -1,   483,   579,    -1,    -1,    -1,
      -1,    -1,   560,    -1,   894,   563,    -1,    -1,    -1,   899,
     900,    -1,    -1,    -1,    -1,   598,   574,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   914,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,    -1,   622,
     623,   624,    -1,    -1,    -1,    -1,   936,    -1,    -1,    -1,
     633,    -1,    -1,    -1,    -1,    -1,    -1,   640,   948,    -1,
     643,    -1,   645,    -1,   622,   623,    -1,    -1,    -1,    -1,
      -1,    -1,   560,    -1,    -1,   563,    -1,    -1,    -1,    -1,
     970,    -1,    -1,    -1,   974,   643,   574,   645,    -1,    -1,
     980,    -1,    -1,    -1,    -1,    -1,   654,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     598,    49,    -1,    -1,    -1,    -1,    -1,   675,    -1,    -1,
     703,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1021,   690,   691,   622,   623,    -1,    -1,   696,   697,
     723,    -1,   725,    -1,    -1,   703,    -1,    -1,    -1,    -1,
     733,    -1,    -1,    -1,    -1,   643,    -1,   645,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   749,    -1,    -1,    -1,
     753,    -1,    -1,    -1,    -1,   733,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   749,    -1,    -1,    -1,   753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   788,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   703,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   733,    49,    -1,    -1,    -1,
      -1,    -1,    -1,   836,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   749,    -1,    -1,    -1,   753,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   864,    -1,    -1,    -1,   843,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   886,    25,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,   918,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   929,     3,     4,     5,
       6,     7,    -1,    -1,   157,    -1,    12,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   957,    49,    -1,    -1,   961,    -1,
      -1,    -1,    -1,    -1,   967,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,  1017,    91,   157,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,   145,
      -1,   147,    -1,    -1,    -1,   151,   152,   153,    -1,   155,
     156,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,     6,     7,   136,    -1,    -1,
      -1,    12,   141,   142,   143,   144,   145,    -1,   147,    -1,
      -1,    -1,   151,   152,   153,    26,   155,   156,    -1,   158,
     159,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
       3,     4,     5,     6,     7,   136,    -1,    -1,    -1,    12,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    26,   155,   156,    -1,   158,   159,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,     3,     4,
       5,     6,     7,   136,    -1,    -1,    -1,    12,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    26,   155,   156,    -1,   158,   159,    -1,   161,    -1,
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
     155,   156,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,   156,
      -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,
      -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,   155,   156,    -1,   158,   159,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   153,    12,    -1,
      -1,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    25,    -1,    27,    28,    79,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    98,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      27,    28,    79,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,    -1,
      -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    28,    79,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    98,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,   155,    -1,    -1,   158,   159,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    98,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,   155,    -1,    -1,   158,   159,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   153,   154,    12,    -1,    -1,   158,
     159,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   153,    12,    -1,
      -1,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,     3,     4,     5,     6,     7,    -1,    -1,    -1,   153,
      12,    -1,    -1,    -1,   158,   159,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,     3,     4,     5,     6,     7,    -1,    -1,
      -1,   153,    12,    -1,    -1,    -1,   158,   159,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   141,   142,   143,   144,     3,     4,     5,     6,     7,
      -1,    -1,    -1,   153,    12,    -1,    -1,    -1,   158,   159,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,     3,     4,     5,
       6,     7,    -1,    -1,    -1,   153,    12,    -1,    -1,    -1,
     158,   159,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   153,    12,    -1,
      -1,    -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
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
      -1,    -1,    -1,    -1,   158,   159,    -1,   161,    -1,    -1,
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
      -1,   158,   159,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,    -1,   161,    25,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,   157,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   157,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   157,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   155,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
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
       9,    10,    11,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      90,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,   154,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   154,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   154,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     154,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   154,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   154,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   154,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     154,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   154,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
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
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    10,
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
     155,   156,   158,   159,   161,   166,   167,   172,   176,   177,
     212,   234,   235,   237,   239,   242,   244,   295,   308,   311,
     320,   331,   334,   338,   339,   341,   342,   350,   351,   352,
     353,   354,   356,   357,   363,   374,   377,    71,   111,   141,
     308,   338,   338,   153,   338,   338,   338,   338,   338,   338,
     338,   306,   338,   338,   338,   338,   338,   338,   338,   141,
     144,   166,   320,   341,   342,   352,   341,    31,   338,   367,
     368,   338,   141,   144,   166,   320,   322,   323,   352,   354,
     356,   363,   153,   328,   153,    26,   291,   338,   184,   153,
     153,   153,   194,   153,   155,   338,   155,   338,    71,    71,
     155,   295,   338,   342,   195,   338,   144,   166,   170,   171,
      73,   159,   277,   278,   117,   117,    73,   279,   153,   153,
     153,   153,   153,   153,    73,    78,   137,   138,   139,   156,
     369,   370,   372,   144,   156,   166,   166,    65,    71,    79,
      84,    86,   201,   295,   339,   173,    78,    79,   211,   369,
     149,   338,   338,   173,    78,   369,   156,    78,   329,   369,
     144,   153,     8,   155,    71,    71,    31,   236,   140,     9,
      10,    11,    25,    27,    28,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    49,   155,    59,    60,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   153,
     140,   121,    61,   156,   159,   356,   236,   338,   338,   144,
     166,   140,   140,   340,   342,   122,   160,     8,   336,   144,
     166,   140,   298,   140,   121,   356,   154,   338,   338,     8,
     155,   176,   182,   292,   293,   338,   295,   342,   153,   338,
     155,   155,   155,    13,   155,   155,   156,   155,   166,    90,
       8,   155,   156,   339,   342,     8,   155,    13,     8,   155,
     232,   233,   342,   342,   375,   342,   154,   296,   367,    61,
     121,    78,   137,   370,   372,    72,   338,   342,   159,   320,
     351,   352,   356,   377,    78,   137,   370,   372,   166,   169,
     155,   156,   153,   338,    71,    78,    79,   124,   136,   158,
     206,   207,   208,   331,   355,   356,   363,    29,    31,   153,
     249,   342,   153,   338,    29,   148,   148,   155,   155,   148,
     174,   148,    13,   148,   154,   157,   158,   338,   161,    71,
     312,    71,   119,   243,   241,    71,   153,    71,   350,   356,
     363,   301,   338,   302,    26,   303,   299,   300,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   322,    31,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     319,    71,   350,   343,   338,   358,   338,   154,   166,    71,
      71,    31,   338,    31,   338,   166,   350,   153,   330,   350,
     324,   154,   154,   338,    82,   338,   155,     8,    90,    90,
      71,   253,   154,    42,    43,    61,   124,   141,   144,   166,
     320,   331,   332,   333,   173,    90,    71,   171,   338,   278,
     332,    73,     8,   154,     8,   154,   154,   155,   123,   342,
     364,   365,   154,   371,    71,    61,   157,   157,   140,   157,
     140,   157,   153,   164,   168,   314,   148,   153,    78,   369,
      13,   148,   206,   207,   356,    71,   342,   249,   292,   342,
     122,   248,   338,    90,    71,   148,   116,   175,   176,   212,
     234,   235,   338,   157,    31,   275,   276,   295,   342,    13,
     141,   144,   166,   321,   240,   119,   245,   238,   307,   153,
     153,   356,   338,   338,   305,   338,   338,   338,    63,   342,
     275,   153,   153,    71,   156,   350,   359,   361,   362,   160,
     157,   340,   340,   122,   275,   359,    26,   178,   153,   154,
     186,   294,   192,   190,    13,     8,   154,   189,   332,   332,
     332,   335,   337,   153,   144,   166,   140,   157,    71,   157,
      13,   233,   155,   376,   153,     8,   154,    71,    73,    74,
     373,   338,    71,    71,   313,   157,   164,   275,   218,   367,
     158,   209,    13,   202,   248,   155,   249,   150,    90,   249,
     203,   153,   148,   340,   154,     8,   332,   144,   166,   120,
     246,   247,   321,   156,   153,   124,   272,   273,   274,   321,
     315,   316,   338,    26,   322,   154,   317,   318,   338,   360,
     344,    61,   156,    31,   338,   154,   325,   180,   176,   185,
     183,   292,   338,   342,   249,   332,    71,    26,   176,   252,
      26,   156,   254,   122,   160,     8,   336,   335,   166,    71,
     102,   332,   342,   366,   365,    13,   160,   160,   275,   157,
     154,   200,   154,   338,   210,   204,   150,   220,   338,   213,
     248,   204,   154,    31,   295,   342,   166,   247,   156,     8,
     280,   272,   154,     8,    31,    73,   275,   275,   304,   297,
     275,   275,   157,   153,   348,   358,   338,   340,   326,   173,
     179,   338,    26,   176,   259,   155,   248,   248,    13,   173,
     155,   255,   155,   255,   332,   332,   154,   153,   364,   338,
     157,   154,    75,   145,   212,   338,    26,   338,   292,   148,
     249,   148,   155,   340,   280,   321,    99,   106,   107,   108,
     109,   110,   111,   112,   157,   281,   285,   286,   287,   288,
     290,   154,   104,   309,   274,    73,    13,   154,   154,   338,
     330,   154,   154,   349,   345,   160,   157,   121,   327,   181,
     260,   154,   173,   187,   154,   154,   332,    89,   255,    92,
      93,    94,   255,   157,   122,   196,   154,   219,   205,   154,
     155,   225,   248,   216,   157,    71,   282,   308,   288,     8,
     155,   156,   153,   156,    31,    73,    13,   332,   275,   121,
     346,   359,   265,    66,    67,   267,   155,    83,   292,   193,
     191,   155,    92,   155,   338,    26,   155,   258,   157,   332,
     321,   262,   338,   148,   221,   200,   154,   200,    13,    73,
     289,   236,    71,   173,    31,    73,   310,   173,    73,    13,
     332,   154,   359,    66,    67,   270,   153,   176,   155,   154,
      26,   176,   251,   251,   155,   258,   257,   197,    66,    67,
     268,   223,   292,   145,   148,   145,   332,    13,     8,   155,
      71,    13,   157,    73,     8,   154,   157,    13,   332,   347,
     153,    26,    68,   338,   188,   173,   256,   173,    73,   338,
      65,   148,    46,   269,   200,   154,   226,   214,   217,   332,
      73,   283,   332,    31,    73,   332,   348,   338,   173,   155,
     154,    26,   176,   250,    87,   173,   154,   148,   338,   200,
      65,   145,   148,    67,   271,   200,   271,    13,   153,    73,
     154,   261,   173,   155,   198,   263,   148,   145,   148,   224,
     222,   148,    46,   145,    46,   332,   272,    26,   176,    85,
     156,   200,   264,   271,   200,   200,    84,   215,    86,   154,
     266,   155,   173,   145,   200,    46,   145,   145,   148,   271,
     148,   155,   156,   284,   173,   157,   145,    84,    46,    46,
     173,   199,   148,    84,    86,   157,   102,   227,   228,   229,
     148,   148,   153,   229,   321,   230,    73,   154,   231,   156,
     173,   157
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
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 313 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 314 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 318 "Zend53/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 318 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 319 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 319 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 320 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 321 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 325 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 326 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 327 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 334 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 336 "Zend53/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 343 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 348 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 349 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 350 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 352 "Zend53/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 356 "Zend53/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 358 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 359 "Zend53/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 360 "Zend53/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 361 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 363 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 364 "Zend53/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 365 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 367 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 370 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 372 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 375 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 376 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 377 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 379 "Zend53/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 382 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 383 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 384 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 386 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 387 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 388 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 392 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 393 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 397 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 398 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 403 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 403 "Zend53/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 403 "Zend53/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 413 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 417 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 421 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 426 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 427 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 432 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 433 "Zend53/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 438 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 442 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 444 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 448 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 453 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 454 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 455 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 459 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 460 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 464 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 478 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 479 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 483 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 484 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 489 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 490 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 512 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 513 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 518 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 519 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 520 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 521 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 526 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 527 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 527 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 528 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 528 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 547 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 547 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 552 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 552 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 553 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 553 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 558 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 558 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 593 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 594 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 595 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 596 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 597 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 598 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 599 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 600 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 605 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 606 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 607 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 612 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 613 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 618 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 619 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 620 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 621 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 622 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 623 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 627 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 628 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 633 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 634 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 635 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 640 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 641 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 642 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 643 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 655 "Zend53/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 657 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 658 "Zend53/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 663 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 664 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 668 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 669 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 673 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 674 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 678 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 679 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 683 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 684 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 685 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 686 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 687 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 688 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 692 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 693 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 694 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 695 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 699 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 700 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 704 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 705 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 710 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 711 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 715 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 715 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 716 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 720 "Zend53/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 720 "Zend53/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 721 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 722 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 723 "Zend53/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 723 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).u.EA.type = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 724 "Zend53/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 724 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 725 "Zend53/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 726 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 727 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 728 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 729 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 730 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 731 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 732 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 733 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 734 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 735 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 736 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 737 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 738 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 739 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 740 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 741 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 741 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 742 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 742 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 743 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 743 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 744 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 744 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 745 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 748 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 749 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 750 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 751 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 752 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 753 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 754 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 755 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 756 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 757 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 758 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 759 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 760 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 761 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 762 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 763 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 764 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 765 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 766 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 767 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 768 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 769 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 770 "Zend53/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 771 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 772 "Zend53/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 773 "Zend53/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 774 "Zend53/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 775 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 776 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 777 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 778 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 779 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 780 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 781 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 782 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 783 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 784 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 785 "Zend53/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 786 "Zend53/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 786 "Zend53/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 787 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 788 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 789 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 790 "Zend53/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 791 "Zend53/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 792 "Zend53/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 793 "Zend53/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 797 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 806 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 807 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 808 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 809 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 813 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 815 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 816 "Zend53/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 818 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 819 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 821 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 822 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 824 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 825 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 827 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 828 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 830 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 831 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 833 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 834 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 836 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 840 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 841 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 842 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 843 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 847 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 848 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 849 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 855 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 856 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 861 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 862 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 863 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 864 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 875 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 879 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 880 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 881 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 885 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 886 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 887 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 892 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 893 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
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
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 907 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 908 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 909 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 914 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 915 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 916 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 917 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 918 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 919 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 920 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 921 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 922 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 926 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 930 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 931 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 932 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 933 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 934 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 935 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 936 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 937 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 942 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 943 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 952 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 953 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 954 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 955 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 959 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 960 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 965 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 970 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 975 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 980 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 981 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 982 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 983 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 987 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 988 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = 0; }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 993 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 993 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 997 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 999 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1001 "Zend53/zend_language_parser.y"
    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1005 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1006 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1010 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1011 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1016 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1020 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1021 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1026 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1027 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1028 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1032 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1033 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1037 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1038 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1039 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1044 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1045 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1049 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1050 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1055 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1056 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1056 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1060 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1061 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1062 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1066 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1067 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1071 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1072 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1082 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1083 "Zend53/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1083 "Zend53/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1084 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1089 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1090 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1094 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1095 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1096 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1097 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1098 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1099 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1100 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1101 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1105 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1106 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1107 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1108 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1109 "Zend53/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1110 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1111 "Zend53/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1112 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_string(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1118 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1119 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1119 "Zend53/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1120 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1121 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1122 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1123 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1124 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1128 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1132 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1133 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1134 "Zend53/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1139 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1140 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1141 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1142 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1143 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1144 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1145 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1149 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1150 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1150 "Zend53/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1154 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1155 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 6762 "Zend53/zend_language_parser.c"
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
#line 1158 "Zend53/zend_language_parser.y"


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */
