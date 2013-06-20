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
#line 1 "Zend54/zend_language_parser.y"

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

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

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
#line 136 "Zend54/zend_language_parser.c"

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
     END = 0,
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
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384,
     T_START_TPL = 385,
     T_START_TPL_WITH_ECHO = 386,
     T_START_TPL_WITH_SCRIPT = 387,
     T_END_TPL = 388,
     T_ATTR_FILE = 389,
     T_IN = 390,
     T_START_TPL_TRANSLATE = 391,
     T_TPL_INCLUDE = 392
   };
#endif
/* Tokens.  */
#define END 0
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
#define T_INSTEADOF 341
#define T_GLOBAL 342
#define T_PUBLIC 343
#define T_PROTECTED 344
#define T_PRIVATE 345
#define T_FINAL 346
#define T_ABSTRACT 347
#define T_STATIC 348
#define T_VAR 349
#define T_UNSET 350
#define T_ISSET 351
#define T_EMPTY 352
#define T_HALT_COMPILER 353
#define T_CLASS 354
#define T_TRAIT 355
#define T_INTERFACE 356
#define T_EXTENDS 357
#define T_IMPLEMENTS 358
#define T_OBJECT_OPERATOR 359
#define T_DOUBLE_ARROW 360
#define T_LIST 361
#define T_ARRAY 362
#define T_CALLABLE 363
#define T_CLASS_C 364
#define T_TRAIT_C 365
#define T_METHOD_C 366
#define T_FUNC_C 367
#define T_LINE 368
#define T_FILE 369
#define T_COMMENT 370
#define T_DOC_COMMENT 371
#define T_OPEN_TAG 372
#define T_OPEN_TAG_WITH_ECHO 373
#define T_CLOSE_TAG 374
#define T_WHITESPACE 375
#define T_START_HEREDOC 376
#define T_END_HEREDOC 377
#define T_DOLLAR_OPEN_CURLY_BRACES 378
#define T_CURLY_OPEN 379
#define T_PAAMAYIM_NEKUDOTAYIM 380
#define T_NAMESPACE 381
#define T_NS_C 382
#define T_DIR 383
#define T_NS_SEPARATOR 384
#define T_START_TPL 385
#define T_START_TPL_WITH_ECHO 386
#define T_START_TPL_WITH_SCRIPT 387
#define T_END_TPL 388
#define T_ATTR_FILE 389
#define T_IN 390
#define T_START_TPL_TRANSLATE 391
#define T_TPL_INCLUDE 392




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 462 "Zend54/zend_language_parser.c"

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
#define YYLAST   6832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  239
/* YYNRULES -- Number of rules.  */
#define YYNRULES  580
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   165,     2,   162,    47,    31,     2,
     157,   158,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   159,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   163,    30,     2,   164,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   160,    29,   161,    50,     2,     2,     2,
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
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156
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
     590,   592,   595,   596,   599,   601,   602,   605,   606,   609,
     611,   615,   616,   619,   621,   624,   626,   631,   633,   638,
     640,   645,   649,   655,   659,   664,   669,   675,   676,   677,
     684,   685,   691,   693,   695,   697,   702,   703,   704,   712,
     713,   714,   722,   723,   732,   733,   734,   743,   744,   747,
     748,   753,   757,   758,   762,   763,   768,   770,   771,   774,
     778,   784,   789,   794,   800,   808,   815,   816,   818,   820,
     822,   824,   825,   827,   829,   832,   836,   840,   845,   849,
     851,   853,   856,   861,   865,   871,   873,   877,   880,   881,
     882,   887,   890,   892,   893,   903,   907,   909,   913,   915,
     919,   920,   922,   924,   927,   930,   933,   937,   939,   943,
     945,   947,   951,   956,   960,   961,   963,   965,   969,   971,
     973,   974,   976,   978,   981,   983,   985,   987,   989,   991,
     993,   997,  1003,  1005,  1009,  1015,  1020,  1024,  1026,  1027,
    1029,  1030,  1035,  1037,  1040,  1042,  1047,  1051,  1052,  1056,
    1058,  1060,  1061,  1062,  1065,  1066,  1071,  1072,  1080,  1084,
    1089,  1090,  1098,  1101,  1105,  1109,  1113,  1117,  1121,  1125,
    1129,  1133,  1137,  1141,  1145,  1148,  1151,  1154,  1157,  1158,
    1163,  1164,  1169,  1170,  1175,  1176,  1181,  1185,  1189,  1193,
    1197,  1201,  1205,  1209,  1213,  1217,  1221,  1225,  1228,  1231,
    1234,  1237,  1241,  1245,  1249,  1253,  1257,  1261,  1265,  1269,
    1273,  1277,  1279,  1280,  1286,  1287,  1288,  1296,  1297,  1303,
    1305,  1308,  1311,  1314,  1317,  1320,  1323,  1326,  1329,  1330,
    1334,  1336,  1341,  1345,  1349,  1352,  1353,  1364,  1365,  1377,
    1379,  1380,  1385,  1389,  1394,  1396,  1399,  1400,  1406,  1407,
    1415,  1416,  1423,  1424,  1432,  1433,  1441,  1442,  1450,  1451,
    1459,  1460,  1466,  1468,  1470,  1474,  1477,  1479,  1483,  1486,
    1488,  1490,  1491,  1492,  1499,  1501,  1504,  1505,  1508,  1509,
    1512,  1516,  1517,  1519,  1521,  1522,  1526,  1528,  1530,  1532,
    1534,  1536,  1538,  1540,  1542,  1544,  1546,  1550,  1553,  1555,
    1557,  1561,  1564,  1567,  1570,  1575,  1579,  1581,  1583,  1587,
    1589,  1591,  1593,  1597,  1600,  1602,  1606,  1610,  1612,  1613,
    1616,  1617,  1619,  1625,  1629,  1633,  1635,  1637,  1639,  1641,
    1643,  1645,  1646,  1647,  1655,  1657,  1660,  1661,  1662,  1667,
    1672,  1677,  1678,  1683,  1685,  1687,  1688,  1690,  1693,  1697,
    1701,  1703,  1708,  1709,  1715,  1717,  1719,  1721,  1723,  1726,
    1728,  1730,  1733,  1738,  1743,  1745,  1747,  1752,  1753,  1755,
    1757,  1758,  1761,  1766,  1771,  1773,  1775,  1779,  1781,  1784,
    1788,  1790,  1792,  1793,  1799,  1800,  1801,  1804,  1810,  1814,
    1818,  1820,  1827,  1832,  1837,  1840,  1843,  1846,  1848,  1851,
    1853,  1854,  1860,  1864,  1868,  1875,  1879,  1881,  1883,  1885,
    1890,  1895,  1898,  1901,  1906,  1909,  1912,  1914,  1915,  1920,
    1924
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,   168,    -1,    -1,   168,   169,   171,    -1,
      -1,    71,    -1,   170,   148,    71,    -1,   180,    -1,   237,
      -1,   238,    -1,   117,   157,   158,   159,    -1,   145,   170,
     159,    -1,    -1,   145,   170,   160,   172,   168,   161,    -1,
      -1,   145,   160,   173,   168,   161,    -1,   104,   174,   159,
      -1,   176,   159,    -1,   215,    -1,   174,     8,   175,    -1,
     175,    -1,   170,    -1,   170,    90,    71,    -1,   148,   170,
      -1,   148,   170,    90,    71,    -1,   176,     8,    71,    13,
     356,    -1,    99,    71,    13,   356,    -1,    -1,   177,   178,
     179,    -1,    -1,   180,    -1,   215,    -1,   237,    -1,   238,
      -1,   117,   157,   158,   159,    -1,   181,    -1,    71,    26,
      -1,   160,   177,   161,    -1,    -1,    -1,    65,   157,   362,
     158,   182,   180,   183,   263,   270,    -1,    -1,    -1,    65,
     157,   362,   158,    26,   184,   177,   185,   268,   273,    68,
     159,    -1,    -1,    -1,    82,   157,   186,   362,   158,   187,
     262,    -1,    -1,    -1,    81,   188,   180,    82,   157,   189,
     362,   158,   159,    -1,    -1,    -1,    -1,    84,   157,   307,
     159,   190,   307,   159,   191,   307,   158,   192,   253,    -1,
      -1,    91,   157,   362,   158,   193,   257,    -1,    95,   159,
      -1,    95,   362,   159,    -1,    96,   159,    -1,    96,   362,
     159,    -1,   100,   159,    -1,   100,   318,   159,    -1,   100,
     366,   159,    -1,   106,   280,   159,    -1,   112,   282,   159,
      -1,    80,   306,   159,    -1,    75,    -1,   362,   159,    -1,
     114,   157,   235,   158,   159,    -1,    -1,    -1,    86,   157,
     366,    90,   194,   252,   251,   158,   195,   254,    -1,    -1,
      -1,    86,   157,   318,    90,   196,   366,   251,   158,   197,
     254,    -1,    -1,    88,   198,   157,   256,   158,   255,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,   101,   199,   160,
     177,   161,   102,   157,   200,   345,   201,    73,   158,   202,
     160,   177,   161,   203,   230,    -1,   103,   362,   159,    -1,
      97,    71,   159,    -1,   204,   215,    -1,   204,    75,    -1,
      -1,   363,    -1,   363,   159,    -1,    -1,    79,    29,    71,
     206,   208,    -1,    -1,   205,    29,    71,   207,   208,    -1,
      -1,    -1,   208,    26,   209,   362,    -1,    71,    -1,    79,
      -1,   383,    -1,   355,    -1,   126,   157,   395,   158,    -1,
      -1,   210,    13,   213,   362,    -1,    -1,   212,   210,    13,
     214,   362,    -1,   211,    -1,   212,   211,    -1,   149,   205,
     152,    -1,   149,   318,   152,    -1,   149,   318,   159,   152,
      -1,   151,   177,   152,    -1,   156,   362,   152,    -1,   156,
     153,    13,   362,   152,    -1,   155,    79,   152,    -1,   149,
      71,   212,   152,    -1,    -1,    -1,    -1,   149,    86,   157,
     362,    90,   216,   252,   251,   158,   152,   217,   204,   149,
     218,   274,    46,    86,   152,    -1,    -1,    -1,   149,    86,
     362,    90,   252,   251,   152,   219,   204,   149,   220,   274,
      46,    86,   152,    -1,    -1,    -1,   149,    65,   362,   152,
     221,   204,   149,   222,   265,   271,   272,    -1,    -1,    -1,
      -1,   149,    84,   157,   307,   159,   223,   307,   159,   224,
     307,   158,   152,   225,   204,   149,    46,    84,   152,    -1,
      -1,    -1,   149,    84,   157,   252,   251,   154,   362,   158,
     152,   226,   204,   149,   227,   274,    46,    84,   152,    -1,
      -1,    -1,   149,    84,   252,   251,   154,   362,   152,   228,
     204,   149,   229,   274,    46,    84,   152,    -1,   231,    -1,
      -1,   232,    -1,   231,   232,    -1,    -1,    -1,   102,   157,
     345,   233,    73,   158,   234,   160,   177,   161,    -1,   236,
      -1,   235,     8,   236,    -1,   366,    -1,   240,    -1,   242,
      -1,    -1,    31,    -1,    -1,   332,   239,    71,   241,   157,
     275,   158,   160,   177,   161,    -1,    -1,   245,    71,   246,
     243,   249,   160,   283,   161,    -1,    -1,   247,    71,   244,
     248,   160,   283,   161,    -1,   118,    -1,   111,   118,    -1,
     119,    -1,   110,   118,    -1,    -1,   121,   345,    -1,   120,
      -1,    -1,   121,   250,    -1,    -1,   122,   250,    -1,   345,
      -1,   250,     8,   345,    -1,    -1,   124,   252,    -1,   366,
      -1,    31,   366,    -1,   180,    -1,    26,   177,    85,   159,
      -1,   180,    -1,    26,   177,    87,   159,    -1,   180,    -1,
      26,   177,    89,   159,    -1,    71,    13,   356,    -1,   256,
       8,    71,    13,   356,    -1,   160,   258,   161,    -1,   160,
     159,   258,   161,    -1,    26,   258,    92,   159,    -1,    26,
     159,   258,    92,   159,    -1,    -1,    -1,   258,    93,   362,
     261,   259,   177,    -1,    -1,   258,    94,   261,   260,   177,
      -1,    26,    -1,   159,    -1,   180,    -1,    26,   177,    83,
     159,    -1,    -1,    -1,   263,    66,   157,   362,   158,   264,
     180,    -1,    -1,    -1,   265,    66,   362,   152,   266,   204,
     149,    -1,    -1,   265,    67,    65,   362,   152,   267,   204,
     149,    -1,    -1,    -1,   268,    66,   157,   362,   158,    26,
     269,   177,    -1,    -1,    67,   180,    -1,    -1,    67,   152,
     204,   149,    -1,    46,    65,   152,    -1,    -1,    67,    26,
     177,    -1,    -1,    67,   152,   204,   149,    -1,   276,    -1,
      -1,   277,    73,    -1,   277,    31,    73,    -1,   277,    31,
      73,    13,   356,    -1,   277,    73,    13,   356,    -1,   276,
       8,   277,    73,    -1,   276,     8,   277,    31,    73,    -1,
     276,     8,   277,    31,    73,    13,   356,    -1,   276,     8,
     277,    73,    13,   356,    -1,    -1,   126,    -1,   127,    -1,
     345,    -1,   279,    -1,    -1,   318,    -1,   366,    -1,    31,
     364,    -1,   279,     8,   318,    -1,   279,     8,   366,    -1,
     279,     8,    31,   364,    -1,   280,     8,   281,    -1,   281,
      -1,    73,    -1,   162,   363,    -1,   162,   160,   362,   161,
      -1,   282,     8,    73,    -1,   282,     8,    73,    13,   356,
      -1,    73,    -1,    73,    13,   356,    -1,   283,   284,    -1,
      -1,    -1,   300,   285,   304,   159,    -1,   305,   159,    -1,
     287,    -1,    -1,   301,   332,   239,    71,   286,   157,   275,
     158,   299,    -1,   104,   288,   289,    -1,   345,    -1,   288,
       8,   345,    -1,   159,    -1,   160,   290,   161,    -1,    -1,
     291,    -1,   292,    -1,   291,   292,    -1,   293,   159,    -1,
     297,   159,    -1,   296,   105,   294,    -1,   345,    -1,   294,
       8,   345,    -1,    71,    -1,   296,    -1,   345,   144,    71,
      -1,   295,    90,   298,    71,    -1,   295,    90,   303,    -1,
      -1,   303,    -1,   159,    -1,   160,   177,   161,    -1,   302,
      -1,   113,    -1,    -1,   302,    -1,   303,    -1,   302,   303,
      -1,   107,    -1,   108,    -1,   109,    -1,   112,    -1,   111,
      -1,   110,    -1,   304,     8,    73,    -1,   304,     8,    73,
      13,   356,    -1,    73,    -1,    73,    13,   356,    -1,   305,
       8,    71,    13,   356,    -1,    99,    71,    13,   356,    -1,
     306,     8,   362,    -1,   362,    -1,    -1,   308,    -1,    -1,
     308,     8,   309,   362,    -1,   362,    -1,   310,   370,    -1,
     370,    -1,   311,    61,   386,   163,    -1,    61,   386,   163,
      -1,    -1,   311,   313,   310,    -1,   311,    -1,   310,    -1,
      -1,    -1,   315,   312,    -1,    -1,    63,   346,   317,   354,
      -1,    -1,   125,   157,   319,   392,   158,    13,   362,    -1,
     366,    13,   362,    -1,   366,    13,    31,   366,    -1,    -1,
     366,    13,    31,    63,   346,   320,   354,    -1,    62,   362,
      -1,   366,    24,   362,    -1,   366,    23,   362,    -1,   366,
      22,   362,    -1,   366,    21,   362,    -1,   366,    20,   362,
      -1,   366,    19,   362,    -1,   366,    18,   362,    -1,   366,
      17,   362,    -1,   366,    16,   362,    -1,   366,    15,   362,
      -1,   366,    14,   362,    -1,   365,    60,    -1,    60,   365,
      -1,   365,    59,    -1,    59,   365,    -1,    -1,   362,    27,
     321,   362,    -1,    -1,   362,    28,   322,   362,    -1,    -1,
     362,     9,   323,   362,    -1,    -1,   362,    11,   324,   362,
      -1,   362,    10,   362,    -1,   362,    31,   362,    -1,   362,
      30,   362,    -1,   362,    44,   362,    -1,   362,    42,   362,
      -1,   362,    43,   362,    -1,   362,    45,   362,    -1,   362,
      46,   362,    -1,   362,    47,   362,    -1,   362,    41,   362,
      -1,   362,    40,   362,    -1,    42,   362,    -1,    43,   362,
      -1,    48,   362,    -1,    50,   362,    -1,   362,    33,   362,
      -1,   362,    32,   362,    -1,   362,    35,   362,    -1,   362,
      34,   362,    -1,   362,    36,   362,    -1,   362,    39,   362,
      -1,   362,    37,   362,    -1,   362,    38,   362,    -1,   362,
      49,   346,    -1,   157,   362,   158,    -1,   316,    -1,    -1,
     157,   316,   158,   325,   314,    -1,    -1,    -1,   362,    25,
     326,   362,    26,   327,   362,    -1,    -1,   362,    25,    26,
     328,   362,    -1,   401,    -1,    58,   362,    -1,    57,   362,
      -1,    56,   362,    -1,    55,   362,    -1,    54,   362,    -1,
      53,   362,    -1,    52,   362,    -1,    64,   352,    -1,    -1,
      51,   329,   362,    -1,   358,    -1,   126,   157,   395,   158,
      -1,    61,   395,   163,    -1,   164,   353,   164,    -1,    12,
     362,    -1,    -1,   332,   239,   157,   330,   275,   158,   333,
     160,   177,   161,    -1,    -1,   112,   332,   239,   157,   331,
     275,   158,   333,   160,   177,   161,    -1,    98,    -1,    -1,
     104,   157,   334,   158,    -1,   334,     8,    73,    -1,   334,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     170,   157,   336,   278,   158,    -1,    -1,   145,   148,   170,
     157,   337,   278,   158,    -1,    -1,   148,   170,   157,   338,
     278,   158,    -1,    -1,   344,   144,   390,   157,   339,   278,
     158,    -1,    -1,   344,   144,   376,   157,   340,   278,   158,
      -1,    -1,   378,   144,   390,   157,   341,   278,   158,    -1,
      -1,   378,   144,   376,   157,   342,   278,   158,    -1,    -1,
     376,   157,   343,   278,   158,    -1,   112,    -1,   170,    -1,
     145,   148,   170,    -1,   148,   170,    -1,   170,    -1,   145,
     148,   170,    -1,   148,   170,    -1,   344,    -1,   347,    -1,
      -1,    -1,   382,   123,   348,   387,   349,   350,    -1,   382,
      -1,   350,   351,    -1,    -1,   123,   387,    -1,    -1,   157,
     158,    -1,   157,   362,   158,    -1,    -1,    78,    -1,   397,
      -1,    -1,   157,   278,   158,    -1,    69,    -1,    70,    -1,
      79,    -1,   132,    -1,   133,    -1,   147,    -1,   129,    -1,
     130,    -1,   131,    -1,   146,    -1,   140,    78,   141,    -1,
     140,   141,    -1,   355,    -1,   170,    -1,   145,   148,   170,
      -1,   148,   170,    -1,    42,   356,    -1,    43,   356,    -1,
     126,   157,   359,   158,    -1,    61,   359,   163,    -1,   357,
      -1,   128,    -1,   344,   144,    71,    -1,    72,    -1,   404,
      -1,   170,    -1,   145,   148,   170,    -1,   148,   170,    -1,
     355,    -1,   165,   397,   165,    -1,   140,   397,   141,    -1,
     128,    -1,    -1,   361,   360,    -1,    -1,     8,    -1,   361,
       8,   356,   124,   356,    -1,   361,     8,   356,    -1,   356,
     124,   356,    -1,   356,    -1,   363,    -1,   318,    -1,   366,
      -1,   366,    -1,   366,    -1,    -1,    -1,   381,   123,   367,
     387,   368,   375,   369,    -1,   381,    -1,   369,   370,    -1,
      -1,    -1,   123,   387,   371,   375,    -1,   372,    61,   386,
     163,    -1,   373,    61,   386,   163,    -1,    -1,   157,   374,
     278,   158,    -1,   373,    -1,   372,    -1,    -1,   384,    -1,
     391,   384,    -1,   344,   144,   376,    -1,   378,   144,   376,
      -1,   384,    -1,   379,    61,   386,   163,    -1,    -1,   335,
     380,    61,   386,   163,    -1,   382,    -1,   379,    -1,   335,
      -1,   384,    -1,   391,   384,    -1,   377,    -1,   384,    -1,
     391,   384,    -1,   384,    61,   386,   163,    -1,   384,   160,
     362,   161,    -1,   385,    -1,    73,    -1,   162,   160,   362,
     161,    -1,    -1,   362,    -1,   389,    -1,    -1,   376,   388,
      -1,   389,    61,   386,   163,    -1,   389,   160,   362,   161,
      -1,   390,    -1,    71,    -1,   160,   362,   161,    -1,   162,
      -1,   391,   162,    -1,   392,     8,   393,    -1,   393,    -1,
     366,    -1,    -1,   125,   157,   394,   392,   158,    -1,    -1,
      -1,   396,   360,    -1,   396,     8,   362,   124,   362,    -1,
     396,     8,   362,    -1,   362,   124,   362,    -1,   362,    -1,
     396,     8,   362,   124,    31,   364,    -1,   396,     8,    31,
     364,    -1,   362,   124,    31,   364,    -1,    31,   364,    -1,
     397,   398,    -1,   397,    78,    -1,   398,    -1,    78,   398,
      -1,    73,    -1,    -1,    73,    61,   399,   400,   163,    -1,
      73,   123,    71,    -1,   142,   362,   161,    -1,   142,    72,
      61,   362,   163,   161,    -1,   143,   366,   161,    -1,    71,
      -1,    74,    -1,    73,    -1,   115,   157,   402,   158,    -1,
     116,   157,   366,   158,    -1,     7,   362,    -1,     6,   362,
      -1,     5,   157,   362,   158,    -1,     4,   362,    -1,     3,
     362,    -1,   366,    -1,    -1,   402,     8,   403,   366,    -1,
     344,   144,    71,    -1,   378,   144,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   227,   227,   231,   231,   232,   236,   237,   241,   242,
     243,   244,   245,   246,   246,   248,   248,   250,   251,   252,
     256,   257,   261,   262,   263,   264,   268,   269,   273,   273,
     274,   279,   280,   281,   282,   283,   288,   289,   293,   294,
     294,   294,   295,   295,   295,   296,   296,   296,   297,   297,
     297,   301,   303,   305,   298,   307,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     322,   323,   321,   326,   327,   325,   329,   329,   330,   331,
     332,   333,   334,   335,   331,   337,   338,   342,   343,   344,
     348,   349,   350,   350,   352,   352,   358,   359,   359,   363,
     364,   368,   369,   370,   374,   374,   375,   375,   376,   377,
     384,   386,   393,   398,   399,   400,   402,   406,   408,   409,
     410,   408,   413,   414,   412,   417,   420,   417,   425,   426,
     427,   424,   432,   433,   431,   436,   437,   435,   442,   443,
     447,   448,   453,   453,   453,   458,   459,   463,   467,   471,
     476,   477,   482,   482,   488,   487,   494,   493,   503,   504,
     505,   506,   510,   511,   515,   518,   520,   523,   525,   529,
     530,   534,   535,   540,   541,   545,   546,   551,   552,   557,
     558,   563,   564,   569,   570,   571,   572,   577,   578,   578,
     579,   579,   584,   585,   590,   591,   596,   598,   598,   601,
     603,   603,   604,   604,   607,   609,   609,   613,   615,   618,
     620,   624,   627,   629,   632,   634,   638,   639,   644,   645,
     646,   647,   648,   649,   650,   651,   656,   657,   658,   659,
     664,   665,   670,   671,   672,   673,   674,   675,   679,   680,
     685,   686,   687,   692,   693,   694,   695,   701,   702,   707,
     707,   708,   709,   710,   710,   715,   719,   720,   724,   725,
     728,   730,   734,   735,   739,   740,   744,   748,   749,   753,
     754,   758,   762,   763,   767,   768,   772,   773,   777,   778,
     782,   783,   787,   788,   792,   793,   794,   795,   796,   797,
     801,   802,   803,   804,   808,   809,   813,   814,   819,   820,
     824,   824,   825,   829,   830,   834,   835,   839,   839,   840,
     841,   845,   846,   846,   851,   851,   855,   855,   856,   857,
     858,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   869,   870,   871,   872,   873,   874,   875,   875,
     876,   876,   877,   877,   878,   878,   879,   882,   883,   884,
     885,   886,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   907,   908,   909,   908,   911,   911,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   922,
     923,   924,   925,   926,   927,   928,   928,   930,   930,   935,
     938,   940,   944,   945,   946,   947,   951,   951,   954,   954,
     957,   957,   960,   960,   963,   963,   966,   966,   969,   969,
     972,   972,   978,   979,   980,   981,   985,   986,   987,   993,
     994,   999,  1000,   999,  1002,  1007,  1008,  1013,  1017,  1018,
    1019,  1023,  1024,  1025,  1030,  1031,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1065,  1069,
    1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1082,  1083,
    1086,  1088,  1092,  1093,  1094,  1095,  1099,  1100,  1105,  1110,
    1115,  1120,  1121,  1120,  1123,  1127,  1128,  1133,  1133,  1137,
    1138,  1142,  1142,  1148,  1149,  1150,  1154,  1155,  1159,  1160,
    1165,  1169,  1170,  1170,  1175,  1176,  1177,  1182,  1183,  1184,
    1188,  1189,  1193,  1194,  1195,  1200,  1201,  1205,  1206,  1211,
    1212,  1212,  1216,  1217,  1218,  1222,  1223,  1227,  1228,  1232,
    1233,  1238,  1239,  1239,  1240,  1245,  1246,  1250,  1251,  1252,
    1253,  1254,  1255,  1256,  1257,  1261,  1262,  1263,  1264,  1270,
    1271,  1271,  1272,  1273,  1274,  1275,  1280,  1281,  1282,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1297,  1298,  1298,  1302,
    1303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "\"tpl left delim (T_START_TPL)\"",
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
  "class_statement_list", "class_statement", "$@57", "$@58",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@59",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@60", "instance_call", "$@61", "new_expr",
  "$@62", "expr_without_variable", "$@63", "$@64", "$@65", "$@66", "$@67",
  "$@68", "@69", "$@70", "$@71", "$@72", "$@73", "@74", "@75", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@76", "$@77",
  "$@78", "$@79", "$@80", "$@81", "$@82", "$@83", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@84", "$@85",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@86", "$@87",
  "variable_properties", "variable_property", "$@88",
  "array_method_dereference", "method", "$@89", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@90",
  "base_variable_with_function_calls", "base_variable",
  "tpl_base_variable", "reference_variable", "compound_variable",
  "dim_offset", "object_property", "$@91", "object_dim_list",
  "variable_name", "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@92", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@93",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@94", "class_constant", YY_NULL
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
     386,   387,   388,   389,   390,   391,   392,    40,    41,    59,
     123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   169,   168,   168,   170,   170,   171,   171,
     171,   171,   171,   172,   171,   173,   171,   171,   171,   171,
     174,   174,   175,   175,   175,   175,   176,   176,   178,   177,
     177,   179,   179,   179,   179,   179,   180,   180,   181,   182,
     183,   181,   184,   185,   181,   186,   187,   181,   188,   189,
     181,   190,   191,   192,   181,   193,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     194,   195,   181,   196,   197,   181,   198,   181,   181,   199,
     200,   201,   202,   203,   181,   181,   181,   204,   204,   204,
     205,   205,   206,   205,   207,   205,   208,   209,   208,   210,
     210,   211,   211,   211,   213,   212,   214,   212,   212,   212,
     215,   215,   215,   215,   215,   215,   215,   215,   216,   217,
     218,   215,   219,   220,   215,   221,   222,   215,   223,   224,
     225,   215,   226,   227,   215,   228,   229,   215,   230,   230,
     231,   231,   233,   234,   232,   235,   235,   236,   237,   238,
     239,   239,   241,   240,   243,   242,   244,   242,   245,   245,
     245,   245,   246,   246,   247,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   256,   256,   257,   257,   257,   257,   258,   259,   258,
     260,   258,   261,   261,   262,   262,   263,   264,   263,   265,
     266,   265,   267,   265,   268,   269,   268,   270,   270,   271,
     271,   272,   273,   273,   274,   274,   275,   275,   276,   276,
     276,   276,   276,   276,   276,   276,   277,   277,   277,   277,
     278,   278,   279,   279,   279,   279,   279,   279,   280,   280,
     281,   281,   281,   282,   282,   282,   282,   283,   283,   285,
     284,   284,   284,   286,   284,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   294,   294,   295,
     295,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   301,   302,   302,   303,   303,   303,   303,   303,   303,
     304,   304,   304,   304,   305,   305,   306,   306,   307,   307,
     309,   308,   308,   310,   310,   311,   311,   313,   312,   312,
     312,   314,   315,   314,   317,   316,   319,   318,   318,   318,
     320,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   321,   318,
     322,   318,   323,   318,   324,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   325,   318,   326,   327,   318,   328,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   329,   318,
     318,   318,   318,   318,   318,   330,   318,   331,   318,   332,
     333,   333,   334,   334,   334,   334,   336,   335,   337,   335,
     338,   335,   339,   335,   340,   335,   341,   335,   342,   335,
     343,   335,   344,   344,   344,   344,   345,   345,   345,   346,
     346,   348,   349,   347,   347,   350,   350,   351,   352,   352,
     352,   353,   353,   353,   354,   354,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   357,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   359,
     360,   360,   361,   361,   361,   361,   362,   362,   363,   364,
     365,   367,   368,   366,   366,   369,   369,   371,   370,   372,
     372,   374,   373,   375,   375,   375,   376,   376,   377,   377,
     378,   379,   380,   379,   381,   381,   381,   382,   382,   382,
     383,   383,   384,   384,   384,   385,   385,   386,   386,   387,
     388,   387,   389,   389,   389,   390,   390,   391,   391,   392,
     392,   393,   394,   393,   393,   395,   395,   396,   396,   396,
     396,   396,   396,   396,   396,   397,   397,   397,   397,   398,
     399,   398,   398,   398,   398,   398,   400,   400,   400,   401,
     401,   401,   401,   401,   401,   401,   402,   403,   402,   404,
     404
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
       1,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     1,     4,     1,     4,     1,
       4,     3,     5,     3,     4,     4,     5,     0,     0,     6,
       0,     5,     1,     1,     1,     4,     0,     0,     7,     0,
       0,     7,     0,     8,     0,     0,     8,     0,     2,     0,
       4,     3,     0,     3,     0,     4,     1,     0,     2,     3,
       5,     4,     4,     5,     7,     6,     0,     1,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     0,
       4,     2,     1,     0,     9,     3,     1,     3,     1,     3,
       0,     1,     1,     2,     2,     2,     3,     1,     3,     1,
       1,     3,     4,     3,     0,     1,     1,     3,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     3,     5,     4,     3,     1,     0,     1,
       0,     4,     1,     2,     1,     4,     3,     0,     3,     1,
       1,     0,     0,     2,     0,     4,     0,     7,     3,     4,
       0,     7,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     0,     5,     0,     0,     7,     0,     5,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     3,
       1,     4,     3,     3,     2,     0,    10,     0,    11,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     0,     7,
       0,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     5,     1,     1,     3,     2,     1,     3,     2,     1,
       1,     0,     0,     6,     1,     2,     0,     2,     0,     2,
       3,     0,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       3,     2,     2,     2,     4,     3,     1,     1,     3,     1,
       1,     1,     3,     2,     1,     3,     3,     1,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     0,     0,     7,     1,     2,     0,     0,     4,     4,
       4,     0,     4,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     0,     5,     1,     1,     1,     1,     2,     1,
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
       0,     0,     0,     0,     0,   388,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   545,     0,     0,   438,     0,
     446,   447,     6,   469,   525,    67,   448,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   399,     0,     0,
      79,     0,     0,     0,     0,     0,   422,     0,     0,     0,
       0,   158,   160,   164,     0,     0,   477,   452,   453,   454,
     449,   450,     0,     0,   455,   451,     0,     0,    30,     0,
       0,     0,    78,    30,   537,   441,     0,   471,     4,     0,
       8,    36,    19,     9,    10,   148,   149,     0,     0,   371,
     487,   150,   516,     0,   474,   390,     0,   486,     0,   488,
       0,   519,     0,   515,   494,   514,   517,   524,     0,   379,
     470,     6,   422,     0,   150,   575,   574,     0,   572,   571,
     394,   357,   358,   359,   360,     0,   386,   385,   384,   383,
     382,   381,   380,   422,     0,     0,   423,     0,   337,   490,
       0,   335,     0,   550,     0,   480,   322,     0,     0,   423,
     429,   314,   430,     0,   434,   517,     0,     0,   387,     0,
      37,     0,   297,     0,    45,   298,     0,     0,     0,    57,
       0,    59,     0,     0,     0,    61,   487,     0,   488,     0,
       0,     0,    22,     0,    21,   240,     0,     0,   239,   161,
     159,   245,     0,   150,     0,     0,     0,     0,   316,   545,
     559,     0,   457,     0,     0,     0,   557,     0,    15,     0,
     473,     0,     6,   448,     0,     0,     0,   487,   486,    28,
       0,     0,     0,   371,     0,    28,     0,   442,     0,   443,
       0,     0,     0,   406,     0,    18,   162,   156,   151,     0,
       0,     0,   342,     0,   344,   374,   338,   340,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,   336,   334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   420,     0,   527,   491,   527,     0,   538,   518,
       0,     0,   389,     0,   425,     0,     0,   554,   489,     0,
     392,   481,   546,     0,   425,     0,   444,     0,   431,   518,
     439,     0,     0,     0,    66,     0,     0,     0,   299,   302,
     487,   488,     0,     0,    58,    60,    86,     0,    62,    63,
      30,    85,    24,     0,     0,    17,     0,   241,   488,     0,
      64,     0,     0,    65,     0,     0,   145,   147,   576,     0,
       0,     0,   544,     0,   560,     0,   456,   558,   469,     0,
       0,   556,   476,   555,   472,     5,    12,    13,   410,     0,
      99,   448,     0,     0,     0,   108,     0,   102,   101,   520,
       0,     0,     0,   298,   171,   173,     0,     0,     0,   110,
     111,     0,    91,   113,     0,   116,     0,   114,   372,   370,
      38,     0,   393,   475,     7,   231,     0,     0,   154,   165,
     152,   395,   527,   579,     0,   508,   506,     0,     0,     0,
     346,     0,   377,     0,     0,     0,   348,   347,   362,   361,
     364,   363,   365,   367,   368,   366,   356,   355,   350,   351,
     349,   352,   353,   354,   369,     0,   318,   333,   332,   331,
     330,   329,   328,   327,   326,   325,   324,   323,   231,   580,
     509,     0,   528,     0,     0,     0,     0,   573,   424,   535,
       0,   549,     0,   548,   424,   508,   231,   315,   509,     0,
     440,    39,   296,     0,     0,    51,   300,    73,    70,     0,
       0,    55,     0,     0,   478,     0,   467,     0,     0,   459,
       0,   458,    27,   466,    28,     0,    23,    20,     0,   238,
     246,   243,   397,     0,     0,   577,   569,   570,    11,     0,
     541,     0,   540,   391,     0,   562,     0,   563,   565,   408,
       3,     5,   231,   125,   545,     0,   104,   117,     0,   109,
     521,    92,   174,   171,     0,   488,     0,     0,     0,     0,
      94,   112,     0,    29,    31,    32,    33,    34,     0,   311,
     526,     0,     0,   230,   487,   488,     0,     0,     0,   426,
     163,   167,     0,     0,     0,   226,     0,     0,   414,   412,
     507,   343,   345,     0,     0,   339,   341,     0,   319,     0,
     418,   416,   511,   530,   492,   529,   534,   522,   523,   553,
     552,     0,     0,   432,    42,     0,    49,    46,   298,     0,
       0,     0,     0,     0,     0,     0,   462,   463,   485,     0,
     480,   478,     0,   461,     0,     0,    25,   242,     0,   226,
     146,    69,     0,   542,   544,     0,   566,   568,   567,     0,
       0,   231,    16,     3,     0,    89,     0,     0,   106,    96,
       0,   128,   172,     0,   118,   171,    96,     0,   115,   373,
       0,   234,   407,     0,    26,     0,   428,     0,     0,   166,
     169,   248,   226,   227,   228,     0,   216,     0,   229,   513,
     536,   231,   231,   378,   375,   320,   421,   231,   231,   531,
     505,   527,     0,     0,   547,   445,   436,    30,    40,     0,
       0,     0,   301,   171,   171,   181,     0,    30,   179,    77,
     187,   187,    56,     0,   465,   481,   479,     0,   460,   468,
       0,   244,     0,   578,   544,   539,     0,   561,     0,     0,
      14,   411,     0,   103,   105,     0,    93,     0,   298,     0,
       0,     0,    95,     0,   527,     0,   310,   309,   313,   304,
       0,   487,   488,   427,   168,   248,     0,   280,     0,   400,
     226,     0,   218,     0,     0,     0,   444,     0,     0,   501,
     504,   503,   496,     0,     0,   551,   433,    28,   196,     0,
      30,   194,    47,    52,     0,     0,     0,    28,   187,     0,
     187,     0,   484,   483,   464,    80,   400,     0,   317,   564,
     409,    88,   126,    87,   107,    97,     0,     0,   135,   171,
     122,    35,     0,   497,   303,   527,     0,   237,   280,   170,
       0,     0,   284,   285,   286,   289,   288,   287,   279,   157,
     247,   252,   249,     0,   278,   282,     0,     0,     0,     0,
       0,   219,     0,   415,   413,   376,   321,   419,   417,   231,
     527,   527,   493,   532,   533,     0,   435,   204,   207,     0,
      28,   298,    74,    71,   182,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,   543,   199,     0,     0,   129,
      89,     0,    89,   306,   505,     0,   308,   155,     0,     0,
     256,     0,   150,   283,     0,   251,    30,     0,    30,     0,
     222,     0,   221,     0,     0,     0,   495,   437,   212,     0,
       0,    41,    50,     0,     0,     0,     0,   180,     0,   185,
       0,   192,   193,   190,   184,   482,    81,    30,   209,    98,
     132,   298,     0,     0,     0,   498,   305,     0,     0,   258,
     260,   255,   292,     0,     0,     0,    28,     0,   404,     0,
      28,   223,     0,   220,   502,   499,   500,     0,     0,     0,
       0,   208,   195,    53,    30,   177,    75,    72,   186,   188,
      30,     0,    28,     0,     0,     0,    89,     0,   136,   119,
     123,   295,   257,     6,     0,   261,   262,     0,     0,   270,
       0,     0,     0,     0,   250,   253,     0,   153,   405,     0,
     401,   396,     0,   225,     0,    30,     0,     0,     0,    28,
      30,    28,     0,   398,     0,     0,    89,     0,   127,     0,
       0,   214,    89,   214,   259,   263,   264,   274,     0,   265,
       0,   293,   290,     0,   294,     0,   402,   224,     0,    28,
      44,   197,    30,   175,    54,     0,    28,    82,   200,     0,
       0,     0,   133,   130,     0,     0,     0,     0,     0,   273,
     266,   267,   271,     0,   226,   403,     0,     0,    28,   178,
       0,    89,   202,   210,   211,   214,    89,    89,     0,   120,
       0,   272,     0,   291,     0,   205,   198,     0,    30,     0,
      89,     0,     0,     0,     0,   214,     0,   268,     0,    30,
     176,    28,   201,     0,     0,     0,   215,   137,     0,   124,
     276,    30,   254,    28,    83,   203,     0,     0,     0,    28,
     139,   134,     0,     0,   277,     0,    84,   138,   140,   131,
     121,     0,   141,   142,     0,     0,   143,     0,    30,    28,
     144
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    87,    88,   541,   375,   193,   194,
      89,   229,   404,   563,   975,    91,   615,   788,   707,   867,
     326,   710,   173,   709,   618,   871,  1018,   625,   621,   926,
     620,   925,   177,   189,   883,   981,  1080,  1130,   742,   226,
     659,   666,   746,   887,   384,   385,   386,   657,   745,   813,
     750,  1032,  1105,   892,  1033,   655,   886,   748,   941,  1086,
     986,  1085,   890,  1031,  1136,  1137,  1138,  1144,  1147,   355,
     356,    93,    94,   249,    95,   584,    96,   581,   419,    97,
     418,    98,   583,   678,   679,   557,   394,  1054,   976,   719,
     500,   722,   799,  1020,   980,   933,   792,   868,  1077,   938,
    1081,  1100,   918,  1109,   921,   985,  1028,   969,  1065,   685,
     686,   687,   572,   573,   197,   198,   202,   767,   840,   901,
    1043,   841,   899,   951,   994,   995,   996,   997,  1070,   998,
     999,  1000,  1068,  1122,   842,   843,   844,   845,   953,   846,
     171,   327,   328,   619,   756,   757,   758,   826,   669,   670,
      99,   316,   100,   362,   776,   434,   435,   429,   431,   569,
     433,   775,   593,   135,   585,   639,   124,   849,   959,   102,
     415,   651,   542,   692,   691,   698,   697,   468,   103,   688,
     161,   162,   489,   706,   786,   866,   168,   238,   487,   104,
     628,   513,   105,   629,   312,   630,   187,   107,   307,   108,
     109,   474,   700,   862,   759,   894,   780,   781,   859,   782,
     110,   111,   112,   113,   250,   114,   115,   388,   116,   117,
     473,   604,   699,   605,   606,   118,   531,   532,   734,   154,
     155,   215,   216,   534,   649,   119,   359,   642,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -952
