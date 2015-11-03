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
#line 1 "Zend56/zend_language_parser.y"

/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2014 Zend Technologies Ltd. (http://www.zend.com) |
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

#if ((PHP_MAJOR_VERSION == 5) && (PHP_MINOR_VERSION < 4))
#define OPLINE_NUM(var) var.u.opline_num
#else
#define OPLINE_NUM(var) var.u.op.opline_num
#endif


/* Line 371 of yacc.c  */
#line 127 "Zend56/zend_language_parser.c"

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
#ifndef YY_ZEND_ZEND56_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND56_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 56 "Zend56/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 167 "Zend56/zend_language_parser.c"

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
     T_YIELD = 267,
     T_POW_EQUAL = 268,
     T_SR_EQUAL = 269,
     T_SL_EQUAL = 270,
     T_XOR_EQUAL = 271,
     T_OR_EQUAL = 272,
     T_AND_EQUAL = 273,
     T_MOD_EQUAL = 274,
     T_CONCAT_EQUAL = 275,
     T_DIV_EQUAL = 276,
     T_MUL_EQUAL = 277,
     T_MINUS_EQUAL = 278,
     T_PLUS_EQUAL = 279,
     T_BOOLEAN_OR = 280,
     T_BOOLEAN_AND = 281,
     T_IS_NOT_IDENTICAL = 282,
     T_IS_IDENTICAL = 283,
     T_IS_NOT_EQUAL = 284,
     T_IS_EQUAL = 285,
     T_IS_GREATER_OR_EQUAL = 286,
     T_IS_SMALLER_OR_EQUAL = 287,
     T_SR = 288,
     T_SL = 289,
     T_INSTANCEOF = 290,
     T_UNSET_CAST = 291,
     T_BOOL_CAST = 292,
     T_OBJECT_CAST = 293,
     T_ARRAY_CAST = 294,
     T_STRING_CAST = 295,
     T_DOUBLE_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_POW = 300,
     T_CLONE = 301,
     T_NEW = 302,
     T_EXIT = 303,
     T_IF = 304,
     T_ELSEIF = 305,
     T_ELSE = 306,
     T_ENDIF = 307,
     T_LNUMBER = 308,
     T_DNUMBER = 309,
     T_STRING = 310,
     T_STRING_VARNAME = 311,
     T_VARIABLE = 312,
     T_NUM_STRING = 313,
     T_INLINE_HTML = 314,
     T_CHARACTER = 315,
     T_BAD_CHARACTER = 316,
     T_ENCAPSED_AND_WHITESPACE = 317,
     T_CONSTANT_ENCAPSED_STRING = 318,
     T_ECHO = 319,
     T_DO = 320,
     T_WHILE = 321,
     T_ENDWHILE = 322,
     T_FOR = 323,
     T_ENDFOR = 324,
     T_FOREACH = 325,
     T_ENDFOREACH = 326,
     T_DECLARE = 327,
     T_ENDDECLARE = 328,
     T_AS = 329,
     T_SWITCH = 330,
     T_ENDSWITCH = 331,
     T_CASE = 332,
     T_DEFAULT = 333,
     T_BREAK = 334,
     T_CONTINUE = 335,
     T_GOTO = 336,
     T_FUNCTION = 337,
     T_CONST = 338,
     T_RETURN = 339,
     T_TRY = 340,
     T_CATCH = 341,
     T_FINALLY = 342,
     T_THROW = 343,
     T_USE = 344,
     T_INSTEADOF = 345,
     T_GLOBAL = 346,
     T_PUBLIC = 347,
     T_PROTECTED = 348,
     T_PRIVATE = 349,
     T_FINAL = 350,
     T_ABSTRACT = 351,
     T_STATIC = 352,
     T_VAR = 353,
     T_UNSET = 354,
     T_ISSET = 355,
     T_EMPTY = 356,
     T_HALT_COMPILER = 357,
     T_CLASS = 358,
     T_TRAIT = 359,
     T_INTERFACE = 360,
     T_EXTENDS = 361,
     T_IMPLEMENTS = 362,
     T_OBJECT_OPERATOR = 363,
     T_DOUBLE_ARROW = 364,
     T_LIST = 365,
     T_ARRAY = 366,
     T_CALLABLE = 367,
     T_CLASS_C = 368,
     T_TRAIT_C = 369,
     T_METHOD_C = 370,
     T_FUNC_C = 371,
     T_LINE = 372,
     T_FILE = 373,
     T_COMMENT = 374,
     T_DOC_COMMENT = 375,
     T_OPEN_TAG = 376,
     T_OPEN_TAG_WITH_ECHO = 377,
     T_CLOSE_TAG = 378,
     T_WHITESPACE = 379,
     T_START_HEREDOC = 380,
     T_END_HEREDOC = 381,
     T_DOLLAR_OPEN_CURLY_BRACES = 382,
     T_CURLY_OPEN = 383,
     T_PAAMAYIM_NEKUDOTAYIM = 384,
     T_NAMESPACE = 385,
     T_NS_C = 386,
     T_DIR = 387,
     T_NS_SEPARATOR = 388,
     T_START_TPL = 389,
     T_START_TPL_WITH_ECHO = 390,
     T_START_TPL_WITH_SCRIPT = 391,
     T_END_TPL = 392,
     T_ATTR_FILE = 393,
     T_IN = 394,
     T_START_TPL_TRANSLATE = 395,
     T_TPL_INCLUDE = 396,
     T_ELLIPSIS = 397
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
#define T_YIELD 267
#define T_POW_EQUAL 268
#define T_SR_EQUAL 269
#define T_SL_EQUAL 270
#define T_XOR_EQUAL 271
#define T_OR_EQUAL 272
#define T_AND_EQUAL 273
#define T_MOD_EQUAL 274
#define T_CONCAT_EQUAL 275
#define T_DIV_EQUAL 276
#define T_MUL_EQUAL 277
#define T_MINUS_EQUAL 278
#define T_PLUS_EQUAL 279
#define T_BOOLEAN_OR 280
#define T_BOOLEAN_AND 281
#define T_IS_NOT_IDENTICAL 282
#define T_IS_IDENTICAL 283
#define T_IS_NOT_EQUAL 284
#define T_IS_EQUAL 285
#define T_IS_GREATER_OR_EQUAL 286
#define T_IS_SMALLER_OR_EQUAL 287
#define T_SR 288
#define T_SL 289
#define T_INSTANCEOF 290
#define T_UNSET_CAST 291
#define T_BOOL_CAST 292
#define T_OBJECT_CAST 293
#define T_ARRAY_CAST 294
#define T_STRING_CAST 295
#define T_DOUBLE_CAST 296
#define T_INT_CAST 297
#define T_DEC 298
#define T_INC 299
#define T_POW 300
#define T_CLONE 301
#define T_NEW 302
#define T_EXIT 303
#define T_IF 304
#define T_ELSEIF 305
#define T_ELSE 306
#define T_ENDIF 307
#define T_LNUMBER 308
#define T_DNUMBER 309
#define T_STRING 310
#define T_STRING_VARNAME 311
#define T_VARIABLE 312
#define T_NUM_STRING 313
#define T_INLINE_HTML 314
#define T_CHARACTER 315
#define T_BAD_CHARACTER 316
#define T_ENCAPSED_AND_WHITESPACE 317
#define T_CONSTANT_ENCAPSED_STRING 318
#define T_ECHO 319
#define T_DO 320
#define T_WHILE 321
#define T_ENDWHILE 322
#define T_FOR 323
#define T_ENDFOR 324
#define T_FOREACH 325
#define T_ENDFOREACH 326
#define T_DECLARE 327
#define T_ENDDECLARE 328
#define T_AS 329
#define T_SWITCH 330
#define T_ENDSWITCH 331
#define T_CASE 332
#define T_DEFAULT 333
#define T_BREAK 334
#define T_CONTINUE 335
#define T_GOTO 336
#define T_FUNCTION 337
#define T_CONST 338
#define T_RETURN 339
#define T_TRY 340
#define T_CATCH 341
#define T_FINALLY 342
#define T_THROW 343
#define T_USE 344
#define T_INSTEADOF 345
#define T_GLOBAL 346
#define T_PUBLIC 347
#define T_PROTECTED 348
#define T_PRIVATE 349
#define T_FINAL 350
#define T_ABSTRACT 351
#define T_STATIC 352
#define T_VAR 353
#define T_UNSET 354
#define T_ISSET 355
#define T_EMPTY 356
#define T_HALT_COMPILER 357
#define T_CLASS 358
#define T_TRAIT 359
#define T_INTERFACE 360
#define T_EXTENDS 361
#define T_IMPLEMENTS 362
#define T_OBJECT_OPERATOR 363
#define T_DOUBLE_ARROW 364
#define T_LIST 365
#define T_ARRAY 366
#define T_CALLABLE 367
#define T_CLASS_C 368
#define T_TRAIT_C 369
#define T_METHOD_C 370
#define T_FUNC_C 371
#define T_LINE 372
#define T_FILE 373
#define T_COMMENT 374
#define T_DOC_COMMENT 375
#define T_OPEN_TAG 376
#define T_OPEN_TAG_WITH_ECHO 377
#define T_CLOSE_TAG 378
#define T_WHITESPACE 379
#define T_START_HEREDOC 380
#define T_END_HEREDOC 381
#define T_DOLLAR_OPEN_CURLY_BRACES 382
#define T_CURLY_OPEN 383
#define T_PAAMAYIM_NEKUDOTAYIM 384
#define T_NAMESPACE 385
#define T_NS_C 386
#define T_DIR 387
#define T_NS_SEPARATOR 388
#define T_START_TPL 389
#define T_START_TPL_WITH_ECHO 390
#define T_START_TPL_WITH_SCRIPT 391
#define T_END_TPL 392
#define T_ATTR_FILE 393
#define T_IN 394
#define T_START_TPL_TRANSLATE 395
#define T_TPL_INCLUDE 396
#define T_ELLIPSIS 397



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

#endif /* !YY_ZEND_ZEND56_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 490 "Zend56/zend_language_parser.c"

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
#define YYLAST   7474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  261
/* YYNRULES -- Number of rules.  */
#define YYNRULES  659
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1263

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   397

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,   170,     2,   167,    49,    33,     2,
     162,   163,    47,    44,     8,    45,    46,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,   164,
      38,    14,    39,    27,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   168,    32,     2,   169,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   165,    31,   166,    52,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      29,    30,    34,    35,    36,    37,    40,    41,    42,    43,
      51,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    56,
      61,    64,    66,    70,    72,    74,    78,    81,    86,    90,
      92,    94,    98,   101,   106,   110,   112,   114,   118,   121,
     126,   132,   137,   138,   142,   143,   145,   147,   149,   151,
     156,   158,   161,   165,   166,   167,   175,   176,   177,   188,
     189,   190,   196,   197,   198,   206,   207,   208,   209,   222,
     223,   228,   231,   235,   238,   242,   245,   249,   253,   256,
     260,   264,   268,   270,   273,   279,   280,   281,   292,   293,
     294,   305,   306,   313,   315,   316,   317,   326,   330,   334,
     337,   340,   341,   343,   346,   347,   353,   354,   360,   361,
     362,   367,   369,   371,   373,   375,   380,   381,   386,   387,
     393,   395,   398,   400,   402,   404,   408,   412,   417,   421,
     425,   431,   435,   440,   441,   442,   443,   462,   463,   464,
     480,   481,   482,   494,   495,   496,   497,   516,   517,   518,
     536,   537,   538,   554,   555,   556,   557,   558,   559,   573,
     574,   575,   581,   583,   584,   586,   589,   590,   591,   602,
     604,   608,   610,   612,   614,   615,   617,   618,   620,   621,
     632,   633,   642,   643,   651,   653,   656,   658,   661,   662,
     665,   667,   668,   671,   672,   675,   677,   681,   682,   685,
     687,   690,   692,   697,   699,   704,   706,   711,   715,   721,
     725,   730,   735,   741,   742,   743,   750,   751,   757,   759,
     761,   763,   768,   769,   770,   776,   777,   778,   786,   787,
     796,   797,   798,   805,   806,   809,   810,   815,   819,   820,
     824,   825,   830,   832,   833,   835,   839,   844,   851,   852,
     854,   856,   858,   861,   865,   869,   871,   875,   877,   879,
     882,   885,   889,   891,   893,   896,   901,   905,   911,   913,
     917,   920,   921,   922,   927,   930,   932,   933,   943,   947,
     949,   953,   955,   959,   960,   962,   964,   967,   970,   973,
     977,   979,   983,   985,   987,   991,   996,  1000,  1001,  1003,
    1005,  1009,  1011,  1013,  1014,  1016,  1018,  1021,  1023,  1025,
    1027,  1029,  1031,  1033,  1037,  1043,  1045,  1049,  1055,  1060,
    1064,  1066,  1067,  1069,  1070,  1075,  1077,  1080,  1082,  1087,
    1091,  1092,  1096,  1098,  1100,  1101,  1102,  1105,  1106,  1111,
    1112,  1120,  1124,  1129,  1130,  1138,  1141,  1145,  1149,  1153,
    1157,  1161,  1165,  1169,  1173,  1177,  1181,  1185,  1189,  1192,
    1195,  1198,  1201,  1202,  1207,  1208,  1213,  1214,  1219,  1220,
    1225,  1229,  1233,  1237,  1241,  1245,  1249,  1253,  1257,  1261,
    1265,  1269,  1273,  1276,  1279,  1282,  1285,  1289,  1293,  1297,
    1301,  1305,  1309,  1313,  1317,  1321,  1323,  1325,  1326,  1332,
    1333,  1334,  1342,  1343,  1349,  1351,  1354,  1357,  1360,  1363,
    1366,  1369,  1372,  1375,  1376,  1380,  1382,  1384,  1386,  1390,
    1393,  1395,  1396,  1407,  1408,  1420,  1423,  1426,  1431,  1436,
    1441,  1446,  1451,  1456,  1461,  1465,  1467,  1468,  1473,  1477,
    1482,  1484,  1487,  1488,  1492,  1493,  1499,  1500,  1505,  1506,
    1512,  1513,  1519,  1520,  1526,  1527,  1533,  1534,  1538,  1540,
    1542,  1546,  1549,  1551,  1555,  1558,  1560,  1562,  1563,  1564,
    1571,  1573,  1576,  1577,  1580,  1581,  1584,  1586,  1587,  1589,
    1591,  1592,  1594,  1596,  1598,  1600,  1602,  1604,  1606,  1608,
    1610,  1612,  1614,  1618,  1621,  1625,  1627,  1629,  1631,  1633,
    1637,  1640,  1645,  1649,  1651,  1653,  1655,  1660,  1664,  1668,
    1672,  1676,  1680,  1684,  1687,  1690,  1694,  1698,  1702,  1706,
    1710,  1714,  1718,  1722,  1726,  1730,  1734,  1738,  1742,  1746,
    1750,  1754,  1758,  1762,  1766,  1771,  1777,  1780,  1783,  1787,
    1789,  1791,  1795,  1798,  1800,  1802,  1804,  1806,  1810,  1814,
    1816,  1817,  1820,  1821,  1823,  1829,  1833,  1837,  1839,  1841,
    1843,  1847,  1851,  1853,  1855,  1857,  1858,  1859,  1867,  1869,
    1872,  1873,  1874,  1879,  1884,  1889,  1890,  1893,  1895,  1897,
    1898,  1900,  1903,  1907,  1911,  1913,  1918,  1919,  1925,  1927,
    1929,  1931,  1933,  1936,  1938,  1940,  1943,  1948,  1953,  1955,
    1957,  1962,  1963,  1965,  1967,  1968,  1971,  1976,  1981,  1983,
    1985,  1989,  1991,  1994,  1998,  2000,  2002,  2003,  2009,  2010,
    2011,  2014,  2020,  2024,  2028,  2030,  2037,  2042,  2047,  2050,
    2053,  2056,  2058,  2061,  2063,  2064,  2070,  2074,  2078,  2085,
    2089,  2091,  2093,  2095,  2100,  2105,  2110,  2113,  2116,  2121,
    2124,  2127,  2129,  2130,  2135,  2137,  2139,  2143,  2147,  2151
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     172,     0,    -1,   173,    -1,    -1,   173,   174,   176,    -1,
      -1,    74,    -1,   175,   152,    74,    -1,   189,    -1,   251,
      -1,   252,    -1,   121,   162,   163,   164,    -1,   149,   175,
     164,    -1,    -1,   149,   175,   165,   177,   173,   166,    -1,
      -1,   149,   165,   178,   173,   166,    -1,   108,   179,   164,
      -1,   108,   101,   181,   164,    -1,   108,   102,   183,   164,
      -1,   185,   164,    -1,   222,    -1,   179,     8,   180,    -1,
     180,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   181,     8,   182,    -1,
     182,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   183,     8,   184,    -1,
     184,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   185,     8,    74,    14,
     377,    -1,   102,    74,    14,   377,    -1,    -1,   186,   187,
     188,    -1,    -1,   189,    -1,   222,    -1,   251,    -1,   252,
      -1,   121,   162,   163,   164,    -1,   190,    -1,    74,    28,
      -1,   165,   186,   166,    -1,    -1,    -1,    68,   386,   191,
     189,   192,   278,   285,    -1,    -1,    -1,    68,   386,    28,
     193,   186,   194,   283,   288,    71,   164,    -1,    -1,    -1,
      85,   195,   386,   196,   277,    -1,    -1,    -1,    84,   197,
     189,    85,   198,   386,   164,    -1,    -1,    -1,    -1,    87,
     162,   324,   164,   199,   324,   164,   200,   324,   163,   201,
     268,    -1,    -1,    94,   386,   202,   272,    -1,    98,   164,
      -1,    98,   385,   164,    -1,    99,   164,    -1,    99,   385,
     164,    -1,   103,   164,    -1,   103,   335,   164,    -1,   103,
     390,   164,    -1,   349,   164,    -1,   110,   297,   164,    -1,
     116,   299,   164,    -1,    83,   323,   164,    -1,    78,    -1,
     385,   164,    -1,   118,   162,   249,   163,   164,    -1,    -1,
      -1,    89,   162,   390,    93,   203,   267,   266,   163,   204,
     269,    -1,    -1,    -1,    89,   162,   335,    93,   205,   267,
     266,   163,   206,   269,    -1,    -1,    91,   207,   162,   271,
     163,   270,    -1,   164,    -1,    -1,    -1,   104,   208,   165,
     186,   166,   237,   209,   242,    -1,   107,   385,   164,    -1,
     100,    74,   164,    -1,   210,   222,    -1,   210,    78,    -1,
      -1,   387,    -1,   387,   164,    -1,    -1,    82,    31,    74,
     212,   214,    -1,    -1,   211,    31,    74,   213,   214,    -1,
      -1,    -1,   214,    28,   215,   385,    -1,    74,    -1,    82,
      -1,   407,    -1,   375,    -1,   130,   162,   419,   163,    -1,
      -1,   216,    14,   219,   385,    -1,    -1,   218,   216,    14,
     220,   385,    -1,   217,    -1,   218,   217,    -1,    82,    -1,
      81,    -1,   421,    -1,   153,   211,   156,    -1,   153,   335,
     156,    -1,   153,   335,   164,   156,    -1,   155,   186,   156,
      -1,   160,   385,   156,    -1,   160,   157,    14,   385,   156,
      -1,   159,   221,   156,    -1,   153,    74,   218,   156,    -1,
      -1,    -1,    -1,   153,    89,   162,   385,    93,   223,   267,
     266,   163,   156,   224,   210,   153,   225,   289,    48,    89,
     156,    -1,    -1,    -1,   153,    89,   385,    93,   267,   266,
     156,   226,   210,   153,   227,   289,    48,    89,   156,    -1,
      -1,    -1,   153,    68,   385,   156,   228,   210,   153,   229,
     280,   286,   287,    -1,    -1,    -1,    -1,   153,    87,   162,
     324,   164,   230,   324,   164,   231,   324,   163,   156,   232,
     210,   153,    48,    87,   156,    -1,    -1,    -1,   153,    87,
     162,   267,   266,   158,   385,   163,   156,   233,   210,   153,
     234,   289,    48,    87,   156,    -1,    -1,    -1,   153,    87,
     267,   266,   158,   385,   156,   235,   210,   153,   236,   289,
      48,    87,   156,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     162,   238,   365,   239,    76,   163,   240,   165,   186,   166,
     241,   244,    -1,    -1,    -1,   106,   243,   165,   186,   166,
      -1,   245,    -1,    -1,   246,    -1,   245,   246,    -1,    -1,
      -1,   105,   162,   365,   247,    76,   163,   248,   165,   186,
     166,    -1,   250,    -1,   249,     8,   250,    -1,   390,    -1,
     255,    -1,   257,    -1,    -1,    33,    -1,    -1,   161,    -1,
      -1,   352,   253,    74,   256,   162,   290,   163,   165,   186,
     166,    -1,    -1,   260,    74,   261,   258,   264,   165,   300,
     166,    -1,    -1,   262,    74,   259,   263,   165,   300,   166,
      -1,   122,    -1,   115,   122,    -1,   123,    -1,   114,   122,
      -1,    -1,   125,   365,    -1,   124,    -1,    -1,   125,   265,
      -1,    -1,   126,   265,    -1,   365,    -1,   265,     8,   365,
      -1,    -1,   128,   267,    -1,   390,    -1,    33,   390,    -1,
     189,    -1,    28,   186,    88,   164,    -1,   189,    -1,    28,
     186,    90,   164,    -1,   189,    -1,    28,   186,    92,   164,
      -1,    74,    14,   377,    -1,   271,     8,    74,    14,   377,
      -1,   165,   273,   166,    -1,   165,   164,   273,   166,    -1,
      28,   273,    95,   164,    -1,    28,   164,   273,    95,   164,
      -1,    -1,    -1,   273,    96,   385,   276,   274,   186,    -1,
      -1,   273,    97,   276,   275,   186,    -1,    28,    -1,   164,
      -1,   189,    -1,    28,   186,    86,   164,    -1,    -1,    -1,
     278,    69,   386,   279,   189,    -1,    -1,    -1,   280,    69,
     385,   156,   281,   210,   153,    -1,    -1,   280,    70,    68,
     385,   156,   282,   210,   153,    -1,    -1,    -1,   283,    69,
     386,    28,   284,   186,    -1,    -1,    70,   189,    -1,    -1,
      70,   156,   210,   153,    -1,    48,    68,   156,    -1,    -1,
      70,    28,   186,    -1,    -1,    70,   156,   210,   153,    -1,
     291,    -1,    -1,   292,    -1,   291,     8,   292,    -1,   293,
     253,   254,    76,    -1,   293,   253,   254,    76,    14,   377,
      -1,    -1,   130,    -1,   131,    -1,   365,    -1,   162,   163,
      -1,   162,   295,   163,    -1,   162,   349,   163,    -1,   296,
      -1,   295,     8,   296,    -1,   335,    -1,   390,    -1,    33,
     388,    -1,   161,   385,    -1,   297,     8,   298,    -1,   298,
      -1,    76,    -1,   167,   387,    -1,   167,   165,   385,   166,
      -1,   299,     8,    76,    -1,   299,     8,    76,    14,   377,
      -1,    76,    -1,    76,    14,   377,    -1,   300,   301,    -1,
      -1,    -1,   317,   302,   321,   164,    -1,   322,   164,    -1,
     304,    -1,    -1,   318,   352,   253,    74,   303,   162,   290,
     163,   316,    -1,   108,   305,   306,    -1,   365,    -1,   305,
       8,   365,    -1,   164,    -1,   165,   307,   166,    -1,    -1,
     308,    -1,   309,    -1,   308,   309,    -1,   310,   164,    -1,
     314,   164,    -1,   313,   109,   311,    -1,   365,    -1,   311,
       8,   365,    -1,    74,    -1,   313,    -1,   365,   148,    74,
      -1,   312,    93,   315,    74,    -1,   312,    93,   320,    -1,
      -1,   320,    -1,   164,    -1,   165,   186,   166,    -1,   319,
      -1,   117,    -1,    -1,   319,    -1,   320,    -1,   319,   320,
      -1,   111,    -1,   112,    -1,   113,    -1,   116,    -1,   115,
      -1,   114,    -1,   321,     8,    76,    -1,   321,     8,    76,
      14,   377,    -1,    76,    -1,    76,    14,   377,    -1,   322,
       8,    74,    14,   377,    -1,   102,    74,    14,   377,    -1,
     323,     8,   385,    -1,   385,    -1,    -1,   325,    -1,    -1,
     325,     8,   326,   385,    -1,   385,    -1,   327,   394,    -1,
     394,    -1,   328,    64,   410,   168,    -1,    64,   410,   168,
      -1,    -1,   328,   330,   327,    -1,   328,    -1,   327,    -1,
      -1,    -1,   332,   329,    -1,    -1,    66,   366,   334,   374,
      -1,    -1,   129,   162,   336,   416,   163,    14,   385,    -1,
     390,    14,   385,    -1,   390,    14,    33,   390,    -1,    -1,
     390,    14,    33,    66,   366,   337,   374,    -1,    65,   385,
      -1,   390,    26,   385,    -1,   390,    25,   385,    -1,   390,
      24,   385,    -1,   390,    15,   385,    -1,   390,    23,   385,
      -1,   390,    22,   385,    -1,   390,    21,   385,    -1,   390,
      20,   385,    -1,   390,    19,   385,    -1,   390,    18,   385,
      -1,   390,    17,   385,    -1,   390,    16,   385,    -1,   389,
      62,    -1,    62,   389,    -1,   389,    61,    -1,    61,   389,
      -1,    -1,   385,    29,   338,   385,    -1,    -1,   385,    30,
     339,   385,    -1,    -1,   385,     9,   340,   385,    -1,    -1,
     385,    11,   341,   385,    -1,   385,    10,   385,    -1,   385,
      33,   385,    -1,   385,    32,   385,    -1,   385,    46,   385,
      -1,   385,    44,   385,    -1,   385,    45,   385,    -1,   385,
      47,   385,    -1,   385,    63,   385,    -1,   385,    48,   385,
      -1,   385,    49,   385,    -1,   385,    43,   385,    -1,   385,
      42,   385,    -1,    44,   385,    -1,    45,   385,    -1,    50,
     385,    -1,    52,   385,    -1,   385,    35,   385,    -1,   385,
      34,   385,    -1,   385,    37,   385,    -1,   385,    36,   385,
      -1,   385,    38,   385,    -1,   385,    41,   385,    -1,   385,
      39,   385,    -1,   385,    40,   385,    -1,   385,    51,   366,
      -1,   386,    -1,   333,    -1,    -1,   162,   333,   163,   342,
     331,    -1,    -1,    -1,   385,    27,   343,   385,    28,   344,
     385,    -1,    -1,   385,    27,    28,   345,   385,    -1,   425,
      -1,    60,   385,    -1,    59,   385,    -1,    58,   385,    -1,
      57,   385,    -1,    56,   385,    -1,    55,   385,    -1,    54,
     385,    -1,    67,   372,    -1,    -1,    53,   346,   385,    -1,
     381,    -1,   350,    -1,   351,    -1,   169,   373,   169,    -1,
      12,   385,    -1,    13,    -1,    -1,   352,   253,   347,   162,
     290,   163,   353,   165,   186,   166,    -1,    -1,   116,   352,
     253,   348,   162,   290,   163,   353,   165,   186,   166,    -1,
      13,   335,    -1,    13,   390,    -1,    13,   385,   128,   335,
      -1,    13,   385,   128,   390,    -1,   351,    64,   410,   168,
      -1,   350,    64,   410,   168,    -1,    82,    64,   410,   168,
      -1,   380,    64,   410,   168,    -1,   130,   162,   419,   163,
      -1,    64,   419,   168,    -1,   101,    -1,    -1,   108,   162,
     354,   163,    -1,   354,     8,    76,    -1,   354,     8,    33,
      76,    -1,    76,    -1,    33,    76,    -1,    -1,   175,   356,
     294,    -1,    -1,   149,   152,   175,   357,   294,    -1,    -1,
     152,   175,   358,   294,    -1,    -1,   364,   148,   414,   359,
     294,    -1,    -1,   364,   148,   400,   360,   294,    -1,    -1,
     402,   148,   414,   361,   294,    -1,    -1,   402,   148,   400,
     362,   294,    -1,    -1,   400,   363,   294,    -1,   116,    -1,
     175,    -1,   149,   152,   175,    -1,   152,   175,    -1,   175,
      -1,   149,   152,   175,    -1,   152,   175,    -1,   364,    -1,
     367,    -1,    -1,    -1,   406,   127,   368,   411,   369,   370,
      -1,   406,    -1,   370,   371,    -1,    -1,   127,   411,    -1,
      -1,   162,   163,    -1,   386,    -1,    -1,    81,    -1,   421,
      -1,    -1,   294,    -1,    72,    -1,    73,    -1,    82,    -1,
     136,    -1,   137,    -1,   151,    -1,   133,    -1,   134,    -1,
     135,    -1,   150,    -1,   144,    81,   145,    -1,   144,   145,
      -1,   364,   148,    74,    -1,   378,    -1,   375,    -1,   430,
      -1,   175,    -1,   149,   152,   175,    -1,   152,   175,    -1,
     130,   162,   382,   163,    -1,    64,   382,   168,    -1,   376,
      -1,   132,    -1,   379,    -1,   378,    64,   378,   168,    -1,
     378,    44,   378,    -1,   378,    45,   378,    -1,   378,    47,
     378,    -1,   378,    63,   378,    -1,   378,    48,   378,    -1,
     378,    49,   378,    -1,    50,   378,    -1,    52,   378,    -1,
     378,    31,   378,    -1,   378,    33,   378,    -1,   378,    32,
     378,    -1,   378,    43,   378,    -1,   378,    42,   378,    -1,
     378,    46,   378,    -1,   378,    10,   378,    -1,   378,    11,
     378,    -1,   378,     9,   378,    -1,   378,    30,   378,    -1,
     378,    29,   378,    -1,   378,    35,   378,    -1,   378,    34,
     378,    -1,   378,    37,   378,    -1,   378,    36,   378,    -1,
     378,    38,   378,    -1,   378,    39,   378,    -1,   378,    41,
     378,    -1,   378,    40,   378,    -1,   378,    27,    28,   378,
      -1,   378,    27,   378,    28,   378,    -1,    44,   378,    -1,
      45,   378,    -1,   162,   378,   163,    -1,   429,    -1,   175,
      -1,   149,   152,   175,    -1,   152,   175,    -1,    75,    -1,
     380,    -1,   431,    -1,   375,    -1,   170,   421,   170,    -1,
     144,   421,   145,    -1,   132,    -1,    -1,   384,   383,    -1,
      -1,     8,    -1,   384,     8,   378,   128,   378,    -1,   384,
       8,   378,    -1,   378,   128,   378,    -1,   378,    -1,   387,
      -1,   335,    -1,   162,   385,   163,    -1,   162,   349,   163,
      -1,   390,    -1,   390,    -1,   390,    -1,    -1,    -1,   405,
     127,   391,   411,   392,   399,   393,    -1,   405,    -1,   393,
     394,    -1,    -1,    -1,   127,   411,   395,   399,    -1,   396,
      64,   410,   168,    -1,   397,    64,   410,   168,    -1,    -1,
     398,   294,    -1,   397,    -1,   396,    -1,    -1,   408,    -1,
     415,   408,    -1,   364,   148,   400,    -1,   402,   148,   400,
      -1,   408,    -1,   403,    64,   410,   168,    -1,    -1,   355,
     404,    64,   410,   168,    -1,   406,    -1,   403,    -1,   355,
      -1,   408,    -1,   415,   408,    -1,   401,    -1,   408,    -1,
     415,   408,    -1,   408,    64,   410,   168,    -1,   408,   165,
     385,   166,    -1,   409,    -1,    76,    -1,   167,   165,   385,
     166,    -1,    -1,   385,    -1,   413,    -1,    -1,   400,   412,
      -1,   413,    64,   410,   168,    -1,   413,   165,   385,   166,
      -1,   414,    -1,    74,    -1,   165,   385,   166,    -1,   167,
      -1,   415,   167,    -1,   416,     8,   417,    -1,   417,    -1,
     390,    -1,    -1,   129,   162,   418,   416,   163,    -1,    -1,
      -1,   420,   383,    -1,   420,     8,   385,   128,   385,    -1,
     420,     8,   385,    -1,   385,   128,   385,    -1,   385,    -1,
     420,     8,   385,   128,    33,   388,    -1,   420,     8,    33,
     388,    -1,   385,   128,    33,   388,    -1,    33,   388,    -1,
     421,   422,    -1,   421,    81,    -1,   422,    -1,    81,   422,
      -1,    76,    -1,    -1,    76,    64,   423,   424,   168,    -1,
      76,   127,    74,    -1,   146,   385,   166,    -1,   146,    75,
      64,   385,   168,   166,    -1,   147,   390,   166,    -1,    74,
      -1,    77,    -1,    76,    -1,   119,   162,   426,   163,    -1,
     120,   162,   390,   163,    -1,   120,   162,   335,   163,    -1,
       7,   385,    -1,     6,   385,    -1,     5,   162,   385,   163,
      -1,     4,   385,    -1,     3,   385,    -1,   428,    -1,    -1,
     426,     8,   427,   428,    -1,   390,    -1,   335,    -1,   364,
     148,    74,    -1,   402,   148,    74,    -1,   364,   148,   122,
      -1,   364,   148,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   237,   237,   241,   241,   242,   246,   247,   251,   252,
     253,   254,   255,   256,   256,   258,   258,   260,   261,   262,
     263,   264,   268,   269,   273,   274,   275,   276,   280,   281,
     285,   286,   287,   288,   292,   293,   297,   298,   299,   300,
     304,   305,   309,   309,   310,   315,   316,   317,   318,   319,
     324,   325,   329,   330,   330,   330,   331,   331,   331,   332,
     332,   332,   333,   333,   333,   337,   339,   341,   334,   343,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   359,   360,   358,   363,   364,
     362,   366,   366,   367,   368,   369,   368,   371,   372,   376,
     377,   378,   382,   383,   384,   384,   386,   386,   392,   393,
     393,   397,   398,   402,   403,   404,   408,   408,   409,   409,
     410,   411,   415,   416,   417,   424,   426,   433,   438,   439,
     440,   442,   446,   448,   449,   450,   448,   453,   454,   452,
     457,   460,   457,   465,   466,   467,   464,   472,   473,   471,
     476,   477,   475,   482,   483,   484,   485,   486,   483,   490,
     491,   491,   495,   496,   500,   501,   505,   505,   505,   509,
     510,   514,   518,   522,   526,   527,   531,   532,   536,   536,
     543,   542,   549,   548,   558,   559,   560,   561,   565,   566,
     570,   573,   575,   578,   580,   584,   585,   589,   590,   594,
     595,   601,   602,   607,   608,   613,   614,   619,   620,   625,
     626,   627,   628,   633,   634,   634,   635,   635,   640,   641,
     646,   647,   652,   654,   654,   657,   659,   659,   660,   660,
     663,   665,   665,   669,   671,   674,   676,   680,   683,   685,
     688,   690,   694,   695,   700,   701,   705,   707,   713,   714,
     715,   716,   721,   722,   723,   728,   729,   733,   734,   735,
     736,   740,   741,   746,   747,   748,   753,   754,   755,   756,
     762,   763,   768,   768,   769,   770,   771,   771,   777,   781,
     782,   786,   787,   790,   792,   796,   797,   801,   802,   806,
     810,   811,   815,   816,   820,   824,   825,   829,   830,   834,
     835,   839,   840,   844,   845,   849,   850,   854,   855,   856,
     857,   858,   859,   863,   864,   865,   866,   870,   871,   875,
     876,   881,   882,   886,   886,   887,   891,   892,   896,   897,
     901,   901,   902,   903,   907,   908,   908,   913,   913,   917,
     917,   918,   919,   920,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   937,   938,   938,   939,   939,   940,   940,   941,   941,
     942,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   971,   972,
     973,   972,   975,   975,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   986,   987,   988,   989,   990,   991,
     992,   993,   993,   996,   996,  1002,  1003,  1004,  1005,  1009,
    1010,  1011,  1012,  1016,  1017,  1021,  1024,  1026,  1030,  1031,
    1032,  1033,  1037,  1037,  1039,  1039,  1041,  1041,  1043,  1043,
    1045,  1045,  1047,  1047,  1049,  1049,  1051,  1051,  1056,  1057,
    1058,  1059,  1063,  1064,  1065,  1071,  1072,  1077,  1078,  1077,
    1080,  1085,  1086,  1091,  1095,  1096,  1097,  1101,  1102,  1103,
    1108,  1109,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1125,  1129,  1133,  1137,  1138,  1139,  1140,
    1141,  1142,  1143,  1144,  1145,  1146,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1186,
    1187,  1188,  1189,  1193,  1194,  1195,  1196,  1197,  1198,  1199,
    1203,  1204,  1207,  1209,  1213,  1214,  1215,  1216,  1220,  1221,
    1225,  1226,  1231,  1236,  1241,  1246,  1247,  1246,  1249,  1253,
    1254,  1259,  1259,  1263,  1264,  1268,  1268,  1273,  1274,  1275,
    1279,  1280,  1284,  1285,  1290,  1294,  1295,  1295,  1300,  1301,
    1302,  1307,  1308,  1309,  1313,  1314,  1318,  1319,  1320,  1325,
    1326,  1330,  1331,  1336,  1337,  1337,  1341,  1342,  1343,  1347,
    1348,  1352,  1353,  1357,  1358,  1363,  1364,  1364,  1365,  1370,
    1371,  1375,  1376,  1377,  1378,  1379,  1380,  1381,  1382,  1386,
    1387,  1388,  1389,  1395,  1396,  1396,  1397,  1398,  1399,  1400,
    1405,  1406,  1407,  1412,  1413,  1414,  1415,  1416,  1417,  1418,
    1419,  1423,  1424,  1424,  1428,  1429,  1433,  1434,  1438,  1442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"", "'='",
  "\"**= (T_POW_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"",
  "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"",
  "\"%= (T_MOD_EQUAL)\"", "\".= (T_CONCAT_EQUAL)\"",
  "\"/= (T_DIV_EQUAL)\"", "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
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
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"** (T_POW)\"", "'['", "\"clone (T_CLONE)\"", "\"new (T_NEW)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"",
  "\"else (T_ELSE)\"", "\"endif (T_ENDIF)\"",
  "\"integer number (T_LNUMBER)\"",
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
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"public (T_PUBLIC)\"", "\"protected (T_PROTECTED)\"",
  "\"private (T_PRIVATE)\"", "\"final (T_FINAL)\"",
  "\"abstract (T_ABSTRACT)\"", "\"static (T_STATIC)\"", "\"var (T_VAR)\"",
  "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
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
  "\"{include (T_TPL_INCLUDE)\"", "\"... (T_ELLIPSIS)\"", "'('", "')'",
  "';'", "'{'", "'}'", "'$'", "']'", "'`'", "'\"'", "$accept", "start",
  "top_statement_list", "$@1", "namespace_name", "top_statement", "$@2",
  "$@3", "use_declarations", "use_declaration",
  "use_function_declarations", "use_function_declaration",
  "use_const_declarations", "use_const_declaration",
  "constant_declaration", "inner_statement_list", "$@4", "inner_statement",
  "statement", "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9",
  "@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "tpl_block", "tpl_modifier_list",
  "$@24", "$@25", "tpl_modifier_param_list", "$@26",
  "tpl_inner_tpl_attr_name", "tpl_inner_tpl_attr_anony",
  "tpl_inner_tpl_attr_list", "$@27", "$@28", "tpl_encaps_list",
  "tpl_statement", "@29", "$@30", "$@31", "@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "catch_statement", "$@43", "$@44", "$@45", "$@46", "finally_statement",
  "$@47", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@48", "$@49", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "is_variadic", "unticked_function_declaration_statement",
  "$@50", "unticked_class_declaration_statement", "$@51", "$@52",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@53", "$@54", "case_separator",
  "while_statement", "elseif_list", "$@55", "tpl_elseif_list", "$@56",
  "$@57", "new_elseif_list", "$@58", "else_single", "tpl_else_single",
  "tpl_endif", "new_else_single", "tpl_loopelse", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "function_call_parameter", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@59",
  "$@60", "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@61",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@62", "instance_call", "$@63", "new_expr",
  "$@64", "expr_without_variable", "$@65", "$@66", "$@67", "$@68", "$@69",
  "$@70", "@71", "$@72", "$@73", "$@74", "$@75", "@76", "@77",
  "yield_expr", "combined_scalar_offset", "combined_scalar", "function",
  "lexical_vars", "lexical_var_list", "function_call", "@78", "@79", "@80",
  "@81", "$@82", "$@83", "$@84", "$@85", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@86", "$@87",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_class_constant",
  "static_scalar", "static_scalar_value", "static_operation",
  "general_constant", "scalar", "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "parenthesis_expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@88", "$@89",
  "variable_properties", "variable_property", "$@90",
  "array_method_dereference", "method", "@91", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@92",
  "base_variable_with_function_calls", "base_variable",
  "tpl_base_variable", "reference_variable", "compound_variable",
  "dim_offset", "object_property", "$@93", "object_dim_list",
  "variable_name", "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@94", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@95",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@96", "isset_variable", "class_constant", "static_class_name_scalar",
  "class_name_scalar", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,    61,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    63,    58,   280,
     281,   124,    94,    38,   282,   283,   284,   285,    60,    62,
     286,   287,   288,   289,    43,    45,    46,    42,    47,    37,
      33,   290,   126,    64,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,    91,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,    40,    41,    59,   123,   125,    36,    93,    96,
      34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   171,   172,   174,   173,   173,   175,   175,   176,   176,
     176,   176,   176,   177,   176,   178,   176,   176,   176,   176,
     176,   176,   179,   179,   180,   180,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   184,   184,
     185,   185,   187,   186,   186,   188,   188,   188,   188,   188,
     189,   189,   190,   191,   192,   190,   193,   194,   190,   195,
     196,   190,   197,   198,   190,   199,   200,   201,   190,   202,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   203,   204,   190,   205,   206,
     190,   207,   190,   190,   208,   209,   190,   190,   190,   210,
     210,   210,   211,   211,   212,   211,   213,   211,   214,   215,
     214,   216,   216,   217,   217,   217,   219,   218,   220,   218,
     218,   218,   221,   221,   221,   222,   222,   222,   222,   222,
     222,   222,   222,   223,   224,   225,   222,   226,   227,   222,
     228,   229,   222,   230,   231,   232,   222,   233,   234,   222,
     235,   236,   222,   237,   238,   239,   240,   241,   237,   242,
     243,   242,   244,   244,   245,   245,   247,   248,   246,   249,
     249,   250,   251,   252,   253,   253,   254,   254,   256,   255,
     258,   257,   259,   257,   260,   260,   260,   260,   261,   261,
     262,   263,   263,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   272,
     272,   272,   272,   273,   274,   273,   275,   273,   276,   276,
     277,   277,   278,   279,   278,   280,   281,   280,   282,   280,
     283,   284,   283,   285,   285,   286,   286,   287,   288,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     293,   293,   294,   294,   294,   295,   295,   296,   296,   296,
     296,   297,   297,   298,   298,   298,   299,   299,   299,   299,
     300,   300,   302,   301,   301,   301,   303,   301,   304,   305,
     305,   306,   306,   307,   307,   308,   308,   309,   309,   310,
     311,   311,   312,   312,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   320,
     320,   320,   320,   321,   321,   321,   321,   322,   322,   323,
     323,   324,   324,   326,   325,   325,   327,   327,   328,   328,
     330,   329,   329,   329,   331,   332,   331,   334,   333,   336,
     335,   335,   335,   337,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   338,   335,   339,   335,   340,   335,   341,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   342,   335,   343,
     344,   335,   345,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   346,   335,   335,   335,   335,   335,   335,
     335,   347,   335,   348,   335,   349,   349,   349,   349,   350,
     350,   350,   350,   351,   351,   352,   353,   353,   354,   354,
     354,   354,   356,   355,   357,   355,   358,   355,   359,   355,
     360,   355,   361,   355,   362,   355,   363,   355,   364,   364,
     364,   364,   365,   365,   365,   366,   366,   368,   369,   367,
     367,   370,   370,   371,   372,   372,   372,   373,   373,   373,
     374,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   376,   377,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   380,
     380,   380,   380,   381,   381,   381,   381,   381,   381,   381,
     382,   382,   383,   383,   384,   384,   384,   384,   385,   385,
     386,   386,   387,   388,   389,   391,   392,   390,   390,   393,
     393,   395,   394,   396,   396,   398,   397,   399,   399,   399,
     400,   400,   401,   401,   402,   403,   404,   403,   405,   405,
     405,   406,   406,   406,   407,   407,   408,   408,   408,   409,
     409,   410,   410,   411,   412,   411,   413,   413,   413,   414,
     414,   415,   415,   416,   416,   417,   418,   417,   417,   419,
     419,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   422,   423,   422,   422,   422,   422,   422,
     424,   424,   424,   425,   425,   425,   425,   425,   425,   425,
     425,   426,   427,   426,   428,   428,   429,   429,   430,   431
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     4,
       2,     1,     3,     1,     1,     3,     2,     4,     3,     1,
       1,     3,     2,     4,     3,     1,     1,     3,     2,     4,
       5,     4,     0,     3,     0,     1,     1,     1,     1,     4,
       1,     2,     3,     0,     0,     7,     0,     0,    10,     0,
       0,     5,     0,     0,     7,     0,     0,     0,    12,     0,
       4,     2,     3,     2,     3,     2,     3,     3,     2,     3,
       3,     3,     1,     2,     5,     0,     0,    10,     0,     0,
      10,     0,     6,     1,     0,     0,     8,     3,     3,     2,
       2,     0,     1,     2,     0,     5,     0,     5,     0,     0,
       4,     1,     1,     1,     1,     4,     0,     4,     0,     5,
       1,     2,     1,     1,     1,     3,     3,     4,     3,     3,
       5,     3,     4,     0,     0,     0,    18,     0,     0,    15,
       0,     0,    11,     0,     0,     0,    18,     0,     0,    17,
       0,     0,    15,     0,     0,     0,     0,     0,    13,     0,
       0,     5,     1,     0,     1,     2,     0,     0,    10,     1,
       3,     1,     1,     1,     0,     1,     0,     1,     0,    10,
       0,     8,     0,     7,     1,     2,     1,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     0,     6,     0,     5,     1,     1,
       1,     4,     0,     0,     5,     0,     0,     7,     0,     8,
       0,     0,     6,     0,     2,     0,     4,     3,     0,     3,
       0,     4,     1,     0,     1,     3,     4,     6,     0,     1,
       1,     1,     2,     3,     3,     1,     3,     1,     1,     2,
       2,     3,     1,     1,     2,     4,     3,     5,     1,     3,
       2,     0,     0,     4,     2,     1,     0,     9,     3,     1,
       3,     1,     3,     0,     1,     1,     2,     2,     2,     3,
       1,     3,     1,     1,     3,     4,     3,     0,     1,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     0,     4,     1,     2,     1,     4,     3,
       0,     3,     1,     1,     0,     0,     2,     0,     4,     0,
       7,     3,     4,     0,     7,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     0,     4,     0,     4,     0,     4,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     0,     5,     0,
       0,     7,     0,     5,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     1,     1,     3,     2,
       1,     0,    10,     0,    11,     2,     2,     4,     4,     4,
       4,     4,     4,     4,     3,     1,     0,     4,     3,     4,
       1,     2,     0,     3,     0,     5,     0,     4,     0,     5,
       0,     5,     0,     5,     0,     5,     0,     3,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     0,     0,     6,
       1,     2,     0,     2,     0,     2,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     1,     1,     1,     1,     3,
       2,     4,     3,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     5,     2,     2,     3,     1,
       1,     3,     2,     1,     1,     1,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       3,     3,     1,     1,     1,     0,     0,     7,     1,     2,
       0,     0,     4,     4,     4,     0,     2,     1,     1,     0,
       1,     2,     3,     3,     1,     4,     0,     5,     1,     1,
       1,     1,     2,     1,     1,     2,     4,     4,     1,     1,
       4,     0,     1,     1,     0,     2,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     0,     5,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     4,     2,     2,     4,     2,
       2,     1,     0,     4,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   420,     0,     0,     0,     0,   413,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   619,     0,     0,   474,
       0,   482,   483,     6,   543,   599,    82,   484,     0,    62,
      59,     0,     0,    91,     0,     0,     0,     0,   435,     0,
       0,    94,     0,     0,     0,     0,     0,   458,     0,     0,
       0,     0,   184,   186,   190,     0,     0,   549,   488,   489,
     490,   485,   486,     0,     0,   491,   487,     0,     0,    44,
       0,     0,     0,    93,    44,   611,   477,     0,   540,     4,
       0,     8,    50,    21,     9,    10,   172,   173,     0,     0,
     396,   559,     0,   416,   417,   174,   590,     0,   546,   544,
     415,     0,   395,   558,     0,   562,   456,   593,     0,   589,
     568,   588,   591,   598,     0,   404,   539,   545,   420,     6,
     458,     0,   174,   650,   649,     0,   647,   646,   419,   559,
       0,   562,   382,   383,   384,   385,     0,   411,   410,   409,
     408,   407,   406,   405,   458,     0,     0,   442,     0,   361,
     564,     0,   359,     0,   624,     0,   552,   345,     0,     0,
     459,   465,   337,   466,     0,   470,   591,     0,     0,   412,
     476,     0,    53,    51,   601,     0,   320,     0,     0,   321,
       0,     0,    69,    71,     0,    73,     0,     0,     0,    75,
     559,     0,   562,     0,     0,     0,     0,     0,    24,     0,
      23,   263,     0,     0,   262,   187,   185,   268,     0,   174,
       0,     0,     0,     0,   339,   619,   633,     0,   493,     0,
       0,     0,   631,     0,    15,     0,   542,     0,     6,   484,
       0,     0,     0,   559,   558,    42,   123,   122,     0,   124,
       0,     0,   396,     0,     0,    42,     0,   478,     0,   479,
       0,     0,     0,     0,     0,    20,   188,   182,    78,   601,
     601,   175,   421,     0,     0,   601,   366,     0,   368,   399,
     362,   364,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,   360,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     601,   565,   601,     0,   612,   592,   421,     0,     0,   414,
       0,   446,     0,     0,   628,   563,     0,   434,   553,   620,
       0,   461,     0,   480,     0,   467,   592,   475,    56,     0,
     602,     0,     0,    81,     0,    60,     0,   322,   325,   559,
     562,     0,     0,    72,    74,    98,     0,    76,    77,    44,
      97,     0,    30,     0,    29,     0,    36,     0,    35,    26,
       0,     0,    17,     0,   264,   562,     0,    79,     0,     0,
      80,   423,     0,   169,   171,   559,   562,     0,   651,   559,
     562,     0,   618,     0,   634,     0,   492,   632,   543,     0,
       0,   630,   548,   629,   541,     5,    12,    13,     0,     0,
     111,   484,     0,     0,     0,   120,     0,   114,   113,   594,
       0,     0,     0,   321,   197,   199,     0,     0,     0,   125,
     126,     0,   103,   128,     0,   131,     0,   129,   397,   561,
     560,    52,     0,   418,   547,     7,     0,   443,     0,     0,
     180,   191,     0,     0,   178,     0,   601,   656,   659,     0,
     582,   580,   448,     0,     0,     0,   370,     0,   402,     0,
       0,     0,   372,   371,   387,   386,   389,   388,   390,   392,
     393,   391,   381,   380,   374,   375,   373,   376,   378,   379,
     394,   377,     0,   341,   349,   357,   356,   355,   354,   353,
     352,   351,   350,   348,   347,   346,   457,   657,   583,   452,
       0,     0,     0,     0,   648,   559,   562,   444,   609,     0,
     623,     0,   622,   460,   582,   481,   338,   583,     0,    44,
      54,   431,   319,    63,     0,    65,   323,    88,    85,     0,
       0,   213,   213,    70,     0,     0,     0,     0,   550,   484,
       0,   504,     0,     0,     0,   498,     0,   496,   503,    41,
     495,   505,   497,    42,    32,     0,     0,    18,    38,     0,
       0,    19,     0,    25,    22,     0,   261,   269,   266,     0,
       0,     0,   652,   643,   645,   644,    11,     0,   615,     0,
     614,   433,     0,   636,     0,   637,   639,     0,     3,     5,
     447,   140,   619,     0,   116,   132,     0,   121,   595,   104,
     200,   197,     0,   562,     0,     0,     0,     0,   106,   127,
       0,    43,    45,    46,    47,    48,     0,   334,   600,     0,
       0,   252,     0,   255,   559,     0,   562,     0,     0,     0,
     462,   189,   193,     0,     0,   430,   429,     0,   248,     0,
       0,     0,     0,   581,   432,   367,   369,     0,     0,   363,
     365,     0,   342,     0,     0,   585,   604,   566,   603,   608,
     596,   597,   627,   626,     0,   468,    42,   222,     0,    44,
     220,    61,   321,     0,     0,     0,     0,     0,     0,   213,
       0,   213,     0,   536,   537,   513,   514,   557,     0,   552,
     550,     0,   500,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   153,     0,    31,    28,     0,    37,    34,    27,
     265,     0,   248,   170,    84,     0,   616,   618,     0,   640,
     642,   641,     0,     0,   445,    16,     3,   101,     0,     0,
     118,   108,     0,   143,   198,     0,   133,   197,   108,     0,
     130,   398,     0,   259,   260,     0,   253,   254,    40,     0,
     464,     0,     0,   192,   195,   271,   248,   249,   250,     0,
     242,   244,   174,   251,   587,   610,   451,   449,   403,   400,
     343,   455,   453,   605,   579,   601,     0,     0,   621,   472,
     230,   233,     0,    42,     0,   324,   197,   197,   207,     0,
      44,   205,    92,     0,     0,     0,     0,     0,   209,     0,
     502,   553,   551,     0,   499,   538,   494,   658,   523,   521,
     522,     0,     0,   525,   524,   515,   517,   516,   527,   526,
     529,   528,   530,   531,   533,   532,   519,   518,   507,   508,
     520,   509,   511,   512,   510,     0,     0,    95,    33,    39,
     267,     0,   653,   618,   613,     0,   635,     0,    14,     0,
     115,   117,     0,   105,     0,   321,     0,     0,     0,   107,
       0,   601,     0,   333,   332,   336,   327,   256,   463,   194,
     271,     0,   303,     0,   436,   248,   176,     0,   480,   578,
     577,     0,   570,     0,     0,   625,   469,   238,     0,     0,
      55,    64,     0,    66,     0,     0,     0,    42,     0,   211,
       0,   218,   219,   216,   210,   556,   555,   501,   534,     0,
     506,   154,   159,   436,     0,   340,   638,   100,   141,    99,
     119,   109,     0,     0,   150,   197,   137,    49,     0,   571,
     326,   601,     0,   303,   196,     0,     0,   307,   308,   309,
     312,   311,   310,   302,   183,   270,   275,   272,     0,   301,
     305,     0,     0,     0,     0,   245,   177,     0,   401,   344,
     601,   601,   576,   567,   606,   607,     0,   471,     0,     0,
       0,   223,   234,   221,   321,    89,    86,   208,     0,   212,
     214,    44,     0,   535,     0,   160,    96,     0,   617,   225,
       0,     0,   144,   101,     0,   101,   329,   579,     0,   331,
     181,     0,     0,   279,     0,   174,   306,     0,   274,    44,
       0,    44,   246,     0,     0,   569,   473,     0,    44,     0,
       0,     0,     0,     0,   206,    44,    42,   554,   155,     0,
      44,   235,   110,   147,   321,     0,     0,     0,   572,   328,
       0,     0,   281,   283,   278,   315,     0,     0,     0,    42,
       0,   440,     0,    42,     0,   573,   574,   231,    42,    58,
     224,    67,    44,   203,    90,    87,    42,     0,    44,    42,
       0,     0,     0,   101,     0,   151,   134,   138,   318,   280,
       6,     0,   284,   285,     0,     0,   293,     0,     0,     0,
       0,   273,   276,     0,   179,   441,     0,   437,   422,   247,
      44,     0,    42,     0,    42,   424,     0,     0,   101,     0,
     142,     0,     0,   240,   101,   240,   282,   286,   287,   297,
       0,   288,     0,   316,   313,     0,   317,     0,   438,    42,
      44,   201,    68,     0,   156,   161,   226,     0,     0,     0,
     148,   145,     0,     0,     0,     0,     0,   296,   289,   290,
     294,     0,   248,   439,    42,   204,     0,   101,   228,   236,
     237,   240,   101,   101,     0,   135,     0,   295,     0,   314,
       0,     0,    44,     0,   101,     0,     0,     0,     0,   240,
       0,   291,     0,   202,    42,   227,     0,     0,     0,   241,
     152,     0,   139,   299,    44,   277,   157,   229,     0,     0,
       0,    42,   163,   149,     0,     0,   300,     0,   158,   162,
     164,   146,   136,     0,   165,   166,     0,     0,   167,     0,
      44,    42,   168
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    88,    89,   609,   415,   209,   210,
     373,   374,   377,   378,    90,   245,   444,   631,  1103,    92,
     349,   687,   539,   820,   188,   544,   187,   688,   692,  1014,
    1141,   362,   695,  1063,   694,  1062,   191,   203,   952,   889,
     242,   771,   778,   893,  1030,   424,   425,   426,   769,   892,
     248,   959,   897,  1154,  1219,  1035,  1155,   767,  1029,   895,
    1074,  1202,  1113,  1201,  1033,  1153,   877,  1024,  1107,  1196,
    1242,  1026,  1069,  1248,  1249,  1250,  1256,  1259,   392,   393,
      94,    95,   272,   997,    96,   657,    97,   652,   461,    98,
     460,    99,   654,   792,   793,   625,   434,  1172,  1104,   832,
     550,   553,   700,  1065,  1021,   943,   691,   821,  1060,  1071,
    1197,  1214,   927,  1140,   930,  1112,  1150,  1010,  1183,   799,
     800,   801,   802,   535,   642,   643,   213,   214,   218,   912,
     985,  1044,  1165,   986,  1042,  1084,  1121,  1122,  1123,  1124,
    1188,  1125,  1126,  1127,  1186,  1235,   987,   988,   989,   990,
    1086,   991,   185,   356,   357,   693,   903,   904,   905,   972,
     781,   782,   100,   343,   101,   402,   918,   480,   481,   475,
     477,   637,   479,   917,   667,   146,   465,   589,   102,   103,
     104,   132,   994,  1092,   106,   263,   607,   418,   662,   661,
     674,   673,   318,   107,   803,   172,   173,   538,   819,   926,
    1007,   179,   258,   536,   108,   568,   569,   570,   571,   109,
     110,   708,   339,   709,   201,   112,   113,   334,   114,   115,
     521,   814,  1003,   906,  1037,   919,   920,   921,   922,   116,
     117,   118,   119,   273,   120,   121,   428,   122,   123,   351,
     677,   813,   678,   679,   124,   599,   600,   883,   165,   166,
     231,   232,   602,   762,   125,   397,   755,   398,   126,   572,
     127
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1094
static const yytype_int16 yypact[] =
{
   -1094,    86,   110, -1094,  2444,  5414,  5414,   -73,  5414,  5414,
    5414,  5414,  5414,  5414,  5414,  5414, -1094,  5414,  5414,  5414,
    5414,  5414,  5414,  5414,   289,   289,  3929,  5414,   393,   -35,
     -32, -1094, -1094,   120, -1094, -1094, -1094,    98,  5414, -1094,
   -1094,    97,   124, -1094,   -32,  4064,  4199,   198, -1094,   214,
    4334, -1094,  5414,     5,   -16,   183,   208,    18,   173,   184,
     192,   196, -1094, -1094, -1094,   221,   225, -1094, -1094, -1094,
   -1094, -1094, -1094,   511,    75, -1094, -1094,   327,  3524, -1094,
     303,  4469,  5549, -1094, -1094,   246,   530,   592,   -50, -1094,
      30, -1094, -1094, -1094, -1094, -1094, -1094, -1094,   339,   349,
   -1094, -1094,   261,   363,   365,   406,   378,   296, -1094,   391,
   -1094,  6006, -1094, -1094,    63,  1272, -1094, -1094,   305,   404,
     343, -1094,    -7, -1094,    12, -1094, -1094, -1094, -1094, -1094,
     373,   325,   406,  7110,  7110,  5414,  7110,  7110,  3710,   139,
    6725,   846,   418,   418,    72,   418,  5414,   418,   418,   418,
     418,   418,   418,   418, -1094,   335,   327,   -43,   358, -1094,
   -1094,   362, -1094,   289,  6781,   344,   533, -1094,   396,   327,
     405,   411, -1094, -1094,   419,   448,    20,    12,  4604, -1094,
   -1094,  5549,   558, -1094,  5414,    33,  7110,  3254,   -32,  5414,
    5414,   429, -1094, -1094,  6049, -1094,  6096,   425,   579, -1094,
     437,  7110,   880,   440,  6139,    41,   115,   327,     4,    34,
   -1094, -1094,   299,    35, -1094, -1094, -1094,   596,    39,   406,
     289,  5414,  5414,   453, -1094,  3929,    27,   138, -1094,  5684,
     289,   642, -1094,   327, -1094,   238,   -31,  5414,   991,    54,
      89,  5819,    14,   -61,    13,   456,   171, -1094,   465,   644,
     608,  6423,   461,   464,  6288,   462,  5414,   171,   467,   644,
     171,   190,   568,   482,   569, -1094,   520, -1094, -1094,  5414,
    5414, -1094,   580,   595,     6,  5414, -1094,  5414, -1094,   623,
   -1094, -1094,  5414,  5414,  5414,  5414,  5414,  5414,  5414,  5414,
    5414,  5414,  5414,  5414,  5414,  5414,  5414,  5414,  5414,  5414,
     393,  5414, -1094, -1094, -1094,  4739,  5414,  5414,  5414,  5414,
    5414,  5414,  5414,  5414,  5414,  5414,  5414,  5414,   482,   128,
    5414, -1094,  5414,  5414,   246,   -12, -1094,  6331,  5414,   418,
     327,   106,   215,   215, -1094, -1094,  4874, -1094,  5009, -1094,
     327,   405,    17,   482,    17, -1094,    74, -1094, -1094,  3254,
    7110,   492,  5414, -1094,   581, -1094,   498,   656,  7110,   585,
    6982,   607,     7, -1094, -1094, -1094,  6833, -1094, -1094, -1094,
   -1094,   327,   142,    43, -1094,   327,   186,    47, -1094,   207,
     610,   174, -1094,  5414, -1094, -1094,   -16, -1094,  6833,   606,
   -1094, -1094,    24, -1094, -1094,    57,   474,    59, -1094,   527,
     912,   524,   245,   559, -1094,   657, -1094, -1094,   670,  1507,
     574, -1094, -1094, -1094,   101, -1094, -1094, -1094,   482,  6466,
   -1094,   721,   582,    -8,   727, -1094,   966, -1094, -1094,    74,
      12,   668,   289,  5144,   618, -1094,  5549,  6893,   673, -1094,
   -1094,   593, -1094, -1094,  2579, -1094,  5414, -1094, -1094, -1094,
   -1094, -1094,  1880, -1094, -1094, -1094,  3659, -1094,   739,   152,
   -1094,   636,   600,   601, -1094,   614,  5414,   615, -1094,  5414,
     621,    74, -1094,    12,   616,  5414,  7270,  5414, -1094,  5414,
    5414,  5414,  4520,  4923,  5058,  5058,  5058,  5058,  1806,  1806,
    1806,  1806,   983,   983,   525,   525,   525,    72,    72,    72,
   -1094,   418,   176,  3710,  3710,  3710,  3710,  3710,  3710,  3710,
    3710,  3710,  3710,  3710,  3710,  3710, -1094,   615,   624, -1094,
     617,   215,   626,  1955, -1094,   243,   860,   117, -1094,   289,
    7110,   289,  6825,   405, -1094, -1094, -1094, -1094,   215, -1094,
   -1094, -1094,  7110, -1094,  2714, -1094, -1094, -1094, -1094,   778,
      60,   631,   633, -1094,  6833,  6833,  6833,  6833,  6833, -1094,
     637, -1094,   648,   327,  6833,   -43,   658, -1094, -1094, -1094,
    7024, -1094, -1094,   638,   217,   731,    41, -1094,   236,   734,
     115, -1094,   737, -1094, -1094,  2093, -1094, -1094,   798,   651,
     289,   652, -1094, -1094, -1094, -1094, -1094,   664, -1094,    61,
   -1094, -1094,   427, -1094,  5414, -1094, -1094,   482,   662, -1094,
   -1094, -1094,  3929,   687, -1094, -1094,   820, -1094,    74, -1094,
   -1094,   618,   671,  1776,   237,   679,  6182,   237, -1094, -1094,
     676, -1094, -1094, -1094, -1094, -1094,  6511,    32, -1094,   289,
    5414, -1094,    62, -1094,    68,   678,   500,  6833,   690,   327,
     405, -1094,   717,   152,   680, -1094, -1094,   694,   265,   689,
    2162,   482,   482,    74, -1094,  7192,  3710,  5414,  7067,  3980,
    4250,   393, -1094,   482,   482, -1094, -1094, -1094,    78, -1094,
   -1094, -1094, -1094, -1094,  5279, -1094,   526, -1094,   -32, -1094,
   -1094, -1094,  5414,  5414,   237,   237,  6833,   784,  2849, -1094,
     485, -1094,   165,   398,   398,   369,   369,  1465,   720,   901,
    6833,   327,   106,  6247,   259,  6833,  6833,  6833,  2189,  6833,
    6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,
    6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,  6833,
    6833,  6833,   806,   839, -1094, -1094,   841, -1094, -1094, -1094,
   -1094,  6833,   265, -1094, -1094,  5414, -1094,   245,   902, -1094,
   -1094, -1094,   749,  1422, -1094, -1094,   753, -1094,   757,  5414,
   -1094, -1094,   765, -1094, -1094,  5414, -1094,   618, -1094,   761,
   -1094, -1094,   180, -1094,  7110,  3794, -1094, -1094, -1094,   327,
     405,   152,   775,   935, -1094, -1094,   265, -1094, -1094,   781,
     937, -1094,   406, -1094, -1094, -1094, -1094, -1094,  3845, -1094,
   -1094, -1094, -1094, -1094,   785,  5414,  5414,   289,  7110, -1094,
   -1094,   481,   782,   862,   792,  7110,   618,   618, -1094,   944,
   -1094, -1094, -1094,   523,   795,  5414,    11,   201, -1094,  6833,
   -1094,  6833, -1094,   786,   117, -1094, -1094, -1094,  7152,  7231,
    7305,  6833,  6983,  7376,  7410,  4115,  4384,  4653,  4788,  4788,
    4788,  4788,  1372,  1372,  1372,  1372,   710,   710,   398,   398,
     398,   369,   369,   369,   369,  1208,   808, -1094, -1094, -1094,
   -1094,   805, -1094,   245, -1094,  5414, -1094,   809, -1094,   271,
   -1094,  7110,  5414,   943,  5414,  5414,  6554,   237,   816,   943,
     814,  5414,   215,   852,   193, -1094, -1094, -1094,   405,   935,
   -1094,   152,   849,   817,   873,   288,   821,  5414,   482,   920,
     921,   482, -1094,   818,  2349, -1094,   863,   494,   -32,  3254,
   -1094, -1094,   825, -1094,   829,   830,  6833,   903,   833, -1094,
    5963, -1094, -1094, -1094, -1094,  7024,  6684, -1094,  7341,  6833,
   -1094, -1094,   893,   873,    69,  3710, -1094, -1094,  3524, -1094,
    7110, -1094,  6379,   837, -1094,   618, -1094, -1094,   834, -1094,
   -1094,  5414,   852,  1092, -1094,   929,   152, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,   373,   738,
   -1094,    51,   840,   842,   843, -1094, -1094,   930,  3845, -1094,
    5414,  5414, -1094,   852, -1094, -1094,   215, -1094,   -32,   979,
     940, -1094, -1094, -1094,  5414, -1094, -1094, -1094,   848, -1094,
   -1094, -1094,  6833,  7341,   152, -1094, -1094,   851, -1094, -1094,
    5414,   857, -1094, -1094,   854, -1094, -1094,   785,   850,   852,
   -1094,  1008,    26, -1094,   949,   406, -1094,   961, -1094, -1094,
      67, -1094,  1022,   869,   875, -1094, -1094,  1013, -1094,   881,
    3254,   887,  2984,  2984, -1094, -1094,   178,  7024, -1094,   886,
   -1094,   529,  7110, -1094,  5414,   320,   896,   394, -1094, -1094,
    6833,   152, -1094,   163, -1094,  1039,    55,   980,  1041,   894,
     985, -1094,    70,   900,  6833, -1094, -1094, -1094,   997, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094,   389,   986, -1094,   905,
    5414,    22,  1024, -1094,   906,  3524, -1094,  3524, -1094, -1094,
     981,   910,   163, -1094,   913,   987,   969,   915,   934,  6833,
    1007, -1094, -1094,  6833, -1094, -1094,    71, -1094, -1094, -1094,
   -1094,  3119,   994,   922,   923, -1094,  6597,  5414, -1094,  1018,
   -1094,   424,   931,  1020, -1094,  1020, -1094, -1094, -1094,   709,
     152, -1094,  1019, -1094,  1078,   932, -1094,  1028, -1094,   561,
   -1094, -1094, -1094,   933, -1094, -1094, -1094,  6641,   449,   939,
    3524, -1094,   950,  1059,   480,  1060,  1040,  1045,  1107, -1094,
   -1094,  6833,   265, -1094,  1035, -1094,   964, -1094, -1094,  3524,
   -1094,  1020, -1094, -1094,  1047,  3524,  1043, -1094,   152, -1094,
     975,   976, -1094,   493, -1094,  1091,   577,   611,   992,  1020,
     993, -1094,   294, -1094,   984,  3524,   643,  1064,  3389,  3524,
   -1094,  1106, -1094, -1094, -1094, -1094, -1094,  3524,   999,  1069,
    1070,   998,  1058, -1094,  1009,  1010, -1094,  1011, -1094,  1058,
   -1094, -1094, -1094,   152, -1094, -1094,  1094,  1012, -1094,  1006,
   -1094,  1014, -1094
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1094, -1094,  -388, -1094,   -24, -1094, -1094, -1094, -1094,   791,
   -1094,   598, -1094,   597, -1094,   -82, -1094, -1094,    21, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1002,
   -1094, -1094, -1094,   403, -1094,   756,   759, -1094, -1094, -1094,
   -1094,    10, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094,   -66, -1094, -1094, -1094,   599,
     742,   743,  -127, -1094, -1094, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094,   397,  -597,  -414, -1094,   127, -1094,
   -1094, -1094,  -465, -1094, -1094,   251, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1093,  -732,
   -1094,   277, -1094,  -252, -1094,   408, -1094,   810, -1094,   287,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,    76, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,  -967,
   -1094, -1094, -1094,  -424, -1094, -1094,   227, -1094, -1094, -1094,
   -1094, -1094,   -59, -1094,    -4, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094, -1094, -1094, -1094, -1094, -1094,   -65, -1094,
   -1094,    -1,   249, -1094, -1094, -1094, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094,   589,  -398,  -279, -1094, -1094, -1094, -1094,
   -1094, -1094, -1094,   292,  1021, -1094,  -351,  1342, -1094, -1094,
   -1094,   501,   503, -1094,  1343,   -14,   -68,  -503,   545,  1653,
   -1094, -1094, -1094,  -863, -1094, -1094, -1094, -1094,   177,  -261,
   -1094,   136, -1094, -1094, -1094,   -22, -1094,   -10, -1094,  -221,
    -530, -1094, -1094,  -199,     8,   332,   463, -1094,  -213, -1094,
     457,   587, -1094, -1094, -1094, -1094, -1094,   468, -1094, -1094,
   -1094
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -656
static const yytype_int16 yytable[] =
{
     157,   157,   255,   105,   170,   326,   175,   139,   685,   622,
     244,   457,   403,   470,    93,   180,   182,   253,   176,   621,
     881,   500,  1046,   252,   772,    91,   682,   608,   683,   208,
     192,  1075,   590,  1077,  1081,   551,   177,   587,   264,   941,
     970,   352,   381,   386,  -102,   438,   200,   389,   462,   463,
     235,   576,   322,   236,   474,   580,   219,   322,   518,  1047,
     211,   651,  1185,  1130,   913,  -655,   516,   592,   697,   757,
     785,   470,   518,   613,   243,   472,  -257,   757,  1136,   129,
     467,   534,    35,   537,   322,   431,     3,   702,    35,   135,
    1147,   404,   391,    35,   217,   440,  -335,   380,  -459,   520,
    1090,   522,   262,   441,  1167,  -459,   205,   206,  1215,   262,
      -2,  1151,  -442,   253,   325,   129,   253,  -461,   184,    48,
     519,   262,   432,   300,   303,   304,  1231,   178,   468,   219,
     181,  -446,   331,   472,   519,   301,   783,   228,   322,   157,
    1055,  -584,   815,  1091,   384,   341,  1178,  1168,   183,   129,
    -581,   212,  1184,   323,   405,  -580,   262,   207,   323,  -335,
     161,   161,   184,   129,   174,    35,   610,   346,  -584,  -102,
     439,   469,   552,    85,   355,   942,   970,   442,  1148,   324,
     898,   372,   376,   379,    85,   323,   359,   591,   157,   129,
    1082,  1083,  1187,   371,   265,  1213,   157,   353,   382,   387,
    1216,  1217,   517,   390,    35,   154,   157,   577,   354,   414,
     774,   581,  1226,   777,   226,  1048,   157,   395,   399,  1131,
    -655,   766,   593,   698,   758,   786,   129,   233,   429,   934,
     935,  -257,  1028,  1137,   833,   575,   837,  1120,   155,   323,
     234,   156,   671,   816,   901,   659,   430,   226,   129,  -460,
     129,   433,    35,   262,  -461,   794,    85,   971,   262,   189,
     676,   835,   836,  -444,   471,  -460,   226,   375,   824,   262,
     432,   411,   197,  -217,  -217,  -217,   170,   676,   175,   579,
     826,   827,   473,   406,   229,   230,   190,   573,   198,   528,
     176,    35,   154,   469,   262,    85,   788,   835,   836,   161,
     582,   648,  -425,  -425,   649,   215,   527,   902,   177,   471,
     743,   129,   648,    35,   925,   649,   533,   229,   230,   129,
    -330,    35,   471,   471,   525,   155,   207,   473,   156,   746,
     216,   838,   471,   846,   471,   220,   229,   230,   262,   129,
     473,   473,   565,    85,  -217,   828,   221,   574,   161,   957,
     473,   578,   473,   154,   222,   764,   161,   208,   223,   262,
     454,   154,   129,   129,   565,    35,   161,   944,  1034,   262,
     540,   253,   969,   129,   597,    35,   161,   252,   157,   226,
     469,   847,    85,   224,   246,   247,   155,   225,   262,   156,
     262,   645,   810,   794,   155,   797,   798,   156,   957,   768,
     880,   129,   416,   417,    85,   154,  -427,  -427,   157,   806,
     807,   256,    85,   266,   648,   154,   429,   649,   797,   798,
     618,   811,   812,   267,   958,   268,    79,   269,  -243,   270,
      80,    81,   740,   741,   430,   650,   174,   648,   155,   271,
     649,   156,  -586,   105,   274,   737,   738,   739,   155,   229,
     230,   156,   644,   319,   633,   275,    85,   686,  1233,  1234,
    1210,   740,   741,   663,   383,   632,    85,   129,   320,    35,
     321,   963,   957,  1115,    48,    79,  1056,   233,   157,    80,
      81,   301,  -654,   965,  -215,  -215,  -215,   330,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   759,   957,   760,   761,   157,   332,   157,  -258,   154,
     333,   471,   337,   974,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   957,   471,   473,
     565,   565,   565,   565,   565,  -564,  -564,   249,   161,   712,
     565,   338,   168,   259,   261,   169,   473,  1117,   340,    79,
     928,   929,   372,    80,    81,  -215,   376,   262,   957,   342,
      85,  -564,  -564,  1008,  1009,   690,   157,   344,   161,   159,
     162,   957,   297,   298,   299,   345,   300,  1180,  1043,    79,
     834,   835,   836,    80,    81,  1017,   348,   226,   301,   365,
    1061,   361,   227,   366,   923,   -57,   -57,   -57,  1110,  1111,
     157,   367,  1199,   157,    79,   369,   226,   823,    80,    81,
     388,   257,   443,   158,   158,   157,   401,   171,   938,   835,
     836,   445,   446,   565,   448,   790,  1068,   449,   451,   650,
    -232,  -232,  -232,  1205,   650,    79,   453,  -654,   161,    80,
      81,   676,   455,   458,   456,   459,  1225,   170,    79,   175,
    1114,   478,    80,    81,   464,   957,   228,   229,   230,   466,
     541,   176,   545,  -258,   546,   161,   543,   161,   226,  1002,
     157,   157,   565,   260,   822,   916,   229,   230,   547,   177,
     968,   549,   588,  1119,   583,  1128,   565,   844,   596,   957,
     594,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   226,   831,
     226,   957,   601,   411,  1128,   411,   161,   565,   650,  1118,
    1228,   603,    79,   157,   604,  -112,    80,    81,   229,   230,
     606,   614,   619,  1139,   612,   676,   624,   628,   937,   629,
    1038,   395,   158,   647,   734,   735,   736,   737,   738,   739,
     161,   653,  1189,   161,  1229,   908,    79,   650,   655,   656,
      80,    81,   650,   740,   741,   161,   658,  -609,  1163,  1053,
    1054,   644,  1166,  -450,   664,   675,  -454,   412,   229,   230,
     229,   230,   696,   157,   680,   699,  1237,   701,    79,   710,
     711,   158,    80,    81,   742,   744,   714,   174,   747,   158,
    1221,   749,   751,   752,   407,   565,   754,   565,   413,   158,
     977,   978,   979,   980,   981,   982,   756,   565,   765,   158,
     161,   161,   406,   407,   770,   773,   413,   775,   779,  -304,
    1209,   787,   789,   791,   407,   795,   413,   407,   413,   977,
     978,   979,   980,   981,   982,  1255,   796,   804,   829,   157,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   157,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   650,   840,   171,
     244,   650,   471,   161,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,  -564,  -564,   841,
     473,   876,   565,   878,  1011,   879,   885,   886,  1087,   888,
     890,  -564,  -564,   894,   900,   565,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,  1066,
     910,  -564,  -564,   911,   914,   915,   931,  -575,   932,   947,
    1012,   975,   650,   161,   243,   566,   933,   976,   936,   939,
     977,   978,   979,   980,   981,   982,   983,  1089,   953,  1093,
     951,   961,   966,  -564,  -564,   956,  1098,   566,   967,   902,
     992,   993,   996,  1106,  1000,  1001,  1004,  1045,  1109,  1013,
    1006,   158,  1015,  1016,  1057,  1018,   471,  1019,   565,  1025,
     650,  1032,  1036,  1041,  1050,  1049,  1052,  1058,  1051,  -426,
    -426,  1059,  1064,  1073,   473,   984,  1070,  1076,  1079,   161,
    1142,   158,  1080,  -428,  -428,  1085,  1144,   294,   295,   296,
     297,   298,   299,   161,   300,  1088,  1094,  1095,    31,    32,
     420,  1097,    35,  1096,   368,  1099,   301,   244,   421,   244,
    1101,  1108,  1116,  1129,  1132,  1133,   565,   650,  1169,   650,
    1134,  1135,  1143,    31,    32,   420,  1138,    35,  -239,  1152,
     565,  1145,  1149,   421,  -292,   595,  1156,  1158,  1160,  1161,
    1159,  1100,  1162,  1164,  1173,  1174,  1179,  1181,  1194,  1175,
    1182,   158,  1191,  1190,  1192,  1200,   422,  1195,   650,    68,
      69,    70,    71,    72,  1193,   565,  1203,  1204,  1206,   565,
     423,   243,   244,   243,  1207,  1208,    75,    76,   158,  -298,
     158,   422,   615,  1211,    68,    69,    70,    71,    72,  1212,
    1224,   244,  1220,    85,  1218,   423,   650,   244,  1222,  1227,
    1223,    75,    76,   566,   566,   566,   566,   566,  1230,  1232,
    1236,  1238,  1241,   566,  1240,  1243,  1244,   244,    85,  1245,
     244,   244,  1171,  1247,  1246,  1251,  1252,   565,   650,   244,
    1257,  1260,   584,  1253,   745,  1258,   243,   748,  1261,   158,
    1262,   899,   616,  1254,   650,   617,   634,   635,   909,   753,
    1105,  1020,   995,   907,   975,   243,   586,   973,  1157,  1039,
     976,   243,  1027,   977,   978,   979,   980,   981,   982,   983,
     999,   843,   842,   158,  1078,   954,   158,   715,   716,   717,
     884,   243,     0,   882,   243,   243,     0,     0,   158,   650,
       0,     0,     0,   243,     0,   718,   566,   719,   720,   721,
     722,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,  1040,   427,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   740,   741,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,   158,   566,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   566,
       0,     0,     0,     0,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,     0,     0,  -564,  -564,     0,     0,     0,     0,     0,
     566,     0,     0,     0,     0,     0,   158,   111,   133,   134,
       0,   136,   137,   138,   140,   142,   143,   144,   145,     0,
     147,   148,   149,   150,   151,   152,   153,     0,     0,   164,
     167,     0,     0,     0,     0,     0,   950,     0,     0,     0,
       0,   186,     0,     0,     0,     0,     0,   567,   194,   196,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,     0,   567,
    -656,  -656,  -656,  -656,   732,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   251,   254,     0,     0,   566,     0,
     566,   276,   277,   278,     0,   740,   741,     0,     0,     0,
     566,     0,     0,     0,     0,     0,     0,   427,     0,   279,
       0,   280,   281,     0,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   158,   300,   715,   716,   717,     0,   327,     0,
       0,     0,     0,     0,     0,   301,   158,     0,     0,   329,
       0,     0,   718,     0,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,     0,   276,   277,   278,     0,
       0,   254,     0,     0,   254,   566,     0,   350,   740,   741,
     111,     0,   358,     0,   279,     0,   280,   281,   566,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   164,     0,
     301,     0,   409,     0,     0,   567,   567,   567,   567,   567,
     419,     0,     0,     0,   437,   567,     0,     0,     0,     0,
     887,     0,     0,   839,     0,     0,     0,     0,     0,   452,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   566,   350,   350,     0,     0,     0,     0,   350,     0,
     476,     0,     0,     0,     0,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,     0,   501,     0,     0,     0,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,     0,     0,   350,   141,   350,   523,     0,   567,   566,
       0,     0,     0,   605,     0,     0,     0,   160,   160,   530,
       0,   532,     0,   566,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,   542,     0,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   567,   566,     0,
       0,     0,   566,     0,     0,     0,   585,     0,     0,     0,
       0,   567,     0,     0,     0,     0,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   567,     0,     0,     0,   358,     0,     0,   626,
     566,     0,     0,     0,     0,     0,     0,   111,     0,   636,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,     0,     0,     0,     0,     0,     0,   350,
       0,     0,   660,     0,     0,     0,   335,     0,   665,     0,
     666,     0,   668,   669,   670,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -564,  -564,     0,
       0,     0,     0,   360,  -656,  -656,  -656,  -656,   292,   293,
     294,   295,   296,   297,   298,   299,     0,   300,     0,     0,
     567,     0,   567,     0,     0,   385,     0,     0,     0,   301,
       0,     0,   567,   394,   396,   400,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,     0,   111,     0,   276,
     277,   278,     0,   435,     0,     0,   703,   704,   705,   706,
     707,     0,     0,     0,  -199,     0,   713,   279,     0,   280,
     281,     0,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
       0,   300,     0,     0,  -199,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,   164,     0,   567,     0,     0,
       0,     0,     0,     0,   276,   277,   278,     0,     0,     0,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   526,   279,   784,   280,   281,     0,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,     0,     0,     0,
     808,     0,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,     0,     0,     0,     0,     0,   818,     0,     0,
       0,     0,     0,     0,     0,   358,   825,     0,     0,     0,
       0,   111,     0,   567,     0,     0,   638,     0,     0,     0,
       0,     0,   707,     0,     0,   598,     0,   848,   849,   850,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,   874,   875,     0,   620,   623,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   567,   276,   277,   278,     0,     0,     0,     0,   646,
       0,     0,   891,     0,     0,   567,     0,     0,   896,     0,
     279,   681,   280,   281,     0,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,     0,     0,     0,     0,     0,
     567,     0,     0,     0,   567,   672,   301,     0,   350,   924,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,   277,   278,     0,     0,     0,     0,   940,     0,
       0,   945,   335,   946,   335,     0,     0,     0,     0,   279,
       0,   280,   281,   948,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   567,   300,     0,     0,     0,   851,     0,     0,
       0,     0,     0,     0,     0,   301,     0,     0,   955,     0,
       0,     0,     0,   554,   555,   960,     0,   962,   358,   556,
       0,   557,     0,   394,   350,     0,     0,     0,     0,     0,
       0,     0,     0,   558,     0,     0,     0,     0,     0,   750,
     998,    31,    32,   129,     0,     0,     0,     0,     0,     0,
       0,   559,   111,     0,     0,     0,     0,   435,     0,     0,
     435,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1023,   335,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,   560,
       0,   561,    68,    69,    70,    71,    72,     0,   805,     0,
       0,     0,     0,   423,     0,     0,     0,     0,   562,    75,
      76,   563,     0,   350,   350,     0,     0,   435,   435,     0,
       0,   564,     0,     0,     0,     0,     0,   358,   276,   277,
     278,     0,     0,     0,  1067,     0,     0,     0,     0,     0,
       0,     0,     0,  1072,     0,     0,   279,     0,   280,   281,
       0,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,     0,     0,   111,     0,   111,   111,     0,   396,     0,
     598,     0,   301,     0,     0,     0,     0,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,  1146,     0,     0,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,    12,    13,
    1177,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,  1005,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,   598,     0,    44,     0,
       0,     0,    45,    46,    47,    48,    49,    50,    51,     0,
     435,    52,    53,     0,    54,     0,     0,     0,    55,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,    74,    75,    76,    77,    78,     0,    79,
       0,     0,     0,    80,    81,     0,    82,     0,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,    55,    56,    57,     0,    58,    59,    60,
     630,    62,    63,    64,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   131,    75,
      76,    77,    78,     0,    79,     0,     0,     0,    80,    81,
       0,    82,   689,    83,    84,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,   830,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,  1102,    83,    84,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,  1170,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,  1239,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,   237,     0,     0,
       0,    31,    32,   238,    34,    35,     0,     0,     0,     0,
       0,   239,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,   237,     0,     0,     0,    31,    32,   238,    34,
      35,     0,     0,     0,     0,     0,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   639,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,   279,     0,   280,
     281,    37,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      48,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
     640,    82,   641,     0,     0,     0,    85,   639,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,   280,   281,    37,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    48,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   301,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,   640,    82,     0,     0,     0,
       0,    85,   163,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
     281,    37,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      48,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   740,   741,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,   193,     0,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      48,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   195,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   740,   741,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,   199,     0,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,     0,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
      48,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   131,    75,
      76,    77,     0,     0,     0,     0,   250,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   740,   741,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,   347,     0,     0,
       0,    85,   502,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,  -656,  -656,  -656,  -656,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   740,   741,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   529,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   531,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,  -656,  -656,  -656,  -656,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,     0,   300,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   301,     0,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   432,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   817,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   128,   131,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   129,   408,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   128,   131,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   129,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   131,    75,
      76,    77,   276,   277,   278,     0,     0,     0,     0,     0,
       0,   436,     0,     0,     0,     0,    85,     0,    86,    87,
     279,   941,   280,   281,     0,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,     0,     0,
       0,     0,     0,   279,     0,   280,   281,     0,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   276,   277,
     278,     0,     0,     0,     0,     0,     0,     0,     0,   301,
       0,     0,     0,     0,     0,     0,   279,     0,   280,   281,
       0,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,     0,     0,     0,     0,   276,   277,   278,     0,     0,
       0,     0,   301,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   279,     0,   280,   281,   942,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   276,   277,
     278,     0,     0,     0,     0,     0,     0,     0,     0,   301,
       0,     0,     0,     0,     0,     0,   279,     0,   280,   281,
     302,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,   276,   277,   278,     0,     0,     0,     0,     0,     0,
       0,     0,   301,     0,     0,     0,     0,     0,     0,   279,
       0,   280,   281,   363,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,     0,   300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   301,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   715,   716,   717,     0,
     364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   718,   776,   719,   720,   721,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   276,   277,   278,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
     740,   741,     0,     0,     0,   279,     0,   280,   281,     0,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     276,   277,   278,     0,     0,   450,     0,     0,     0,     0,
       0,   301,     0,     0,     0,     0,     0,     0,   279,     0,
     280,   281,     0,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,     0,     0,     0,     0,     0,   276,   277,
     278,     0,     0,     0,   301,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   279,     0,   280,   281,
     845,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     0,
     300,     0,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,   301,     0,     0,     0,     0,     0,     0,     0,
     279,   450,   280,   281,     0,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,   301,     0,     0,     0,
       0,     0,     0,   279,   524,   280,   281,     0,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,     0,   300,     0,     0,
     276,   277,   278,     0,     0,     0,     0,     0,     0,   301,
       0,     0,     0,     0,     0,     0,     0,     0,   279,     0,
     280,   281,  1031,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,   301,     0,     0,     0,     0,   447,
       0,   279,     0,   280,   281,     0,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,     0,   300,   276,   277,   278,     0,
       0,     0,     0,     0,     0,     0,     0,   301,     0,     0,
       0,     0,   611,     0,   279,     0,   280,   281,     0,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,     0,
     276,   277,   278,     0,     0,     0,     0,     0,     0,     0,
     301,     0,     0,     0,     0,     0,     0,   780,   279,     0,
     280,   281,     0,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,   715,   716,   717,     0,     0,     0,     0,
       0,     0,     0,     0,   301,     0,     0,     0,     0,     0,
     964,   718,     0,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   276,   277,   278,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   740,   741,     0,
       0,     0,   279,  1176,   280,   281,     0,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   301,     0,
     276,   277,   278,     0,     0,     0,     0,  1198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   279,     0,
     280,   281,  1022,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     0,   300,     0,   276,   277,   278,     0,     0,     0,
       0,     0,     0,     0,   301,     0,     0,     0,     0,     0,
       0,     0,   279,   328,   280,   281,     0,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     0,   300,   554,   555,     0,
       0,     0,     0,   556,     0,   557,     0,     0,   301,     0,
       0,     0,     0,     0,     0,     0,     0,   558,     0,     0,
       0,     0,   276,   277,   278,    31,    32,   129,     0,   336,
       0,     0,     0,     0,     0,   559,     0,     0,     0,     0,
     279,     0,   280,   281,     0,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     0,   300,     0,     0,     0,     0,   154,
       0,     0,     0,   684,     0,     0,   301,     0,     0,     0,
       0,     0,     0,   560,     0,   561,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,   423,     0,     0,
       0,     0,   562,    75,    76,   563,   627,     0,     0,     0,
       0,     0,   715,   716,   717,   564,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,     0,
     718,   949,   719,   720,   721,   722,   723,   724,   725,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   735,   736,
     737,   738,   739,   715,   716,   717,     0,     0,     0,     0,
       0,     0,     0,  -564,  -564,     0,   740,   741,     0,     0,
       0,   718,     0,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,     0,   548,   276,   277,   278,     0,
       0,     0,     0,     0,     0,     0,     0,   740,   741,     0,
       0,     0,     0,     0,   279,   809,   280,   281,     0,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     0,   300,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
     301,     0,     0,     0,     0,     0,     0,   279,     0,   280,
     281,     0,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   716,   717,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,     0,     0,   718,
       0,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   277,   278,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   740,   741,     0,     0,   279,
       0,   280,   281,     0,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   717,   300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   301,     0,     0,   718,     0,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   740,   741,     0,   279,     0,   280,
     281,     0,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
       0,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   718,   301,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   740,   741,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   740,   741,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   740,
     741,   721,   722,   723,   724,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   740,   741
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1094)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-656)))

