/* A Bison parser, made by GNU Bison 2.5.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
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



/* Line 268 of yacc.c  */
#line 133 "Zend53/zend_language_parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
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


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 449 "Zend53/zend_language_parser.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#define YYLAST   6344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  214
/* YYNRULES -- Number of rules.  */
#define YYNRULES  530
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1068

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
     368,   372,   376,   381,   385,   389,   395,   399,   404,   405,
     406,   407,   426,   427,   428,   444,   445,   446,   458,   459,
     460,   461,   480,   481,   482,   500,   501,   502,   518,   520,
     521,   523,   526,   527,   528,   539,   541,   545,   547,   549,
     551,   552,   554,   555,   566,   567,   576,   577,   585,   587,
     590,   593,   594,   597,   599,   600,   603,   604,   607,   609,
     613,   614,   617,   619,   622,   624,   629,   631,   636,   638,
     643,   647,   653,   657,   662,   667,   673,   674,   675,   682,
     683,   689,   691,   693,   695,   700,   701,   702,   710,   711,
     712,   720,   721,   730,   731,   732,   741,   742,   745,   746,
     751,   755,   756,   760,   761,   766,   768,   769,   772,   776,
     782,   787,   792,   798,   806,   813,   814,   816,   818,   820,
     821,   823,   825,   828,   832,   836,   841,   845,   847,   849,
     852,   857,   861,   867,   869,   873,   876,   877,   878,   883,
     886,   887,   897,   899,   903,   905,   907,   908,   910,   912,
     915,   917,   919,   921,   923,   925,   927,   931,   937,   939,
     943,   949,   954,   958,   960,   961,   963,   964,   969,   971,
     972,   980,   984,   989,   990,   998,   999,  1004,  1007,  1011,
    1015,  1019,  1023,  1027,  1031,  1035,  1039,  1043,  1047,  1051,
    1054,  1057,  1060,  1063,  1064,  1069,  1070,  1075,  1076,  1081,
    1082,  1087,  1091,  1095,  1099,  1103,  1107,  1111,  1115,  1119,
    1123,  1127,  1131,  1134,  1137,  1140,  1143,  1147,  1151,  1155,
    1159,  1163,  1167,  1171,  1175,  1179,  1183,  1184,  1185,  1193,
    1194,  1200,  1202,  1205,  1208,  1211,  1214,  1217,  1220,  1223,
    1226,  1227,  1231,  1233,  1238,  1242,  1246,  1249,  1250,  1261,
    1263,  1264,  1269,  1273,  1278,  1280,  1283,  1284,  1290,  1291,
    1299,  1300,  1307,  1308,  1316,  1317,  1325,  1326,  1334,  1335,
    1343,  1344,  1350,  1352,  1354,  1358,  1361,  1363,  1367,  1370,
    1372,  1374,  1375,  1376,  1383,  1385,  1388,  1389,  1392,  1393,
    1396,  1400,  1401,  1403,  1405,  1406,  1410,  1412,  1414,  1416,
    1418,  1420,  1422,  1424,  1426,  1428,  1430,  1434,  1437,  1439,
    1441,  1445,  1448,  1451,  1454,  1459,  1463,  1465,  1469,  1471,
    1473,  1475,  1479,  1482,  1484,  1488,  1492,  1493,  1496,  1497,
    1499,  1505,  1509,  1513,  1515,  1517,  1519,  1521,  1523,  1525,
    1526,  1527,  1535,  1537,  1540,  1541,  1542,  1547,  1548,  1553,
    1554,  1556,  1559,  1563,  1567,  1569,  1571,  1573,  1575,  1578,
    1580,  1582,  1585,  1590,  1595,  1597,  1599,  1604,  1605,  1607,
    1609,  1610,  1613,  1618,  1623,  1625,  1627,  1631,  1633,  1636,
    1640,  1642,  1644,  1645,  1651,  1652,  1653,  1656,  1662,  1666,
    1670,  1672,  1679,  1684,  1689,  1692,  1695,  1698,  1700,  1703,
    1705,  1706,  1712,  1716,  1720,  1727,  1731,  1733,  1735,  1737,
    1742,  1747,  1750,  1753,  1758,  1761,  1764,  1766,  1767,  1772,
    1776
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     163,     0,    -1,   164,    -1,    -1,   164,   165,   167,    -1,
      -1,    71,    -1,   166,   144,    71,    -1,   176,    -1,   233,
      -1,   234,    -1,   116,   153,   154,   155,    -1,   141,   166,
     155,    -1,    -1,   141,   166,   156,   168,   164,   157,    -1,
      -1,   141,   156,   169,   164,   157,    -1,   104,   170,   155,
      -1,   172,   155,    -1,   211,    -1,   170,     8,   171,    -1,
     171,    -1,   166,    -1,   166,    90,    71,    -1,   144,   166,
      -1,   144,   166,    90,    71,    -1,   172,     8,    71,    13,
     331,    -1,    99,    71,    13,   331,    -1,    -1,   173,   174,
     175,    -1,    -1,   176,    -1,   211,    -1,   233,    -1,   234,
      -1,   116,   153,   154,   155,    -1,   177,    -1,    71,    26,
      -1,   156,   173,   157,    -1,    -1,    -1,    65,   153,   337,
     154,   178,   176,   179,   259,   266,    -1,    -1,    -1,    65,
     153,   337,   154,    26,   180,   173,   181,   264,   269,    68,
     155,    -1,    -1,    -1,    82,   153,   182,   337,   154,   183,
     258,    -1,    -1,    -1,    81,   184,   176,    82,   153,   185,
     337,   154,   155,    -1,    -1,    -1,    -1,    84,   153,   291,
     155,   186,   291,   155,   187,   291,   154,   188,   249,    -1,
      -1,    91,   153,   337,   154,   189,   253,    -1,    95,   155,
      -1,    95,   337,   155,    -1,    96,   155,    -1,    96,   337,
     155,    -1,   100,   155,    -1,   100,   294,   155,    -1,   100,
     341,   155,    -1,   105,   276,   155,    -1,   111,   278,   155,
      -1,    80,   290,   155,    -1,    75,    -1,   337,   155,    -1,
     113,   153,   231,   154,   155,    -1,    -1,    -1,    86,   153,
     341,    90,   190,   248,   247,   154,   191,   250,    -1,    -1,
      -1,    86,   153,   294,    90,   192,   341,   247,   154,   193,
     250,    -1,    -1,    88,   194,   153,   252,   154,   251,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,   101,   195,   156,
     173,   157,   102,   153,   196,   320,   197,    73,   154,   198,
     156,   173,   157,   199,   226,    -1,   103,   337,   155,    -1,
      97,    71,   155,    -1,   200,   211,    -1,   200,    75,    -1,
      -1,   338,    -1,   338,   155,    -1,    -1,    79,    29,    71,
     202,   204,    -1,    -1,   201,    29,    71,   203,   204,    -1,
      -1,    -1,   204,    26,   205,   337,    -1,    71,    -1,    79,
      -1,   354,    -1,   330,    -1,   124,   153,   366,   154,    -1,
      -1,   206,    13,   209,   337,    -1,    -1,   208,   206,    13,
     210,   337,    -1,   207,    -1,   208,   207,    -1,   145,   201,
     148,    -1,   145,   294,   148,    -1,   145,   294,   155,   148,
      -1,   147,   173,   148,    -1,   152,   337,   148,    -1,   152,
     149,    13,   337,   148,    -1,   151,    79,   148,    -1,   145,
      71,   208,   148,    -1,    -1,    -1,    -1,   145,    86,   153,
     337,    90,   212,   248,   247,   154,   148,   213,   200,   145,
     214,   270,    46,    86,   148,    -1,    -1,    -1,   145,    86,
     337,    90,   248,   247,   148,   215,   200,   145,   216,   270,
      46,    86,   148,    -1,    -1,    -1,   145,    65,   337,   148,
     217,   200,   145,   218,   261,   267,   268,    -1,    -1,    -1,
      -1,   145,    84,   153,   291,   155,   219,   291,   155,   220,
     291,   154,   148,   221,   200,   145,    46,    84,   148,    -1,
      -1,    -1,   145,    84,   153,   248,   247,   150,   337,   154,
     148,   222,   200,   145,   223,   270,    46,    84,   148,    -1,
      -1,    -1,   145,    84,   248,   247,   150,   337,   148,   224,
     200,   145,   225,   270,    46,    84,   148,    -1,   227,    -1,
      -1,   228,    -1,   227,   228,    -1,    -1,    -1,   102,   153,
     320,   229,    73,   154,   230,   156,   173,   157,    -1,   232,
      -1,   231,     8,   232,    -1,   341,    -1,   236,    -1,   238,
      -1,    -1,    31,    -1,    -1,   307,   235,    71,   237,   153,
     271,   154,   156,   173,   157,    -1,    -1,   241,    71,   242,
     239,   245,   156,   279,   157,    -1,    -1,   243,    71,   240,
     244,   156,   279,   157,    -1,   117,    -1,   110,   117,    -1,
     109,   117,    -1,    -1,   119,   320,    -1,   118,    -1,    -1,
     119,   246,    -1,    -1,   120,   246,    -1,   320,    -1,   246,
       8,   320,    -1,    -1,   122,   248,    -1,   341,    -1,    31,
     341,    -1,   176,    -1,    26,   173,    85,   155,    -1,   176,
      -1,    26,   173,    87,   155,    -1,   176,    -1,    26,   173,
      89,   155,    -1,    71,    13,   331,    -1,   252,     8,    71,
      13,   331,    -1,   156,   254,   157,    -1,   156,   155,   254,
     157,    -1,    26,   254,    92,   155,    -1,    26,   155,   254,
      92,   155,    -1,    -1,    -1,   254,    93,   337,   257,   255,
     173,    -1,    -1,   254,    94,   257,   256,   173,    -1,    26,
      -1,   155,    -1,   176,    -1,    26,   173,    83,   155,    -1,
      -1,    -1,   259,    66,   153,   337,   154,   260,   176,    -1,
      -1,    -1,   261,    66,   337,   148,   262,   200,   145,    -1,
      -1,   261,    67,    65,   337,   148,   263,   200,   145,    -1,
      -1,    -1,   264,    66,   153,   337,   154,    26,   265,   173,
      -1,    -1,    67,   176,    -1,    -1,    67,   148,   200,   145,
      -1,    46,    65,   148,    -1,    -1,    67,    26,   173,    -1,
      -1,    67,   148,   200,   145,    -1,   272,    -1,    -1,   273,
      73,    -1,   273,    31,    73,    -1,   273,    31,    73,    13,
     331,    -1,   273,    73,    13,   331,    -1,   272,     8,   273,
      73,    -1,   272,     8,   273,    31,    73,    -1,   272,     8,
     273,    31,    73,    13,   331,    -1,   272,     8,   273,    73,
      13,   331,    -1,    -1,   320,    -1,   124,    -1,   275,    -1,
      -1,   294,    -1,   341,    -1,    31,   339,    -1,   275,     8,
     294,    -1,   275,     8,   341,    -1,   275,     8,    31,   339,
      -1,   276,     8,   277,    -1,   277,    -1,    73,    -1,   158,
     338,    -1,   158,   156,   337,   157,    -1,   278,     8,    73,
      -1,   278,     8,    73,    13,   331,    -1,    73,    -1,    73,
      13,   331,    -1,   279,   280,    -1,    -1,    -1,   284,   281,
     288,   155,    -1,   289,   155,    -1,    -1,   285,   307,   235,
      71,   282,   153,   271,   154,   283,    -1,   155,    -1,   156,
     173,   157,    -1,   286,    -1,   112,    -1,    -1,   286,    -1,
     287,    -1,   286,   287,    -1,   106,    -1,   107,    -1,   108,
      -1,   111,    -1,   110,    -1,   109,    -1,   288,     8,    73,
      -1,   288,     8,    73,    13,   331,    -1,    73,    -1,    73,
      13,   331,    -1,   289,     8,    71,    13,   331,    -1,    99,
      71,    13,   331,    -1,   290,     8,   337,    -1,   337,    -1,
      -1,   292,    -1,    -1,   292,     8,   293,   337,    -1,   337,
      -1,    -1,   123,   153,   295,   363,   154,    13,   337,    -1,
     341,    13,   337,    -1,   341,    13,    31,   341,    -1,    -1,
     341,    13,    31,    63,   321,   296,   329,    -1,    -1,    63,
     321,   297,   329,    -1,    62,   337,    -1,   341,    24,   337,
      -1,   341,    23,   337,    -1,   341,    22,   337,    -1,   341,
      21,   337,    -1,   341,    20,   337,    -1,   341,    19,   337,
      -1,   341,    18,   337,    -1,   341,    17,   337,    -1,   341,
      16,   337,    -1,   341,    15,   337,    -1,   341,    14,   337,
      -1,   340,    60,    -1,    60,   340,    -1,   340,    59,    -1,
      59,   340,    -1,    -1,   337,    27,   298,   337,    -1,    -1,
     337,    28,   299,   337,    -1,    -1,   337,     9,   300,   337,
      -1,    -1,   337,    11,   301,   337,    -1,   337,    10,   337,
      -1,   337,    31,   337,    -1,   337,    30,   337,    -1,   337,
      44,   337,    -1,   337,    42,   337,    -1,   337,    43,   337,
      -1,   337,    45,   337,    -1,   337,    46,   337,    -1,   337,
      47,   337,    -1,   337,    41,   337,    -1,   337,    40,   337,
      -1,    42,   337,    -1,    43,   337,    -1,    48,   337,    -1,
      50,   337,    -1,   337,    33,   337,    -1,   337,    32,   337,
      -1,   337,    35,   337,    -1,   337,    34,   337,    -1,   337,
      36,   337,    -1,   337,    39,   337,    -1,   337,    37,   337,
      -1,   337,    38,   337,    -1,   337,    49,   321,    -1,   153,
     337,   154,    -1,    -1,    -1,   337,    25,   302,   337,    26,
     303,   337,    -1,    -1,   337,    25,    26,   304,   337,    -1,
     372,    -1,    58,   337,    -1,    57,   337,    -1,    56,   337,
      -1,    55,   337,    -1,    54,   337,    -1,    53,   337,    -1,
      52,   337,    -1,    64,   327,    -1,    -1,    51,   305,   337,
      -1,   333,    -1,   124,   153,   366,   154,    -1,    61,   366,
     159,    -1,   160,   328,   160,    -1,    12,   337,    -1,    -1,
     307,   235,   153,   306,   271,   154,   308,   156,   173,   157,
      -1,    98,    -1,    -1,   104,   153,   309,   154,    -1,   309,
       8,    73,    -1,   309,     8,    31,    73,    -1,    73,    -1,
      31,    73,    -1,    -1,   166,   153,   311,   274,   154,    -1,
      -1,   141,   144,   166,   153,   312,   274,   154,    -1,    -1,
     144,   166,   153,   313,   274,   154,    -1,    -1,   319,   140,
      71,   153,   314,   274,   154,    -1,    -1,   319,   140,   349,
     153,   315,   274,   154,    -1,    -1,   351,   140,    71,   153,
     316,   274,   154,    -1,    -1,   351,   140,   349,   153,   317,
     274,   154,    -1,    -1,   349,   153,   318,   274,   154,    -1,
     111,    -1,   166,    -1,   141,   144,   166,    -1,   144,   166,
      -1,   166,    -1,   141,   144,   166,    -1,   144,   166,    -1,
     319,    -1,   322,    -1,    -1,    -1,   353,   121,   323,   358,
     324,   325,    -1,   353,    -1,   325,   326,    -1,    -1,   121,
     358,    -1,    -1,   153,   154,    -1,   153,   337,   154,    -1,
      -1,    78,    -1,   368,    -1,    -1,   153,   274,   154,    -1,
      69,    -1,    70,    -1,    79,    -1,   128,    -1,   129,    -1,
     143,    -1,   125,    -1,   126,    -1,   127,    -1,   142,    -1,
     136,    78,   137,    -1,   136,   137,    -1,   330,    -1,   166,
      -1,   141,   144,   166,    -1,   144,   166,    -1,    42,   331,
      -1,    43,   331,    -1,   124,   153,   334,   154,    -1,    61,
     334,   159,    -1,   332,    -1,   319,   140,    71,    -1,    72,
      -1,   375,    -1,   166,    -1,   141,   144,   166,    -1,   144,
     166,    -1,   330,    -1,   161,   368,   161,    -1,   136,   368,
     137,    -1,    -1,   336,   335,    -1,    -1,     8,    -1,   336,
       8,   331,   122,   331,    -1,   336,     8,   331,    -1,   331,
     122,   331,    -1,   331,    -1,   338,    -1,   294,    -1,   341,
      -1,   341,    -1,   341,    -1,    -1,    -1,   352,   121,   342,
     358,   343,   347,   344,    -1,   352,    -1,   344,   345,    -1,
      -1,    -1,   121,   358,   346,   347,    -1,    -1,   153,   348,
     274,   154,    -1,    -1,   355,    -1,   362,   355,    -1,   319,
     140,   349,    -1,   351,   140,   349,    -1,   355,    -1,   353,
      -1,   310,    -1,   355,    -1,   362,   355,    -1,   350,    -1,
     355,    -1,   362,   355,    -1,   355,    61,   357,   159,    -1,
     355,   156,   337,   157,    -1,   356,    -1,    73,    -1,   158,
     156,   337,   157,    -1,    -1,   337,    -1,   360,    -1,    -1,
     349,   359,    -1,   360,    61,   357,   159,    -1,   360,   156,
     337,   157,    -1,   361,    -1,    71,    -1,   156,   337,   157,
      -1,   158,    -1,   362,   158,    -1,   363,     8,   364,    -1,
     364,    -1,   341,    -1,    -1,   123,   153,   365,   363,   154,
      -1,    -1,    -1,   367,   335,    -1,   367,     8,   337,   122,
     337,    -1,   367,     8,   337,    -1,   337,   122,   337,    -1,
     337,    -1,   367,     8,   337,   122,    31,   339,    -1,   367,
       8,    31,   339,    -1,   337,   122,    31,   339,    -1,    31,
     339,    -1,   368,   369,    -1,   368,    78,    -1,   369,    -1,
      78,   369,    -1,    73,    -1,    -1,    73,    61,   370,   371,
     159,    -1,    73,   121,    71,    -1,   138,   337,   157,    -1,
     138,    72,    61,   337,   159,   157,    -1,   139,   341,   157,
      -1,    71,    -1,    74,    -1,    73,    -1,   114,   153,   373,
     154,    -1,   115,   153,   341,   154,    -1,     7,   337,    -1,
       6,   337,    -1,     5,   153,   337,   154,    -1,     4,   337,
      -1,     3,   337,    -1,   341,    -1,    -1,   373,     8,   374,
     341,    -1,   319,   140,    71,    -1,   351,   140,    71,    -1
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
     326,   328,   335,   340,   341,   342,   344,   348,   350,   351,
     352,   350,   355,   356,   354,   359,   362,   359,   367,   368,
     369,   366,   374,   375,   373,   378,   379,   377,   384,   385,
     389,   390,   395,   395,   395,   400,   401,   405,   409,   413,
     418,   419,   424,   424,   430,   429,   436,   435,   445,   446,
     447,   451,   452,   456,   459,   461,   464,   466,   470,   471,
     475,   476,   481,   482,   486,   487,   492,   493,   498,   499,
     504,   505,   510,   511,   512,   513,   518,   519,   519,   520,
     520,   525,   526,   531,   532,   537,   539,   539,   542,   544,
     544,   545,   545,   548,   550,   550,   554,   556,   559,   561,
     565,   568,   570,   573,   575,   579,   580,   585,   586,   587,
     588,   589,   590,   591,   592,   597,   598,   599,   604,   605,
     610,   611,   612,   613,   614,   615,   619,   620,   625,   626,
     627,   632,   633,   634,   635,   641,   642,   647,   647,   648,
     649,   649,   655,   656,   660,   661,   665,   666,   670,   671,
     675,   676,   677,   678,   679,   680,   684,   685,   686,   687,
     691,   692,   696,   697,   702,   703,   707,   707,   708,   712,
     712,   713,   714,   715,   715,   716,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   733,   734,   734,   735,   735,   736,
     736,   737,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   764,   767,
     767,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   778,   779,   780,   781,   782,   783,   784,   784,   789,
     792,   794,   798,   799,   800,   801,   805,   805,   808,   808,
     811,   811,   814,   814,   817,   817,   820,   820,   823,   823,
     826,   826,   832,   833,   834,   835,   839,   840,   841,   847,
     848,   853,   854,   853,   856,   861,   862,   867,   871,   872,
     873,   877,   878,   879,   884,   885,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   918,   922,   923,
     924,   925,   926,   927,   928,   929,   934,   935,   938,   940,
     944,   945,   946,   947,   951,   952,   957,   962,   967,   972,
     973,   972,   975,   979,   980,   985,   985,   989,   989,   993,
     997,   998,  1002,  1003,  1008,  1012,  1013,  1018,  1019,  1020,
    1024,  1025,  1029,  1030,  1031,  1036,  1037,  1041,  1042,  1047,
    1048,  1048,  1052,  1053,  1054,  1058,  1059,  1063,  1064,  1068,
    1069,  1074,  1075,  1075,  1076,  1081,  1082,  1086,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1097,  1098,  1099,  1100,  1106,
    1107,  1107,  1108,  1109,  1110,  1111,  1116,  1117,  1118,  1123,
    1124,  1125,  1126,  1127,  1128,  1129,  1133,  1134,  1134,  1138,
    1139
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "tpl_statement", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37", "$@38",
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
     211,   211,   211,   211,   211,   211,   211,   211,   212,   213,
     214,   211,   215,   216,   211,   217,   218,   211,   219,   220,
     221,   211,   222,   223,   211,   224,   225,   211,   226,   226,
     227,   227,   229,   230,   228,   231,   231,   232,   233,   234,
     235,   235,   237,   236,   239,   238,   240,   238,   241,   241,
     241,   242,   242,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   253,   253,   254,   255,   254,   256,
     254,   257,   257,   258,   258,   259,   260,   259,   261,   262,
     261,   263,   261,   264,   265,   264,   266,   266,   267,   267,
     268,   269,   269,   270,   270,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   273,   273,   273,   274,   274,
     275,   275,   275,   275,   275,   275,   276,   276,   277,   277,
     277,   278,   278,   278,   278,   279,   279,   281,   280,   280,
     282,   280,   283,   283,   284,   284,   285,   285,   286,   286,
     287,   287,   287,   287,   287,   287,   288,   288,   288,   288,
     289,   289,   290,   290,   291,   291,   293,   292,   292,   295,
     294,   294,   294,   296,   294,   297,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   298,   294,   299,   294,   300,   294,   301,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   302,   303,   294,   304,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     305,   294,   294,   294,   294,   294,   294,   306,   294,   307,
     308,   308,   309,   309,   309,   309,   311,   310,   312,   310,
     313,   310,   314,   310,   315,   310,   316,   310,   317,   310,
     318,   310,   319,   319,   319,   319,   320,   320,   320,   321,
     321,   323,   324,   322,   322,   325,   325,   326,   327,   327,
     327,   328,   328,   328,   329,   329,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   332,   333,   333,
     333,   333,   333,   333,   333,   333,   334,   334,   335,   335,
     336,   336,   336,   336,   337,   337,   338,   339,   340,   342,
     343,   341,   341,   344,   344,   346,   345,   348,   347,   347,
     349,   349,   350,   350,   351,   352,   352,   353,   353,   353,
     354,   354,   355,   355,   355,   356,   356,   357,   357,   358,
     359,   358,   360,   360,   360,   361,   361,   362,   362,   363,
     363,   364,   365,   364,   364,   366,   366,   367,   367,   367,
     367,   367,   367,   367,   367,   368,   368,   368,   368,   369,
     370,   369,   369,   369,   369,   369,   371,   371,   371,   372,
     372,   372,   372,   372,   372,   372,   373,   374,   373,   375,
     375
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
       3,     3,     4,     3,     3,     5,     3,     4,     0,     0,
       0,    18,     0,     0,    15,     0,     0,    11,     0,     0,
       0,    18,     0,     0,    17,     0,     0,    15,     1,     0,
       1,     2,     0,     0,    10,     1,     3,     1,     1,     1,
       0,     1,     0,    10,     0,     8,     0,     7,     1,     2,
       2,     0,     2,     1,     0,     2,     0,     2,     1,     3,
       0,     2,     1,     2,     1,     4,     1,     4,     1,     4,
       3,     5,     3,     4,     4,     5,     0,     0,     6,     0,
       5,     1,     1,     1,     4,     0,     0,     7,     0,     0,
       7,     0,     8,     0,     0,     8,     0,     2,     0,     4,
       3,     0,     3,     0,     4,     1,     0,     2,     3,     5,
       4,     4,     5,     7,     6,     0,     1,     1,     1,     0,
       1,     1,     2,     3,     3,     4,     3,     1,     1,     2,
       4,     3,     5,     1,     3,     2,     0,     0,     4,     2,
       0,     9,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     0,     4,     1,     0,
       7,     3,     4,     0,     7,     0,     4,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     0,     7,     0,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     4,     3,     3,     2,     0,    10,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     0,     7,
       0,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     5,     1,     1,     3,     2,     1,     3,     2,     1,
       1,     0,     0,     6,     1,     2,     0,     2,     0,     2,
       3,     0,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       3,     2,     2,     2,     4,     3,     1,     3,     1,     1,
       1,     3,     2,     1,     3,     3,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       0,     7,     1,     2,     0,     0,     4,     0,     4,     0,
       1,     2,     3,     3,     1,     1,     1,     1,     2,     1,
       1,     2,     4,     4,     1,     1,     4,     0,     1,     1,
       0,     2,     4,     4,     1,     1,     3,     1,     2,     3,
       1,     1,     0,     5,     0,     0,     2,     5,     3,     3,
       1,     6,     4,     4,     2,     2,     2,     1,     2,     1,
       0,     5,     3,     3,     6,     3,     1,     1,     1,     4,
       4,     2,     2,     4,     2,     2,     1,     0,     4,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,     0,   398,     0,
     406,   407,     6,   428,   475,    67,   408,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   359,     0,     0,
      79,     0,     0,     0,     0,     0,   382,     0,     0,     0,
       0,   158,   163,     0,     0,   412,   413,   414,   409,   410,
       0,     0,   415,   411,     0,     0,    30,     0,     0,     0,
      78,    30,   487,   401,     0,   430,     4,     0,     8,    36,
      19,     9,    10,   148,   149,     0,     0,   445,   150,   466,
       0,   433,   352,     0,   444,     0,   446,     0,   469,     0,
     452,   465,   467,   474,     0,   341,   429,     6,   382,     0,
     150,   525,   524,     0,   522,   521,   356,   322,   323,   324,
     325,     0,   348,   347,   346,   345,   344,   343,   342,     0,
       0,   383,     0,   302,   448,     0,   300,     0,   500,     0,
     438,   287,     0,     0,   383,   389,   285,   390,     0,   394,
     467,     0,     0,   349,     0,    37,     0,   273,     0,    45,
     274,     0,     0,     0,    57,     0,    59,     0,     0,     0,
      61,   445,     0,   446,     0,     0,     0,    22,     0,    21,
     238,     0,     0,   237,   160,   159,   243,     0,     0,     0,
       0,     0,   279,   495,   509,     0,   417,     0,     0,     0,
     507,     0,    15,     0,   432,     0,     6,   408,     0,     0,
       0,   445,   444,    28,     0,     0,     0,     0,    28,     0,
     402,     0,   403,     0,     0,     0,   366,     0,    18,   161,
     156,   151,     0,     0,   307,     0,   309,   336,   303,   305,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
     301,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   380,     0,   449,   477,     0,   488,
     468,     0,     0,   351,     0,   385,     0,     0,   504,   447,
       0,   354,   439,   496,     0,   385,     0,   404,     0,   391,
     468,   399,     0,     0,     0,    66,     0,     0,     0,   275,
     278,   445,   446,     0,     0,    58,    60,    86,     0,    62,
      63,    30,    85,    24,     0,     0,    17,     0,   239,   446,
       0,    64,     0,     0,    65,     0,   145,   147,   526,     0,
       0,     0,   494,     0,   510,     0,   416,   508,   428,     0,
       0,   506,   435,   505,   431,     5,    12,    13,   370,     0,
      99,   408,     0,     0,     0,   108,     0,   102,   101,   470,
       0,     0,     0,   274,   170,   172,     0,     0,     0,   110,
     111,     0,    91,   113,     0,   116,     0,   114,   335,    38,
       0,   355,   434,     7,   229,     0,     0,   154,   164,   152,
     357,   529,   462,   460,     0,     0,   311,     0,   339,     0,
       0,     0,   313,   312,   327,   326,   329,   328,   330,   332,
     333,   331,   321,   320,   315,   316,   314,   317,   318,   319,
     334,     0,   281,   298,   297,   296,   295,   294,   293,   292,
     291,   290,   289,   288,   229,   530,   463,     0,   478,     0,
       0,   523,   384,     0,     0,     0,   499,     0,   498,   384,
     462,   229,   286,   463,     0,   400,    39,   272,     0,     0,
      51,   276,    73,    70,     0,     0,    55,     0,     0,   436,
       0,     0,     0,   419,     0,   418,    27,   426,    28,     0,
      23,    20,     0,   236,   244,   241,     0,     0,   527,   519,
     520,    11,     0,   491,     0,   490,   353,     0,   512,     0,
     513,   515,   368,     3,     5,   229,   125,   495,     0,   104,
     117,     0,   109,   471,    92,   173,   170,     0,   446,     0,
       0,     0,     0,    94,   112,     0,    29,    31,    32,    33,
      34,     0,   476,     0,     0,   228,   445,   446,     0,     0,
       0,   386,   162,   166,     0,     0,     0,   225,   372,   374,
     461,   308,   310,     0,     0,   304,   306,     0,   282,     0,
     376,   378,   485,     0,   480,   450,   479,   484,   472,   473,
     503,   502,     0,     0,   392,    42,     0,    49,    46,   274,
       0,     0,     0,     0,     0,     0,     0,   422,   423,   443,
       0,   438,   436,     0,   421,     0,     0,    25,   240,     0,
     146,    69,     0,   492,   494,     0,   516,   518,   517,     0,
       0,   229,    16,     3,     0,    89,     0,     0,   106,    96,
       0,   128,   171,     0,   118,   170,    96,     0,   115,   232,
     367,     0,    26,     0,   388,     0,     0,   165,   168,   246,
     225,   227,     0,   215,     0,   226,   229,   229,   340,   337,
     283,   381,   229,   229,     0,   481,   459,   477,     0,     0,
     497,   405,   396,    30,    40,     0,     0,     0,   277,   170,
     170,   180,     0,    30,   178,    77,   186,   186,    56,     0,
     425,   439,   437,     0,   420,   427,     0,   242,   528,   494,
     489,     0,   511,     0,     0,    14,   371,     0,   103,   105,
       0,    93,     0,   274,     0,     0,     0,    95,     0,     0,
     445,   446,   387,   167,   246,     0,   256,     0,   360,   225,
       0,   217,     0,     0,     0,   404,     0,     0,   486,   457,
     454,     0,     0,   501,   393,    28,   195,     0,    30,   193,
      47,    52,     0,     0,     0,    28,   186,     0,   186,     0,
     442,   441,   424,    80,     0,   280,   514,   369,    88,   126,
      87,   107,    97,     0,     0,   135,   170,   122,    35,   235,
     256,   169,     0,   260,   261,   262,   265,   264,   263,   255,
     157,   245,   247,     0,   254,   258,     0,     0,     0,     0,
       0,   218,     0,   373,   375,   338,   284,   377,   379,   229,
     451,   482,   483,     0,   395,   203,   206,     0,    28,   274,
      74,    71,   181,     0,     0,     0,     0,     0,     0,   182,
       0,     0,   493,   198,     0,     0,   129,    89,     0,    89,
     155,     0,     0,   150,   259,     0,   249,    30,     0,    30,
       0,   221,     0,   220,     0,     0,   453,   397,   211,     0,
       0,    41,    50,     0,     0,     0,     0,   179,     0,   184,
       0,   191,   192,   189,   183,   440,    81,   208,    98,   132,
     274,     0,     0,     0,     0,   268,     0,     0,     0,    28,
       0,   364,     0,    28,   222,     0,   219,   458,   455,     0,
       0,     0,     0,   207,   194,    53,    30,   176,    75,    72,
     185,   187,    30,     0,     0,     0,     0,    89,     0,   136,
     119,   123,   271,     0,     0,   248,   250,     0,   153,   365,
       0,   361,   358,     0,   224,   459,     0,    30,     0,     0,
       0,    28,    30,    28,     0,     0,     0,    89,     0,   127,
       0,     0,   213,    89,   213,   269,   266,     0,   270,     0,
     362,   223,   456,     0,    28,    44,   196,    30,   174,    54,
       0,    28,    82,   199,     0,     0,     0,   133,   130,     0,
       0,     0,     0,     0,   225,   363,     0,     0,    28,   177,
       0,    89,   201,   209,   210,   213,    89,    89,     0,   120,
       0,   267,     0,   204,   197,     0,    30,     0,    89,     0,
       0,     0,     0,   213,     0,     0,    30,   175,    28,   200,
       0,     0,     0,   214,   137,     0,   124,   252,    30,   251,
      28,    83,   202,     0,     0,     0,    28,   139,   134,     0,
       0,   253,     0,    84,   138,   140,   131,   121,     0,   141,
     142,     0,     0,   143,     0,    30,    28,   144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    85,    86,   524,   365,   188,   189,
      87,   223,   394,   546,   917,    89,   596,   756,   683,   825,
     317,   686,   168,   685,   599,   829,   950,   606,   602,   876,
     601,   875,   172,   184,   841,   923,  1000,  1047,   717,   220,
     639,   646,   721,   844,   374,   375,   376,   637,   720,   780,
     725,   963,  1023,   849,   964,   635,   843,   723,   890,  1006,
     927,  1005,   847,   962,  1053,  1054,  1055,  1061,  1064,   345,
     346,    91,    92,   242,    93,   566,    94,   563,   408,    95,
     407,    96,   565,   656,   657,   540,   384,   979,   918,   695,
     485,   698,   767,   952,   922,   883,   760,   826,   997,   887,
    1001,  1018,   868,  1026,   871,   926,   959,   911,   990,   662,
     663,   664,   554,   555,   192,   193,   197,   736,   801,   852,
     967,  1039,   802,   803,   804,   805,   896,   806,   166,   318,
     319,   600,    97,   352,   745,   307,   420,   421,   415,   417,
     419,   744,   573,   131,   567,   120,   809,   902,    99,   404,
     631,   525,   666,   667,   672,   673,   454,   100,   665,   156,
     157,   474,   682,   754,   824,   163,   231,   472,   101,   609,
     497,   102,   610,   303,   611,   182,   104,   298,   105,   106,
     457,   676,   820,   866,   945,   750,   819,   107,   108,   109,
     110,   111,   378,   112,   113,   459,   585,   675,   586,   587,
     114,   514,   515,   709,   149,   150,   209,   210,   517,   629,
     115,   349,   622,   116
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -805
static const yytype_int16 yypact[] =
{
    -805,    60,   146,  -805,  1626,  4464,  4464,  -103,  4464,  4464,
    4464,  4464,  4464,  4464,  4464,  -805,  4464,  4464,  4464,  4464,
    4464,  4464,  4464,   318,   318,  2806,  4464,   477,   -76,   -19,
    -805,  -805,   130,  -805,  -805,  -805,  -805,  4464,  -805,    41,
      67,    94,  -805,   137,  2933,  3060,    89,  -805,   170,  3187,
    -805,  4464,    11,   -17,    90,   179,   240,   184,   221,   224,
     246,  -805,  -805,   248,   251,  -805,  -805,  -805,  -805,  -805,
     581,    66,  -805,  -805,   364,  2678,  -805,   357,  3314,  4464,
    -805,  -805,   282,   379,   535,   -73,  -805,     7,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,   369,   376,  -805,   415,  -805,
     309,  -805,  -805,  5152,  -805,   172,  1802,   298,  -805,   313,
     334,  -805,    -9,  -805,   -10,  -805,  -805,  -805,  -805,   317,
     415,  6218,  6218,  4464,  6218,  6218,  2856,  -805,  -805,   421,
    -805,  4464,  -805,  -805,  -805,  -805,  -805,  -805,  -805,   328,
     364,   -41,   338,  -805,  -805,   341,  -805,   318,  6007,   339,
     489,  -805,   368,   364,   370,   361,  -805,  -805,   381,   394,
     -14,   -10,  3441,  -805,  4464,  -805,    10,  6218,  2424,  -805,
    4464,  4464,   372,  4464,  -805,  5193,  -805,  5237,   373,   510,
    -805,   374,  6218,  1156,   377,  5278,   364,   -28,    14,  -805,
    -805,   626,    16,  -805,  -805,  -805,   523,    24,   318,   318,
     318,   384,  -805,  2806,   -33,   145,  -805,  4591,   318,   622,
    -805,   364,  -805,   -66,   -72,  4464,  1211,   513,   429,  4718,
      32,   160,     2,   391,   397,   536,  1525,  5380,   395,  4464,
     136,   393,   566,   136,    -3,   485,  -805,   487,  -805,   440,
    -805,  -805,     8,    12,  -805,  4464,  -805,   538,  -805,  -805,
    4464,  4464,  4464,  4464,  4464,  4464,  4464,  4464,  4464,  4464,
    4464,  4464,  4464,  4464,  4464,  4464,  4464,  4464,   477,  -805,
    -805,  -805,  3569,  4464,  4464,  4464,  4464,  4464,  4464,  4464,
    4464,  4464,  4464,  4464,  -805,   135,  -805,  4464,  4464,   282,
     -35,   412,  5421,  -805,   364,    77,   166,   167,  -805,  -805,
    3697,  -805,  3825,  -805,   364,   370,    54,   416,    54,  -805,
     -34,  -805,  5465,  5508,  4464,  -805,   490,  4464,   422,   573,
    6218,   494,  1565,   512,  5549,  -805,  -805,  -805,  6056,  -805,
    -805,  -805,  -805,   -24,   515,    11,  -805,  4464,  -805,  -805,
     -17,  -805,  6056,   525,  -805,    29,  -805,  -805,  -805,    30,
     448,   457,   606,   462,  -805,   546,  -805,  -805,   558,  4855,
     465,  -805,  -805,  -805,   277,  -805,  -805,  -805,  -805,  5799,
    -805,   610,   474,     6,   616,  -805,   524,  -805,  -805,   -34,
     -10,   584,   318,  3953,   541,  -805,  4464,  6111,   586,  -805,
    -805,   522,  -805,  -805,  1785,  -805,  4464,  -805,  -805,  -805,
    4896,  -805,  -805,  -805,  4081,   652,   128,  -805,   562,  -805,
    -805,   530,   532,   -34,   -10,  4464,  6295,  4464,  -805,  4464,
    4464,  4464,  3364,  3489,  3617,  3617,  3617,  3617,  1762,  1762,
    1762,  1762,   897,   897,   281,   281,   281,   421,   421,   421,
    -805,   153,  2856,  2856,  2856,  2856,  2856,  2856,  2856,  2856,
    2856,  2856,  2856,  2856,  4081,   539,   543,   142,  6218,   516,
    4937,  -805,   134,   530,   539,   318,  6218,   318,  6048,   370,
    -805,  4081,  -805,  -805,   142,  -805,   668,  6218,   545,  5590,
    -805,  -805,  -805,  -805,   697,    33,  -805,  6056,  6056,  6056,
     560,   567,   364,   -49,   574,  -805,  -805,  -805,   569,   656,
    -805,  -805,  4983,  -805,  -805,   711,   318,   575,  -805,  -805,
    -805,  -805,   579,  -805,    38,  -805,  -805,   228,  -805,  4464,
    -805,  -805,  -805,   576,  -805,  4081,  -805,  2806,   597,  -805,
    -805,   725,  -805,   -34,  -805,  -805,   541,   585,  1395,   402,
     589,  5319,   402,  -805,  -805,   592,  -805,  -805,  -805,  -805,
    -805,  5840,  -805,   318,   595,   738,    46,   472,  6056,   607,
     364,   370,  -805,   634,   128,   599,   603,   119,  -805,  -805,
     -34,  6258,  2856,  4464,  6177,  3110,  3237,   477,  -805,   604,
    -805,  -805,  -805,  4464,  -805,  -805,    -4,  -805,  -805,  -805,
    -805,  -805,  4209,   609,  -805,  -805,  2424,  -805,  -805,  4464,
    4464,   318,   402,  6056,   686,  1913,    -5,  -805,  -805,   646,
     612,   761,  6056,   364,   113,   701,   673,  -805,  -805,  6056,
    -805,  -805,   318,  -805,   606,   763,  -805,  -805,  -805,   618,
    1285,  4081,  -805,   621,   627,  -805,   629,  4464,  -805,  -805,
     636,  -805,  -805,  4464,  -805,   541,  -805,   641,  -805,  -805,
    -805,  4337,  -805,   364,   370,   128,   638,   788,  -805,  -805,
     119,  -805,   643,   794,    13,  -805,  4081,  4081,  2983,  -805,
    -805,  -805,  4081,  4081,  5024,  -805,   654,  4464,  4464,   318,
    6218,  -805,  -805,  -805,  -805,  4464,  2041,   651,  6218,   541,
     541,  -805,   796,  -805,  -805,  -805,   658,   661,  -805,  6056,
    -805,  6056,  -805,   665,   178,  -805,   667,  -805,  -805,   606,
    -805,  4464,  -805,   671,   675,  -805,  -805,   169,  -805,  6218,
    4464,   804,  4464,  4464,  5883,   402,   683,   804,   678,   318,
      47,   841,   370,   788,  -805,   128,   781,   680,   732,   165,
     764,   825,   687,   688,  4464,   416,   689,   690,  -805,  -805,
    -805,   681,  5065,  -805,   727,   356,  -805,  5633,  -805,  -805,
    -805,  -805,   692,   698,  6056,   762,  -805,   469,  -805,   286,
    -805,   744,  -805,  -805,    50,  2856,  -805,  -805,  -805,  2678,
    -805,  6218,  -805,  5674,   712,  -805,   541,  -805,  -805,  -805,
     918,  -805,   797,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,   772,   716,  -805,    26,   717,   722,   720,
      42,   864,  6056,  -805,  -805,  2983,  -805,  -805,  -805,  4081,
     758,  -805,  -805,   142,  -805,  -805,   213,   726,   801,  4464,
    -805,  -805,  -805,   730,   482,   739,  4464,    -1,   291,  -805,
    6056,   128,  -805,  -805,  4464,   749,  -805,  -805,   745,  -805,
    -805,   885,   829,   415,  -805,   833,  -805,  -805,   118,  -805,
     834,   893,  6056,  -805,   755,   142,  -805,  -805,   330,   759,
    2424,  -805,  -805,   760,   765,  2169,  2169,  -805,   766,  -805,
    5111,  -805,  -805,  -805,  -805,  -805,  -805,   349,  6218,  -805,
    4464,   261,   768,   359,  6056,   900,    27,   847,   909,   770,
     850,  -805,    51,   771,   912,  6056,  -805,  -805,  -805,   776,
     904,   863,  4464,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,   860,  4464,   -29,   888,  -805,   782,  2678,
    -805,  2678,  -805,  6056,   862,  -805,  -805,  6056,  -805,  -805,
     186,  -805,  -805,  6056,  -805,   654,  4464,  -805,   790,  5715,
    2297,   866,  -805,   174,   783,  5924,  4464,  -805,   886,  -805,
     375,   802,   889,  -805,   889,  -805,   942,   806,  -805,   887,
    -805,  -805,  -805,  5758,   894,  -805,  -805,  -805,  -805,  -805,
     811,   301,  -805,  -805,  5965,   459,   820,  2678,  -805,   824,
     927,   491,   928,  6056,   119,  -805,   949,  2424,   891,  -805,
     823,  -805,  -805,  2678,  -805,   889,  -805,  -805,   902,  2678,
     898,  -805,   835,  -805,  -805,   832,  -805,   517,  -805,   944,
     556,   640,   840,   889,   844,   264,  -805,  -805,   842,  2678,
     653,   913,  2551,  2678,  -805,   952,  -805,  -805,  -805,  -805,
     655,  -805,  2678,   854,   920,   919,   851,   908,  -805,   865,
     870,  -805,   867,  -805,   908,  -805,  -805,  -805,   128,  -805,
    -805,   946,   868,  -805,   881,  -805,   884,  -805
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -805,  -805,  -346,  -805,   -23,  -805,  -805,  -805,  -805,   707,
    -805,   -69,  -805,  -805,     4,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -804,  -805,
    -805,  -805,   400,  -805,   645,   672,  -805,  -805,  -805,     9,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,   -11,  -805,  -805,  -805,
     547,   660,   663,  -117,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,   392,  -516,  -353,  -805,   173,  -805,
    -805,  -805,  -628,  -805,  -805,   175,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,  -805,  -713,  -621,
    -805,   319,  -438,  -805,  -805,   719,  -805,   326,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,   257,  -805,  -805,  -805,  -366,
    -805,  -805,   -26,  -805,  -805,  -805,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,    -2,  -805,  -805,  -805,  -805,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,   544,  -400,  -254,
    -805,  -805,  -805,  -805,  -805,  -805,  -805,   307,   493,   292,
    -805,  -805,   450,   452,  -805,    88,    36,  -425,   403,   991,
    -805,  -805,  -805,  -805,  -805,   121,  -805,  -232,  -805,   925,
    -805,   -22,  -805,   171,  -805,   387,  -465,  -805,  -805,  -805,
     -20,   358,   446,  -805,  -193,  -805,   348,   177,  -805,  -805,
    -805,  -805,  -805,  -805
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -465
static const yytype_int16 yytable[] =
{
     141,   141,    98,   291,   154,   159,   562,   161,    88,   594,
     353,   412,   228,    90,   440,   237,   579,   537,   314,   523,
     640,   696,   335,   181,   340,   881,   287,   287,   354,   187,
     536,   -90,   343,   593,   855,   934,   956,   506,   508,   737,
     590,   604,   591,   891,   740,   893,   624,   287,   213,   221,
     123,   214,   287,   456,  -230,  -233,   190,   677,   624,   940,
       3,   388,   334,    34,   412,   456,   499,  -383,  -385,   769,
     204,   235,   235,   860,   470,   361,   473,   162,   235,   409,
     236,   368,   117,   411,   528,    34,   741,   634,   355,   366,
     367,  -383,   103,   121,   122,   235,   124,   125,   126,   127,
     128,   129,   130,   235,   132,   133,   134,   135,   136,   137,
     138,   222,   236,   148,   151,   861,   235,   295,  -461,   957,
     235,   288,   288,   960,   141,   167,  -464,    34,   649,   726,
     305,  -464,   175,   177,   164,   207,   208,   117,   834,   185,
     838,   191,   288,   206,  -460,   321,    -2,   288,   289,   900,
     -90,   697,   678,   985,   882,   186,   165,   392,   402,   991,
     178,   410,   238,   333,   658,   315,   226,   227,   141,   336,
      82,   341,   316,   762,   763,   141,   141,   141,   633,   344,
     389,   856,   935,   507,   509,   141,   642,   605,   364,   645,
     117,   901,   625,   714,   169,   141,   380,  1017,   160,   117,
    -230,  -233,  1020,  1021,   842,   941,   455,   194,    34,   204,
     211,   292,    82,   582,  1030,    34,   577,   969,   204,   293,
     170,   235,   212,   414,   117,   584,    34,   338,   742,   743,
     368,   270,   271,   687,   746,   747,   117,   463,   464,    34,
      34,   179,   584,   661,   778,   154,   159,   171,   161,   690,
     312,   992,   313,  -385,   753,   658,   103,   235,   320,   970,
     559,   324,   498,   560,   118,   414,  -190,  -190,  -190,   559,
     848,   462,   560,  -216,   207,   208,   414,   414,   235,   869,
     870,   469,   356,   207,   208,   290,   414,   522,   414,   661,
     173,   148,  1019,    82,   139,   359,   195,   140,   583,   626,
      82,   627,   628,   369,   789,   493,   559,   387,   390,   560,
    1035,    82,   187,   196,   779,   391,    76,   400,  -384,   493,
      77,    78,   235,   670,    82,    82,   265,   266,   267,   141,
     268,  -190,   310,   416,   636,   791,   778,   198,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   380,   784,   867,   141,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   786,  1012,   199,   458,   460,   200,   556,   836,
     837,   864,   357,   561,   836,   837,   363,   379,   466,   117,
     468,    34,    98,  -188,  -188,  -188,   909,   910,   547,   201,
     908,   202,   477,   548,   203,   479,   929,   357,    76,   363,
     357,   363,    77,    78,   413,   924,   925,  -384,   141,  1037,
    1038,   235,   -43,   -43,   -43,   502,   143,   146,   556,   118,
     522,   232,   234,   382,   778,   117,   224,   414,   229,   160,
     239,   886,   141,   839,   141,   556,   241,   240,   884,   243,
     778,   284,   204,   285,   414,   286,   413,   230,  -188,   139,
     382,   211,   140,   874,   493,   493,   493,   413,   413,   614,
     268,   320,   294,   117,   541,    34,    82,   413,   296,   413,
    -231,   297,   103,   141,   551,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   302,   301,   556,
     117,   306,    34,   571,   931,   572,    76,   574,   575,   576,
      77,    78,   304,   118,   235,   309,   141,   207,   208,   141,
     987,   308,    76,   328,   928,   323,    77,    78,   327,   329,
     141,  -448,  -448,   331,   778,   493,   342,   654,   351,   393,
     118,   561,   381,   139,   561,   395,   140,   379,   117,   396,
      34,   533,   399,   401,   154,   159,   403,   161,   405,   406,
      82,   835,   836,   837,   418,   410,   778,   142,   142,   471,
     139,   155,   478,   140,   878,   836,   837,   480,   141,   141,
     493,   481,   383,   484,   482,   570,   500,    82,   118,   493,
     704,   584,   778,    30,    31,   370,   493,    34,   505,   141,
     684,   141,   510,   371,  1003,   556,    76,   630,   204,   694,
      77,    78,   511,   233,   755,   148,   516,   518,   152,   519,
     496,   153,   521,  -100,   765,   730,  -231,   527,   413,   529,
     732,   778,   561,   584,   504,    82,  1009,   561,    76,   204,
     556,   556,    77,    78,   361,   413,   556,   556,   372,    65,
      66,    67,    68,    69,   204,   534,   141,   543,  1060,   205,
     373,   668,  1029,   539,    76,   558,    72,    73,    77,    78,
     544,   674,   530,   207,   208,   588,   493,   117,   493,    34,
     680,   564,    82,   568,   103,   569,   141,   320,   688,   828,
     759,   142,   580,   103,   595,   204,   581,   117,   597,    34,
     361,  1032,   141,    76,   207,   208,   141,    77,    78,   377,
     603,   613,   561,   612,   615,   778,   561,   118,   206,   207,
     208,  -205,  -205,  -205,   619,   719,   616,   617,   778,   512,
     621,   724,   623,   632,   356,   142,   897,   118,   638,   643,
     641,   493,   142,   142,   142,   647,   651,   139,   160,   650,
     140,   653,   142,   221,   655,   659,   660,   692,   671,   362,
     207,   208,   142,   681,    82,   458,   752,   139,   699,   701,
     140,   700,   705,   757,   103,   706,   711,   712,   715,   607,
     608,   716,   337,   718,    82,  1033,   722,    76,   899,   493,
     903,    77,    78,   556,   734,   728,   735,   738,  1042,   775,
      76,   853,   739,   414,    77,    78,   761,   749,   781,   764,
     783,   320,   155,   766,  -257,   222,   768,   493,   561,   772,
     773,   495,   793,   794,   795,   796,   797,   798,   776,   777,
     782,   787,   815,   788,   807,   495,   808,   811,   812,   493,
     821,   813,   814,   817,   818,   414,   830,   951,   823,  -234,
     652,   833,   831,   953,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   840,   846,   851,   377,
      47,   493,   494,   857,   913,   858,   859,   862,   974,   865,
     792,   872,   493,   981,   873,   877,   494,   793,   794,   795,
     796,   797,   798,   799,   879,   691,   142,   889,   894,   892,
    -448,  -448,   895,   221,   898,   221,   905,   904,   998,   907,
     493,   707,   912,   933,   493,   914,   930,   320,   936,   915,
     493,   920,   937,   939,   880,   943,   142,   938,   942,   946,
     947,   948,   888,   954,   958,   966,   961,   982,   800,   262,
     263,   264,   265,   266,   267,   975,   268,  1028,   145,   145,
     988,   986,   158,   980,   978,   993,   989,  1040,   103,   994,
     995,   221,  -212,   103,   103,   222,   999,   222,  1004,  1046,
     493,   561,  1007,  1008,  1010,  1013,  1015,   221,   320,  1016,
     495,   495,   495,   221,  1024,   142,  1022,  1027,  1034,  1025,
    1031,   770,  1036,   771,   413,  -234,  1066,  1043,  1045,  1041,
     949,  1014,  1048,   221,  1049,  1050,   221,   221,  1051,   142,
    1052,   142,   955,  1056,   144,   144,   221,   792,  1057,  1062,
    1058,   531,  1063,   222,   793,   794,   795,   796,   797,   798,
     799,   494,   494,   494,   973,   561,   413,  1065,   103,   222,
     183,  1067,   501,  1059,   984,   222,   727,   733,   532,   919,
     142,   495,   816,   620,   549,   921,   832,   550,   810,   503,
     790,   854,   703,   702,   751,   222,   972,   774,   222,   222,
     710,     0,   145,     0,     0,   850,     0,     0,   222,     0,
       0,     0,     0,   142,     0,   103,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,   142,     0,     0,
       0,     0,   494,     0,   863,   495,     0,     0,     0,     0,
       0,     0,   495,     0,     0,     0,   145,     0,     0,     0,
       0,   155,     0,   145,   145,   145,     0,     0,     0,     0,
       0,     0,   885,   145,     0,     0,     0,     0,   299,     0,
       0,     0,     0,   145,     0,   142,   142,   494,     0,     0,
       0,     0,     0,     0,   906,     0,   494,     0,     0,     0,
       0,     0,   322,   494,     0,     0,   142,     0,   142,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,     0,   339,     0,     0,     0,   932,     0,     0,   347,
     348,   350,   495,   158,   495,     0,     0,   944,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
       0,     0,     0,     0,     0,  -448,  -448,     0,     0,     0,
       0,     0,     0,   142,     0,   965,     0,     0,     0,   968,
       0,     0,     0,     0,     0,   971,     0,     0,     0,     0,
       0,     0,     0,   494,     0,   494,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,   495,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,     0,   142,     0,     0,     0,   145,     0,     0,
      30,    31,   370,     0,    34,  1011,     0,     0,     0,     0,
     371,     0,     0,     0,   244,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,   145,   494,     0,
     247,   330,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   495,   268,   372,    65,    66,    67,    68,
      69,     0,     0,   513,     0,     0,     0,   373,     0,     0,
       0,     0,     0,    72,    73,   495,   494,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,    82,
       0,     0,     0,   535,   538,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   494,     0,     0,   495,     0,     0,
     145,     0,   145,     0,     0,   557,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,   494,     0,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
       0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
     495,   145,   578,     0,     0,     0,   495,     0,   494,     0,
       0,     0,     0,     0,   713,   557,     0,     0,     0,   494,
       0,     0,     0,     0,  -448,  -448,   299,     0,   299,     0,
       0,     0,   557,     0,   145,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   494,   145,     0,
       0,   494,     0,     0,     0,     0,   495,   494,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   557,  -172,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   145,     0,     0,
     385,     0,     0,   385,   244,   245,   246,   494,     0,     0,
       0,     0,     0,     0,   299,  -172,     0,   145,     0,   145,
     247,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,     0,     0,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
       0,     0,   689,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   708,     0,   513,     0,     0,     0,     0,
       0,     0,   557,     0,  -448,  -448,     0,     0,     0,     5,
       6,     7,     8,     9,   145,     0,     0,     0,    10,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,   145,   483,     0,   557,   557,     0,
       0,     0,     0,   557,   557,     0,     0,     0,    11,    12,
     299,     0,     0,   397,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
     513,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,   385,    43,     0,     0,
     299,    44,    45,    46,    47,    48,    49,    50,     0,    51,
      52,    53,     0,     0,     0,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,    71,    72,    73,
      74,    75,     0,    76,     0,     0,     0,    77,    78,    79,
       0,    80,    81,     0,    82,     0,    83,    84,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,  -465,  -465,
    -465,  -465,   260,   261,   262,   263,   264,   265,   266,   267,
     557,   268,     0,     0,     0,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,  -448,  -448,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
      53,     0,     0,     0,    54,    55,    56,     0,    57,    58,
      59,   545,    61,    62,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,     0,     5,     6,     7,     8,
       9,    70,     0,     0,     0,    10,   119,    72,    73,    74,
      75,     0,    76,     0,     0,     0,    77,    78,    79,   693,
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
       0,     0,     0,     0,     0,     0,    79,   758,    80,    81,
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
       0,     0,     0,     0,    79,   916,    80,    81,     0,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    79,   977,    80,    81,     0,    82,     0,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     5,     6,     7,
       8,     9,     0,    70,     0,     0,    10,     0,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,    80,    81,     0,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,     0,    49,    50,     0,    51,     0,    53,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     5,     6,     7,     8,     9,     0,
      70,     0,     0,    10,     0,   119,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,    80,
      81,     0,    82,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,  1044,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   215,     0,     0,     0,
      30,    31,   216,    33,    34,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,   218,     0,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     5,     6,     7,     8,     9,     0,    70,     0,     0,
      10,     0,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   215,     0,     0,     0,    30,    31,   216,
      33,    34,     0,     0,     0,     0,     0,   217,     0,     0,
       0,     0,   218,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,     0,     5,
       6,     7,     8,     9,    70,     0,     0,     0,    10,   119,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,    82,   147,    83,    84,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   117,    33,    34,
       0,   247,     0,   248,   249,    36,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,    47,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,     5,     6,     7,     8,
       9,     0,    70,     0,     0,    10,     0,   119,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,    82,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   117,    33,    34,     0,     0,     0,
     248,   249,    36,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,    47,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,     5,     6,     7,     8,     9,     0,    70,
       0,     0,    10,     0,   119,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,   174,     0,
       0,    82,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   117,    33,    34,     0,     0,     0,     0,   249,    36,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,    47,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
       5,     6,     7,     8,     9,     0,    70,     0,     0,    10,
       0,   119,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,   176,     0,     0,    82,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   117,    33,
      34,     0,     0,     0,     0,     0,    36,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,    47,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     5,     6,     7,
       8,     9,     0,    70,     0,     0,    10,     0,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,   180,     0,     0,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   117,    33,    34,     0,     0,
       0,     0,     0,    36,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,    47,   268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     5,     6,     7,     8,     9,     0,
      70,     0,     0,    10,     0,   119,    72,    73,    74,     0,
       0,     0,     0,   225,     0,     0,     0,    79,     0,     0,
       0,     0,    82,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   117,    33,    34,     0,     0,     0,     0,     0,
      36,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     0,     5,     6,     7,     8,     9,    70,     0,     0,
       0,    10,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,   311,     0,     0,     0,    82,
     441,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     117,    33,    34,     0,     0,     0,     0,     0,    36,  -465,
    -465,  -465,  -465,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,     0,
       5,     6,     7,     8,     9,    70,     0,     0,     0,    10,
     119,    72,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,    82,   465,    83,
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
      79,     0,     0,     0,     0,    82,   467,    83,    84,     0,
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
       0,     0,     0,    82,   382,    83,    84,     0,     0,     0,
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
       0,    82,   553,    83,    84,     0,     0,     0,     0,     0,
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
     679,    83,    84,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    79,     0,     0,     0,     0,    82,   729,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   117,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    69,     5,     6,     7,
       8,     9,     0,    70,     0,     0,    10,     0,   119,    72,
      73,    74,     0,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,    82,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   117,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,     5,     6,     7,     8,     9,     0,
      70,     0,     0,    10,     0,   119,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,    82,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   117,   358,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,     5,     6,     7,     8,     9,     0,    70,     0,     0,
      10,     0,   119,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,    82,
       0,    83,    84,     0,     0,     0,     0,     0,     0,     0,
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
      72,    73,    74,     0,   244,   245,   246,     0,     0,     0,
       0,   386,     0,     0,     0,     0,    82,     0,    83,    84,
     247,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   244,   245,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,     0,   248,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,     0,   268,   244,   245,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,   248,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,     0,     0,     0,
       0,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
     248,   249,   520,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,   248,   249,   552,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,   244,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,   248,   249,   589,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,     0,     0,     0,     0,
     244,   245,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   247,   881,   248,   249,
     618,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   244,   245,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,     0,   248,
     249,   748,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
     248,   249,   822,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,     0,     0,     0,   244,   245,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,     0,   248,   249,   882,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,   269,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,   248,   249,   325,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
     245,   246,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,     0,   248,   249,   644,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
     244,   245,   246,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   247,     0,   248,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,     0,     0,   398,   244,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,     0,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,   398,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   461,   248,   249,     0,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   244,
     245,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,     0,   248,   249,   475,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
       0,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
     248,   249,   476,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,   248,   249,   486,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,   244,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,   248,   249,   598,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,     0,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,   827,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   244,   245,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,   248,   249,   845,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   244,
     245,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,     0,   248,   249,   976,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
       0,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
     248,   249,   996,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   244,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   526,     0,   247,
       0,   248,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,   244,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   648,     0,
     247,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,     0,   244,   245,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   785,   247,     0,   248,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   983,   247,     0,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   487,   488,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1002,     0,     0,     0,   489,     0,     0,
     244,   245,   246,     0,     0,    30,    31,   117,     0,   300,
       0,     0,     0,     0,     0,    36,   247,     0,   248,   249,
       0,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,     0,     0,     0,     0,     0,     0,   118,     0,     0,
     592,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     490,    65,    66,    67,    68,    69,   244,   245,   246,     0,
       0,     0,   373,     0,     0,     0,     0,   491,    72,    73,
     492,   542,   247,   669,   248,   249,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   244,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   246,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-805))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-465))