static const yytype_int16 yypact[] =
{
    -952,    79,    96,  -952,  2028,  4922,  4922,   -94,  4922,  4922,
    4922,  4922,  4922,  4922,  4922,  -952,  4922,  4922,  4922,  4922,
    4922,  4922,  4922,   354,   354,  3212,  4922,   394,   -64,   -59,
    -952,  -952,    75,  -952,  -952,  -952,  -952,  4922,  -952,   -40,
     -37,    57,  -952,    84,  3343,  3474,   181,  -952,   183,  3605,
    -952,  4922,    62,    -3,   167,   171,    16,   148,   150,   162,
     180,  -952,  -952,  -952,   205,   223,  -952,  -952,  -952,  -952,
    -952,  -952,   439,   149,  -952,  -952,   202,  3080,  -952,   291,
    3736,  4922,  -952,  -952,   231,   404,   415,   244,  -952,    15,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,   316,   327,  -952,
    -952,   382,   356,   275,  -952,  -952,  5589,  -952,   211,  1222,
     267,  -952,   284,   372,   322,  -952,     6,  -952,    14,  -952,
    -952,  -952,   350,   308,   382,  6706,  6706,  4922,  6706,  6706,
    3262,  -952,  -952,   390,  -952,  4922,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,   320,   202,   -57,   307,  -952,  -952,
     328,  -952,   354,  6504,   312,   490,  -952,   353,   202,   365,
     363,  -952,  -952,   388,   418,     0,    14,  3867,  -952,  4922,
    -952,    26,  6706,  2818,  -952,  4922,  4922,   393,  4922,  -952,
    5630,  -952,  5671,   401,   551,  -952,   410,  6706,   653,   417,
    5719,   202,   -18,    29,  -952,  -952,   278,    31,  -952,  -952,
    -952,   558,    34,   382,   354,   354,   354,   421,  -952,  3212,
      -5,   301,  -952,  5053,   354,   583,  -952,   202,  -952,   206,
     293,  4922,   253,   555,   190,  5184,    48,   116,    63,   435,
     436,   578,  6252,   437,  5824,   433,  4922,    92,   442,   554,
      92,   203,   532,  -952,   536,  -952,   489,  -952,  -952,     4,
     557,    65,  -952,  4922,  -952,   586,  -952,  -952,  4922,  4922,
    4922,  4922,  4922,  4922,  4922,  4922,  4922,  4922,  4922,  4922,
    4922,  4922,  4922,  4922,  4922,  4922,   394,  -952,  -952,  -952,
    3999,  4922,  4922,  4922,  4922,  4922,  4922,  4922,  4922,  4922,
    4922,  4922,  -952,    68,  4922,  -952,  4922,  4922,   231,    10,
     463,  5865,  -952,   202,   -32,   158,   158,  -952,  -952,  4131,
    -952,  4263,  -952,   202,   365,    42,   469,    42,  -952,   -15,
    -952,  5906,  5953,  4922,  -952,   549,  4922,   494,   652,  6706,
     572,  1202,   607,  5994,  -952,  -952,  -952,   691,  -952,  -952,
    -952,  -952,   -17,   612,    62,  -952,  4922,  -952,  -952,    -3,
    -952,   691,   611,  -952,   531,    28,  -952,  -952,  -952,    49,
     529,   533,   349,   535,  -952,   618,  -952,  -952,   633,  5325,
     537,  -952,  -952,  -952,   314,  -952,  -952,  -952,  -952,  6293,
    -952,   688,   546,   184,   694,  -952,  1036,  -952,  -952,   -15,
      14,   635,   354,  4395,   580,  -952,  4922,  6599,   638,  -952,
    -952,   562,  -952,  -952,  2159,  -952,  4922,  -952,  -952,  -952,
    -952,  5366,  -952,  -952,  -952,  4527,   697,   188,  -952,   597,
    -952,  -952,  4922,   573,  4922,   584,   -15,   588,    14,  4922,
    6783,  4922,  -952,  4922,  4922,  4922,  1427,  1511,  1552,  1552,
    1552,  1552,  1264,  1264,  1264,  1264,   752,   752,   693,   693,
     693,   390,   390,   390,  -952,   -22,  3262,  3262,  3262,  3262,
    3262,  3262,  3262,  3262,  3262,  3262,  3262,  3262,  4527,   573,
     589,   591,  6706,   556,   158,   560,  5407,  -952,   103,  -952,
     354,  6706,   354,  6545,   365,  -952,  4527,  -952,  -952,   158,
    -952,   703,  6706,   593,  6035,  -952,  -952,  -952,  -952,   722,
      50,  -952,   691,   691,   691,   594,  -952,   605,   202,   -16,
     619,  -952,  -952,  -952,   603,   684,  -952,  -952,  5457,  -952,
    -952,   755,  -952,   354,   610,  -952,  -952,  -952,  -952,   617,
    -952,    51,  -952,  -952,   413,  -952,  4922,  -952,  -952,  -952,
     614,  -952,  4527,  -952,  3212,   636,  -952,  -952,   763,  -952,
     -15,  -952,  -952,   580,   621,   944,     7,   627,  5760,     7,
    -952,  -952,   625,  -952,  -952,  -952,  -952,  -952,  6340,    33,
    -952,   354,   628,   794,    54,    89,   691,   656,   202,   365,
    -952,   683,   188,   646,   650,   425,   647,  5498,  -952,  -952,
     -15,  6746,  3262,  4922,  6665,  1888,  3393,   394,  -952,   651,
    -952,  -952,  -952,  -952,  -952,    66,  -952,  -952,  -952,  -952,
    -952,  4659,   655,  -952,  -952,  2818,  -952,  -952,  4922,  4922,
     354,     7,   691,   740,  2291,     2,  -952,  -952,   690,   663,
     807,   691,   202,   155,   745,   716,  -952,  -952,   691,   425,
    -952,  -952,   354,  -952,   349,   814,  -952,  -952,  -952,   665,
    1314,  4527,  -952,   669,   675,  -952,   677,  4922,  -952,  -952,
     689,  -952,  -952,  4922,  -952,   580,  -952,   687,  -952,  -952,
     141,  -952,  -952,  4791,  -952,   202,   365,   188,   692,   839,
    -952,  -952,   425,  -952,  -952,   695,   840,    64,  -952,  -952,
    -952,  4527,  4527,  1338,  -952,  -952,  -952,  4527,  4527,  -952,
     698,  4922,  4922,   354,  6706,  -952,  -952,  -952,  -952,  4922,
    2423,   699,  6706,   580,   580,  -952,   836,  -952,  -952,  -952,
     702,   705,  -952,   691,  -952,   691,  -952,   704,   200,  -952,
     700,  -952,   707,  -952,   349,  -952,  4922,  -952,   706,   708,
    -952,  -952,   161,  -952,  6706,  4922,   825,  4922,  4922,  6381,
       7,   719,   825,   720,  4922,   158,   733,   178,  -952,  -952,
     354,    58,   507,   365,   839,  -952,   188,   680,   729,   793,
     466,   826,   885,   744,   746,  4922,   469,   747,   749,  -952,
     842,   849,  -952,   750,  5539,  -952,   789,   424,  -952,  6082,
    -952,  -952,  -952,  -952,   756,   758,   691,   828,  -952,   508,
    -952,    -8,  -952,   796,  -952,  -952,   793,    60,  3262,  -952,
    -952,  -952,  3080,  -952,  6706,  -952,  6123,   762,  -952,   580,
    -952,  -952,   759,  -952,  -952,  4922,   733,  -952,  1092,  -952,
     852,   188,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,   350,   821,  -952,    39,   766,   777,   776,
     215,   925,   691,  -952,  -952,  1338,  -952,  -952,  -952,  4527,
    4922,  4922,   733,  -952,  -952,   158,  -952,  -952,   310,   781,
     859,  4922,  -952,  -952,  -952,   788,   543,   790,  4922,     5,
     199,  -952,   691,   188,   783,  -952,  -952,  4922,   798,  -952,
    -952,   795,  -952,  -952,   698,   785,   733,  -952,   938,    19,
    -952,   879,   382,  -952,   884,  -952,  -952,   227,  -952,   896,
     957,   691,  -952,   813,   810,   811,  -952,  -952,   341,   818,
    2818,  -952,  -952,   817,   819,  2555,  2555,  -952,   822,  -952,
    1947,  -952,  -952,  -952,  -952,  -952,  -952,  -952,   443,  6706,
    -952,  4922,   208,   830,   255,  -952,  -952,   691,   188,  -952,
     213,  -952,   967,    40,   913,   972,   827,   914,  -952,    61,
     829,   973,   691,  -952,  -952,  -952,  -952,   835,   968,   927,
    4922,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,   920,   837,  4922,    93,   950,  -952,   843,  3080,  -952,
    3080,  -952,  -952,   907,   841,   213,  -952,   846,   910,   901,
     848,   866,   691,   935,  -952,  -952,   691,  -952,  -952,   277,
    -952,  -952,   691,  -952,  4922,  -952,   853,  6164,  2687,   924,
    -952,   303,   855,  -952,  6422,  4922,  -952,   949,  -952,   280,
     865,   951,  -952,   951,  -952,  -952,  -952,   784,   188,  -952,
     948,  -952,  1007,   868,  -952,   953,  -952,  -952,  6211,   954,
    -952,  -952,  -952,  -952,  -952,   862,   411,  -952,  -952,  6463,
     298,   871,  3080,  -952,   875,   983,   474,   986,   963,   969,
    1030,  -952,  -952,   691,   425,  -952,  1015,  2818,   958,  -952,
     886,  -952,  -952,  3080,  -952,   951,  -952,  -952,   960,  3080,
     959,  -952,   188,  -952,   890,  -952,  -952,   893,  -952,   493,
    -952,  1008,   530,   566,   904,   951,   905,  -952,   359,  -952,
    -952,   892,  3080,   616,   974,  2949,  3080,  -952,  1014,  -952,
    -952,  -952,  -952,   579,  -952,  3080,   909,   980,   979,   906,
     964,  -952,   918,   919,  -952,   922,  -952,   964,  -952,  -952,
    -952,   188,  -952,  -952,  1003,   928,  -952,   930,  -952,   931,
    -952
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -952,  -952,  -349,  -952,   -23,  -952,  -952,  -952,  -952,   736,
    -952,   -74,  -952,  -952,    -2,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -809,  -952,
    -952,  -952,   422,  -952,   709,   710,  -952,  -952,  -952,     8,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,   -44,  -952,  -952,  -952,
     571,   712,   715,  -119,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,   420,  -508,  -372,  -952,   173,  -952,
    -952,  -952,  -471,  -952,  -952,   172,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  -951,  -628,
    -952,   331,  -454,  -952,  -952,   754,  -952,   339,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,   113,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -824,  -952,  -952,
    -952,  -376,  -952,  -952,   285,  -952,  -952,  -952,  -952,  -952,
     -62,  -952,   -34,  -952,  -952,  -952,  -952,  -952,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,    -1,   304,  -952,  -952,
    -952,  -952,  -952,  -952,  -952,  -952,  -952,  -952,  1060,  -410,
    -254,  -952,  -952,  -952,  -952,  -952,  -952,  -952,   336,  -162,
    -307,  -952,  -952,   482,   484,  -952,   864,   -53,  -447,   511,
    1210,  -952,  -952,  -952,  -716,  -952,  -952,  -952,  -952,   226,
    -241,  -952,  1294,  -952,  -952,  -952,   -21,  -952,   -19,  -952,
    -271,  -476,  -952,  -952,   345,   -11,   387,   496,  -952,  -191,
    -952,   458,   517,  -952,  -952,  -952,  -952,  -952,  -952
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -536
static const yytype_int16 yytable[] =
{
     146,   146,    90,   101,   159,   300,   164,   580,   165,   235,
     425,   732,    92,   613,   599,   186,   166,   554,   363,   233,
     903,   553,   454,   244,   228,   475,   540,   948,   720,   192,
     512,   931,   612,   609,   323,   610,   523,   344,   392,   349,
     824,   597,   352,   227,   520,   660,   296,   904,  1003,   121,
     219,    34,   470,   220,   768,   203,   364,   525,   623,   644,
     387,   296,  -232,   127,   425,   470,  -235,   296,   644,  1009,
     195,   296,   343,   515,   485,   420,   488,   398,   121,     3,
      34,   942,  1067,   944,   354,   878,   879,    34,   654,   201,
     143,   242,   -90,   167,  -312,   771,    -2,  -233,   169,   299,
     243,   170,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,    47,    34,   242,   174,   365,   143,
     175,   203,   304,   144,   671,   378,   145,   701,  -423,   146,
     242,   242,   242,   121,  1101,   314,   423,   772,    34,   469,
      84,    34,   330,   347,  -510,   297,   916,   319,  -490,  -490,
    -510,   586,   144,   881,  1118,   145,  -312,   751,  1025,   196,
     297,   421,   721,  -506,   932,   210,   297,  -507,   342,    84,
     297,   325,   680,   146,   245,   511,   298,  1029,   949,   950,
     824,   146,   146,   146,   662,   324,   524,   665,   345,   511,
     350,   146,   653,   353,   374,   626,   627,   739,   905,  1004,
     399,   146,   754,   389,    84,   794,   795,   526,   624,   645,
     191,   390,  -232,  1069,   176,   -90,  -235,  1060,   885,  1010,
     121,   392,   402,  1066,   387,   424,   702,    84,   424,   479,
      84,    34,   426,   603,   213,   214,   811,   773,   774,   825,
     428,   178,   711,   777,   778,  1026,   909,  -233,   603,   714,
     801,   242,   183,   159,   184,   164,   785,   165,   957,   121,
     539,   121,   545,    34,   755,   166,   514,   680,   400,   674,
     278,   279,  1099,   121,   426,   401,   210,  1102,  1103,   823,
     478,   371,   428,   811,   993,   199,   426,   426,   910,   200,
     484,  1113,   878,   879,   428,   428,   426,   217,   426,  -425,
     958,  -307,   143,   242,   428,   204,   428,   205,  1045,   218,
     812,   891,    78,   827,   509,   715,    79,    80,   424,   206,
      84,   192,    30,    31,   380,   212,    34,   876,   509,   880,
     811,   731,   381,   577,   233,   144,   578,   207,   145,   146,
     511,   511,   511,   695,  -424,   213,   214,   393,   242,   121,
    1046,    34,    84,   656,   242,   811,   829,   988,   577,    78,
     934,   578,   208,    79,    80,   376,   377,   389,   413,   146,
     230,   550,   817,   811,   210,   390,   919,   920,   819,   382,
     209,   574,    67,    68,    69,    70,    71,   246,  -423,   917,
     143,   236,   242,   383,   579,  -191,  -191,  -191,   247,    74,
      75,   243,   564,   101,   990,   913,    78,   967,   968,   590,
      79,    80,   565,   248,   511,    84,   802,  -512,   803,   251,
     121,   900,    34,   144,   292,   121,   145,    34,   293,  1062,
     783,    78,   146,   294,   574,    79,    80,  -425,   346,   276,
      84,   242,   366,   213,   214,   295,  1094,  1083,    47,    78,
     378,   305,   574,    79,    80,   426,   217,   146,  -424,   146,
     511,   143,   242,   428,  -191,   121,   143,    34,   303,   511,
     426,   539,   306,   936,   529,   310,   511,   210,   428,   509,
     509,   509,   237,   822,   646,   633,   647,   648,   210,   874,
     -43,   -43,   -43,   240,   144,   924,   121,   145,   311,   144,
     146,   313,   145,  -189,  -189,  -189,   143,   315,   574,   983,
     984,    84,   210,   242,   603,  -236,    84,   211,  1120,  1121,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   317,   146,   148,   151,   146,   121,   992,   157,
    1001,   318,   158,   239,   241,   912,   213,   214,   146,   811,
     332,   683,   684,   509,   895,   676,    84,   213,   214,   579,
     336,   511,   579,   511,   337,   987,  -490,  -490,   811,   338,
     577,   351,  -189,   578,   159,   935,   164,   340,   165,   361,
     212,   213,   214,  -217,   391,  1001,   166,   403,   405,   914,
     915,   406,   683,   684,   410,   408,   427,   146,   146,   509,
     877,   878,   879,   414,   963,   811,   412,   416,   509,   728,
     417,   577,   432,   708,   578,   509,   579,   574,   422,   146,
     421,   146,   718,  1089,   603,    78,   486,   210,  1071,    79,
      80,   493,   371,   787,   511,   928,   878,   879,   471,   761,
     991,   811,  1112,   797,    78,  -206,  -206,  -206,    79,    80,
     427,   471,   763,   495,   579,  1013,   210,   574,   574,   579,
     496,   371,   497,   574,   574,  -236,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   499,  1115,
     146,    78,  1107,   516,   521,    79,    80,   527,   522,   535,
     511,   811,   528,   533,   536,  1041,   213,   214,   538,  1044,
     509,  -100,   509,   544,   556,  1047,   551,   546,   791,   560,
     576,   146,  -490,  -490,   561,  1116,   870,    78,   582,   602,
     511,    79,    80,   607,   372,   213,   214,   146,   367,   614,
    -535,  1143,   373,   502,   503,   622,   426,   146,   273,   274,
     275,   588,   276,   579,   428,   589,   600,   579,   601,   511,
     616,   631,   504,   632,   367,   636,   373,   367,   373,   228,
      30,    31,   121,   634,   635,  1125,  1093,    78,   638,   641,
      36,    79,    80,   509,   643,   652,   658,   366,   227,   830,
     661,   663,   667,   954,   831,   511,   672,   832,   833,   834,
     835,   836,   837,   838,   270,   271,   272,   273,   274,   275,
     511,   276,   673,   143,   675,   677,   681,   682,   579,   696,
     689,   716,   339,   705,   723,   725,   729,   505,   730,   506,
      67,    68,    69,    70,    71,   574,   724,   736,   737,   509,
     740,   383,   956,   741,   960,   743,   507,    74,    75,   508,
     511,   839,   902,   747,   511,   753,   426,   766,   770,   796,
     511,   815,   765,   769,   428,   779,   755,   805,   793,   509,
     579,   798,   804,   982,   800,   806,   810,   809,   106,   125,
     126,   820,   128,   129,   130,   131,   132,   133,   134,   821,
     136,   137,   138,   139,   140,   141,   142,   847,   509,   153,
     156,   832,   833,   834,   835,   836,   837,   848,   852,   851,
    1019,   172,   853,   860,   854,   857,  1021,   858,   180,   182,
     861,   511,   865,   863,   872,   190,   873,   875,   971,  -281,
     882,   889,   893,   898,   509,   579,   906,   579,   832,   833,
     834,   835,   836,   837,   907,   228,   908,   228,   911,   509,
     922,  1049,   923,   937,   232,   234,  1056,   927,   946,   929,
     940,   947,   952,   943,   227,   955,   227,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   961,
     962,   964,   579,   965,   966,   970,   972,   973,  1078,   509,
    1002,   978,   989,   509,  1005,  1006,  1012,  1008,  1007,   509,
    1011,   301,  1014,  1022,  1015,  1016,  1027,  -269,  1023,   302,
    1037,  1030,  1034,  -490,  -490,  1036,  1038,  1039,  1042,   228,
    1040,  1055,  1050,  1057,  1061,   579,  1053,  1063,  1064,  1072,
    1073,  1079,  -213,  1084,  1111,  1074,  1075,  1087,   227,  1088,
     228,   321,  1090,   322,  1091,  1123,   228,   106,  1092,   329,
    -275,  1095,   333,  1097,  1104,  1106,  1098,  1129,  1108,   227,
     509,   579,  1110,  1124,  1114,   227,  1117,  1119,  1126,   228,
    1128,  1131,   228,   228,  1132,  1133,  1135,  1134,  -173,   579,
    1139,  1140,   228,   153,  1149,  1096,  1145,   369,   227,  1141,
     517,   227,   227,   147,   147,   379,  1146,   160,   752,   397,
    1148,   227,  1150,  1142,   640,   548,   549,   764,  -173,   977,
     411,   850,   979,   519,   828,    30,    31,   380,  1035,    34,
     884,   896,   856,   727,   726,   381,   566,   430,   579,   567,
     945,   807,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     735,     0,     0,     0,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,     0,     0,   472,     0,
     472,   476,   382,     0,     0,    67,    68,    69,    70,    71,
       0,     0,     0,   481,     0,   483,   383,     0,     0,     0,
       0,     0,    74,    75,     0,     0,     0,   492,   547,     0,
     494,   830,     0,     0,     0,     0,   831,     0,    84,   832,
     833,   834,   835,   836,   837,   838,     0,     0,     0,     0,
     518,     0,   147,     0,     0,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,     0,     0,
       0,     0,     0,   149,   149,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,     0,     0,     0,
       0,     0,     0,   897,     0,     0,   147,   329,     0,   188,
     558,  -490,  -490,     0,   147,   147,   147,     0,   106,     0,
     568,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,  -490,  -490,     0,   147,     0,   472,     0,   587,     0,
       0,     0,   498,   591,     0,   592,     0,   594,   595,   596,
    -536,  -536,  -536,  -536,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,     0,     0,     0,   150,   150,     0,
       0,   163,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,   255,
       0,   256,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   308,   276,     0,   256,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   331,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,     0,
     650,     0,     0,     0,     0,     0,   348,     0,   153,     0,
       0,   510,     0,     0,   357,   358,   360,     0,     0,     0,
       0,     0,   147,     0,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,   693,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   704,   276,   738,     0,   106,
       0,     0,   329,   712,     0,     0,     0,     0,   106,     0,
     150,     0,     0,     0,     0,     0,     0,     0,   150,   150,
     150,     0,     0,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,   147,     0,     0,   150,     0,
       0,   744,     0,     0,     0,     0,     0,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,   147,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,     0,   510,   510,   510,   472,   784,     0,     0,     0,
     163,     0,   530,   789,   106,     0,     0,     0,     0,     0,
       0,     0,     0,   147,  -536,  -536,  -536,  -536,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     808,   276,   552,   555,     0,     0,     0,     0,     0,   814,
       0,   816,   329,     0,     0,     0,   147,     0,   472,   147,
       0,     0,     0,     0,     0,   575,     0,     0,     0,     0,
       0,   147,     0,     0,     0,     0,   510,     0,     0,   855,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,   160,     0,     0,
       0,     0,     0,     0,     0,   598,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
     147,   147,   510,     0,     0,     0,   150,     0,     0,   472,
     308,   510,   308,     0,     0,     0,   575,     0,   510,     0,
       0,     0,   147,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   472,   472,     0,     0,     0,     0,
       0,     0,     0,   357,     0,   329,     0,     0,     0,     0,
       0,     0,   930,     0,     0,     0,     0,     0,     0,   150,
       0,   939,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,   395,     0,     0,   395,
       0,     0,     0,     0,   150,     0,   150,     0,     0,     0,
       0,   308,     0,   510,   106,   510,     0,     0,     0,   106,
     106,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,   150,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     713,   395,     0,     0,  1017,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1024,     0,     0,
     150,     0,   733,   150,   530,     0,   510,     0,     0,     0,
       0,   575,     0,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1048,     0,
       0,     0,   106,   762,     0,     0,     0,     0,     0,  1059,
       0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,   575,     0,     0,     0,     0,   575,   575,     0,
       0,     0,   510,   308,   150,   150,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   150,   276,   150,     0,
       0,   106,   510,     0,   530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   253,   254,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   510,   255,   931,   256,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,     0,   276,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,     0,     0,   150,     0,
       0,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,     0,     0,     0,   150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,   510,     0,     0,   575,
      11,    12,   510,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,     0,    35,     0,     0,   932,    36,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    51,    52,   510,    53,     0,     0,     0,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,    73,    74,    75,    76,    77,     0,    78,
       0,     0,     0,    79,    80,    81,     0,    82,    83,     0,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,    54,
      55,    56,     0,    57,    58,    59,   562,    61,    62,    63,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     5,     6,     7,     8,     9,    72,
       0,     0,     0,    10,   123,    74,    75,    76,    77,     0,
      78,     0,     0,     0,    79,    80,    81,   717,    82,    83,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,     0,    53,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     5,     6,     7,     8,
       9,    72,     0,     0,     0,    10,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,   790,
      82,    83,     0,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     5,     6,
       7,     8,     9,    72,     0,     0,     0,    10,   123,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      81,   974,    82,    83,     0,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       5,     6,     7,     8,     9,    72,     0,     0,     0,    10,
     123,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    81,  1052,    82,    83,     0,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   123,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,     0,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,    30,    31,    32,
      33,    34,     0,    35,     0,     0,     0,    36,    37,    38,
      39,     0,    40,     0,    41,     0,    42,     0,     0,    43,
       0,     0,     0,    44,    45,    46,    47,     0,    49,    50,
       0,    51,     0,     0,    53,     0,     0,     0,     0,     0,
      56,     0,    57,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   123,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,    82,    83,     0,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,  1127,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,   221,     0,     0,     0,    30,    31,
     222,    33,    34,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   221,     0,     0,     0,    30,
      31,   222,    33,    34,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   123,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    84,   152,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   121,    33,    34,     0,   255,     0,   256,
     257,    36,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
      47,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,    33,    34,     0,     0,     0,
       0,     0,    36,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    47,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   123,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,   179,     0,     0,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   121,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   123,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,   181,     0,     0,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   121,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     123,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,   185,     0,     0,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   121,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   123,    74,    75,    76,     0,     0,     0,     0,   231,
       0,     0,     0,    81,     0,     0,     0,     0,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   121,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     5,     6,     7,     8,     9,    72,     0,     0,
       0,    10,   123,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    81,   320,     0,     0,     0,    84,
     455,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     121,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     5,     6,     7,     8,     9,    72,
       0,     0,     0,    10,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,   480,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   121,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     5,     6,     7,     8,
       9,    72,     0,     0,     0,    10,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    84,   482,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     5,     6,
       7,     8,     9,    72,     0,     0,     0,    10,   123,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,    84,   392,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   121,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       5,     6,     7,     8,     9,    72,     0,     0,     0,    10,
     123,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,    84,   571,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   121,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     5,     6,     7,     8,     9,    72,     0,     0,
       0,    10,   123,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,    84,
     703,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     121,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     5,     6,     7,     8,     9,    72,
       0,     0,     0,    10,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,   760,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   121,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   121,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,   368,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   123,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   121,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   123,
      74,    75,    76,     0,   252,   253,   254,     0,     0,     0,
       0,   396,     0,     0,     0,     0,    84,     0,    85,    86,
     255,     0,   256,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,     0,   276,   252,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,   256,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,     0,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   255,     0,   256,   257,   537,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,     0,   276,   252,   253,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,     0,   256,   257,   570,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,     0,   276,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,   256,   257,   608,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,   256,   257,   637,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,   276,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,   256,   257,   690,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     864,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,   256,   257,   277,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,   276,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,   256,   257,   334,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,     0,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     664,   256,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   252,   253,   254,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,     0,   276,   252,   253,   254,   409,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,     0,     0,     0,     0,
       0,     0,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   409,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   477,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,   490,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,     0,   276,     0,     0,     0,     0,     0,
       0,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,   256,
     257,   491,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   501,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   617,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,     0,     0,     0,     0,     0,     0,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   256,   257,
     869,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,     0,   256,
     257,   888,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,  1051,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,     0,     0,     0,     0,     0,     0,   252,
     253,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,   256,   257,  1076,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
     252,   253,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   407,     0,   255,     0,   256,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,   252,   253,   254,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   543,     0,   255,     0,   256,
     257,     0,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,   252,   253,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,   668,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,   252,   253,   254,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,   256,   257,   818,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,   256,   257,  1058,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,     0,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   252,   253,
     254,     0,     0,     0,     0,  1082,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,   256,   257,   309,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   611,
       0,     0,     0,     0,   252,   253,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   559,
     255,   694,   256,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,     0,   276,   252,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   253,   254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,   256,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   254,   276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,     0,
     256,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-952))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-536))