static const yytype_int16 yycheck[] =
{
      24,    25,    84,     4,    28,   132,    28,    11,   538,   433,
      78,   263,   225,   274,     4,    29,    30,    82,    28,   433,
     752,   300,   989,    82,   621,     4,   529,   415,   531,    53,
      44,  1033,     8,  1035,     8,    28,    28,   388,     8,    28,
     903,     8,     8,     8,    31,    31,    50,     8,   269,   270,
      74,     8,    64,    77,   275,     8,    57,    64,   319,     8,
      76,   459,  1155,     8,   796,     8,   318,     8,     8,     8,
       8,   332,   333,    81,    78,   274,     8,     8,     8,    74,
      74,   342,    76,   344,    64,    31,     0,   552,    76,   162,
      68,    64,   219,    76,    76,   156,    64,    93,   148,   320,
      33,   322,   152,   164,    33,   148,   101,   102,  1201,   152,
       0,  1113,   162,   178,   124,    74,   181,   148,    64,   101,
     319,   152,    33,    51,    61,    62,  1219,   162,   122,   130,
     162,   162,   156,   332,   333,    63,   639,   145,    64,   163,
    1003,   148,    64,    76,   212,   169,  1148,    76,    28,    74,
     162,   167,  1154,   165,   127,   162,   152,   152,   165,   127,
      24,    25,    64,    74,    28,    76,   418,   177,   148,   156,
     156,   165,   165,   167,   188,   164,  1039,   164,   156,   167,
     777,   205,   206,   207,   167,   165,   190,   163,   212,    74,
     164,   165,  1159,   152,   164,  1197,   220,   164,   164,   164,
    1202,  1203,    74,   164,    76,   116,   230,   164,   187,   233,
     624,   164,  1214,   627,    76,   164,   240,   221,   222,   164,
     163,   609,   163,   163,   163,   163,    74,   152,   238,   826,
     827,   163,   163,   163,   699,    93,   701,    74,   149,   165,
     165,   152,    66,   165,    64,   466,   238,    76,    74,   148,
      74,   162,    76,   152,   148,   653,   167,    64,   152,   162,
     521,    96,    97,   162,   274,   148,    76,   152,   692,   152,
      33,    81,    74,    95,    96,    97,   300,   538,   300,    93,
     694,   695,   274,   145,   146,   147,   162,   369,    74,    74,
     300,    76,   116,   165,   152,   167,   647,    96,    97,   163,
      93,   149,   163,   164,   152,   122,   330,   127,   300,   319,
      93,    74,   149,    76,   817,   152,   340,   146,   147,    74,
     127,    76,   332,   333,   328,   149,   152,   319,   152,    93,
     122,   166,   342,    74,   344,   162,   146,   147,   152,    74,
     332,   333,   366,   167,   166,   696,   162,   371,   212,    78,
     342,   375,   344,   116,   162,   607,   220,   381,   162,   152,
     170,   116,    74,    74,   388,    76,   230,   166,   965,   152,
     349,   436,   902,    74,   129,    76,   240,   436,   402,    76,
     165,   122,   167,   162,    81,    82,   149,   162,   152,   152,
     152,   456,   671,   791,   149,   130,   131,   152,    78,   612,
     751,    74,   164,   165,   167,   116,   163,   164,   432,   661,
     662,   165,   167,    74,   149,   116,   426,   152,   130,   131,
     430,   673,   674,    74,   153,   164,   155,    64,   163,    64,
     159,   160,    63,    64,   426,   459,   300,   149,   149,    33,
     152,   152,    64,   444,   148,    47,    48,    49,   149,   146,
     147,   152,   456,   148,   444,    64,   167,   539,   164,   165,
    1192,    63,    64,   473,   165,   444,   167,    74,    64,    76,
     127,   895,    78,   153,   101,   155,  1006,   152,   502,   159,
     160,    63,     8,   897,    95,    96,    97,   152,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    74,    78,    76,    77,   529,   148,   531,     8,   116,
     148,   521,   168,   911,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    78,   538,   521,
     554,   555,   556,   557,   558,    61,    62,    80,   402,   563,
     564,     8,   149,    86,    87,   152,   538,   153,   152,   155,
      69,    70,   576,   159,   160,   166,   580,   152,    78,   148,
     167,    61,    62,    69,    70,   544,   590,   148,   432,    24,
      25,    78,    47,    48,    49,   127,    51,   153,   976,   155,
      95,    96,    97,   159,   160,   936,    28,    76,    63,   164,
    1014,   162,    81,    14,   815,    69,    70,    71,    69,    70,
     624,   164,   153,   627,   155,   165,    76,   689,   159,   160,
      14,    81,   156,    24,    25,   639,   163,    28,    95,    96,
      97,   156,    14,   647,   163,   649,  1024,   163,   166,   653,
      69,    70,    71,   153,   658,   155,   169,   163,   502,   159,
     160,   902,    74,    74,   162,   125,   153,   671,   155,   671,
    1074,    28,   159,   160,    74,    78,   145,   146,   147,    64,
     168,   671,   164,   163,     8,   529,    85,   531,    76,   921,
     694,   695,   696,    81,   688,   802,   146,   147,    93,   671,
     901,    74,    76,  1081,    74,  1083,   710,   711,   164,    78,
     163,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,    76,   698,
      76,    78,   163,    81,  1122,    81,   590,   751,   752,  1080,
     153,    74,   155,   757,    64,    14,   159,   160,   146,   147,
     166,    14,    74,  1094,   162,  1006,   128,    74,   830,   156,
     971,   755,   163,    14,    44,    45,    46,    47,    48,    49,
     624,   125,  1160,   627,   153,   789,   155,   791,   168,   168,
     159,   160,   796,    63,    64,   639,   162,   162,  1129,  1000,
    1001,   785,  1133,   162,   168,   168,   162,   145,   146,   147,
     146,   147,    14,   817,   168,   164,   153,   164,   155,   162,
     152,   212,   159,   160,   166,    74,   148,   671,    74,   220,
    1208,    74,    14,   162,   227,   839,   164,   841,   231,   230,
     111,   112,   113,   114,   115,   116,   162,   851,   166,   240,
     694,   695,   145,   246,    14,   164,   249,   158,   162,   101,
    1191,   163,   152,   126,   257,   165,   259,   260,   261,   111,
     112,   113,   114,   115,   116,  1253,   162,   168,    74,   883,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   897,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   911,   168,   300,
     958,   915,   902,   757,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    61,    62,     8,
     902,   105,   936,    74,   928,    74,    14,   168,  1045,   166,
     163,    61,    62,   158,   163,   949,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,  1021,
     165,    61,    62,     8,   163,     8,   164,   162,    86,   163,
     929,   102,   976,   817,   958,   366,   164,   108,    14,   164,
     111,   112,   113,   114,   115,   116,   117,  1049,   163,  1051,
     162,    28,   156,    61,    62,   166,  1058,   388,   164,   127,
     163,   108,   161,  1065,    64,    64,   168,   988,  1070,   164,
     127,   402,   163,   163,  1008,    92,  1006,   164,  1022,   106,
    1024,   164,   168,    74,   162,   165,    76,    28,   165,   163,
     164,    71,   164,   156,  1006,   166,   165,   163,   168,   883,
    1102,   432,    14,   163,   164,    76,  1108,    44,    45,    46,
      47,    48,    49,   897,    51,    74,    14,   168,    72,    73,
      74,    28,    76,   168,   164,   164,    63,  1115,    82,  1117,
     163,   165,   156,    14,    74,    14,  1080,  1081,  1140,  1083,
     166,    76,    76,    72,    73,    74,   166,    76,    71,   163,
    1094,   166,    48,    82,    93,   163,   166,   164,   109,   164,
      93,  1060,   148,    76,    90,   163,    68,   156,  1170,   166,
      70,   502,    14,    74,   162,   156,   130,   164,  1122,   133,
     134,   135,   136,   137,    76,  1129,   156,    48,    48,  1133,
     144,  1115,  1180,  1117,    74,     8,   150,   151,   529,    74,
     531,   130,   156,    88,   133,   134,   135,   136,   137,   165,
    1212,  1199,    89,   167,    87,   144,  1160,  1205,   163,    48,
     164,   150,   151,   554,   555,   556,   557,   558,   156,   156,
     166,    87,  1234,   564,    48,   156,    87,  1225,   167,    89,
    1228,  1229,  1141,   105,   166,   156,   156,  1191,  1192,  1237,
      76,   165,   381,   162,   576,   163,  1180,   580,  1260,   590,
     166,   778,   426,  1249,  1208,   426,   444,   444,   791,   590,
    1063,   940,   915,   785,   102,  1199,   386,   910,  1122,   972,
     108,  1205,   953,   111,   112,   113,   114,   115,   116,   117,
     918,   710,   709,   624,  1037,   883,   627,     9,    10,    11,
     757,  1225,    -1,   755,  1228,  1229,    -1,    -1,   639,  1253,
      -1,    -1,    -1,  1237,    -1,    27,   647,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   166,   238,
     671,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   694,   695,   696,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   710,
      -1,    -1,    -1,    -1,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
     751,    -1,    -1,    -1,    -1,    -1,   757,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,   366,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   817,    -1,    -1,   388,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    81,    82,    -1,    -1,   839,    -1,
     841,     9,    10,    11,    -1,    63,    64,    -1,    -1,    -1,
     851,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,    27,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   883,    51,     9,    10,    11,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    63,   897,    -1,    -1,   146,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,     9,    10,    11,    -1,
      -1,   178,    -1,    -1,   181,   936,    -1,   184,    63,    64,
     187,    -1,   189,    -1,    27,    -1,    29,    30,   949,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      63,    -1,   229,    -1,    -1,   554,   555,   556,   557,   558,
     237,    -1,    -1,    -1,   241,   564,    -1,    -1,    -1,    -1,
     168,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1022,   269,   270,    -1,    -1,    -1,    -1,   275,    -1,
     277,    -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,    -1,   301,    -1,    -1,    -1,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,    -1,    -1,   320,    11,   322,   323,    -1,   647,  1080,
      -1,    -1,    -1,   166,    -1,    -1,    -1,    24,    25,   336,
      -1,   338,    -1,  1094,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   349,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   696,  1129,    -1,
      -1,    -1,  1133,    -1,    -1,    -1,   383,    -1,    -1,    -1,
      -1,   710,    -1,    -1,    -1,    -1,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   751,    -1,    -1,    -1,   433,    -1,    -1,   436,
    1191,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,   446,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,   466,
      -1,    -1,   469,    -1,    -1,    -1,   163,    -1,   475,    -1,
     477,    -1,   479,   480,   481,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,   190,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
     839,    -1,   841,    -1,    -1,   212,    -1,    -1,    -1,    63,
      -1,    -1,   851,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,   544,    -1,     9,
      10,    11,    -1,   240,    -1,    -1,   554,   555,   556,   557,
     558,    -1,    -1,    -1,   128,    -1,   564,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,   604,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   612,    -1,   936,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
     949,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   328,    27,   640,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
     667,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   684,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   692,   693,    -1,    -1,    -1,
      -1,   698,    -1,  1022,    -1,    -1,   166,    -1,    -1,    -1,
      -1,    -1,   710,    -1,    -1,   402,    -1,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,    -1,   432,   433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1080,     9,    10,    11,    -1,    -1,    -1,    -1,   456,
      -1,    -1,   769,    -1,    -1,  1094,    -1,    -1,   775,    -1,
      27,   166,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
    1129,    -1,    -1,    -1,  1133,   502,    63,    -1,   815,   816,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,   835,    -1,
      -1,   839,   529,   841,   531,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,   851,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,  1191,    51,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,   885,    -1,
      -1,    -1,    -1,    44,    45,   892,    -1,   894,   895,    50,
      -1,    52,    -1,   590,   901,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,   166,
     917,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,   929,    -1,    -1,    -1,    -1,   624,    -1,    -1,
     627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   949,   639,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   971,    -1,    -1,    -1,    -1,   130,
      -1,   132,   133,   134,   135,   136,   137,    -1,   166,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,   152,    -1,  1000,  1001,    -1,    -1,   694,   695,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,  1014,     9,    10,
      11,    -1,    -1,    -1,  1022,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1030,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,  1060,    -1,  1062,  1063,    -1,   755,    -1,
     757,    -1,    63,    -1,    -1,    -1,    -1,  1074,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   785,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,  1110,    -1,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1141,    -1,    -1,    -1,    44,    45,
    1147,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,   166,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,   883,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
     897,   107,   108,    -1,   110,    -1,    -1,    -1,   114,   115,
     116,    -1,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,   153,    -1,   155,
      -1,    -1,    -1,   159,   160,    -1,   162,    -1,   164,   165,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,   153,    -1,   155,    -1,    -1,    -1,   159,   160,
      -1,   162,    28,   164,   165,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    28,   164,   165,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    28,   164,   165,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    28,   164,   165,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,    -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,   164,   165,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,   164,   165,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    33,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    27,    -1,    29,
      30,    82,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     101,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    33,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    29,    30,    82,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   101,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,   162,    -1,    -1,    -1,
      -1,   167,    33,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      30,    82,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     101,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,   164,    -1,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     101,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,   164,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,   164,    -1,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     101,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,   163,    -1,    -1,
      -1,   167,    33,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    33,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    33,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    33,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    33,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,    -1,   144,    -1,    -1,    12,    13,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,     3,     4,     5,     6,     7,    -1,   144,    -1,
      -1,    12,    13,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,   167,    -1,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,    -1,    -1,    -1,
      -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
     151,   152,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,
      27,    28,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,   164,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
     164,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,   164,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    93,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     9,    10,    11,
      -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
       9,    10,    11,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
     163,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,   163,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   163,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,   163,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,   156,
      -1,    27,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,   156,    -1,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,   156,    27,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
     156,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    27,   156,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,   128,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,   128,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,     9,    10,    11,    72,    73,    74,    -1,   128,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,   128,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,   152,    93,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   162,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    63,    64,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    93,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    27,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    11,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    63,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   172,   173,     0,   174,     3,     4,     5,     6,     7,
      12,    13,    44,    45,    50,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    64,    65,    66,    67,
      68,    72,    73,    74,    75,    76,    78,    82,    83,    84,
      85,    87,    89,    91,    94,    98,    99,   100,   101,   102,
     103,   104,   107,   108,   110,   114,   115,   116,   118,   119,
     120,   121,   122,   123,   124,   129,   130,   132,   133,   134,
     135,   136,   137,   144,   149,   150,   151,   152,   153,   155,
     159,   160,   162,   164,   165,   167,   169,   170,   175,   176,
     185,   189,   190,   222,   251,   252,   255,   257,   260,   262,
     333,   335,   349,   350,   351,   352,   355,   364,   375,   380,
     381,   385,   386,   387,   389,   390,   400,   401,   402,   403,
     405,   406,   408,   409,   415,   425,   429,   431,    13,    74,
     116,   149,   352,   385,   385,   162,   385,   385,   385,   335,
     385,   390,   385,   385,   385,   385,   346,   385,   385,   385,
     385,   385,   385,   385,   116,   149,   152,   175,   364,   389,
     390,   402,   389,    33,   385,   419,   420,   385,   149,   152,
     175,   364,   366,   367,   402,   406,   408,   415,   162,   372,
     386,   162,   386,    28,    64,   323,   385,   197,   195,   162,
     162,   207,   386,   164,   385,   164,   385,    74,    74,   164,
     335,   385,   390,   208,   385,   101,   102,   152,   175,   179,
     180,    76,   167,   297,   298,   122,   122,    76,   299,   352,
     162,   162,   162,   162,   162,   162,    76,    81,   145,   146,
     147,   421,   422,   152,   165,   175,   175,    68,    74,    82,
      87,    89,   211,   335,   387,   186,    81,    82,   221,   421,
     157,   385,   333,   349,   385,   186,   165,    81,   373,   421,
      81,   421,   152,   356,     8,   164,    74,    74,   164,    64,
      64,    33,   253,   404,   148,    64,     9,    10,    11,    27,
      29,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      51,    63,   164,    61,    62,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   363,   148,
      64,   127,    64,   165,   167,   408,   253,   385,   128,   385,
     152,   175,   148,   148,   388,   390,   128,   168,     8,   383,
     152,   175,   148,   334,   148,   127,   408,   163,    28,   191,
     385,   410,     8,   164,   189,   386,   324,   325,   385,   335,
     390,   162,   202,   164,   164,   164,    14,   164,   164,   165,
     164,   152,   175,   181,   182,   152,   175,   183,   184,   175,
      93,     8,   164,   165,   387,   390,     8,   164,    14,     8,
     164,   253,   249,   250,   390,   335,   390,   426,   428,   335,
     390,   163,   336,   419,    64,   127,   145,   422,    75,   385,
     390,    81,   145,   422,   175,   178,   164,   165,   358,   385,
      74,    82,   130,   144,   216,   217,   218,   375,   407,   408,
     415,    31,    33,   162,   267,   390,   162,   385,    31,   156,
     156,   164,   164,   156,   187,   156,    14,   156,   163,   163,
     163,   166,   385,   169,   170,    74,   162,   294,    74,   125,
     261,   259,   410,   410,    74,   347,    64,    74,   122,   165,
     400,   408,   414,   415,   410,   340,   385,   341,    28,   343,
     338,   339,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     366,   385,    33,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   294,    74,   400,   414,
     410,   391,   410,   385,   163,   335,   390,   175,    74,    33,
     385,    33,   385,   175,   400,   294,   374,   400,   368,   193,
     189,   168,   385,    85,   196,   164,     8,    93,    93,    74,
     271,    28,   165,   272,    44,    45,    50,    52,    64,    82,
     130,   132,   149,   152,   162,   175,   364,   375,   376,   377,
     378,   379,   430,   186,   175,    93,     8,   164,   175,    93,
       8,   164,    93,    74,   180,   385,   298,   377,    76,   348,
       8,   163,     8,   163,   163,   163,   164,   129,   390,   416,
     417,   163,   423,    74,    64,   166,   166,   357,   173,   177,
     294,   156,   162,    81,    14,   156,   216,   217,   408,    74,
     390,   267,   324,   390,   128,   266,   385,    93,    74,   156,
     121,   188,   189,   222,   251,   252,   385,   342,   166,    33,
     161,   163,   295,   296,   335,   349,   390,    14,   149,   152,
     175,   365,   258,   125,   263,   168,   168,   256,   162,   410,
     385,   360,   359,   408,   168,   385,   385,   345,   385,   385,
     385,    66,   390,   362,   361,   168,   400,   411,   413,   414,
     168,   166,   388,   388,   128,   411,   186,   192,   198,    28,
     189,   277,   199,   326,   205,   203,    14,     8,   163,   164,
     273,   164,   273,   378,   378,   378,   378,   378,   382,   384,
     162,   152,   175,   378,   148,     9,    10,    11,    27,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      63,    64,   166,    93,    74,   182,    93,    74,   184,    74,
     166,    14,   162,   250,   164,   427,   162,     8,   163,    74,
      76,    77,   424,   385,   294,   166,   173,   228,   419,   219,
      14,   212,   266,   164,   267,   158,    93,   267,   213,   162,
     156,   331,   332,   388,   385,     8,   163,   163,   377,   152,
     175,   126,   264,   265,   365,   165,   162,   130,   131,   290,
     291,   292,   293,   365,   168,   166,   294,   294,   385,    28,
     366,   294,   294,   412,   392,    64,   165,    33,   385,   369,
     194,   278,   386,   186,   324,   385,   267,   267,   377,    74,
      28,   189,   270,   273,    95,    96,    97,   273,   166,   128,
     168,     8,   383,   382,   175,   163,    74,   122,   378,   378,
     378,    28,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   105,   237,    74,    74,
     377,   290,   428,   418,   417,    14,   168,   168,   166,   210,
     163,   385,   220,   214,   158,   230,   385,   223,   266,   214,
     163,    64,   127,   327,   328,   329,   394,   296,   175,   265,
     165,     8,   300,   290,   163,     8,   253,   344,   337,   396,
     397,   398,   399,   410,   385,   388,   370,   283,    69,    70,
     285,   164,    86,   164,   266,   266,    14,   186,    95,   164,
     385,    28,   164,   276,   166,   378,   378,   163,   378,    28,
     168,   162,   209,   163,   416,   385,   166,    78,   153,   222,
     385,    28,   385,   324,   156,   267,   156,   164,   410,   411,
     394,    64,   330,   300,   365,   102,   108,   111,   112,   113,
     114,   115,   116,   117,   166,   301,   304,   317,   318,   319,
     320,   322,   163,   108,   353,   292,   161,   254,   385,   374,
      64,    64,   294,   393,   168,   166,   127,   371,    69,    70,
     288,   386,   189,   164,   200,   163,   163,   377,    92,   164,
     276,   275,   128,   378,   238,   106,   242,   353,   163,   229,
     215,   163,   164,   235,   266,   226,   168,   395,   410,   327,
     166,    74,   305,   365,   302,   352,   320,     8,   164,   165,
     162,   165,    76,   410,   410,   394,   411,   386,    28,    71,
     279,   324,   206,   204,   164,   274,   186,   378,   365,   243,
     165,   280,   385,   156,   231,   210,   163,   210,   399,   168,
      14,     8,   164,   165,   306,    76,   321,   253,    74,   186,
      33,    76,   354,   186,    14,   168,   168,    28,   186,   164,
     189,   163,    28,   189,   269,   269,   186,   239,   165,   186,
      69,    70,   286,   233,   324,   153,   156,   153,   377,   365,
      74,   307,   308,   309,   310,   312,   313,   314,   365,    14,
       8,   164,    74,    14,   166,    76,     8,   163,   166,   377,
     284,   201,   186,    76,   186,   166,   385,    68,   156,    48,
     287,   210,   163,   236,   224,   227,   166,   309,   164,    93,
     109,   164,   148,   377,    76,   303,   377,    33,    76,   186,
      28,   189,   268,    90,   163,   166,   156,   385,   210,    68,
     153,   156,    70,   289,   210,   289,   315,   320,   311,   365,
      74,    14,   162,    76,   186,   164,   240,   281,   156,   153,
     156,   234,   232,   156,    48,   153,    48,    74,     8,   377,
     290,    88,   165,   210,   282,   289,   210,   210,    87,   225,
      89,   365,   163,   164,   186,   153,   210,    48,   153,   153,
     156,   289,   156,   164,   165,   316,   166,   153,    87,    48,
      48,   186,   241,   156,    87,    89,   166,   105,   244,   245,
     246,   156,   156,   162,   246,   365,   247,    76,   163,   248,
     165,   186,   166
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
#line 237 "Zend56/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 241 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 241 "Zend56/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 246 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 247 "Zend56/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 251 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 252 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 253 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 254 "Zend56/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 255 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 256 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 257 "Zend56/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 258 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 259 "Zend56/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 260 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 261 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 262 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 263 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 264 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 273 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 274 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 275 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 276 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 285 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 286 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 287 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 288 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 297 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 298 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 299 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 300 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 304 "Zend56/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 305 "Zend56/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 309 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 309 "Zend56/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 319 "Zend56/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 324 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 325 "Zend56/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 330 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 330 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 330 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 331 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 331 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 331 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 332 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 332 "Zend56/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 332 "Zend56/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 333 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 333 "Zend56/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 333 "Zend56/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 337 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 339 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 341 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 342 "Zend56/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 343 "Zend56/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 343 "Zend56/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 344 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 345 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 346 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 347 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 348 "Zend56/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 349 "Zend56/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 350 "Zend56/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 351 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 355 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 356 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 359 "Zend56/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 360 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 361 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 363 "Zend56/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 364 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 365 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 366 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 366 "Zend56/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 368 "Zend56/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 369 "Zend56/zend_language_parser.y"
    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 370 "Zend56/zend_language_parser.y"
    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 371 "Zend56/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 372 "Zend56/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 377 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 382 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 383 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 384 "Zend56/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 385 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 386 "Zend56/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 387 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 392 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 393 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 393 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 397 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 398 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 402 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 404 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 408 "Zend56/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 408 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 409 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 409 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 410 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 411 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 415 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 416 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 417 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 424 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 426 "Zend56/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 433 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 438 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 439 "Zend56/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 440 "Zend56/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 442 "Zend56/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 446 "Zend56/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 448 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 449 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 450 "Zend56/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 451 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 453 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 454 "Zend56/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 455 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 457 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 460 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 462 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 465 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 466 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 467 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 469 "Zend56/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 472 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 473 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 474 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 476 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 477 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 478 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 482 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 483 "Zend56/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 484 "Zend56/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 485 "Zend56/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 486 "Zend56/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 487 "Zend56/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 490 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 491 "Zend56/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 491 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 495 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 496 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 500 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 501 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 505 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 505 "Zend56/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 505 "Zend56/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 514 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 518 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 522 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 526 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 527 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 531 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 532 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 536 "Zend56/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 538 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 543 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 547 "Zend56/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 549 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 553 "Zend56/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 558 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 559 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 560 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 561 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 565 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 566 "Zend56/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 570 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 584 "Zend56/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 585 "Zend56/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 589 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 590 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 594 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 595 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 619 "Zend56/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 620 "Zend56/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 625 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 626 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 627 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 628 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 633 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 634 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 634 "Zend56/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 635 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 635 "Zend56/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 654 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 654 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 659 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 659 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 660 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 660 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 665 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 665 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 706 "Zend56/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV, &(yyvsp[(4) - (4)]), NULL, &(yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]).op_type, (yyvsp[(3) - (4)]).op_type TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 708 "Zend56/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyvsp[(6) - (6)]), &(yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]).op_type, (yyvsp[(3) - (6)]).op_type TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 713 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 714 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 715 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 716 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 721 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 722 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 723 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 733 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 734 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR TSRMLS_CC); }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 735 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF TSRMLS_CC); }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 736 "Zend56/zend_language_parser.y"
    { zend_do_unpack_params(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 740 "Zend56/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 741 "Zend56/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 746 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 747 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 748 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 753 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 754 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 755 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 756 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 768 "Zend56/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 771 "Zend56/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 773 "Zend56/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 781 "Zend56/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 782 "Zend56/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 806 "Zend56/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 810 "Zend56/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 811 "Zend56/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]) TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 815 "Zend56/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 816 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 820 "Zend56/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 824 "Zend56/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 825 "Zend56/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 829 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 830 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 834 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 835 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 839 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 840 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 844 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 845 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 849 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 850 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 854 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 855 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 856 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 857 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 858 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 859 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 863 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 864 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 865 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 866 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 870 "Zend56/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 871 "Zend56/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 875 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 876 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 881 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 882 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 886 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 886 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 887 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 891 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 892 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 896 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 897 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 901 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 901 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 902 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 903 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 907 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 908 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 909 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 913 "Zend56/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 913 "Zend56/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 917 "Zend56/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 917 "Zend56/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 918 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 919 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 920 "Zend56/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 920 "Zend56/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 921 "Zend56/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 922 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 923 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 924 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 925 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 926 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 927 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 928 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 929 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 930 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 931 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 932 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 933 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 934 "Zend56/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 935 "Zend56/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 936 "Zend56/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 937 "Zend56/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 938 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 938 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 939 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 939 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 940 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 940 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 941 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 941 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 942 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 945 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 946 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 947 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 948 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 949 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 950 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 951 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 952 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 953 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 954 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 955 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 956 "Zend56/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 957 "Zend56/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 958 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 959 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 960 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 961 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 962 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 963 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 964 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 965 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 966 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 967 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 968 "Zend56/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 969 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 970 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 971 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 971 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 972 "Zend56/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 973 "Zend56/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 974 "Zend56/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 975 "Zend56/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 976 "Zend56/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 977 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 978 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 979 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 980 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 981 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 982 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 983 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 984 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 985 "Zend56/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 986 "Zend56/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 986 "Zend56/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 987 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 988 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 989 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 990 "Zend56/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 991 "Zend56/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 992 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 993 "Zend56/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 995 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 996 "Zend56/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 998 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 1002 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 1003 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 1004 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 1005 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 1009 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 1010 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 1011 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 1012 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1016 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1017 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1021 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1030 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1031 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1032 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1033 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1037 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1038 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1039 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1040 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1041 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1042 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1043 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1044 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1045 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1046 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1047 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1048 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1049 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1050 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1051 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1052 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1056 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1057 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1058 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1059 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1063 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1064 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1065 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1071 "Zend56/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1072 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1077 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1078 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1079 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1080 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1091 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1095 "Zend56/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1096 "Zend56/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1097 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1101 "Zend56/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1102 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1103 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1108 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1109 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1114 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1115 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1116 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1117 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1118 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1119 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1120 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1121 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1122 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1123 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1124 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1125 "Zend56/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1129 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1133 "Zend56/zend_language_parser.y"
    { zend_do_constant_expression(&(yyval), (yyvsp[(1) - (1)]).u.ast TSRMLS_CC); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1137 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1138 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1139 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1140 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1141 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1142 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1143 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1144 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1145 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1146 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1150 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_FETCH_DIM_R, (yyvsp[(1) - (4)]).u.ast, (yyvsp[(3) - (4)]).u.ast); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1151 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1152 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1153 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1154 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_POW, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1155 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_DIV, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1156 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MOD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1157 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BOOL_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1158 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BW_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1159 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1160 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1161 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1162 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1163 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1164 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_CONCAT, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1165 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1166 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1167 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1168 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1169 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1170 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1171 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1172 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1173 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1174 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1175 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1176 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1177 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1178 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (4)]).u.ast, NULL, (yyvsp[(4) - (4)]).u.ast); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1179 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (5)]).u.ast, (yyvsp[(3) - (5)]).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1180 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_PLUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1181 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_MINUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1182 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1186 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1187 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1188 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1189 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1193 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1194 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1195 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1196 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1197 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1198 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1199 "Zend56/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1203 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1204 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_shrink(&(yyvsp[(1) - (2)]).u.ast); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1213 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (5)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1214 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1215 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (3)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1216 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (1)]).u.ast); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1220 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1221 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1225 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1226 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1231 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1236 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1241 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1246 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1247 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1248 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1249 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1253 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1254 "Zend56/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1259 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1259 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1263 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1264 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1268 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1269 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1273 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1274 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1275 "Zend56/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1279 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1280 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1284 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1285 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1290 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1294 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1295 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1296 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1300 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1301 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1302 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1307 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 1308 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 1309 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 1313 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 1314 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 1318 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 597:
/* Line 1787 of yacc.c  */
#line 1319 "Zend56/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 598:
/* Line 1787 of yacc.c  */
#line 1320 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 599:
/* Line 1787 of yacc.c  */
#line 1325 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 600:
/* Line 1787 of yacc.c  */
#line 1326 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 601:
/* Line 1787 of yacc.c  */
#line 1330 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 602:
/* Line 1787 of yacc.c  */
#line 1331 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 1336 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 1337 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 1337 "Zend56/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 1341 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 1342 "Zend56/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 608:
/* Line 1787 of yacc.c  */
#line 1343 "Zend56/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 609:
/* Line 1787 of yacc.c  */
#line 1347 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 610:
/* Line 1787 of yacc.c  */
#line 1348 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 611:
/* Line 1787 of yacc.c  */
#line 1352 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 612:
/* Line 1787 of yacc.c  */
#line 1353 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 615:
/* Line 1787 of yacc.c  */
#line 1363 "Zend56/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 616:
/* Line 1787 of yacc.c  */
#line 1364 "Zend56/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 617:
/* Line 1787 of yacc.c  */
#line 1364 "Zend56/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 618:
/* Line 1787 of yacc.c  */
#line 1365 "Zend56/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 619:
/* Line 1787 of yacc.c  */
#line 1370 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 620:
/* Line 1787 of yacc.c  */
#line 1371 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 621:
/* Line 1787 of yacc.c  */
#line 1375 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 622:
/* Line 1787 of yacc.c  */
#line 1376 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 623:
/* Line 1787 of yacc.c  */
#line 1377 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 624:
/* Line 1787 of yacc.c  */
#line 1378 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 625:
/* Line 1787 of yacc.c  */
#line 1379 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 626:
/* Line 1787 of yacc.c  */
#line 1380 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 627:
/* Line 1787 of yacc.c  */
#line 1381 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 628:
/* Line 1787 of yacc.c  */
#line 1382 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 629:
/* Line 1787 of yacc.c  */
#line 1386 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 630:
/* Line 1787 of yacc.c  */
#line 1387 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 631:
/* Line 1787 of yacc.c  */
#line 1388 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 632:
/* Line 1787 of yacc.c  */
#line 1389 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 633:
/* Line 1787 of yacc.c  */
#line 1395 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 634:
/* Line 1787 of yacc.c  */
#line 1396 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 635:
/* Line 1787 of yacc.c  */
#line 1396 "Zend56/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 636:
/* Line 1787 of yacc.c  */
#line 1397 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 637:
/* Line 1787 of yacc.c  */
#line 1398 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 638:
/* Line 1787 of yacc.c  */
#line 1399 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 639:
/* Line 1787 of yacc.c  */
#line 1400 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 640:
/* Line 1787 of yacc.c  */
#line 1405 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 641:
/* Line 1787 of yacc.c  */
#line 1406 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 642:
/* Line 1787 of yacc.c  */
#line 1407 "Zend56/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 643:
/* Line 1787 of yacc.c  */
#line 1412 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 644:
/* Line 1787 of yacc.c  */
#line 1413 "Zend56/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 645:
/* Line 1787 of yacc.c  */
#line 1414 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 646:
/* Line 1787 of yacc.c  */
#line 1415 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 647:
/* Line 1787 of yacc.c  */
#line 1416 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 648:
/* Line 1787 of yacc.c  */
#line 1417 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 649:
/* Line 1787 of yacc.c  */
#line 1418 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 650:
/* Line 1787 of yacc.c  */
#line 1419 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 651:
/* Line 1787 of yacc.c  */
#line 1423 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 652:
/* Line 1787 of yacc.c  */
#line 1424 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 653:
/* Line 1787 of yacc.c  */
#line 1424 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 654:
/* Line 1787 of yacc.c  */
#line 1428 "Zend56/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 655:
/* Line 1787 of yacc.c  */
#line 1429 "Zend56/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 656:
/* Line 1787 of yacc.c  */
#line 1433 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 657:
/* Line 1787 of yacc.c  */
#line 1434 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 658:
/* Line 1787 of yacc.c  */
#line 1438 "Zend56/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 659:
/* Line 1787 of yacc.c  */
#line 1442 "Zend56/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7739 "Zend56/zend_language_parser.c"
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
#line 1445 "Zend56/zend_language_parser.y"


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