static const yytype_int16 yycheck[] =
{
      23,    24,     4,   120,    27,    27,   406,    27,     4,   474,
     203,   243,    81,     4,   268,     8,   454,   383,     8,   365,
     536,    26,     8,    49,     8,    26,    61,    61,    61,    52,
     383,    29,     8,   471,     8,     8,    65,     8,     8,   660,
     465,     8,   467,   847,    31,   849,     8,    61,    71,    75,
     153,    74,    61,   285,     8,     8,    73,    61,     8,     8,
       0,    29,    90,    73,   296,   297,    90,   140,   140,   697,
      73,   144,   144,    31,   306,    78,   308,   153,   144,    71,
     153,   153,    71,    71,    78,    73,    73,   525,   121,   155,
     156,   140,     4,     5,     6,   144,     8,     9,    10,    11,
      12,    13,    14,   144,    16,    17,    18,    19,    20,    21,
      22,    75,   153,    25,    26,    73,   144,   140,   153,   148,
     144,   156,   156,   927,   147,    37,   140,    73,   553,   645,
     153,   140,    44,    45,   153,   138,   139,    71,   766,    51,
     768,   158,   156,   137,   153,   171,     0,   156,   158,    31,
     148,   156,   156,   957,   155,   144,    26,   155,   161,   963,
      71,   153,   155,   186,   564,   155,    78,    79,   191,   155,
     158,   155,   168,   689,   690,   198,   199,   200,   524,   155,
     148,   155,   155,   154,   154,   208,   539,   154,   211,   542,
      71,    73,   154,   631,   153,   218,   216,  1001,    27,    71,
     154,   154,  1006,  1007,   154,   154,    71,   117,    73,    73,
     144,   123,   158,    71,  1018,    73,    63,    31,    73,   131,
     153,   144,   156,   243,    71,   457,    73,   191,   666,   667,
     153,    59,    60,   599,   672,   673,    71,    71,    71,    73,
      73,    71,   474,   124,    75,   268,   268,   153,   268,   602,
     162,   964,   164,   140,   679,   655,   168,   144,   170,    73,
     141,   173,   331,   144,   111,   285,    92,    93,    94,   141,
     786,   294,   144,   154,   138,   139,   296,   297,   144,    66,
      67,   304,   137,   138,   139,   114,   306,   153,   308,   124,
     153,   203,  1005,   158,   141,   207,   117,   144,   156,    71,
     158,    73,    74,   215,   729,   328,   141,   219,   148,   144,
    1023,   158,   335,    73,   145,   155,   147,   229,   140,   342,
     151,   152,   144,   577,   158,   158,    45,    46,    47,   352,
      49,   157,   161,   245,   527,   735,    75,   153,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   376,   723,   823,   382,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   725,   994,   153,   287,   288,   153,   404,    93,
      94,   819,   205,   406,    93,    94,   209,   216,   300,    71,
     302,    73,   394,    92,    93,    94,    66,    67,   394,   153,
     865,   153,   314,   394,   153,   317,   145,   230,   147,   232,
     233,   234,   151,   152,   243,    66,    67,   140,   441,   155,
     156,   144,    66,    67,    68,   337,    23,    24,   454,   111,
     153,    83,    84,    31,    75,    71,    79,   457,   156,   268,
      71,   841,   465,   157,   467,   471,    31,    71,   157,   140,
      75,   153,    73,   140,   474,   121,   285,    78,   157,   141,
      31,   144,   144,   829,   487,   488,   489,   296,   297,   492,
      49,   383,   144,    71,   386,    73,   158,   306,   140,   308,
       8,   140,   394,   506,   396,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     8,   159,   525,
      71,   140,    73,   415,   145,   417,   147,   419,   420,   421,
     151,   152,   144,   111,   144,   121,   539,   138,   139,   542,
     145,   140,   147,    13,   890,   153,   151,   152,   155,   155,
     553,    59,    60,   156,    75,   558,    13,   560,   154,   148,
     111,   564,    29,   141,   567,   148,   144,   376,    71,    13,
      73,   380,   157,   160,   577,   577,    71,   577,    71,   119,
     158,    92,    93,    94,    26,   153,    75,    23,    24,   153,
     141,    27,    82,   144,    92,    93,    94,   155,   601,   602,
     603,     8,   153,    71,    90,   414,    71,   158,   111,   612,
     613,   823,    75,    69,    70,    71,   619,    73,    73,   622,
     596,   624,   154,    79,   145,   631,   147,   519,    73,   605,
     151,   152,   155,    78,   683,   527,   154,    71,   141,    61,
     328,   144,   157,    13,   693,   651,   154,   153,   457,    13,
     653,    75,   655,   865,   342,   158,   145,   660,   147,    73,
     666,   667,   151,   152,    78,   474,   672,   673,   124,   125,
     126,   127,   128,   129,    73,    71,   679,    71,  1058,    78,
     136,   573,   145,   122,   147,    13,   142,   143,   151,   152,
     148,   583,   148,   138,   139,   159,   699,    71,   701,    73,
     592,   119,   158,   153,   596,   153,   709,   599,   600,   758,
     686,   147,   153,   605,    26,    73,   153,    71,   153,    73,
      78,   145,   725,   147,   138,   139,   729,   151,   152,   216,
      13,   144,   735,   153,   140,    75,   739,   111,   137,   138,
     139,    66,    67,    68,    13,   637,   157,    71,    75,   123,
     155,   643,   153,   157,   137,   191,   853,   111,    13,   150,
     155,   764,   198,   199,   200,   153,     8,   141,   577,   154,
     144,   144,   208,   779,   120,   156,   153,    71,   154,   137,
     138,   139,   218,   154,   158,   677,   678,   141,   122,     8,
     144,   159,    71,   685,   686,   102,    13,   159,   157,   487,
     488,   154,   156,   154,   158,   145,   150,   147,   857,   812,
     859,   151,   152,   819,   156,   154,     8,   154,   145,   711,
     147,   803,     8,   823,   151,   152,   155,   153,   720,    13,
     722,   723,   268,   155,    98,   779,   155,   840,   841,   154,
     153,   328,   106,   107,   108,   109,   110,   111,   157,   154,
      26,   148,   744,   155,   154,   342,   104,    73,    13,   862,
     159,   154,   154,   154,   154,   865,   154,   916,   121,     8,
     558,    89,   154,   922,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   122,   155,    71,   376,
      98,   894,   328,   156,   870,   153,   156,    13,   947,   121,
      99,   155,   905,   952,    83,   155,   342,   106,   107,   108,
     109,   110,   111,   112,   155,   603,   352,   148,    13,   154,
      59,    60,    73,   929,    71,   931,    13,    73,   977,   154,
     933,   619,   153,    13,   937,   155,   148,   829,    71,   154,
     943,   155,    13,    73,   836,    13,   382,   157,   157,   153,
      26,    68,   844,    73,    46,    73,   154,   154,   157,    42,
      43,    44,    45,    46,    47,   155,    49,  1016,    23,    24,
     148,    65,    27,    87,   950,    13,    67,  1026,   870,   153,
      73,   987,    68,   875,   876,   929,   155,   931,   148,  1038,
     993,   994,   148,    46,    46,    26,    85,  1003,   890,   156,
     487,   488,   489,  1009,    86,   441,    84,   155,   148,   154,
      46,   699,   148,   701,   823,   154,  1065,    84,    46,   157,
     912,   997,   148,  1029,    84,    86,  1032,  1033,   157,   465,
     102,   467,   924,   148,    23,    24,  1042,    99,   148,    73,
     153,   376,   154,   987,   106,   107,   108,   109,   110,   111,
     112,   487,   488,   489,   946,  1058,   865,   156,   950,  1003,
      49,   157,   335,  1054,   956,  1009,   646,   655,   376,   876,
     506,   558,   745,   506,   394,   880,   764,   394,   739,   340,
     734,   804,   612,   611,   677,  1029,   945,   709,  1032,  1033,
     624,    -1,   147,    -1,    -1,   157,    -1,    -1,  1042,    -1,
      -1,    -1,    -1,   539,    -1,   997,   542,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   603,   553,    -1,    -1,
      -1,    -1,   558,    -1,   812,   612,    -1,    -1,    -1,    -1,
      -1,    -1,   619,    -1,    -1,    -1,   191,    -1,    -1,    -1,
      -1,   577,    -1,   198,   199,   200,    -1,    -1,    -1,    -1,
      -1,    -1,   840,   208,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   218,    -1,   601,   602,   603,    -1,    -1,
      -1,    -1,    -1,    -1,   862,    -1,   612,    -1,    -1,    -1,
      -1,    -1,   171,   619,    -1,    -1,   622,    -1,   624,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,   191,    -1,    -1,    -1,   894,    -1,    -1,   198,
     199,   200,   699,   268,   701,    -1,    -1,   905,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,   679,    -1,   933,    -1,    -1,    -1,   937,
      -1,    -1,    -1,    -1,    -1,   943,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   699,    -1,   701,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   709,    -1,    -1,    -1,   764,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   725,
      -1,    -1,    -1,   729,    -1,    -1,    -1,   352,    -1,    -1,
      69,    70,    71,    -1,    73,   993,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   812,    -1,   382,   764,    -1,
      25,   155,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   840,    49,   124,   125,   126,   127,   128,
     129,    -1,    -1,   352,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,    -1,   142,   143,   862,   812,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,   158,
      -1,    -1,    -1,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   840,    -1,    -1,   894,    -1,    -1,
     465,    -1,   467,    -1,    -1,   404,    -1,    -1,   905,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   862,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,   933,    -1,    -1,    -1,
     937,   506,   441,    -1,    -1,    -1,   943,    -1,   894,    -1,
      -1,    -1,    -1,    -1,   159,   454,    -1,    -1,    -1,   905,
      -1,    -1,    -1,    -1,    59,    60,   465,    -1,   467,    -1,
      -1,    -1,   471,    -1,   539,    -1,    -1,   542,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   933,   553,    -1,
      -1,   937,    -1,    -1,    -1,    -1,   993,   943,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,    -1,
      -1,    -1,   577,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   525,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   601,   602,    -1,    -1,
     539,    -1,    -1,   542,     9,    10,    11,   993,    -1,    -1,
      -1,    -1,    -1,    -1,   553,   150,    -1,   622,    -1,   624,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,   601,   602,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   679,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   622,    -1,   624,    -1,    -1,    -1,    -1,
      -1,    -1,   631,    -1,    59,    60,    -1,    -1,    -1,     3,
       4,     5,     6,     7,   709,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   651,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     725,    -1,    -1,    -1,   729,    90,    -1,   666,   667,    -1,
      -1,    -1,    -1,   672,   673,    -1,    -1,    -1,    42,    43,
     679,    -1,    -1,   148,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
     709,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,   725,    91,    -1,    -1,
     729,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   145,    -1,   147,    -1,    -1,    -1,   151,   152,   153,
      -1,   155,   156,    -1,   158,    -1,   160,   161,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     819,    49,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    59,    60,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,     3,     4,     5,     6,
       7,   136,    -1,    -1,    -1,    12,   141,   142,   143,   144,
     145,    -1,   147,    -1,    -1,    -1,   151,   152,   153,    26,
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
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
       3,     4,     5,     6,     7,   136,    -1,    -1,    -1,    12,
     141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    26,   155,   156,    -1,   158,    -1,   160,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,   155,   156,    -1,   158,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,   105,
      -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,   155,
     156,    -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    46,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,     3,
       4,     5,     6,     7,   136,    -1,    -1,    -1,    12,   141,
     142,   143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,    31,   160,   161,
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
      -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,    -1,
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
      -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
     153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,     3,     4,     5,     6,     7,   136,    -1,    -1,
      -1,    12,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,   154,    -1,    -1,    -1,   158,
      31,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    98,    -1,    -1,
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
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,    -1,   160,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
      -1,   160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     142,   143,   144,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
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
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
     157,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   157,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   157,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   155,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   155,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   155,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    90,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,   154,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   154,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   154,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   154,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   154,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   154,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   154,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   154,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   154,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    25,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    61,    -1,    -1,
       9,    10,    11,    -1,    -1,    69,    70,    71,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    79,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,     9,    10,    11,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    90,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    11,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49
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
     211,   233,   234,   236,   238,   241,   243,   294,   307,   310,
     319,   330,   333,   337,   338,   340,   341,   349,   350,   351,
     352,   353,   355,   356,   362,   372,   375,    71,   111,   141,
     307,   337,   337,   153,   337,   337,   337,   337,   337,   337,
     337,   305,   337,   337,   337,   337,   337,   337,   337,   141,
     144,   166,   319,   340,   341,   351,   340,    31,   337,   366,
     367,   337,   141,   144,   166,   319,   321,   322,   351,   353,
     355,   362,   153,   327,   153,    26,   290,   337,   184,   153,
     153,   153,   194,   153,   155,   337,   155,   337,    71,    71,
     155,   294,   337,   341,   195,   337,   144,   166,   170,   171,
      73,   158,   276,   277,   117,   117,    73,   278,   153,   153,
     153,   153,   153,   153,    73,    78,   137,   138,   139,   368,
     369,   144,   156,   166,   166,    65,    71,    79,    84,    86,
     201,   294,   338,   173,    79,   149,   337,   337,   173,   156,
      78,   328,   368,    78,   368,   144,   153,     8,   155,    71,
      71,    31,   235,   140,     9,    10,    11,    25,    27,    28,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   155,
      59,    60,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   153,   140,   121,    61,   156,   158,
     355,   235,   337,   337,   144,   166,   140,   140,   339,   341,
     122,   159,     8,   335,   144,   166,   140,   297,   140,   121,
     355,   154,   337,   337,     8,   155,   176,   182,   291,   292,
     337,   294,   341,   153,   337,   155,   155,   155,    13,   155,
     155,   156,   155,   166,    90,     8,   155,   156,   338,   341,
       8,   155,    13,     8,   155,   231,   232,   341,   341,   373,
     341,   154,   295,   366,    61,   121,   137,   369,    72,   337,
     341,    78,   137,   369,   166,   169,   155,   156,   153,   337,
      71,    79,   124,   136,   206,   207,   208,   330,   354,   355,
     362,    29,    31,   153,   248,   341,   153,   337,    29,   148,
     148,   155,   155,   148,   174,   148,    13,   148,   154,   157,
     337,   160,   161,    71,   311,    71,   119,   242,   240,    71,
     153,    71,   349,   355,   362,   300,   337,   301,    26,   302,
     298,   299,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     321,    31,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   318,    71,   349,   342,   337,   357,
     337,   154,   166,    71,    71,    31,   337,    31,   337,   166,
     349,   153,   329,   349,   323,   154,   154,   337,    82,   337,
     155,     8,    90,    90,    71,   252,   154,    42,    43,    61,
     124,   141,   144,   166,   319,   330,   331,   332,   173,    90,
      71,   171,   337,   277,   331,    73,     8,   154,     8,   154,
     154,   155,   123,   341,   363,   364,   154,   370,    71,    61,
     157,   157,   153,   164,   168,   313,   148,   153,    78,    13,
     148,   206,   207,   355,    71,   341,   248,   291,   341,   122,
     247,   337,    90,    71,   148,   116,   175,   176,   211,   233,
     234,   337,   157,    31,   274,   275,   294,   341,    13,   141,
     144,   166,   320,   239,   119,   244,   237,   306,   153,   153,
     355,   337,   337,   304,   337,   337,   337,    63,   341,   274,
     153,   153,    71,   156,   349,   358,   360,   361,   159,   157,
     339,   339,   122,   274,   358,    26,   178,   153,   154,   186,
     293,   192,   190,    13,     8,   154,   189,   331,   331,   331,
     334,   336,   153,   144,   166,   140,   157,    71,   157,    13,
     232,   155,   374,   153,     8,   154,    71,    73,    74,   371,
     337,   312,   157,   164,   274,   217,   366,   209,    13,   202,
     247,   155,   248,   150,    90,   248,   203,   153,   148,   339,
     154,     8,   331,   144,   166,   120,   245,   246,   320,   156,
     153,   124,   271,   272,   273,   320,   314,   315,   337,    26,
     321,   154,   316,   317,   337,   359,   343,    61,   156,    31,
     337,   154,   324,   180,   176,   185,   183,   291,   337,   341,
     248,   331,    71,    26,   176,   251,    26,   156,   253,   122,
     159,     8,   335,   334,   166,    71,   102,   331,   341,   365,
     364,    13,   159,   159,   274,   157,   154,   200,   154,   337,
     210,   204,   150,   219,   337,   212,   247,   204,   154,    31,
     294,   341,   166,   246,   156,     8,   279,   271,   154,     8,
      31,    73,   274,   274,   303,   296,   274,   274,   157,   153,
     347,   357,   337,   339,   325,   173,   179,   337,    26,   176,
     258,   155,   247,   247,    13,   173,   155,   254,   155,   254,
     331,   331,   154,   153,   363,   337,   157,   154,    75,   145,
     211,   337,    26,   337,   291,   148,   248,   148,   155,   339,
     279,   320,    99,   106,   107,   108,   109,   110,   111,   112,
     157,   280,   284,   285,   286,   287,   289,   154,   104,   308,
     273,    73,    13,   154,   154,   337,   329,   154,   154,   348,
     344,   159,   157,   121,   326,   181,   259,   154,   173,   187,
     154,   154,   331,    89,   254,    92,    93,    94,   254,   157,
     122,   196,   154,   218,   205,   154,   155,   224,   247,   215,
     157,    71,   281,   307,   287,     8,   155,   156,   153,   156,
      31,    73,    13,   331,   274,   121,   345,   358,   264,    66,
      67,   266,   155,    83,   291,   193,   191,   155,    92,   155,
     337,    26,   155,   257,   157,   331,   320,   261,   337,   148,
     220,   200,   154,   200,    13,    73,   288,   235,    71,   173,
      31,    73,   309,   173,    73,    13,   331,   154,   358,    66,
      67,   269,   153,   176,   155,   154,    26,   176,   250,   250,
     155,   257,   256,   197,    66,    67,   267,   222,   291,   145,
     148,   145,   331,    13,     8,   155,    71,    13,   157,    73,
       8,   154,   157,    13,   331,   346,   153,    26,    68,   337,
     188,   173,   255,   173,    73,   337,    65,   148,    46,   268,
     200,   154,   225,   213,   216,   331,    73,   282,   331,    31,
      73,   331,   347,   337,   173,   155,   154,    26,   176,   249,
      87,   173,   154,   148,   337,   200,    65,   145,   148,    67,
     270,   200,   270,    13,   153,    73,   154,   260,   173,   155,
     198,   262,   148,   145,   148,   223,   221,   148,    46,   145,
      46,   331,   271,    26,   176,    85,   156,   200,   263,   270,
     200,   200,    84,   214,    86,   154,   265,   155,   173,   145,
     200,    46,   145,   145,   148,   270,   148,   155,   156,   283,
     173,   157,   145,    84,    46,    46,   173,   199,   148,    84,
      86,   157,   102,   226,   227,   228,   148,   148,   153,   228,
     320,   229,    73,   154,   230,   156,   173,   157
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


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


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
  switch (yytype)
    {
      default:
	break;
    }
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
  YYSIZE_T yysize1;
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
                yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


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

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  *++yyvsp = yylval;

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

/* Line 1810 of yacc.c  */
#line 169 "Zend53/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 173 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 173 "Zend53/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 178 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

/* Line 1810 of yacc.c  */
#line 179 "Zend53/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

/* Line 1810 of yacc.c  */
#line 183 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 184 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 185 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 186 "Zend53/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 187 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

/* Line 1810 of yacc.c  */
#line 188 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 189 "Zend53/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

/* Line 1810 of yacc.c  */
#line 190 "Zend53/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

/* Line 1810 of yacc.c  */
#line 191 "Zend53/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 192 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 193 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 194 "Zend53/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:

/* Line 1810 of yacc.c  */
#line 203 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 204 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:

/* Line 1810 of yacc.c  */
#line 205 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:

/* Line 1810 of yacc.c  */
#line 206 "Zend53/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:

/* Line 1810 of yacc.c  */
#line 210 "Zend53/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:

/* Line 1810 of yacc.c  */
#line 211 "Zend53/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:

/* Line 1810 of yacc.c  */
#line 215 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:

/* Line 1810 of yacc.c  */
#line 215 "Zend53/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:

/* Line 1810 of yacc.c  */
#line 225 "Zend53/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:

/* Line 1810 of yacc.c  */
#line 230 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:

/* Line 1810 of yacc.c  */
#line 231 "Zend53/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:

/* Line 1810 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:

/* Line 1810 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 41:

/* Line 1810 of yacc.c  */
#line 236 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:

/* Line 1810 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 43:

/* Line 1810 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 44:

/* Line 1810 of yacc.c  */
#line 237 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:

/* Line 1810 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (2)])) = get_next_op_number(CG(active_op_array));  }
    break;

  case 46:

/* Line 1810 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 47:

/* Line 1810 of yacc.c  */
#line 238 "Zend53/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 48:

/* Line 1810 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:

/* Line 1810 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

/* Line 1810 of yacc.c  */
#line 239 "Zend53/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 51:

/* Line 1810 of yacc.c  */
#line 243 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:

/* Line 1810 of yacc.c  */
#line 245 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:

/* Line 1810 of yacc.c  */
#line 247 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:

/* Line 1810 of yacc.c  */
#line 248 "Zend53/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:

/* Line 1810 of yacc.c  */
#line 249 "Zend53/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 56:

/* Line 1810 of yacc.c  */
#line 249 "Zend53/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 57:

/* Line 1810 of yacc.c  */
#line 250 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:

/* Line 1810 of yacc.c  */
#line 251 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

/* Line 1810 of yacc.c  */
#line 252 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:

/* Line 1810 of yacc.c  */
#line 253 "Zend53/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:

/* Line 1810 of yacc.c  */
#line 254 "Zend53/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:

/* Line 1810 of yacc.c  */
#line 255 "Zend53/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:

/* Line 1810 of yacc.c  */
#line 256 "Zend53/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 67:

/* Line 1810 of yacc.c  */
#line 260 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 68:

/* Line 1810 of yacc.c  */
#line 261 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 70:

/* Line 1810 of yacc.c  */
#line 264 "Zend53/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 71:

/* Line 1810 of yacc.c  */
#line 265 "Zend53/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 72:

/* Line 1810 of yacc.c  */
#line 266 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 73:

/* Line 1810 of yacc.c  */
#line 268 "Zend53/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 74:

/* Line 1810 of yacc.c  */
#line 269 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 75:

/* Line 1810 of yacc.c  */
#line 270 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 76:

/* Line 1810 of yacc.c  */
#line 271 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 77:

/* Line 1810 of yacc.c  */
#line 271 "Zend53/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 79:

/* Line 1810 of yacc.c  */
#line 273 "Zend53/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 80:

/* Line 1810 of yacc.c  */
#line 274 "Zend53/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 81:

/* Line 1810 of yacc.c  */
#line 275 "Zend53/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 82:

/* Line 1810 of yacc.c  */
#line 276 "Zend53/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 83:

/* Line 1810 of yacc.c  */
#line 277 "Zend53/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 84:

/* Line 1810 of yacc.c  */
#line 278 "Zend53/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 85:

/* Line 1810 of yacc.c  */
#line 279 "Zend53/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:

/* Line 1810 of yacc.c  */
#line 280 "Zend53/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 88:

/* Line 1810 of yacc.c  */
#line 285 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 90:

/* Line 1810 of yacc.c  */
#line 290 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 91:

/* Line 1810 of yacc.c  */
#line 291 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 92:

/* Line 1810 of yacc.c  */
#line 292 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:

/* Line 1810 of yacc.c  */
#line 293 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:

/* Line 1810 of yacc.c  */
#line 294 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 95:

/* Line 1810 of yacc.c  */
#line 295 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 96:

/* Line 1810 of yacc.c  */
#line 300 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 97:

/* Line 1810 of yacc.c  */
#line 301 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 98:

/* Line 1810 of yacc.c  */
#line 301 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 99:

/* Line 1810 of yacc.c  */
#line 305 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 100:

/* Line 1810 of yacc.c  */
#line 306 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:

/* Line 1810 of yacc.c  */
#line 310 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:

/* Line 1810 of yacc.c  */
#line 312 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 104:

/* Line 1810 of yacc.c  */
#line 316 "Zend53/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:

/* Line 1810 of yacc.c  */
#line 316 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 106:

/* Line 1810 of yacc.c  */
#line 317 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:

/* Line 1810 of yacc.c  */
#line 317 "Zend53/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 108:

/* Line 1810 of yacc.c  */
#line 318 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 109:

/* Line 1810 of yacc.c  */
#line 319 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 110:

/* Line 1810 of yacc.c  */
#line 326 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 111:

/* Line 1810 of yacc.c  */
#line 328 "Zend53/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 112:

/* Line 1810 of yacc.c  */
#line 335 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 113:

/* Line 1810 of yacc.c  */
#line 340 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 114:

/* Line 1810 of yacc.c  */
#line 341 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 115:

/* Line 1810 of yacc.c  */
#line 342 "Zend53/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 116:

/* Line 1810 of yacc.c  */
#line 344 "Zend53/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC); 
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 117:

/* Line 1810 of yacc.c  */
#line 348 "Zend53/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 118:

/* Line 1810 of yacc.c  */
#line 350 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 119:

/* Line 1810 of yacc.c  */
#line 351 "Zend53/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 120:

/* Line 1810 of yacc.c  */
#line 352 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 121:

/* Line 1810 of yacc.c  */
#line 353 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 122:

/* Line 1810 of yacc.c  */
#line 355 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 123:

/* Line 1810 of yacc.c  */
#line 356 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 124:

/* Line 1810 of yacc.c  */
#line 357 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 125:

/* Line 1810 of yacc.c  */
#line 359 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 126:

/* Line 1810 of yacc.c  */
#line 362 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 127:

/* Line 1810 of yacc.c  */
#line 364 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 128:

/* Line 1810 of yacc.c  */
#line 367 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 129:

/* Line 1810 of yacc.c  */
#line 368 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 130:

/* Line 1810 of yacc.c  */
#line 369 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 131:

/* Line 1810 of yacc.c  */
#line 371 "Zend53/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 132:

/* Line 1810 of yacc.c  */
#line 374 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 133:

/* Line 1810 of yacc.c  */
#line 375 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 134:

/* Line 1810 of yacc.c  */
#line 376 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 135:

/* Line 1810 of yacc.c  */
#line 378 "Zend53/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 136:

/* Line 1810 of yacc.c  */
#line 379 "Zend53/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 137:

/* Line 1810 of yacc.c  */
#line 380 "Zend53/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 138:

/* Line 1810 of yacc.c  */
#line 384 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 139:

/* Line 1810 of yacc.c  */
#line 385 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 140:

/* Line 1810 of yacc.c  */
#line 389 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 141:

/* Line 1810 of yacc.c  */
#line 390 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 142:

/* Line 1810 of yacc.c  */
#line 395 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 143:

/* Line 1810 of yacc.c  */
#line 395 "Zend53/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 144:

/* Line 1810 of yacc.c  */
#line 395 "Zend53/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 147:

/* Line 1810 of yacc.c  */
#line 405 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 148:

/* Line 1810 of yacc.c  */
#line 409 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 149:

/* Line 1810 of yacc.c  */
#line 413 "Zend53/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 150:

/* Line 1810 of yacc.c  */
#line 418 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 151:

/* Line 1810 of yacc.c  */
#line 419 "Zend53/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 152:

/* Line 1810 of yacc.c  */
#line 424 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 153:

/* Line 1810 of yacc.c  */
#line 425 "Zend53/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 154:

/* Line 1810 of yacc.c  */
#line 430 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 155:

/* Line 1810 of yacc.c  */
#line 434 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 156:

/* Line 1810 of yacc.c  */
#line 436 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 157:

/* Line 1810 of yacc.c  */
#line 440 "Zend53/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 158:

/* Line 1810 of yacc.c  */
#line 445 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 159:

/* Line 1810 of yacc.c  */
#line 446 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 160:

/* Line 1810 of yacc.c  */
#line 447 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 161:

/* Line 1810 of yacc.c  */
#line 451 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 162:

/* Line 1810 of yacc.c  */
#line 452 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 163:

/* Line 1810 of yacc.c  */
#line 456 "Zend53/zend_language_parser.y"
    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 168:

/* Line 1810 of yacc.c  */
#line 470 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 169:

/* Line 1810 of yacc.c  */
#line 471 "Zend53/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 170:

/* Line 1810 of yacc.c  */
#line 475 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 171:

/* Line 1810 of yacc.c  */
#line 476 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 172:

/* Line 1810 of yacc.c  */
#line 481 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 173:

/* Line 1810 of yacc.c  */
#line 482 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 180:

/* Line 1810 of yacc.c  */
#line 504 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 181:

/* Line 1810 of yacc.c  */
#line 505 "Zend53/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 182:

/* Line 1810 of yacc.c  */
#line 510 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 183:

/* Line 1810 of yacc.c  */
#line 511 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 184:

/* Line 1810 of yacc.c  */
#line 512 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 185:

/* Line 1810 of yacc.c  */
#line 513 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 186:

/* Line 1810 of yacc.c  */
#line 518 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 187:

/* Line 1810 of yacc.c  */
#line 519 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 188:

/* Line 1810 of yacc.c  */
#line 519 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 189:

/* Line 1810 of yacc.c  */
#line 520 "Zend53/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 190:

/* Line 1810 of yacc.c  */
#line 520 "Zend53/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 196:

/* Line 1810 of yacc.c  */
#line 539 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 197:

/* Line 1810 of yacc.c  */
#line 539 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 199:

/* Line 1810 of yacc.c  */
#line 544 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 200:

/* Line 1810 of yacc.c  */
#line 544 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 201:

/* Line 1810 of yacc.c  */
#line 545 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 202:

/* Line 1810 of yacc.c  */
#line 545 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 204:

/* Line 1810 of yacc.c  */
#line 550 "Zend53/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 205:

/* Line 1810 of yacc.c  */
#line 550 "Zend53/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 217:

/* Line 1810 of yacc.c  */
#line 585 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 218:

/* Line 1810 of yacc.c  */
#line 586 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 219:

/* Line 1810 of yacc.c  */
#line 587 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 220:

/* Line 1810 of yacc.c  */
#line 588 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; Z_LVAL((yyval).u.constant)=1; Z_TYPE((yyval).u.constant)=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 221:

/* Line 1810 of yacc.c  */
#line 589 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 222:

/* Line 1810 of yacc.c  */
#line 590 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 223:

/* Line 1810 of yacc.c  */
#line 591 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 224:

/* Line 1810 of yacc.c  */
#line 592 "Zend53/zend_language_parser.y"
    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); Z_LVAL((yyval).u.constant)++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 225:

/* Line 1810 of yacc.c  */
#line 597 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 226:

/* Line 1810 of yacc.c  */
#line 598 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 227:

/* Line 1810 of yacc.c  */
#line 599 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_NULL;}
    break;

  case 228:

/* Line 1810 of yacc.c  */
#line 604 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 229:

/* Line 1810 of yacc.c  */
#line 605 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 230:

/* Line 1810 of yacc.c  */
#line 610 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 231:

/* Line 1810 of yacc.c  */
#line 611 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 232:

/* Line 1810 of yacc.c  */
#line 612 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 233:

/* Line 1810 of yacc.c  */
#line 613 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 234:

/* Line 1810 of yacc.c  */
#line 614 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 235:

/* Line 1810 of yacc.c  */
#line 615 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 236:

/* Line 1810 of yacc.c  */
#line 619 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 237:

/* Line 1810 of yacc.c  */
#line 620 "Zend53/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 238:

/* Line 1810 of yacc.c  */
#line 625 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 239:

/* Line 1810 of yacc.c  */
#line 626 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 240:

/* Line 1810 of yacc.c  */
#line 627 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 241:

/* Line 1810 of yacc.c  */
#line 632 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 242:

/* Line 1810 of yacc.c  */
#line 633 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 243:

/* Line 1810 of yacc.c  */
#line 634 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 244:

/* Line 1810 of yacc.c  */
#line 635 "Zend53/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 247:

/* Line 1810 of yacc.c  */
#line 647 "Zend53/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 250:

/* Line 1810 of yacc.c  */
#line 649 "Zend53/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 251:

/* Line 1810 of yacc.c  */
#line 650 "Zend53/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 252:

/* Line 1810 of yacc.c  */
#line 655 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 253:

/* Line 1810 of yacc.c  */
#line 656 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 254:

/* Line 1810 of yacc.c  */
#line 660 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 255:

/* Line 1810 of yacc.c  */
#line 661 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 256:

/* Line 1810 of yacc.c  */
#line 665 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 257:

/* Line 1810 of yacc.c  */
#line 666 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 258:

/* Line 1810 of yacc.c  */
#line 670 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 259:

/* Line 1810 of yacc.c  */
#line 671 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 260:

/* Line 1810 of yacc.c  */
#line 675 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 261:

/* Line 1810 of yacc.c  */
#line 676 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 262:

/* Line 1810 of yacc.c  */
#line 677 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 263:

/* Line 1810 of yacc.c  */
#line 678 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 264:

/* Line 1810 of yacc.c  */
#line 679 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 265:

/* Line 1810 of yacc.c  */
#line 680 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 266:

/* Line 1810 of yacc.c  */
#line 684 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 267:

/* Line 1810 of yacc.c  */
#line 685 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 268:

/* Line 1810 of yacc.c  */
#line 686 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 269:

/* Line 1810 of yacc.c  */
#line 687 "Zend53/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 270:

/* Line 1810 of yacc.c  */
#line 691 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 271:

/* Line 1810 of yacc.c  */
#line 692 "Zend53/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 272:

/* Line 1810 of yacc.c  */
#line 696 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 273:

/* Line 1810 of yacc.c  */
#line 697 "Zend53/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 274:

/* Line 1810 of yacc.c  */
#line 702 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 275:

/* Line 1810 of yacc.c  */
#line 703 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 276:

/* Line 1810 of yacc.c  */
#line 707 "Zend53/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 277:

/* Line 1810 of yacc.c  */
#line 707 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 278:

/* Line 1810 of yacc.c  */
#line 708 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 279:

/* Line 1810 of yacc.c  */
#line 712 "Zend53/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 280:

/* Line 1810 of yacc.c  */
#line 712 "Zend53/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 281:

/* Line 1810 of yacc.c  */
#line 713 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 282:

/* Line 1810 of yacc.c  */
#line 714 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 283:

/* Line 1810 of yacc.c  */
#line 715 "Zend53/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 284:

/* Line 1810 of yacc.c  */
#line 715 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).u.EA.type = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 285:

/* Line 1810 of yacc.c  */
#line 716 "Zend53/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 286:

/* Line 1810 of yacc.c  */
#line 716 "Zend53/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 287:

/* Line 1810 of yacc.c  */
#line 717 "Zend53/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 288:

/* Line 1810 of yacc.c  */
#line 718 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

/* Line 1810 of yacc.c  */
#line 719 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

/* Line 1810 of yacc.c  */
#line 720 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

/* Line 1810 of yacc.c  */
#line 721 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

/* Line 1810 of yacc.c  */
#line 722 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

/* Line 1810 of yacc.c  */
#line 723 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

/* Line 1810 of yacc.c  */
#line 724 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

/* Line 1810 of yacc.c  */
#line 725 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 296:

/* Line 1810 of yacc.c  */
#line 726 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:

/* Line 1810 of yacc.c  */
#line 727 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 298:

/* Line 1810 of yacc.c  */
#line 728 "Zend53/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 299:

/* Line 1810 of yacc.c  */
#line 729 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 300:

/* Line 1810 of yacc.c  */
#line 730 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 301:

/* Line 1810 of yacc.c  */
#line 731 "Zend53/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 302:

/* Line 1810 of yacc.c  */
#line 732 "Zend53/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 303:

/* Line 1810 of yacc.c  */
#line 733 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 304:

/* Line 1810 of yacc.c  */
#line 733 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 305:

/* Line 1810 of yacc.c  */
#line 734 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 306:

/* Line 1810 of yacc.c  */
#line 734 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 307:

/* Line 1810 of yacc.c  */
#line 735 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 308:

/* Line 1810 of yacc.c  */
#line 735 "Zend53/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 309:

/* Line 1810 of yacc.c  */
#line 736 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 310:

/* Line 1810 of yacc.c  */
#line 736 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 311:

/* Line 1810 of yacc.c  */
#line 737 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

/* Line 1810 of yacc.c  */
#line 740 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

/* Line 1810 of yacc.c  */
#line 741 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:

/* Line 1810 of yacc.c  */
#line 742 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:

/* Line 1810 of yacc.c  */
#line 743 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:

/* Line 1810 of yacc.c  */
#line 744 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:

/* Line 1810 of yacc.c  */
#line 745 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:

/* Line 1810 of yacc.c  */
#line 746 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:

/* Line 1810 of yacc.c  */
#line 747 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:

/* Line 1810 of yacc.c  */
#line 748 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 321:

/* Line 1810 of yacc.c  */
#line 749 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:

/* Line 1810 of yacc.c  */
#line 750 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 323:

/* Line 1810 of yacc.c  */
#line 751 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 324:

/* Line 1810 of yacc.c  */
#line 752 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 325:

/* Line 1810 of yacc.c  */
#line 753 "Zend53/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:

/* Line 1810 of yacc.c  */
#line 754 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:

/* Line 1810 of yacc.c  */
#line 755 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:

/* Line 1810 of yacc.c  */
#line 756 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:

/* Line 1810 of yacc.c  */
#line 757 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:

/* Line 1810 of yacc.c  */
#line 758 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:

/* Line 1810 of yacc.c  */
#line 759 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:

/* Line 1810 of yacc.c  */
#line 760 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 333:

/* Line 1810 of yacc.c  */
#line 761 "Zend53/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 334:

/* Line 1810 of yacc.c  */
#line 762 "Zend53/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 335:

/* Line 1810 of yacc.c  */
#line 763 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 336:

/* Line 1810 of yacc.c  */
#line 764 "Zend53/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 337:

/* Line 1810 of yacc.c  */
#line 765 "Zend53/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 338:

/* Line 1810 of yacc.c  */
#line 766 "Zend53/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 339:

/* Line 1810 of yacc.c  */
#line 767 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:

/* Line 1810 of yacc.c  */
#line 768 "Zend53/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 341:

/* Line 1810 of yacc.c  */
#line 769 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 342:

/* Line 1810 of yacc.c  */
#line 770 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 343:

/* Line 1810 of yacc.c  */
#line 771 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 344:

/* Line 1810 of yacc.c  */
#line 772 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 345:

/* Line 1810 of yacc.c  */
#line 773 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 346:

/* Line 1810 of yacc.c  */
#line 774 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 347:

/* Line 1810 of yacc.c  */
#line 775 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 348:

/* Line 1810 of yacc.c  */
#line 776 "Zend53/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 349:

/* Line 1810 of yacc.c  */
#line 777 "Zend53/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:

/* Line 1810 of yacc.c  */
#line 778 "Zend53/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 351:

/* Line 1810 of yacc.c  */
#line 778 "Zend53/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 352:

/* Line 1810 of yacc.c  */
#line 779 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:

/* Line 1810 of yacc.c  */
#line 780 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 354:

/* Line 1810 of yacc.c  */
#line 781 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 355:

/* Line 1810 of yacc.c  */
#line 782 "Zend53/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 356:

/* Line 1810 of yacc.c  */
#line 783 "Zend53/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 357:

/* Line 1810 of yacc.c  */
#line 784 "Zend53/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type TSRMLS_CC); }
    break;

  case 358:

/* Line 1810 of yacc.c  */
#line 785 "Zend53/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 359:

/* Line 1810 of yacc.c  */
#line 789 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 362:

/* Line 1810 of yacc.c  */
#line 798 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 363:

/* Line 1810 of yacc.c  */
#line 799 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 364:

/* Line 1810 of yacc.c  */
#line 800 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 365:

/* Line 1810 of yacc.c  */
#line 801 "Zend53/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 366:

/* Line 1810 of yacc.c  */
#line 805 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 367:

/* Line 1810 of yacc.c  */
#line 807 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 368:

/* Line 1810 of yacc.c  */
#line 808 "Zend53/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 369:

/* Line 1810 of yacc.c  */
#line 810 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 370:

/* Line 1810 of yacc.c  */
#line 811 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 371:

/* Line 1810 of yacc.c  */
#line 813 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 372:

/* Line 1810 of yacc.c  */
#line 814 "Zend53/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 373:

/* Line 1810 of yacc.c  */
#line 816 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 374:

/* Line 1810 of yacc.c  */
#line 817 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 375:

/* Line 1810 of yacc.c  */
#line 819 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 376:

/* Line 1810 of yacc.c  */
#line 820 "Zend53/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 377:

/* Line 1810 of yacc.c  */
#line 822 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 378:

/* Line 1810 of yacc.c  */
#line 823 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 379:

/* Line 1810 of yacc.c  */
#line 825 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 380:

/* Line 1810 of yacc.c  */
#line 826 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 381:

/* Line 1810 of yacc.c  */
#line 828 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 382:

/* Line 1810 of yacc.c  */
#line 832 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 383:

/* Line 1810 of yacc.c  */
#line 833 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 384:

/* Line 1810 of yacc.c  */
#line 834 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 385:

/* Line 1810 of yacc.c  */
#line 835 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 386:

/* Line 1810 of yacc.c  */
#line 839 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 387:

/* Line 1810 of yacc.c  */
#line 840 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 388:

/* Line 1810 of yacc.c  */
#line 841 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 389:

/* Line 1810 of yacc.c  */
#line 847 "Zend53/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 390:

/* Line 1810 of yacc.c  */
#line 848 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 391:

/* Line 1810 of yacc.c  */
#line 853 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 392:

/* Line 1810 of yacc.c  */
#line 854 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 393:

/* Line 1810 of yacc.c  */
#line 855 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 394:

/* Line 1810 of yacc.c  */
#line 856 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 397:

/* Line 1810 of yacc.c  */
#line 867 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 398:

/* Line 1810 of yacc.c  */
#line 871 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 399:

/* Line 1810 of yacc.c  */
#line 872 "Zend53/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 400:

/* Line 1810 of yacc.c  */
#line 873 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 401:

/* Line 1810 of yacc.c  */
#line 877 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 402:

/* Line 1810 of yacc.c  */
#line 878 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 403:

/* Line 1810 of yacc.c  */
#line 879 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 404:

/* Line 1810 of yacc.c  */
#line 884 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 405:

/* Line 1810 of yacc.c  */
#line 885 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 406:

/* Line 1810 of yacc.c  */
#line 890 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 407:

/* Line 1810 of yacc.c  */
#line 891 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 408:

/* Line 1810 of yacc.c  */
#line 892 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

/* Line 1810 of yacc.c  */
#line 893 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

/* Line 1810 of yacc.c  */
#line 894 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

/* Line 1810 of yacc.c  */
#line 895 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:

/* Line 1810 of yacc.c  */
#line 896 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

/* Line 1810 of yacc.c  */
#line 897 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 414:

/* Line 1810 of yacc.c  */
#line 898 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 415:

/* Line 1810 of yacc.c  */
#line 899 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:

/* Line 1810 of yacc.c  */
#line 900 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 417:

/* Line 1810 of yacc.c  */
#line 901 "Zend53/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 418:

/* Line 1810 of yacc.c  */
#line 906 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 419:

/* Line 1810 of yacc.c  */
#line 907 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 420:

/* Line 1810 of yacc.c  */
#line 908 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 421:

/* Line 1810 of yacc.c  */
#line 909 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 422:

/* Line 1810 of yacc.c  */
#line 910 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 423:

/* Line 1810 of yacc.c  */
#line 911 "Zend53/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 424:

/* Line 1810 of yacc.c  */
#line 912 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 425:

/* Line 1810 of yacc.c  */
#line 913 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 426:

/* Line 1810 of yacc.c  */
#line 914 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:

/* Line 1810 of yacc.c  */
#line 918 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 428:

/* Line 1810 of yacc.c  */
#line 922 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:

/* Line 1810 of yacc.c  */
#line 923 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:

/* Line 1810 of yacc.c  */
#line 924 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 431:

/* Line 1810 of yacc.c  */
#line 925 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 432:

/* Line 1810 of yacc.c  */
#line 926 "Zend53/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 433:

/* Line 1810 of yacc.c  */
#line 927 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 434:

/* Line 1810 of yacc.c  */
#line 928 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 435:

/* Line 1810 of yacc.c  */
#line 929 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 436:

/* Line 1810 of yacc.c  */
#line 934 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 437:

/* Line 1810 of yacc.c  */
#line 935 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 440:

/* Line 1810 of yacc.c  */
#line 944 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 441:

/* Line 1810 of yacc.c  */
#line 945 "Zend53/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 442:

/* Line 1810 of yacc.c  */
#line 946 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 443:

/* Line 1810 of yacc.c  */
#line 947 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 444:

/* Line 1810 of yacc.c  */
#line 951 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 445:

/* Line 1810 of yacc.c  */
#line 952 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 446:

/* Line 1810 of yacc.c  */
#line 957 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:

/* Line 1810 of yacc.c  */
#line 962 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 448:

/* Line 1810 of yacc.c  */
#line 967 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 449:

/* Line 1810 of yacc.c  */
#line 972 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 450:

/* Line 1810 of yacc.c  */
#line 973 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 451:

/* Line 1810 of yacc.c  */
#line 974 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 452:

/* Line 1810 of yacc.c  */
#line 975 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:

/* Line 1810 of yacc.c  */
#line 979 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 454:

/* Line 1810 of yacc.c  */
#line 980 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = 0; }
    break;

  case 455:

/* Line 1810 of yacc.c  */
#line 985 "Zend53/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 456:

/* Line 1810 of yacc.c  */
#line 985 "Zend53/zend_language_parser.y"
    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 457:

/* Line 1810 of yacc.c  */
#line 989 "Zend53/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 458:

/* Line 1810 of yacc.c  */
#line 991 "Zend53/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 459:

/* Line 1810 of yacc.c  */
#line 993 "Zend53/zend_language_parser.y"
    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 460:

/* Line 1810 of yacc.c  */
#line 997 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 461:

/* Line 1810 of yacc.c  */
#line 998 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 462:

/* Line 1810 of yacc.c  */
#line 1002 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 463:

/* Line 1810 of yacc.c  */
#line 1003 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 464:

/* Line 1810 of yacc.c  */
#line 1008 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 465:

/* Line 1810 of yacc.c  */
#line 1012 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 466:

/* Line 1810 of yacc.c  */
#line 1013 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 467:

/* Line 1810 of yacc.c  */
#line 1018 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 468:

/* Line 1810 of yacc.c  */
#line 1019 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 469:

/* Line 1810 of yacc.c  */
#line 1020 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 470:

/* Line 1810 of yacc.c  */
#line 1024 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 471:

/* Line 1810 of yacc.c  */
#line 1025 "Zend53/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 472:

/* Line 1810 of yacc.c  */
#line 1029 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 473:

/* Line 1810 of yacc.c  */
#line 1030 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 474:

/* Line 1810 of yacc.c  */
#line 1031 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 475:

/* Line 1810 of yacc.c  */
#line 1036 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:

/* Line 1810 of yacc.c  */
#line 1037 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 477:

/* Line 1810 of yacc.c  */
#line 1041 "Zend53/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 478:

/* Line 1810 of yacc.c  */
#line 1042 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 479:

/* Line 1810 of yacc.c  */
#line 1047 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 480:

/* Line 1810 of yacc.c  */
#line 1048 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 481:

/* Line 1810 of yacc.c  */
#line 1048 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 482:

/* Line 1810 of yacc.c  */
#line 1052 "Zend53/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 483:

/* Line 1810 of yacc.c  */
#line 1053 "Zend53/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 484:

/* Line 1810 of yacc.c  */
#line 1054 "Zend53/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 485:

/* Line 1810 of yacc.c  */
#line 1058 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 486:

/* Line 1810 of yacc.c  */
#line 1059 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 487:

/* Line 1810 of yacc.c  */
#line 1063 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 488:

/* Line 1810 of yacc.c  */
#line 1064 "Zend53/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 491:

/* Line 1810 of yacc.c  */
#line 1074 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 492:

/* Line 1810 of yacc.c  */
#line 1075 "Zend53/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 493:

/* Line 1810 of yacc.c  */
#line 1075 "Zend53/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 494:

/* Line 1810 of yacc.c  */
#line 1076 "Zend53/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 495:

/* Line 1810 of yacc.c  */
#line 1081 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 496:

/* Line 1810 of yacc.c  */
#line 1082 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 497:

/* Line 1810 of yacc.c  */
#line 1086 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 498:

/* Line 1810 of yacc.c  */
#line 1087 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 499:

/* Line 1810 of yacc.c  */
#line 1088 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 500:

/* Line 1810 of yacc.c  */
#line 1089 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 501:

/* Line 1810 of yacc.c  */
#line 1090 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 502:

/* Line 1810 of yacc.c  */
#line 1091 "Zend53/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 503:

/* Line 1810 of yacc.c  */
#line 1092 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 504:

/* Line 1810 of yacc.c  */
#line 1093 "Zend53/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 505:

/* Line 1810 of yacc.c  */
#line 1097 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 506:

/* Line 1810 of yacc.c  */
#line 1098 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 507:

/* Line 1810 of yacc.c  */
#line 1099 "Zend53/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 508:

/* Line 1810 of yacc.c  */
#line 1100 "Zend53/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 509:

/* Line 1810 of yacc.c  */
#line 1106 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 510:

/* Line 1810 of yacc.c  */
#line 1107 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 511:

/* Line 1810 of yacc.c  */
#line 1107 "Zend53/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 512:

/* Line 1810 of yacc.c  */
#line 1108 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 513:

/* Line 1810 of yacc.c  */
#line 1109 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 514:

/* Line 1810 of yacc.c  */
#line 1110 "Zend53/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 515:

/* Line 1810 of yacc.c  */
#line 1111 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 516:

/* Line 1810 of yacc.c  */
#line 1116 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 517:

/* Line 1810 of yacc.c  */
#line 1117 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 518:

/* Line 1810 of yacc.c  */
#line 1118 "Zend53/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 519:

/* Line 1810 of yacc.c  */
#line 1123 "Zend53/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 520:

/* Line 1810 of yacc.c  */
#line 1124 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 521:

/* Line 1810 of yacc.c  */
#line 1125 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 522:

/* Line 1810 of yacc.c  */
#line 1126 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 523:

/* Line 1810 of yacc.c  */
#line 1127 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 524:

/* Line 1810 of yacc.c  */
#line 1128 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 525:

/* Line 1810 of yacc.c  */
#line 1129 "Zend53/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 526:

/* Line 1810 of yacc.c  */
#line 1133 "Zend53/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 527:

/* Line 1810 of yacc.c  */
#line 1134 "Zend53/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 528:

/* Line 1810 of yacc.c  */
#line 1134 "Zend53/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 529:

/* Line 1810 of yacc.c  */
#line 1138 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 530:

/* Line 1810 of yacc.c  */
#line 1139 "Zend53/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;



/* Line 1810 of yacc.c  */
#line 7094 "Zend53/zend_language_parser.c"
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

  *++yyvsp = yylval;


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



/* Line 2071 of yacc.c  */
#line 1142 "Zend53/zend_language_parser.y"


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