static const yytype_int16 yycheck[] =
{
      23,    24,     4,     4,    27,   124,    27,   417,    27,    83,
     251,   639,     4,   489,   468,    49,    27,   393,   209,    81,
     844,   393,   276,     8,    77,   296,   375,     8,    26,    52,
     337,    26,   486,   480,     8,   482,     8,     8,    31,     8,
     756,    63,     8,    77,   351,   553,    61,     8,     8,    71,
      73,    73,   293,    76,   682,    56,    61,     8,     8,     8,
     222,    61,     8,   157,   305,   306,     8,    61,     8,     8,
      73,    61,    90,    90,   315,    71,   317,    29,    71,     0,
      73,   890,  1033,   892,   203,    93,    94,    73,   542,    73,
     112,   148,    29,   157,    61,    31,     0,     8,   157,   118,
     157,    26,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    98,    73,   148,   157,   123,   112,
     157,   122,   145,   145,   571,   157,   148,    61,   144,   152,
     148,   148,   148,    71,  1085,   158,    71,    73,    73,    71,
     162,    73,   176,   196,   144,   160,   862,   166,    59,    60,
     144,   422,   145,   161,  1105,   148,   123,   665,    65,   162,
     160,   157,   160,   157,   159,    73,   160,   157,   191,   162,
     160,   173,   582,   196,   159,   337,   162,   986,   159,   160,
     896,   204,   205,   206,   556,   159,   158,   559,   159,   351,
     159,   214,   541,   159,   217,   502,   503,   651,   159,   159,
     152,   224,    61,   222,   162,   713,   714,   158,   158,   158,
     148,   222,   158,  1037,   157,   152,   158,  1026,   158,   158,
      71,    31,   159,  1032,   386,   160,   160,   162,   160,    71,
     162,    73,   251,   474,   142,   143,    75,   691,   692,    61,
     251,   157,   618,   697,   698,   152,    31,   158,   489,   621,
     721,   148,    71,   276,    71,   276,   703,   276,    31,    71,
     157,    71,    78,    73,   123,   276,   340,   677,   152,   576,
      59,    60,  1081,    71,   293,   159,    73,  1086,  1087,   755,
     303,    78,   293,    75,    71,   118,   305,   306,    73,   118,
     313,  1100,    93,    94,   305,   306,   315,   148,   317,   144,
      73,   123,   112,   148,   315,   157,   317,   157,    31,   160,
     149,   819,   151,   760,   337,   622,   155,   156,   160,   157,
     162,   344,    69,    70,    71,   141,    73,   798,   351,   800,
      75,   638,    79,   145,   396,   145,   148,   157,   148,   362,
     502,   503,   504,   597,   144,   142,   143,   157,   148,    71,
      73,    73,   162,   544,   148,    75,   766,   149,   145,   151,
     161,   148,   157,   155,   156,   159,   160,   386,   165,   392,
      79,   390,   748,    75,    73,   386,    66,    67,   750,   126,
     157,   415,   129,   130,   131,   132,   133,    71,   144,   865,
     112,   160,   148,   140,   417,    92,    93,    94,    71,   146,
     147,   157,   404,   404,   149,   859,   151,    66,    67,   428,
     155,   156,   404,    31,   576,   162,   723,    61,   725,   144,
      71,   831,    73,   145,   157,    71,   148,    73,   144,   149,
     701,   151,   455,    61,   468,   155,   156,   144,   160,    49,
     162,   148,   141,   142,   143,   123,  1074,   149,    98,   151,
     157,   144,   486,   155,   156,   474,   148,   480,   144,   482,
     622,   112,   148,   474,   161,    71,   112,    73,   148,   631,
     489,   157,   144,   883,   125,   163,   638,    73,   489,   502,
     503,   504,    78,   754,    71,   508,    73,    74,    73,   796,
      66,    67,    68,    78,   145,   871,    71,   148,     8,   145,
     523,   148,   148,    92,    93,    94,   112,   144,   542,    66,
      67,   162,    73,   148,   755,     8,   162,    78,   159,   160,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   144,   556,    23,    24,   559,    71,   948,   145,
     950,   123,   148,    85,    86,   852,   142,   143,   571,    75,
     157,   126,   127,   576,   825,   578,   162,   142,   143,   582,
     159,   723,   585,   725,    13,   941,    59,    60,    75,   159,
     145,    13,   161,   148,   597,   882,   597,   160,   597,   158,
     141,   142,   143,   158,    29,   995,   597,   152,   152,   860,
     861,    13,   126,   127,   161,   158,   251,   620,   621,   622,
      92,    93,    94,    71,   911,    75,   164,    71,   631,   632,
     121,   145,    26,   615,   148,   638,   639,   651,    61,   642,
     157,   644,   624,   149,   865,   151,   157,    73,  1038,   155,
     156,    82,    78,   707,   796,    92,    93,    94,   293,   673,
     947,    75,   149,   717,   151,    66,    67,    68,   155,   156,
     305,   306,   675,   159,   677,   962,    73,   691,   692,   682,
       8,    78,    90,   697,   698,   158,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    71,   149,
     703,   151,  1092,    71,    73,   155,   156,   158,   157,    71,
     852,    75,   159,   158,    61,  1002,   142,   143,   161,  1006,
     723,    13,   725,   157,   124,  1012,    71,    13,   710,    71,
      13,   734,    59,    60,   152,   149,   790,   151,   121,   163,
     882,   155,   156,   163,   141,   142,   143,   750,   211,    26,
     157,  1141,   215,    42,    43,    13,   755,   760,    45,    46,
      47,   157,    49,   766,   755,   157,   157,   770,   157,   911,
     157,   157,    61,   148,   237,    71,   239,   240,   241,   812,
      69,    70,    71,   144,   161,   149,  1073,   151,    13,   159,
      79,   155,   156,   796,   157,   161,    13,   141,   812,    99,
     159,   154,   157,   902,   104,   947,   158,   107,   108,   109,
     110,   111,   112,   113,    42,    43,    44,    45,    46,    47,
     962,    49,     8,   112,   148,   122,   160,   157,   831,   158,
     163,    71,   159,   158,   124,     8,    71,   126,   102,   128,
     129,   130,   131,   132,   133,   859,   163,    13,   163,   852,
     161,   140,   906,   158,   908,   158,   145,   146,   147,   148,
    1002,   161,   843,   154,  1006,   158,   865,     8,     8,    13,
    1012,    26,   160,   158,   865,   157,   123,   157,   159,   882,
     883,   159,   158,   937,   159,   158,   158,   161,     4,     5,
       6,   152,     8,     9,    10,    11,    12,    13,    14,   159,
      16,    17,    18,    19,    20,    21,    22,   158,   911,    25,
      26,   107,   108,   109,   110,   111,   112,   104,    13,    73,
     974,    37,   158,    61,   158,   158,   980,   158,    44,    45,
      61,  1073,   123,   163,   158,    51,   158,    89,   920,    98,
     124,   159,   163,    71,   947,   948,   160,   950,   107,   108,
     109,   110,   111,   112,   157,   988,   160,   990,    13,   962,
     159,  1015,    83,   160,    80,    81,  1020,   159,   163,   159,
     152,    13,    73,   158,   988,    71,   990,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    73,
      13,   158,   995,   163,   163,   157,   159,   158,  1052,  1002,
      13,   159,   152,  1006,    71,    13,    13,    73,   161,  1012,
     161,   127,   157,    73,    26,    68,    46,    90,   161,   135,
      90,   158,   161,    59,    60,   159,   105,   159,    73,  1062,
     144,    87,   159,   158,    65,  1038,  1018,   152,    67,    71,
      13,   159,    68,   152,  1098,   157,    73,   152,  1062,    46,
    1083,   167,    46,   169,    71,  1109,  1089,   173,     8,   175,
      71,    26,   178,    85,    84,    86,   160,  1121,   158,  1083,
    1073,  1074,   159,   161,    46,  1089,   152,   152,    84,  1112,
      46,   152,  1115,  1116,    84,    86,   102,   161,   124,  1092,
     152,   152,  1125,   209,  1148,  1077,    73,   213,  1112,   157,
     344,  1115,  1116,    23,    24,   221,   158,    27,   666,   225,
     160,  1125,   161,  1137,   523,   386,   386,   677,   154,   926,
     236,   770,   930,   349,   765,    69,    70,    71,   995,    73,
     806,   826,   776,   631,   630,    79,   404,   253,  1141,   404,
     894,   734,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     644,    -1,    -1,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,    -1,    -1,   294,    -1,
     296,   297,   126,    -1,    -1,   129,   130,   131,   132,   133,
      -1,    -1,    -1,   309,    -1,   311,   140,    -1,    -1,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,   323,   152,    -1,
     326,    99,    -1,    -1,    -1,    -1,   104,    -1,   162,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
     346,    -1,   152,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,   196,   393,    -1,    49,
     396,    59,    60,    -1,   204,   205,   206,    -1,   404,    -1,
     406,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,   224,    -1,   422,    -1,   424,    -1,
      -1,    -1,    90,   429,    -1,   431,    -1,   433,   434,   435,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    23,    24,    -1,
      -1,    27,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,    25,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   152,    49,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   176,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,
     536,    -1,    -1,    -1,    -1,    -1,   196,    -1,   544,    -1,
      -1,   351,    -1,    -1,   204,   205,   206,    -1,    -1,    -1,
      -1,    -1,   362,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,
      -1,    -1,   392,    -1,    -1,    -1,    -1,   593,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   611,    49,   163,    -1,   615,
      -1,    -1,   618,   619,    -1,    -1,    -1,    -1,   624,    -1,
     196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,   224,    -1,
      -1,   657,    -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,   482,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   502,   503,   504,   701,   702,    -1,    -1,    -1,
     276,    -1,   362,   709,   710,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   523,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     736,    49,   392,   393,    -1,    -1,    -1,    -1,    -1,   745,
      -1,   747,   748,    -1,    -1,    -1,   556,    -1,   754,   559,
      -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   571,    -1,    -1,    -1,    -1,   576,    -1,    -1,   775,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   362,   597,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   468,    -1,
     620,   621,   622,    -1,    -1,    -1,   392,    -1,    -1,   825,
     480,   631,   482,    -1,    -1,    -1,   486,    -1,   638,    -1,
      -1,    -1,   642,    -1,   644,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   860,   861,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   523,    -1,   871,    -1,    -1,    -1,    -1,
      -1,    -1,   878,    -1,    -1,    -1,    -1,    -1,    -1,   455,
      -1,   887,   542,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   703,    -1,    -1,   556,    -1,    -1,   559,
      -1,    -1,    -1,    -1,   480,    -1,   482,    -1,    -1,    -1,
      -1,   571,    -1,   723,   920,   725,    -1,    -1,    -1,   925,
     926,    -1,    -1,    -1,   734,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   941,    -1,    -1,    -1,    -1,
     750,    -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,
     760,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     620,   621,    -1,    -1,   970,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   983,    -1,    -1,
     556,    -1,   642,   559,   644,    -1,   796,    -1,    -1,    -1,
      -1,   651,    -1,    -1,    -1,   571,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1014,    -1,
      -1,    -1,  1018,   673,    -1,    -1,    -1,    -1,    -1,  1025,
      -1,   597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   691,   692,    -1,    -1,    -1,    -1,   697,   698,    -1,
      -1,    -1,   852,   703,   620,   621,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   642,    49,   644,    -1,
      -1,  1077,   882,    -1,   734,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
     750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     760,   911,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,   703,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   947,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   962,    -1,    -1,    -1,    -1,    -1,   734,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,   750,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   760,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1002,    -1,    -1,    -1,  1006,    -1,    -1,   859,
      42,    43,  1012,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,   159,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,  1073,   106,    -1,    -1,    -1,   110,   111,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,   151,
      -1,    -1,    -1,   155,   156,   157,    -1,   159,   160,    -1,
     162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,     3,     4,     5,     6,     7,   140,
      -1,    -1,    -1,    12,   145,   146,   147,   148,   149,    -1,
     151,    -1,    -1,    -1,   155,   156,   157,    26,   159,   160,
      -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,     3,     4,     5,     6,
       7,   140,    -1,    -1,    -1,    12,   145,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    26,
     159,   160,    -1,   162,    -1,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,     3,     4,
       5,     6,     7,   140,    -1,    -1,    -1,    12,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    26,   159,   160,    -1,   162,    -1,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,    -1,
       3,     4,     5,     6,     7,   140,    -1,    -1,    -1,    12,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    26,   159,   160,    -1,   162,    -1,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,   159,   160,    -1,   162,
      -1,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,    -1,
     162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    46,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,     3,     4,     5,     6,     7,
     140,    -1,    -1,    -1,    12,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,   162,    31,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    25,    -1,    27,
      28,    79,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,   162,    -1,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,   162,    -1,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,   159,    -1,    -1,   162,    -1,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,   162,    -1,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,    -1,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,    -1,     3,     4,     5,     6,     7,   140,    -1,    -1,
      -1,    12,   145,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,   162,
      31,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,     3,     4,     5,     6,     7,   140,
      -1,    -1,    -1,    12,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,    31,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,     3,     4,     5,     6,
       7,   140,    -1,    -1,    -1,    12,   145,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   162,    31,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,     3,     4,
       5,     6,     7,   140,    -1,    -1,    -1,    12,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,   162,    31,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,    -1,
       3,     4,     5,     6,     7,   140,    -1,    -1,    -1,    12,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,   162,    31,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,    -1,     3,     4,     5,     6,     7,   140,    -1,    -1,
      -1,    12,   145,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,
      31,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,     3,     4,     5,     6,     7,   140,
      -1,    -1,    -1,    12,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,    31,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   162,    -1,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,   162,    -1,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,   162,    -1,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,   162,    -1,   164,   165,
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
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   161,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   161,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   161,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   161,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   161,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     161,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   159,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      90,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   158,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   158,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   158,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   158,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   158,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   158,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     158,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   158,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   158,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   158,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   152,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   152,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   152,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   124,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   167,   168,     0,   169,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   125,   126,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   155,
     156,   157,   159,   160,   162,   164,   165,   170,   171,   176,
     180,   181,   215,   237,   238,   240,   242,   245,   247,   316,
     318,   332,   335,   344,   355,   358,   362,   363,   365,   366,
     376,   377,   378,   379,   381,   382,   384,   385,   391,   401,
     404,    71,   112,   145,   332,   362,   362,   157,   362,   362,
     362,   362,   362,   362,   362,   329,   362,   362,   362,   362,
     362,   362,   362,   112,   145,   148,   170,   344,   365,   366,
     378,   365,    31,   362,   395,   396,   362,   145,   148,   170,
     344,   346,   347,   378,   382,   384,   391,   157,   352,   157,
      26,   306,   362,   188,   157,   157,   157,   198,   157,   159,
     362,   159,   362,    71,    71,   159,   318,   362,   366,   199,
     362,   148,   170,   174,   175,    73,   162,   280,   281,   118,
     118,    73,   282,   332,   157,   157,   157,   157,   157,   157,
      73,    78,   141,   142,   143,   397,   398,   148,   160,   170,
     170,    65,    71,    79,    84,    86,   205,   318,   363,   177,
      79,   153,   362,   316,   362,   177,   160,    78,   353,   397,
      78,   397,   148,   157,     8,   159,    71,    71,    31,   239,
     380,   144,     9,    10,    11,    25,    27,    28,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   159,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   157,   144,    61,   123,    61,   160,   162,   384,
     239,   362,   362,   148,   170,   144,   144,   364,   366,   124,
     163,     8,   360,   148,   170,   144,   317,   144,   123,   384,
     158,   362,   362,     8,   159,   180,   186,   307,   308,   362,
     318,   366,   157,   362,   159,   159,   159,    13,   159,   159,
     160,   159,   170,    90,     8,   159,   160,   363,   366,     8,
     159,    13,     8,   159,   239,   235,   236,   366,   366,   402,
     366,   158,   319,   395,    61,   123,   141,   398,    72,   362,
     366,    78,   141,   398,   170,   173,   159,   160,   157,   362,
      71,    79,   126,   140,   210,   211,   212,   355,   383,   384,
     391,    29,    31,   157,   252,   366,   157,   362,    29,   152,
     152,   159,   159,   152,   178,   152,    13,   152,   158,   158,
     161,   362,   164,   165,    71,   336,    71,   121,   246,   244,
      71,   157,    61,    71,   160,   376,   384,   390,   391,   323,
     362,   324,    26,   326,   321,   322,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   346,    31,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   343,    71,
     376,   390,   362,   386,   367,   386,   362,   158,   170,    71,
      31,   362,    31,   362,   170,   376,   157,   354,   376,   348,
     158,   158,   362,    82,   362,   159,     8,    90,    90,    71,
     256,   158,    42,    43,    61,   126,   128,   145,   148,   170,
     344,   355,   356,   357,   177,    90,    71,   175,   362,   281,
     356,    73,   157,     8,   158,     8,   158,   158,   159,   125,
     366,   392,   393,   158,   399,    71,    61,   161,   161,   157,
     168,   172,   338,   152,   157,    78,    13,   152,   210,   211,
     384,    71,   366,   252,   307,   366,   124,   251,   362,    90,
      71,   152,   117,   179,   180,   215,   237,   238,   362,   325,
     161,    31,   278,   279,   318,   366,    13,   145,   148,   170,
     345,   243,   121,   248,   241,   330,   386,   362,   157,   157,
     384,   362,   362,   328,   362,   362,   362,    63,   366,   278,
     157,   157,   163,   376,   387,   389,   390,   163,   161,   364,
     364,   124,   278,   387,    26,   182,   157,   158,   190,   309,
     196,   194,    13,     8,   158,   193,   356,   356,   356,   359,
     361,   157,   148,   170,   144,   161,    71,   161,    13,   331,
     236,   159,   403,   157,     8,   158,    71,    73,    74,   400,
     362,   337,   161,   168,   278,   221,   395,   213,    13,   206,
     251,   159,   252,   154,    90,   252,   207,   157,   152,   314,
     315,   364,   158,     8,   356,   148,   170,   122,   249,   250,
     345,   160,   157,   126,   127,   275,   276,   277,   345,   163,
     161,   340,   339,   362,    26,   346,   158,   342,   341,   388,
     368,    61,   160,    31,   362,   158,   349,   184,   180,   189,
     187,   307,   362,   366,   252,   356,    71,    26,   180,   255,
      26,   160,   257,   124,   163,     8,   360,   359,   170,    71,
     102,   356,   275,   366,   394,   393,    13,   163,   163,   278,
     161,   158,   204,   158,   362,   214,   208,   154,   223,   362,
     216,   251,   208,   158,    61,   123,   310,   311,   312,   370,
      31,   318,   366,   170,   250,   160,     8,   283,   275,   158,
       8,    31,    73,   278,   278,   327,   320,   278,   278,   157,
     372,   373,   375,   386,   362,   364,   350,   177,   183,   362,
      26,   180,   262,   159,   251,   251,    13,   177,   159,   258,
     159,   258,   356,   356,   158,   157,   158,   392,   362,   161,
     158,    75,   149,   215,   362,    26,   362,   307,   152,   252,
     152,   159,   386,   387,   370,    61,   313,   364,   283,   345,
      99,   104,   107,   108,   109,   110,   111,   112,   113,   161,
     284,   287,   300,   301,   302,   303,   305,   158,   104,   333,
     277,    73,    13,   158,   158,   362,   354,   158,   158,   374,
      61,    61,   369,   163,   161,   123,   351,   185,   263,   158,
     177,   191,   158,   158,   356,    89,   258,    92,    93,    94,
     258,   161,   124,   200,   333,   158,   222,   209,   158,   159,
     228,   251,   219,   163,   371,   386,   310,   161,    71,   288,
     345,   285,   332,   303,     8,   159,   160,   157,   160,    31,
      73,    13,   356,   278,   386,   386,   370,   387,   268,    66,
      67,   270,   159,    83,   307,   197,   195,   159,    92,   159,
     362,    26,   159,   261,   161,   356,   345,   160,   265,   362,
     152,   224,   204,   158,   204,   375,   163,    13,     8,   159,
     160,   289,    73,   304,   239,    71,   177,    31,    73,   334,
     177,    73,    13,   356,   158,   163,   163,    66,    67,   273,
     157,   180,   159,   158,    26,   180,   254,   254,   159,   261,
     260,   201,   177,    66,    67,   271,   226,   307,   149,   152,
     149,   356,   345,    71,   290,   291,   292,   293,   295,   296,
     297,   345,    13,     8,   159,    71,    13,   161,    73,     8,
     158,   161,    13,   356,   157,    26,    68,   362,   192,   177,
     259,   177,    73,   161,   362,    65,   152,    46,   272,   204,
     158,   229,   217,   220,   161,   292,   159,    90,   105,   159,
     144,   356,    73,   286,   356,    31,    73,   356,   362,   177,
     159,   158,    26,   180,   253,    87,   177,   158,   152,   362,
     204,    65,   149,   152,    67,   274,   204,   274,   298,   303,
     294,   345,    71,    13,   157,    73,   158,   264,   177,   159,
     202,   266,   152,   149,   152,   227,   225,   152,    46,   149,
      46,    71,     8,   356,   275,    26,   180,    85,   160,   204,
     267,   274,   204,   204,    84,   218,    86,   345,   158,   269,
     159,   177,   149,   204,    46,   149,   149,   152,   274,   152,
     159,   160,   299,   177,   161,   149,    84,    46,    46,   177,
     203,   152,    84,    86,   161,   102,   230,   231,   232,   152,
     152,   157,   232,   345,   233,    73,   158,   234,   160,   177,
     161
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
#line 227 "Zend54/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 231 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 231 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 236 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

/* Line 1810 of yacc.c  */
#line 237 "Zend54/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

/* Line 1810 of yacc.c  */
#line 241 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 242 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 243 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 244 "Zend54/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 245 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

/* Line 1810 of yacc.c  */
#line 246 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 247 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

/* Line 1810 of yacc.c  */
#line 248 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

/* Line 1810 of yacc.c  */
#line 249 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 250 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 251 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 252 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:

/* Line 1810 of yacc.c  */
#line 261 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 262 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:

/* Line 1810 of yacc.c  */
#line 263 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:

/* Line 1810 of yacc.c  */
#line 264 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:

/* Line 1810 of yacc.c  */
#line 268 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:

/* Line 1810 of yacc.c  */
#line 269 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:

/* Line 1810 of yacc.c  */
#line 273 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:

/* Line 1810 of yacc.c  */
#line 273 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:

/* Line 1810 of yacc.c  */
#line 283 "Zend54/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:

/* Line 1810 of yacc.c  */
#line 288 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:

/* Line 1810 of yacc.c  */
#line 289 "Zend54/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:

/* Line 1810 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:

/* Line 1810 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 41:

/* Line 1810 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:

/* Line 1810 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 43:

/* Line 1810 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 44:

/* Line 1810 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:

/* Line 1810 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (2)])) = get_next_op_number(CG(active_op_array));  }
    break;

  case 46:

/* Line 1810 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 47:

/* Line 1810 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 48:

/* Line 1810 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:

/* Line 1810 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

/* Line 1810 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 51:

/* Line 1810 of yacc.c  */
#line 301 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:

/* Line 1810 of yacc.c  */
#line 303 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:

/* Line 1810 of yacc.c  */
#line 305 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:

/* Line 1810 of yacc.c  */
#line 306 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:

/* Line 1810 of yacc.c  */
#line 307 "Zend54/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 56:

/* Line 1810 of yacc.c  */
#line 307 "Zend54/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 57:

/* Line 1810 of yacc.c  */
#line 308 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:

/* Line 1810 of yacc.c  */
#line 309 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

/* Line 1810 of yacc.c  */
#line 310 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:

/* Line 1810 of yacc.c  */
#line 311 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:

/* Line 1810 of yacc.c  */
#line 312 "Zend54/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:

/* Line 1810 of yacc.c  */
#line 313 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:

/* Line 1810 of yacc.c  */
#line 314 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 67:

/* Line 1810 of yacc.c  */
#line 318 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 68:

/* Line 1810 of yacc.c  */
#line 319 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 70:

/* Line 1810 of yacc.c  */
#line 322 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 71:

/* Line 1810 of yacc.c  */
#line 323 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 72:

/* Line 1810 of yacc.c  */
#line 324 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 73:

/* Line 1810 of yacc.c  */
#line 326 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 74:

/* Line 1810 of yacc.c  */
#line 327 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 75:

/* Line 1810 of yacc.c  */
#line 328 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 76:

/* Line 1810 of yacc.c  */
#line 329 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 77:

/* Line 1810 of yacc.c  */
#line 329 "Zend54/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 79:

/* Line 1810 of yacc.c  */
#line 331 "Zend54/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 80:

/* Line 1810 of yacc.c  */
#line 332 "Zend54/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 81:

/* Line 1810 of yacc.c  */
#line 333 "Zend54/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 82:

/* Line 1810 of yacc.c  */
#line 334 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 83:

/* Line 1810 of yacc.c  */
#line 335 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 84:

/* Line 1810 of yacc.c  */
#line 336 "Zend54/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 85:

/* Line 1810 of yacc.c  */
#line 337 "Zend54/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:

/* Line 1810 of yacc.c  */
#line 338 "Zend54/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 88:

/* Line 1810 of yacc.c  */
#line 343 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 90:

/* Line 1810 of yacc.c  */
#line 348 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 91:

/* Line 1810 of yacc.c  */
#line 349 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 92:

/* Line 1810 of yacc.c  */
#line 350 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:

/* Line 1810 of yacc.c  */
#line 351 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:

/* Line 1810 of yacc.c  */
#line 352 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 95:

/* Line 1810 of yacc.c  */
#line 353 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 96:

/* Line 1810 of yacc.c  */
#line 358 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 97:

/* Line 1810 of yacc.c  */
#line 359 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 98:

/* Line 1810 of yacc.c  */
#line 359 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 99:

/* Line 1810 of yacc.c  */
#line 363 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 100:

/* Line 1810 of yacc.c  */
#line 364 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:

/* Line 1810 of yacc.c  */
#line 368 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:

/* Line 1810 of yacc.c  */
#line 370 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 104:

/* Line 1810 of yacc.c  */
#line 374 "Zend54/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:

/* Line 1810 of yacc.c  */
#line 374 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 106:

/* Line 1810 of yacc.c  */
#line 375 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:

/* Line 1810 of yacc.c  */
#line 375 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 108:

/* Line 1810 of yacc.c  */
#line 376 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 109:

/* Line 1810 of yacc.c  */
#line 377 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 110:

/* Line 1810 of yacc.c  */
#line 384 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 111:

/* Line 1810 of yacc.c  */
#line 386 "Zend54/zend_language_parser.y"
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
#line 393 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 113:

/* Line 1810 of yacc.c  */
#line 398 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 114:

/* Line 1810 of yacc.c  */
#line 399 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 115:

/* Line 1810 of yacc.c  */
#line 400 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 116:

/* Line 1810 of yacc.c  */
#line 402 "Zend54/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC); 
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 117:

/* Line 1810 of yacc.c  */
#line 406 "Zend54/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 118:

/* Line 1810 of yacc.c  */
#line 408 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 119:

/* Line 1810 of yacc.c  */
#line 409 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 120:

/* Line 1810 of yacc.c  */
#line 410 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 121:

/* Line 1810 of yacc.c  */
#line 411 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 122:

/* Line 1810 of yacc.c  */
#line 413 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 123:

/* Line 1810 of yacc.c  */
#line 414 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 124:

/* Line 1810 of yacc.c  */
#line 415 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 125:

/* Line 1810 of yacc.c  */
#line 417 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 126:

/* Line 1810 of yacc.c  */
#line 420 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 127:

/* Line 1810 of yacc.c  */
#line 422 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 128:

/* Line 1810 of yacc.c  */
#line 425 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 129:

/* Line 1810 of yacc.c  */
#line 426 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 130:

/* Line 1810 of yacc.c  */
#line 427 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 131:

/* Line 1810 of yacc.c  */
#line 429 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 132:

/* Line 1810 of yacc.c  */
#line 432 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 133:

/* Line 1810 of yacc.c  */
#line 433 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 134:

/* Line 1810 of yacc.c  */
#line 434 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 135:

/* Line 1810 of yacc.c  */
#line 436 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 136:

/* Line 1810 of yacc.c  */
#line 437 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 137:

/* Line 1810 of yacc.c  */
#line 438 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 138:

/* Line 1810 of yacc.c  */
#line 442 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 139:

/* Line 1810 of yacc.c  */
#line 443 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 140:

/* Line 1810 of yacc.c  */
#line 447 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 141:

/* Line 1810 of yacc.c  */
#line 448 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 142:

/* Line 1810 of yacc.c  */
#line 453 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 143:

/* Line 1810 of yacc.c  */
#line 453 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 144:

/* Line 1810 of yacc.c  */
#line 453 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 147:

/* Line 1810 of yacc.c  */
#line 463 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 148:

/* Line 1810 of yacc.c  */
#line 467 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 149:

/* Line 1810 of yacc.c  */
#line 471 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 150:

/* Line 1810 of yacc.c  */
#line 476 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 151:

/* Line 1810 of yacc.c  */
#line 477 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 152:

/* Line 1810 of yacc.c  */
#line 482 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 153:

/* Line 1810 of yacc.c  */
#line 483 "Zend54/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 154:

/* Line 1810 of yacc.c  */
#line 488 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 155:

/* Line 1810 of yacc.c  */
#line 492 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 156:

/* Line 1810 of yacc.c  */
#line 494 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 157:

/* Line 1810 of yacc.c  */
#line 498 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 158:

/* Line 1810 of yacc.c  */
#line 503 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 159:

/* Line 1810 of yacc.c  */
#line 504 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 160:

/* Line 1810 of yacc.c  */
#line 505 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 161:

/* Line 1810 of yacc.c  */
#line 506 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 162:

/* Line 1810 of yacc.c  */
#line 510 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 163:

/* Line 1810 of yacc.c  */
#line 511 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 164:

/* Line 1810 of yacc.c  */
#line 515 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 169:

/* Line 1810 of yacc.c  */
#line 529 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 170:

/* Line 1810 of yacc.c  */
#line 530 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 171:

/* Line 1810 of yacc.c  */
#line 534 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 172:

/* Line 1810 of yacc.c  */
#line 535 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 173:

/* Line 1810 of yacc.c  */
#line 540 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 174:

/* Line 1810 of yacc.c  */
#line 541 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 181:

/* Line 1810 of yacc.c  */
#line 563 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 182:

/* Line 1810 of yacc.c  */
#line 564 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 183:

/* Line 1810 of yacc.c  */
#line 569 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 184:

/* Line 1810 of yacc.c  */
#line 570 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 185:

/* Line 1810 of yacc.c  */
#line 571 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 186:

/* Line 1810 of yacc.c  */
#line 572 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 187:

/* Line 1810 of yacc.c  */
#line 577 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 188:

/* Line 1810 of yacc.c  */
#line 578 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 189:

/* Line 1810 of yacc.c  */
#line 578 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 190:

/* Line 1810 of yacc.c  */
#line 579 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 191:

/* Line 1810 of yacc.c  */
#line 579 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 197:

/* Line 1810 of yacc.c  */
#line 598 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 198:

/* Line 1810 of yacc.c  */
#line 598 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 200:

/* Line 1810 of yacc.c  */
#line 603 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 201:

/* Line 1810 of yacc.c  */
#line 603 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 202:

/* Line 1810 of yacc.c  */
#line 604 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 203:

/* Line 1810 of yacc.c  */
#line 604 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 205:

/* Line 1810 of yacc.c  */
#line 609 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 206:

/* Line 1810 of yacc.c  */
#line 609 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 218:

/* Line 1810 of yacc.c  */
#line 644 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 219:

/* Line 1810 of yacc.c  */
#line 645 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 220:

/* Line 1810 of yacc.c  */
#line 646 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 221:

/* Line 1810 of yacc.c  */
#line 647 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 222:

/* Line 1810 of yacc.c  */
#line 648 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 223:

/* Line 1810 of yacc.c  */
#line 649 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 224:

/* Line 1810 of yacc.c  */
#line 650 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 225:

/* Line 1810 of yacc.c  */
#line 651 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 226:

/* Line 1810 of yacc.c  */
#line 656 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 227:

/* Line 1810 of yacc.c  */
#line 657 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 228:

/* Line 1810 of yacc.c  */
#line 658 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 229:

/* Line 1810 of yacc.c  */
#line 659 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 230:

/* Line 1810 of yacc.c  */
#line 664 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 231:

/* Line 1810 of yacc.c  */
#line 665 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 232:

/* Line 1810 of yacc.c  */
#line 670 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 233:

/* Line 1810 of yacc.c  */
#line 671 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 234:

/* Line 1810 of yacc.c  */
#line 672 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 235:

/* Line 1810 of yacc.c  */
#line 673 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 236:

/* Line 1810 of yacc.c  */
#line 674 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 237:

/* Line 1810 of yacc.c  */
#line 675 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 238:

/* Line 1810 of yacc.c  */
#line 679 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 239:

/* Line 1810 of yacc.c  */
#line 680 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 240:

/* Line 1810 of yacc.c  */
#line 685 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 241:

/* Line 1810 of yacc.c  */
#line 686 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 242:

/* Line 1810 of yacc.c  */
#line 687 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 243:

/* Line 1810 of yacc.c  */
#line 692 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 244:

/* Line 1810 of yacc.c  */
#line 693 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 245:

/* Line 1810 of yacc.c  */
#line 694 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 246:

/* Line 1810 of yacc.c  */
#line 695 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 249:

/* Line 1810 of yacc.c  */
#line 707 "Zend54/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 253:

/* Line 1810 of yacc.c  */
#line 710 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 254:

/* Line 1810 of yacc.c  */
#line 711 "Zend54/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 256:

/* Line 1810 of yacc.c  */
#line 719 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 257:

/* Line 1810 of yacc.c  */
#line 720 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 266:

/* Line 1810 of yacc.c  */
#line 744 "Zend54/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 267:

/* Line 1810 of yacc.c  */
#line 748 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 268:

/* Line 1810 of yacc.c  */
#line 749 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 269:

/* Line 1810 of yacc.c  */
#line 753 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 270:

/* Line 1810 of yacc.c  */
#line 754 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 271:

/* Line 1810 of yacc.c  */
#line 758 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 272:

/* Line 1810 of yacc.c  */
#line 762 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 273:

/* Line 1810 of yacc.c  */
#line 763 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 274:

/* Line 1810 of yacc.c  */
#line 767 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 275:

/* Line 1810 of yacc.c  */
#line 768 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 276:

/* Line 1810 of yacc.c  */
#line 772 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 277:

/* Line 1810 of yacc.c  */
#line 773 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 278:

/* Line 1810 of yacc.c  */
#line 777 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 279:

/* Line 1810 of yacc.c  */
#line 778 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 280:

/* Line 1810 of yacc.c  */
#line 782 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 281:

/* Line 1810 of yacc.c  */
#line 783 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 282:

/* Line 1810 of yacc.c  */
#line 787 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 283:

/* Line 1810 of yacc.c  */
#line 788 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 284:

/* Line 1810 of yacc.c  */
#line 792 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 285:

/* Line 1810 of yacc.c  */
#line 793 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 286:

/* Line 1810 of yacc.c  */
#line 794 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 287:

/* Line 1810 of yacc.c  */
#line 795 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 288:

/* Line 1810 of yacc.c  */
#line 796 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 289:

/* Line 1810 of yacc.c  */
#line 797 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 290:

/* Line 1810 of yacc.c  */
#line 801 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 291:

/* Line 1810 of yacc.c  */
#line 802 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 292:

/* Line 1810 of yacc.c  */
#line 803 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 293:

/* Line 1810 of yacc.c  */
#line 804 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 294:

/* Line 1810 of yacc.c  */
#line 808 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 295:

/* Line 1810 of yacc.c  */
#line 809 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 296:

/* Line 1810 of yacc.c  */
#line 813 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:

/* Line 1810 of yacc.c  */
#line 814 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 298:

/* Line 1810 of yacc.c  */
#line 819 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 299:

/* Line 1810 of yacc.c  */
#line 820 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 300:

/* Line 1810 of yacc.c  */
#line 824 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 301:

/* Line 1810 of yacc.c  */
#line 824 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 302:

/* Line 1810 of yacc.c  */
#line 825 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:

/* Line 1810 of yacc.c  */
#line 829 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 304:

/* Line 1810 of yacc.c  */
#line 830 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 305:

/* Line 1810 of yacc.c  */
#line 834 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 306:

/* Line 1810 of yacc.c  */
#line 835 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 307:

/* Line 1810 of yacc.c  */
#line 839 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 308:

/* Line 1810 of yacc.c  */
#line 839 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 309:

/* Line 1810 of yacc.c  */
#line 840 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

/* Line 1810 of yacc.c  */
#line 841 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 311:

/* Line 1810 of yacc.c  */
#line 845 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 312:

/* Line 1810 of yacc.c  */
#line 846 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 313:

/* Line 1810 of yacc.c  */
#line 847 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 314:

/* Line 1810 of yacc.c  */
#line 851 "Zend54/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 315:

/* Line 1810 of yacc.c  */
#line 851 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 316:

/* Line 1810 of yacc.c  */
#line 855 "Zend54/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 317:

/* Line 1810 of yacc.c  */
#line 855 "Zend54/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 318:

/* Line 1810 of yacc.c  */
#line 856 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:

/* Line 1810 of yacc.c  */
#line 857 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 320:

/* Line 1810 of yacc.c  */
#line 858 "Zend54/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 321:

/* Line 1810 of yacc.c  */
#line 858 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 322:

/* Line 1810 of yacc.c  */
#line 859 "Zend54/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 323:

/* Line 1810 of yacc.c  */
#line 860 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:

/* Line 1810 of yacc.c  */
#line 861 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 325:

/* Line 1810 of yacc.c  */
#line 862 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:

/* Line 1810 of yacc.c  */
#line 863 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:

/* Line 1810 of yacc.c  */
#line 864 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:

/* Line 1810 of yacc.c  */
#line 865 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:

/* Line 1810 of yacc.c  */
#line 866 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:

/* Line 1810 of yacc.c  */
#line 867 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:

/* Line 1810 of yacc.c  */
#line 868 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:

/* Line 1810 of yacc.c  */
#line 869 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:

/* Line 1810 of yacc.c  */
#line 870 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:

/* Line 1810 of yacc.c  */
#line 871 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 335:

/* Line 1810 of yacc.c  */
#line 872 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 336:

/* Line 1810 of yacc.c  */
#line 873 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 337:

/* Line 1810 of yacc.c  */
#line 874 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 338:

/* Line 1810 of yacc.c  */
#line 875 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 339:

/* Line 1810 of yacc.c  */
#line 875 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 340:

/* Line 1810 of yacc.c  */
#line 876 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 341:

/* Line 1810 of yacc.c  */
#line 876 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 342:

/* Line 1810 of yacc.c  */
#line 877 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 343:

/* Line 1810 of yacc.c  */
#line 877 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 344:

/* Line 1810 of yacc.c  */
#line 878 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 345:

/* Line 1810 of yacc.c  */
#line 878 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 346:

/* Line 1810 of yacc.c  */
#line 879 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 347:

/* Line 1810 of yacc.c  */
#line 882 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 348:

/* Line 1810 of yacc.c  */
#line 883 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 349:

/* Line 1810 of yacc.c  */
#line 884 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 350:

/* Line 1810 of yacc.c  */
#line 885 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 351:

/* Line 1810 of yacc.c  */
#line 886 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:

/* Line 1810 of yacc.c  */
#line 887 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 353:

/* Line 1810 of yacc.c  */
#line 888 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 354:

/* Line 1810 of yacc.c  */
#line 889 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:

/* Line 1810 of yacc.c  */
#line 890 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:

/* Line 1810 of yacc.c  */
#line 891 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:

/* Line 1810 of yacc.c  */
#line 892 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 358:

/* Line 1810 of yacc.c  */
#line 893 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 359:

/* Line 1810 of yacc.c  */
#line 894 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 360:

/* Line 1810 of yacc.c  */
#line 895 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 361:

/* Line 1810 of yacc.c  */
#line 896 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 362:

/* Line 1810 of yacc.c  */
#line 897 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:

/* Line 1810 of yacc.c  */
#line 898 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 364:

/* Line 1810 of yacc.c  */
#line 899 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 365:

/* Line 1810 of yacc.c  */
#line 900 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:

/* Line 1810 of yacc.c  */
#line 901 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 367:

/* Line 1810 of yacc.c  */
#line 902 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 368:

/* Line 1810 of yacc.c  */
#line 903 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 369:

/* Line 1810 of yacc.c  */
#line 904 "Zend54/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 370:

/* Line 1810 of yacc.c  */
#line 905 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 371:

/* Line 1810 of yacc.c  */
#line 906 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 372:

/* Line 1810 of yacc.c  */
#line 907 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 373:

/* Line 1810 of yacc.c  */
#line 907 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 374:

/* Line 1810 of yacc.c  */
#line 908 "Zend54/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 375:

/* Line 1810 of yacc.c  */
#line 909 "Zend54/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 376:

/* Line 1810 of yacc.c  */
#line 910 "Zend54/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 377:

/* Line 1810 of yacc.c  */
#line 911 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 378:

/* Line 1810 of yacc.c  */
#line 912 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 379:

/* Line 1810 of yacc.c  */
#line 913 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:

/* Line 1810 of yacc.c  */
#line 914 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 381:

/* Line 1810 of yacc.c  */
#line 915 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 382:

/* Line 1810 of yacc.c  */
#line 916 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 383:

/* Line 1810 of yacc.c  */
#line 917 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 384:

/* Line 1810 of yacc.c  */
#line 918 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 385:

/* Line 1810 of yacc.c  */
#line 919 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 386:

/* Line 1810 of yacc.c  */
#line 920 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 387:

/* Line 1810 of yacc.c  */
#line 921 "Zend54/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:

/* Line 1810 of yacc.c  */
#line 922 "Zend54/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 389:

/* Line 1810 of yacc.c  */
#line 922 "Zend54/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 390:

/* Line 1810 of yacc.c  */
#line 923 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 391:

/* Line 1810 of yacc.c  */
#line 924 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 392:

/* Line 1810 of yacc.c  */
#line 925 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 393:

/* Line 1810 of yacc.c  */
#line 926 "Zend54/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 394:

/* Line 1810 of yacc.c  */
#line 927 "Zend54/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 395:

/* Line 1810 of yacc.c  */
#line 928 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 396:

/* Line 1810 of yacc.c  */
#line 929 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 397:

/* Line 1810 of yacc.c  */
#line 930 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 398:

/* Line 1810 of yacc.c  */
#line 931 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 399:

/* Line 1810 of yacc.c  */
#line 935 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 402:

/* Line 1810 of yacc.c  */
#line 944 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 403:

/* Line 1810 of yacc.c  */
#line 945 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 404:

/* Line 1810 of yacc.c  */
#line 946 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 405:

/* Line 1810 of yacc.c  */
#line 947 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 406:

/* Line 1810 of yacc.c  */
#line 951 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 407:

/* Line 1810 of yacc.c  */
#line 953 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 408:

/* Line 1810 of yacc.c  */
#line 954 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 409:

/* Line 1810 of yacc.c  */
#line 956 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 410:

/* Line 1810 of yacc.c  */
#line 957 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 411:

/* Line 1810 of yacc.c  */
#line 959 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 412:

/* Line 1810 of yacc.c  */
#line 960 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 413:

/* Line 1810 of yacc.c  */
#line 962 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 414:

/* Line 1810 of yacc.c  */
#line 963 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 415:

/* Line 1810 of yacc.c  */
#line 965 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 416:

/* Line 1810 of yacc.c  */
#line 966 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 417:

/* Line 1810 of yacc.c  */
#line 968 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 418:

/* Line 1810 of yacc.c  */
#line 969 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 419:

/* Line 1810 of yacc.c  */
#line 971 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 420:

/* Line 1810 of yacc.c  */
#line 972 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 421:

/* Line 1810 of yacc.c  */
#line 974 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 422:

/* Line 1810 of yacc.c  */
#line 978 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 423:

/* Line 1810 of yacc.c  */
#line 979 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 424:

/* Line 1810 of yacc.c  */
#line 980 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 425:

/* Line 1810 of yacc.c  */
#line 981 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 426:

/* Line 1810 of yacc.c  */
#line 985 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:

/* Line 1810 of yacc.c  */
#line 986 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 428:

/* Line 1810 of yacc.c  */
#line 987 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 429:

/* Line 1810 of yacc.c  */
#line 993 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 430:

/* Line 1810 of yacc.c  */
#line 994 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 431:

/* Line 1810 of yacc.c  */
#line 999 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 432:

/* Line 1810 of yacc.c  */
#line 1000 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 433:

/* Line 1810 of yacc.c  */
#line 1001 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 434:

/* Line 1810 of yacc.c  */
#line 1002 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 437:

/* Line 1810 of yacc.c  */
#line 1013 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 438:

/* Line 1810 of yacc.c  */
#line 1017 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 439:

/* Line 1810 of yacc.c  */
#line 1018 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 440:

/* Line 1810 of yacc.c  */
#line 1019 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 441:

/* Line 1810 of yacc.c  */
#line 1023 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 442:

/* Line 1810 of yacc.c  */
#line 1024 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 443:

/* Line 1810 of yacc.c  */
#line 1025 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 444:

/* Line 1810 of yacc.c  */
#line 1030 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 445:

/* Line 1810 of yacc.c  */
#line 1031 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 446:

/* Line 1810 of yacc.c  */
#line 1036 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:

/* Line 1810 of yacc.c  */
#line 1037 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 448:

/* Line 1810 of yacc.c  */
#line 1038 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:

/* Line 1810 of yacc.c  */
#line 1039 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:

/* Line 1810 of yacc.c  */
#line 1040 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:

/* Line 1810 of yacc.c  */
#line 1041 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 452:

/* Line 1810 of yacc.c  */
#line 1042 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:

/* Line 1810 of yacc.c  */
#line 1043 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 454:

/* Line 1810 of yacc.c  */
#line 1044 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 455:

/* Line 1810 of yacc.c  */
#line 1045 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 456:

/* Line 1810 of yacc.c  */
#line 1046 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 457:

/* Line 1810 of yacc.c  */
#line 1047 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 458:

/* Line 1810 of yacc.c  */
#line 1052 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 459:

/* Line 1810 of yacc.c  */
#line 1053 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 460:

/* Line 1810 of yacc.c  */
#line 1054 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 461:

/* Line 1810 of yacc.c  */
#line 1055 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 462:

/* Line 1810 of yacc.c  */
#line 1056 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 463:

/* Line 1810 of yacc.c  */
#line 1057 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 464:

/* Line 1810 of yacc.c  */
#line 1058 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 465:

/* Line 1810 of yacc.c  */
#line 1059 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 466:

/* Line 1810 of yacc.c  */
#line 1060 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 467:

/* Line 1810 of yacc.c  */
#line 1061 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 468:

/* Line 1810 of yacc.c  */
#line 1065 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 469:

/* Line 1810 of yacc.c  */
#line 1069 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 470:

/* Line 1810 of yacc.c  */
#line 1070 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:

/* Line 1810 of yacc.c  */
#line 1071 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 472:

/* Line 1810 of yacc.c  */
#line 1072 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 473:

/* Line 1810 of yacc.c  */
#line 1073 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 474:

/* Line 1810 of yacc.c  */
#line 1074 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:

/* Line 1810 of yacc.c  */
#line 1075 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 476:

/* Line 1810 of yacc.c  */
#line 1076 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 477:

/* Line 1810 of yacc.c  */
#line 1077 "Zend54/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 478:

/* Line 1810 of yacc.c  */
#line 1082 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 479:

/* Line 1810 of yacc.c  */
#line 1083 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 482:

/* Line 1810 of yacc.c  */
#line 1092 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 483:

/* Line 1810 of yacc.c  */
#line 1093 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 484:

/* Line 1810 of yacc.c  */
#line 1094 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 485:

/* Line 1810 of yacc.c  */
#line 1095 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 486:

/* Line 1810 of yacc.c  */
#line 1099 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:

/* Line 1810 of yacc.c  */
#line 1100 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:

/* Line 1810 of yacc.c  */
#line 1105 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:

/* Line 1810 of yacc.c  */
#line 1110 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 490:

/* Line 1810 of yacc.c  */
#line 1115 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 491:

/* Line 1810 of yacc.c  */
#line 1120 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 492:

/* Line 1810 of yacc.c  */
#line 1121 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 493:

/* Line 1810 of yacc.c  */
#line 1122 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 494:

/* Line 1810 of yacc.c  */
#line 1123 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 495:

/* Line 1810 of yacc.c  */
#line 1127 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 496:

/* Line 1810 of yacc.c  */
#line 1128 "Zend54/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 497:

/* Line 1810 of yacc.c  */
#line 1133 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 498:

/* Line 1810 of yacc.c  */
#line 1133 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 499:

/* Line 1810 of yacc.c  */
#line 1137 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 500:

/* Line 1810 of yacc.c  */
#line 1138 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 501:

/* Line 1810 of yacc.c  */
#line 1142 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 502:

/* Line 1810 of yacc.c  */
#line 1144 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 503:

/* Line 1810 of yacc.c  */
#line 1148 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 504:

/* Line 1810 of yacc.c  */
#line 1149 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 505:

/* Line 1810 of yacc.c  */
#line 1150 "Zend54/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 506:

/* Line 1810 of yacc.c  */
#line 1154 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 507:

/* Line 1810 of yacc.c  */
#line 1155 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 508:

/* Line 1810 of yacc.c  */
#line 1159 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 509:

/* Line 1810 of yacc.c  */
#line 1160 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 510:

/* Line 1810 of yacc.c  */
#line 1165 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 511:

/* Line 1810 of yacc.c  */
#line 1169 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 512:

/* Line 1810 of yacc.c  */
#line 1170 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 513:

/* Line 1810 of yacc.c  */
#line 1171 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 514:

/* Line 1810 of yacc.c  */
#line 1175 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 515:

/* Line 1810 of yacc.c  */
#line 1176 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 516:

/* Line 1810 of yacc.c  */
#line 1177 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 517:

/* Line 1810 of yacc.c  */
#line 1182 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 518:

/* Line 1810 of yacc.c  */
#line 1183 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 519:

/* Line 1810 of yacc.c  */
#line 1184 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 520:

/* Line 1810 of yacc.c  */
#line 1188 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 521:

/* Line 1810 of yacc.c  */
#line 1189 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 522:

/* Line 1810 of yacc.c  */
#line 1193 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 523:

/* Line 1810 of yacc.c  */
#line 1194 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 524:

/* Line 1810 of yacc.c  */
#line 1195 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 525:

/* Line 1810 of yacc.c  */
#line 1200 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 526:

/* Line 1810 of yacc.c  */
#line 1201 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 527:

/* Line 1810 of yacc.c  */
#line 1205 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 528:

/* Line 1810 of yacc.c  */
#line 1206 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 529:

/* Line 1810 of yacc.c  */
#line 1211 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 530:

/* Line 1810 of yacc.c  */
#line 1212 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 531:

/* Line 1810 of yacc.c  */
#line 1212 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 532:

/* Line 1810 of yacc.c  */
#line 1216 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 533:

/* Line 1810 of yacc.c  */
#line 1217 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 534:

/* Line 1810 of yacc.c  */
#line 1218 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 535:

/* Line 1810 of yacc.c  */
#line 1222 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 536:

/* Line 1810 of yacc.c  */
#line 1223 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 537:

/* Line 1810 of yacc.c  */
#line 1227 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 538:

/* Line 1810 of yacc.c  */
#line 1228 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 541:

/* Line 1810 of yacc.c  */
#line 1238 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 542:

/* Line 1810 of yacc.c  */
#line 1239 "Zend54/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 543:

/* Line 1810 of yacc.c  */
#line 1239 "Zend54/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 544:

/* Line 1810 of yacc.c  */
#line 1240 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 545:

/* Line 1810 of yacc.c  */
#line 1245 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 546:

/* Line 1810 of yacc.c  */
#line 1246 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 547:

/* Line 1810 of yacc.c  */
#line 1250 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 548:

/* Line 1810 of yacc.c  */
#line 1251 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 549:

/* Line 1810 of yacc.c  */
#line 1252 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 550:

/* Line 1810 of yacc.c  */
#line 1253 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 551:

/* Line 1810 of yacc.c  */
#line 1254 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 552:

/* Line 1810 of yacc.c  */
#line 1255 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 553:

/* Line 1810 of yacc.c  */
#line 1256 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 554:

/* Line 1810 of yacc.c  */
#line 1257 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 555:

/* Line 1810 of yacc.c  */
#line 1261 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 556:

/* Line 1810 of yacc.c  */
#line 1262 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 557:

/* Line 1810 of yacc.c  */
#line 1263 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 558:

/* Line 1810 of yacc.c  */
#line 1264 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 559:

/* Line 1810 of yacc.c  */
#line 1270 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 560:

/* Line 1810 of yacc.c  */
#line 1271 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 561:

/* Line 1810 of yacc.c  */
#line 1271 "Zend54/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 562:

/* Line 1810 of yacc.c  */
#line 1272 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 563:

/* Line 1810 of yacc.c  */
#line 1273 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 564:

/* Line 1810 of yacc.c  */
#line 1274 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 565:

/* Line 1810 of yacc.c  */
#line 1275 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 566:

/* Line 1810 of yacc.c  */
#line 1280 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 567:

/* Line 1810 of yacc.c  */
#line 1281 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 568:

/* Line 1810 of yacc.c  */
#line 1282 "Zend54/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 569:

/* Line 1810 of yacc.c  */
#line 1287 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 570:

/* Line 1810 of yacc.c  */
#line 1288 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 571:

/* Line 1810 of yacc.c  */
#line 1289 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 572:

/* Line 1810 of yacc.c  */
#line 1290 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 573:

/* Line 1810 of yacc.c  */
#line 1291 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 574:

/* Line 1810 of yacc.c  */
#line 1292 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 575:

/* Line 1810 of yacc.c  */
#line 1293 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 576:

/* Line 1810 of yacc.c  */
#line 1297 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 577:

/* Line 1810 of yacc.c  */
#line 1298 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 578:

/* Line 1810 of yacc.c  */
#line 1298 "Zend54/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 579:

/* Line 1810 of yacc.c  */
#line 1302 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 580:

/* Line 1810 of yacc.c  */
#line 1303 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;



/* Line 1810 of yacc.c  */
#line 7592 "Zend54/zend_language_parser.c"
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
#line 1306 "Zend54/zend_language_parser.y"


/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

