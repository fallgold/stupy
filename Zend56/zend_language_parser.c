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
   | Copyright (c) 1998-2015 Zend Technologies Ltd. (http://www.zend.com) |
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


/* Line 371 of yacc.c  */
#line 121 "Zend56/zend_language_parser.c"

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
#line 50 "Zend56/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 161 "Zend56/zend_language_parser.c"

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
     T_ELLIPSIS = 389,
     T_START_TPL = 390,
     T_START_TPL_WITH_ECHO = 391,
     T_START_TPL_WITH_SCRIPT = 392,
     T_END_TPL = 393,
     T_ATTR_FILE = 394,
     T_IN = 395,
     T_START_TPL_TRANSLATE = 396,
     T_TPL_INCLUDE = 397
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
#define T_ELLIPSIS 389
#define T_START_TPL 390
#define T_START_TPL_WITH_ECHO 391
#define T_START_TPL_WITH_SCRIPT 392
#define T_END_TPL 393
#define T_ATTR_FILE 394
#define T_IN 395
#define T_START_TPL_TRANSLATE 396
#define T_TPL_INCLUDE 397



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
#line 484 "Zend56/zend_language_parser.c"

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
#define YYLAST   7791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  262
/* YYNRULES -- Number of rules.  */
#define YYNRULES  667
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1284

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
       2,     2,     2,    50,   167,     2,   168,    49,    33,     2,
     162,   163,    47,    44,     8,    45,    46,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,   164,
      38,    14,    39,    27,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   169,    32,     2,   170,     2,     2,     2,
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
     335,   336,   337,   338,   339,   353,   354,   355,   361,   364,
     367,   368,   370,   373,   374,   380,   381,   387,   388,   389,
     394,   396,   398,   400,   402,   404,   408,   413,   414,   419,
     420,   426,   428,   431,   433,   435,   437,   441,   445,   450,
     454,   458,   464,   468,   473,   474,   475,   476,   495,   496,
     497,   513,   514,   515,   527,   528,   529,   530,   549,   550,
     551,   569,   570,   571,   587,   589,   590,   592,   595,   596,
     597,   608,   610,   614,   616,   618,   620,   621,   623,   624,
     626,   627,   638,   639,   648,   649,   657,   659,   662,   664,
     667,   668,   671,   673,   674,   677,   678,   681,   683,   687,
     688,   691,   693,   696,   698,   703,   705,   710,   712,   717,
     721,   727,   731,   736,   741,   747,   748,   749,   756,   757,
     763,   765,   767,   769,   774,   775,   776,   782,   783,   784,
     792,   793,   802,   803,   804,   811,   812,   815,   816,   821,
     825,   826,   830,   831,   836,   838,   839,   841,   845,   850,
     857,   858,   860,   862,   864,   867,   871,   875,   877,   881,
     883,   885,   888,   891,   895,   897,   899,   902,   907,   911,
     917,   919,   923,   926,   927,   928,   933,   936,   938,   939,
     949,   953,   955,   959,   961,   965,   966,   968,   970,   973,
     976,   979,   983,   985,   989,   991,   993,   997,  1002,  1006,
    1007,  1009,  1011,  1015,  1017,  1019,  1020,  1022,  1024,  1027,
    1029,  1031,  1033,  1035,  1037,  1039,  1043,  1049,  1051,  1055,
    1061,  1066,  1070,  1072,  1073,  1075,  1076,  1081,  1083,  1086,
    1088,  1093,  1097,  1098,  1102,  1104,  1106,  1107,  1108,  1111,
    1112,  1117,  1118,  1126,  1130,  1135,  1136,  1144,  1147,  1151,
    1155,  1159,  1163,  1167,  1171,  1175,  1179,  1183,  1187,  1191,
    1195,  1198,  1201,  1204,  1207,  1208,  1213,  1214,  1219,  1220,
    1225,  1226,  1231,  1235,  1239,  1243,  1247,  1251,  1255,  1259,
    1263,  1267,  1271,  1275,  1279,  1282,  1285,  1288,  1291,  1295,
    1299,  1303,  1307,  1311,  1315,  1319,  1323,  1327,  1329,  1331,
    1332,  1338,  1339,  1340,  1348,  1349,  1355,  1357,  1360,  1363,
    1366,  1369,  1372,  1375,  1378,  1381,  1382,  1386,  1388,  1390,
    1392,  1396,  1399,  1401,  1402,  1413,  1414,  1426,  1429,  1432,
    1437,  1442,  1447,  1452,  1457,  1462,  1467,  1471,  1473,  1474,
    1479,  1483,  1488,  1490,  1493,  1494,  1498,  1499,  1505,  1506,
    1511,  1512,  1518,  1519,  1525,  1526,  1532,  1533,  1539,  1540,
    1544,  1546,  1548,  1552,  1555,  1557,  1561,  1564,  1566,  1568,
    1569,  1570,  1577,  1579,  1582,  1583,  1586,  1587,  1590,  1592,
    1593,  1595,  1597,  1598,  1600,  1602,  1604,  1606,  1608,  1610,
    1612,  1614,  1616,  1618,  1620,  1624,  1627,  1631,  1633,  1635,
    1637,  1639,  1643,  1646,  1651,  1655,  1657,  1659,  1661,  1666,
    1670,  1674,  1678,  1682,  1686,  1690,  1693,  1696,  1700,  1704,
    1708,  1712,  1716,  1720,  1724,  1728,  1732,  1736,  1740,  1744,
    1748,  1752,  1756,  1760,  1764,  1768,  1772,  1777,  1783,  1786,
    1789,  1793,  1795,  1797,  1801,  1804,  1806,  1808,  1810,  1812,
    1816,  1820,  1822,  1823,  1826,  1827,  1829,  1835,  1839,  1843,
    1845,  1847,  1849,  1853,  1857,  1859,  1861,  1863,  1864,  1865,
    1873,  1875,  1878,  1879,  1880,  1885,  1890,  1895,  1896,  1899,
    1901,  1903,  1904,  1906,  1909,  1913,  1917,  1919,  1924,  1925,
    1931,  1933,  1935,  1937,  1939,  1942,  1944,  1946,  1949,  1954,
    1959,  1961,  1963,  1968,  1969,  1971,  1973,  1974,  1977,  1982,
    1987,  1989,  1991,  1995,  1997,  2000,  2004,  2006,  2008,  2009,
    2015,  2016,  2017,  2020,  2026,  2030,  2034,  2036,  2043,  2048,
    2053,  2056,  2059,  2062,  2064,  2067,  2069,  2072,  2075,  2078,
    2080,  2081,  2087,  2091,  2095,  2102,  2106,  2110,  2114,  2116,
    2118,  2120,  2125,  2130,  2135,  2138,  2141,  2146,  2149,  2152,
    2154,  2155,  2160,  2162,  2164,  2168,  2172,  2176
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
      -1,   185,   164,    -1,   229,    -1,   179,     8,   180,    -1,
     180,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   181,     8,   182,    -1,
     182,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   183,     8,   184,    -1,
     184,    -1,   175,    -1,   175,    93,    74,    -1,   152,   175,
      -1,   152,   175,    93,    74,    -1,   185,     8,    74,    14,
     377,    -1,   102,    74,    14,   377,    -1,    -1,   186,   187,
     188,    -1,    -1,   189,    -1,   229,    -1,   251,    -1,   252,
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
     186,   166,   210,   209,   215,    -1,   107,   385,   164,    -1,
     100,    74,   164,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     162,   211,   365,   212,    76,   163,   213,   165,   186,   166,
     214,   244,    -1,    -1,    -1,   106,   216,   165,   186,   166,
      -1,   217,   229,    -1,   217,    78,    -1,    -1,   387,    -1,
     387,   164,    -1,    -1,    82,    31,    74,   219,   221,    -1,
      -1,   218,    31,    74,   220,   221,    -1,    -1,    -1,   221,
      28,   222,   385,    -1,    74,    -1,    82,    -1,   407,    -1,
     375,    -1,    81,    -1,   167,   421,   167,    -1,   130,   162,
     419,   163,    -1,    -1,   223,    14,   226,   385,    -1,    -1,
     225,   223,    14,   227,   385,    -1,   224,    -1,   225,   224,
      -1,    82,    -1,    81,    -1,   421,    -1,   154,   218,   157,
      -1,   154,   335,   157,    -1,   154,   335,   164,   157,    -1,
     156,   186,   157,    -1,   161,   385,   157,    -1,   161,   158,
      14,   385,   157,    -1,   160,   228,   157,    -1,   154,    74,
     225,   157,    -1,    -1,    -1,    -1,   154,    89,   162,   385,
      93,   230,   267,   266,   163,   157,   231,   217,   154,   232,
     289,    48,    89,   157,    -1,    -1,    -1,   154,    89,   385,
      93,   267,   266,   157,   233,   217,   154,   234,   289,    48,
      89,   157,    -1,    -1,    -1,   154,    68,   385,   157,   235,
     217,   154,   236,   280,   286,   287,    -1,    -1,    -1,    -1,
     154,    87,   162,   324,   164,   237,   324,   164,   238,   324,
     163,   157,   239,   217,   154,    48,    87,   157,    -1,    -1,
      -1,   154,    87,   162,   267,   266,   159,   385,   163,   157,
     240,   217,   154,   241,   289,    48,    87,   157,    -1,    -1,
      -1,   154,    87,   267,   266,   159,   385,   157,   242,   217,
     154,   243,   289,    48,    87,   157,    -1,   245,    -1,    -1,
     246,    -1,   245,   246,    -1,    -1,    -1,   105,   162,   365,
     247,    76,   163,   248,   165,   186,   166,    -1,   250,    -1,
     249,     8,   250,    -1,   390,    -1,   255,    -1,   257,    -1,
      -1,    33,    -1,    -1,   153,    -1,    -1,   352,   253,    74,
     256,   162,   290,   163,   165,   186,   166,    -1,    -1,   260,
      74,   261,   258,   264,   165,   300,   166,    -1,    -1,   262,
      74,   259,   263,   165,   300,   166,    -1,   122,    -1,   115,
     122,    -1,   123,    -1,   114,   122,    -1,    -1,   125,   365,
      -1,   124,    -1,    -1,   125,   265,    -1,    -1,   126,   265,
      -1,   365,    -1,   265,     8,   365,    -1,    -1,   128,   267,
      -1,   390,    -1,    33,   390,    -1,   189,    -1,    28,   186,
      88,   164,    -1,   189,    -1,    28,   186,    90,   164,    -1,
     189,    -1,    28,   186,    92,   164,    -1,    74,    14,   377,
      -1,   271,     8,    74,    14,   377,    -1,   165,   273,   166,
      -1,   165,   164,   273,   166,    -1,    28,   273,    95,   164,
      -1,    28,   164,   273,    95,   164,    -1,    -1,    -1,   273,
      96,   385,   276,   274,   186,    -1,    -1,   273,    97,   276,
     275,   186,    -1,    28,    -1,   164,    -1,   189,    -1,    28,
     186,    86,   164,    -1,    -1,    -1,   278,    69,   386,   279,
     189,    -1,    -1,    -1,   280,    69,   385,   157,   281,   217,
     154,    -1,    -1,   280,    70,    68,   385,   157,   282,   217,
     154,    -1,    -1,    -1,   283,    69,   386,    28,   284,   186,
      -1,    -1,    70,   189,    -1,    -1,    70,   157,   217,   154,
      -1,    48,    68,   157,    -1,    -1,    70,    28,   186,    -1,
      -1,    70,   157,   217,   154,    -1,   291,    -1,    -1,   292,
      -1,   291,     8,   292,    -1,   293,   253,   254,    76,    -1,
     293,   253,   254,    76,    14,   377,    -1,    -1,   130,    -1,
     131,    -1,   365,    -1,   162,   163,    -1,   162,   295,   163,
      -1,   162,   349,   163,    -1,   296,    -1,   295,     8,   296,
      -1,   335,    -1,   390,    -1,    33,   388,    -1,   153,   385,
      -1,   297,     8,   298,    -1,   298,    -1,    76,    -1,   168,
     387,    -1,   168,   165,   385,   166,    -1,   299,     8,    76,
      -1,   299,     8,    76,    14,   377,    -1,    76,    -1,    76,
      14,   377,    -1,   300,   301,    -1,    -1,    -1,   317,   302,
     321,   164,    -1,   322,   164,    -1,   304,    -1,    -1,   318,
     352,   253,    74,   303,   162,   290,   163,   316,    -1,   108,
     305,   306,    -1,   365,    -1,   305,     8,   365,    -1,   164,
      -1,   165,   307,   166,    -1,    -1,   308,    -1,   309,    -1,
     308,   309,    -1,   310,   164,    -1,   314,   164,    -1,   313,
     109,   311,    -1,   365,    -1,   311,     8,   365,    -1,    74,
      -1,   313,    -1,   365,   148,    74,    -1,   312,    93,   315,
      74,    -1,   312,    93,   320,    -1,    -1,   320,    -1,   164,
      -1,   165,   186,   166,    -1,   319,    -1,   117,    -1,    -1,
     319,    -1,   320,    -1,   319,   320,    -1,   111,    -1,   112,
      -1,   113,    -1,   116,    -1,   115,    -1,   114,    -1,   321,
       8,    76,    -1,   321,     8,    76,    14,   377,    -1,    76,
      -1,    76,    14,   377,    -1,   322,     8,    74,    14,   377,
      -1,   102,    74,    14,   377,    -1,   323,     8,   385,    -1,
     385,    -1,    -1,   325,    -1,    -1,   325,     8,   326,   385,
      -1,   385,    -1,   327,   394,    -1,   394,    -1,   328,    64,
     410,   169,    -1,    64,   410,   169,    -1,    -1,   328,   330,
     327,    -1,   328,    -1,   327,    -1,    -1,    -1,   332,   329,
      -1,    -1,    66,   366,   334,   374,    -1,    -1,   129,   162,
     336,   416,   163,    14,   385,    -1,   390,    14,   385,    -1,
     390,    14,    33,   390,    -1,    -1,   390,    14,    33,    66,
     366,   337,   374,    -1,    65,   385,    -1,   390,    26,   385,
      -1,   390,    25,   385,    -1,   390,    24,   385,    -1,   390,
      15,   385,    -1,   390,    23,   385,    -1,   390,    22,   385,
      -1,   390,    21,   385,    -1,   390,    20,   385,    -1,   390,
      19,   385,    -1,   390,    18,   385,    -1,   390,    17,   385,
      -1,   390,    16,   385,    -1,   389,    62,    -1,    62,   389,
      -1,   389,    61,    -1,    61,   389,    -1,    -1,   385,    29,
     338,   385,    -1,    -1,   385,    30,   339,   385,    -1,    -1,
     385,     9,   340,   385,    -1,    -1,   385,    11,   341,   385,
      -1,   385,    10,   385,    -1,   385,    33,   385,    -1,   385,
      32,   385,    -1,   385,    46,   385,    -1,   385,    44,   385,
      -1,   385,    45,   385,    -1,   385,    47,   385,    -1,   385,
      63,   385,    -1,   385,    48,   385,    -1,   385,    49,   385,
      -1,   385,    43,   385,    -1,   385,    42,   385,    -1,    44,
     385,    -1,    45,   385,    -1,    50,   385,    -1,    52,   385,
      -1,   385,    35,   385,    -1,   385,    34,   385,    -1,   385,
      37,   385,    -1,   385,    36,   385,    -1,   385,    38,   385,
      -1,   385,    41,   385,    -1,   385,    39,   385,    -1,   385,
      40,   385,    -1,   385,    51,   366,    -1,   386,    -1,   333,
      -1,    -1,   162,   333,   163,   342,   331,    -1,    -1,    -1,
     385,    27,   343,   385,    28,   344,   385,    -1,    -1,   385,
      27,    28,   345,   385,    -1,   426,    -1,    60,   385,    -1,
      59,   385,    -1,    58,   385,    -1,    57,   385,    -1,    56,
     385,    -1,    55,   385,    -1,    54,   385,    -1,    67,   372,
      -1,    -1,    53,   346,   385,    -1,   381,    -1,   350,    -1,
     351,    -1,   170,   373,   170,    -1,    12,   385,    -1,    13,
      -1,    -1,   352,   253,   347,   162,   290,   163,   353,   165,
     186,   166,    -1,    -1,   116,   352,   253,   348,   162,   290,
     163,   353,   165,   186,   166,    -1,    13,   335,    -1,    13,
     390,    -1,    13,   385,   128,   335,    -1,    13,   385,   128,
     390,    -1,   351,    64,   410,   169,    -1,   350,    64,   410,
     169,    -1,    82,    64,   410,   169,    -1,   380,    64,   410,
     169,    -1,   130,   162,   419,   163,    -1,    64,   419,   169,
      -1,   101,    -1,    -1,   108,   162,   354,   163,    -1,   354,
       8,    76,    -1,   354,     8,    33,    76,    -1,    76,    -1,
      33,    76,    -1,    -1,   175,   356,   294,    -1,    -1,   149,
     152,   175,   357,   294,    -1,    -1,   152,   175,   358,   294,
      -1,    -1,   364,   148,   414,   359,   294,    -1,    -1,   364,
     148,   400,   360,   294,    -1,    -1,   402,   148,   414,   361,
     294,    -1,    -1,   402,   148,   400,   362,   294,    -1,    -1,
     400,   363,   294,    -1,   116,    -1,   175,    -1,   149,   152,
     175,    -1,   152,   175,    -1,   175,    -1,   149,   152,   175,
      -1,   152,   175,    -1,   364,    -1,   367,    -1,    -1,    -1,
     406,   127,   368,   411,   369,   370,    -1,   406,    -1,   370,
     371,    -1,    -1,   127,   411,    -1,    -1,   162,   163,    -1,
     386,    -1,    -1,    81,    -1,   421,    -1,    -1,   294,    -1,
      72,    -1,    73,    -1,    82,    -1,   136,    -1,   137,    -1,
     151,    -1,   133,    -1,   134,    -1,   135,    -1,   150,    -1,
     144,    81,   145,    -1,   144,   145,    -1,   364,   148,    74,
      -1,   378,    -1,   375,    -1,   431,    -1,   175,    -1,   149,
     152,   175,    -1,   152,   175,    -1,   130,   162,   382,   163,
      -1,    64,   382,   169,    -1,   376,    -1,   132,    -1,   379,
      -1,   378,    64,   378,   169,    -1,   378,    44,   378,    -1,
     378,    45,   378,    -1,   378,    47,   378,    -1,   378,    63,
     378,    -1,   378,    48,   378,    -1,   378,    49,   378,    -1,
      50,   378,    -1,    52,   378,    -1,   378,    31,   378,    -1,
     378,    33,   378,    -1,   378,    32,   378,    -1,   378,    43,
     378,    -1,   378,    42,   378,    -1,   378,    46,   378,    -1,
     378,    10,   378,    -1,   378,    11,   378,    -1,   378,     9,
     378,    -1,   378,    30,   378,    -1,   378,    29,   378,    -1,
     378,    35,   378,    -1,   378,    34,   378,    -1,   378,    37,
     378,    -1,   378,    36,   378,    -1,   378,    38,   378,    -1,
     378,    39,   378,    -1,   378,    41,   378,    -1,   378,    40,
     378,    -1,   378,    27,    28,   378,    -1,   378,    27,   378,
      28,   378,    -1,    44,   378,    -1,    45,   378,    -1,   162,
     378,   163,    -1,   430,    -1,   175,    -1,   149,   152,   175,
      -1,   152,   175,    -1,    75,    -1,   380,    -1,   432,    -1,
     375,    -1,   167,   421,   167,    -1,   144,   421,   145,    -1,
     132,    -1,    -1,   384,   383,    -1,    -1,     8,    -1,   384,
       8,   378,   128,   378,    -1,   384,     8,   378,    -1,   378,
     128,   378,    -1,   378,    -1,   387,    -1,   335,    -1,   162,
     385,   163,    -1,   162,   349,   163,    -1,   390,    -1,   390,
      -1,   390,    -1,    -1,    -1,   405,   127,   391,   411,   392,
     399,   393,    -1,   405,    -1,   393,   394,    -1,    -1,    -1,
     127,   411,   395,   399,    -1,   396,    64,   410,   169,    -1,
     397,    64,   410,   169,    -1,    -1,   398,   294,    -1,   397,
      -1,   396,    -1,    -1,   408,    -1,   415,   408,    -1,   364,
     148,   400,    -1,   402,   148,   400,    -1,   408,    -1,   403,
      64,   410,   169,    -1,    -1,   355,   404,    64,   410,   169,
      -1,   406,    -1,   403,    -1,   355,    -1,   408,    -1,   415,
     408,    -1,   401,    -1,   408,    -1,   415,   408,    -1,   408,
      64,   410,   169,    -1,   408,   165,   385,   166,    -1,   409,
      -1,    76,    -1,   168,   165,   385,   166,    -1,    -1,   385,
      -1,   413,    -1,    -1,   400,   412,    -1,   413,    64,   410,
     169,    -1,   413,   165,   385,   166,    -1,   414,    -1,    74,
      -1,   165,   385,   166,    -1,   168,    -1,   415,   168,    -1,
     416,     8,   417,    -1,   417,    -1,   390,    -1,    -1,   129,
     162,   418,   416,   163,    -1,    -1,    -1,   420,   383,    -1,
     420,     8,   385,   128,   385,    -1,   420,     8,   385,    -1,
     385,   128,   385,    -1,   385,    -1,   420,     8,   385,   128,
      33,   388,    -1,   420,     8,    33,   388,    -1,   385,   128,
      33,   388,    -1,    33,   388,    -1,   421,   422,    -1,   421,
      81,    -1,   422,    -1,    81,   422,    -1,   424,    -1,    81,
     424,    -1,   421,   424,    -1,    81,    81,    -1,    76,    -1,
      -1,    76,    64,   423,   425,   169,    -1,    76,   127,    74,
      -1,   146,   385,   166,    -1,   146,    75,    64,   385,   169,
     166,    -1,   147,   390,   166,    -1,   165,   401,   166,    -1,
     165,   430,   166,    -1,    74,    -1,    77,    -1,    76,    -1,
     119,   162,   427,   163,    -1,   120,   162,   390,   163,    -1,
     120,   162,   335,   163,    -1,     7,   385,    -1,     6,   385,
      -1,     5,   162,   385,   163,    -1,     4,   385,    -1,     3,
     385,    -1,   429,    -1,    -1,   427,     8,   428,   429,    -1,
     390,    -1,   335,    -1,   364,   148,    74,    -1,   402,   148,
      74,    -1,   364,   148,   122,    -1,   364,   148,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   232,   232,   236,   236,   237,   241,   242,   246,   247,
     248,   249,   250,   251,   251,   253,   253,   255,   256,   257,
     258,   259,   263,   264,   268,   269,   270,   271,   275,   276,
     280,   281,   282,   283,   287,   288,   292,   293,   294,   295,
     299,   300,   304,   304,   305,   310,   311,   312,   313,   314,
     319,   320,   324,   325,   325,   325,   326,   326,   326,   327,
     327,   327,   328,   328,   328,   332,   334,   336,   329,   338,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   354,   355,   353,   358,   359,
     357,   361,   361,   362,   363,   364,   363,   366,   367,   371,
     372,   373,   374,   375,   372,   379,   380,   380,   385,   386,
     387,   391,   392,   393,   393,   395,   395,   401,   402,   402,
     406,   407,   411,   412,   413,   414,   415,   419,   419,   420,
     420,   421,   422,   426,   427,   428,   435,   437,   444,   449,
     450,   451,   453,   457,   459,   460,   461,   459,   464,   465,
     463,   468,   471,   468,   476,   477,   478,   475,   483,   484,
     482,   487,   488,   486,   493,   494,   498,   499,   503,   503,
     503,   507,   508,   512,   516,   520,   524,   525,   529,   530,
     534,   534,   541,   540,   547,   546,   556,   557,   558,   559,
     563,   564,   568,   571,   573,   576,   578,   582,   583,   587,
     588,   592,   593,   599,   600,   605,   606,   611,   612,   617,
     618,   623,   624,   625,   626,   631,   632,   632,   633,   633,
     638,   639,   644,   645,   650,   652,   652,   655,   657,   657,
     658,   658,   661,   663,   663,   667,   669,   672,   674,   678,
     681,   683,   686,   688,   692,   693,   698,   699,   703,   705,
     711,   712,   713,   714,   719,   720,   721,   726,   727,   731,
     732,   733,   734,   738,   739,   744,   745,   746,   751,   752,
     753,   754,   760,   761,   766,   766,   767,   768,   769,   769,
     775,   779,   780,   784,   785,   788,   790,   794,   795,   799,
     800,   804,   808,   809,   813,   814,   818,   822,   823,   827,
     828,   832,   833,   837,   838,   842,   843,   847,   848,   852,
     853,   854,   855,   856,   857,   861,   862,   863,   864,   868,
     869,   873,   874,   879,   880,   884,   884,   885,   889,   890,
     894,   895,   899,   899,   900,   901,   905,   906,   906,   911,
     911,   915,   915,   916,   917,   918,   918,   919,   920,   921,
     922,   923,   924,   925,   926,   927,   928,   929,   930,   931,
     932,   933,   934,   935,   936,   936,   937,   937,   938,   938,
     939,   939,   940,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     969,   970,   971,   970,   973,   973,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   984,   985,   986,   987,
     988,   989,   990,   991,   991,   994,   994,  1000,  1001,  1002,
    1003,  1007,  1008,  1009,  1010,  1014,  1015,  1019,  1022,  1024,
    1028,  1029,  1030,  1031,  1035,  1035,  1037,  1037,  1039,  1039,
    1041,  1041,  1043,  1043,  1045,  1045,  1047,  1047,  1049,  1049,
    1054,  1055,  1056,  1057,  1061,  1062,  1063,  1069,  1070,  1075,
    1076,  1075,  1078,  1083,  1084,  1089,  1093,  1094,  1095,  1099,
    1100,  1101,  1106,  1107,  1112,  1113,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1127,  1131,  1135,  1136,
    1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
    1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,  1179,
    1180,  1184,  1185,  1186,  1187,  1191,  1192,  1193,  1194,  1195,
    1196,  1197,  1201,  1202,  1205,  1207,  1211,  1212,  1213,  1214,
    1218,  1219,  1223,  1224,  1229,  1234,  1239,  1244,  1245,  1244,
    1247,  1251,  1252,  1257,  1257,  1261,  1262,  1266,  1266,  1271,
    1272,  1273,  1277,  1278,  1282,  1283,  1288,  1292,  1293,  1293,
    1298,  1299,  1300,  1305,  1306,  1307,  1311,  1312,  1316,  1317,
    1318,  1323,  1324,  1328,  1329,  1334,  1335,  1335,  1339,  1340,
    1341,  1345,  1346,  1350,  1351,  1355,  1356,  1361,  1362,  1362,
    1363,  1368,  1369,  1373,  1374,  1375,  1376,  1377,  1378,  1379,
    1380,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1397,
    1398,  1398,  1399,  1400,  1401,  1402,  1403,  1407,  1411,  1412,
    1413,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1429,
    1430,  1430,  1434,  1435,  1439,  1440,  1444,  1448
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
  "\"\\\\ (T_NS_SEPARATOR)\"", "\"... (T_ELLIPSIS)\"",
  "\"tpl left delim (T_START_TPL)\"",
  "\"tpl left delim with echo (T_START_TPL_WITH_ECHO)\"",
  "\"tpl left delim with script (T_START_TPL_WITH_SCRIPT)\"",
  "\"tpl right delim (T_END_TPL)\"", "\"attr file (T_ATTR_FILE)\"",
  "\"in (T_IN)\"", "\"{t (T_START_TPL_TRANSLATE)\"",
  "\"{include (T_TPL_INCLUDE)\"", "'('", "')'", "';'", "'{'", "'}'",
  "'\"'", "'$'", "']'", "'`'", "$accept", "start", "top_statement_list",
  "$@1", "namespace_name", "top_statement", "$@2", "$@3",
  "use_declarations", "use_declaration", "use_function_declarations",
  "use_function_declaration", "use_const_declarations",
  "use_const_declaration", "constant_declaration", "inner_statement_list",
  "$@4", "inner_statement", "statement", "unticked_statement", "$@5",
  "$@6", "$@7", "$@8", "$@9", "@10", "$@11", "$@12", "$@13", "$@14",
  "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "catch_statement", "$@24", "$@25", "$@26", "$@27", "finally_statement",
  "$@28", "tpl_block", "tpl_modifier_list", "$@29", "$@30",
  "tpl_modifier_param_list", "$@31", "tpl_inner_tpl_attr_name",
  "tpl_inner_tpl_attr_anony", "tpl_inner_tpl_attr_list", "$@32", "$@33",
  "tpl_encaps_list", "tpl_statement", "@34", "$@35", "$@36", "@37", "$@38",
  "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@48", "$@49", "unset_variables", "unset_variable",
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
  "tpl_encaps_var", "encaps_var_offset", "internal_functions_in_yacc",
  "isset_variables", "$@96", "isset_variable", "class_constant",
  "static_class_name_scalar", "class_name_scalar", YY_NULL
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
     396,   397,    40,    41,    59,   123,   125,    34,    36,    93,
      96
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
     211,   212,   213,   214,   210,   215,   216,   215,   217,   217,
     217,   218,   218,   219,   218,   220,   218,   221,   222,   221,
     223,   223,   224,   224,   224,   224,   224,   226,   225,   227,
     225,   225,   225,   228,   228,   228,   229,   229,   229,   229,
     229,   229,   229,   229,   230,   231,   232,   229,   233,   234,
     229,   235,   236,   229,   237,   238,   239,   229,   240,   241,
     229,   242,   243,   229,   244,   244,   245,   245,   247,   248,
     246,   249,   249,   250,   251,   252,   253,   253,   254,   254,
     256,   255,   258,   257,   259,   257,   260,   260,   260,   260,
     261,   261,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   272,   272,   273,   274,   273,   275,   273,
     276,   276,   277,   277,   278,   279,   278,   280,   281,   280,
     282,   280,   283,   284,   283,   285,   285,   286,   286,   287,
     288,   288,   289,   289,   290,   290,   291,   291,   292,   292,
     293,   293,   293,   293,   294,   294,   294,   295,   295,   296,
     296,   296,   296,   297,   297,   298,   298,   298,   299,   299,
     299,   299,   300,   300,   302,   301,   301,   301,   303,   301,
     304,   305,   305,   306,   306,   307,   307,   308,   308,   309,
     309,   310,   311,   311,   312,   312,   313,   314,   314,   315,
     315,   316,   316,   317,   317,   318,   318,   319,   319,   320,
     320,   320,   320,   320,   320,   321,   321,   321,   321,   322,
     322,   323,   323,   324,   324,   326,   325,   325,   327,   327,
     328,   328,   330,   329,   329,   329,   331,   332,   331,   334,
     333,   336,   335,   335,   335,   337,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   338,   335,   339,   335,   340,   335,
     341,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   342,
     335,   343,   344,   335,   345,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   346,   335,   335,   335,   335,
     335,   335,   335,   347,   335,   348,   335,   349,   349,   349,
     349,   350,   350,   350,   350,   351,   351,   352,   353,   353,
     354,   354,   354,   354,   356,   355,   357,   355,   358,   355,
     359,   355,   360,   355,   361,   355,   362,   355,   363,   355,
     364,   364,   364,   364,   365,   365,   365,   366,   366,   368,
     369,   367,   367,   370,   370,   371,   372,   372,   372,   373,
     373,   373,   374,   374,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   376,   377,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   380,   380,   380,   381,   381,   381,   381,   381,
     381,   381,   382,   382,   383,   383,   384,   384,   384,   384,
     385,   385,   386,   386,   387,   388,   389,   391,   392,   390,
     390,   393,   393,   395,   394,   396,   396,   398,   397,   399,
     399,   399,   400,   400,   401,   401,   402,   403,   404,   403,
     405,   405,   405,   406,   406,   406,   407,   407,   408,   408,
     408,   409,   409,   410,   410,   411,   412,   411,   413,   413,
     413,   414,   414,   415,   415,   416,   416,   417,   418,   417,
     417,   419,   419,   420,   420,   420,   420,   420,   420,   420,
     420,   421,   421,   421,   421,   421,   421,   421,   421,   422,
     423,   422,   422,   422,   422,   422,   422,   424,   425,   425,
     425,   426,   426,   426,   426,   426,   426,   426,   426,   427,
     428,   427,   429,   429,   430,   430,   431,   432
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
      10,     0,     6,     1,     0,     0,     8,     3,     3,     0,
       0,     0,     0,     0,    13,     0,     0,     5,     2,     2,
       0,     1,     2,     0,     5,     0,     5,     0,     0,     4,
       1,     1,     1,     1,     1,     3,     4,     0,     4,     0,
       5,     1,     2,     1,     1,     1,     3,     3,     4,     3,
       3,     5,     3,     4,     0,     0,     0,    18,     0,     0,
      15,     0,     0,    11,     0,     0,     0,    18,     0,     0,
      17,     0,     0,    15,     1,     0,     1,     2,     0,     0,
      10,     1,     3,     1,     1,     1,     0,     1,     0,     1,
       0,    10,     0,     8,     0,     7,     1,     2,     1,     2,
       0,     2,     1,     0,     2,     0,     2,     1,     3,     0,
       2,     1,     2,     1,     4,     1,     4,     1,     4,     3,
       5,     3,     4,     4,     5,     0,     0,     6,     0,     5,
       1,     1,     1,     4,     0,     0,     5,     0,     0,     7,
       0,     8,     0,     0,     6,     0,     2,     0,     4,     3,
       0,     3,     0,     4,     1,     0,     1,     3,     4,     6,
       0,     1,     1,     1,     2,     3,     3,     1,     3,     1,
       1,     2,     2,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     2,     1,     0,     9,
       3,     1,     3,     1,     3,     0,     1,     1,     2,     2,
       2,     3,     1,     3,     1,     1,     3,     4,     3,     0,
       1,     1,     3,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     3,     5,
       4,     3,     1,     0,     1,     0,     4,     1,     2,     1,
       4,     3,     0,     3,     1,     1,     0,     0,     2,     0,
       4,     0,     7,     3,     4,     0,     7,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     0,
       5,     0,     0,     7,     0,     5,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     3,     1,     1,     1,
       3,     2,     1,     0,    10,     0,    11,     2,     2,     4,
       4,     4,     4,     4,     4,     4,     3,     1,     0,     4,
       3,     4,     1,     2,     0,     3,     0,     5,     0,     4,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     3,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     1,     1,     1,
       1,     3,     2,     4,     3,     1,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     5,     2,     2,
       3,     1,     1,     3,     2,     1,     1,     1,     1,     3,
       3,     1,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     3,     3,     1,     1,     1,     0,     0,     7,
       1,     2,     0,     0,     4,     4,     4,     0,     2,     1,
       1,     0,     1,     2,     3,     3,     1,     4,     0,     5,
       1,     1,     1,     1,     2,     1,     1,     2,     4,     4,
       1,     1,     4,     0,     1,     1,     0,     2,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     0,     5,
       0,     0,     2,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     2,     1,     2,     1,     2,     2,     2,     1,
       0,     5,     3,     3,     6,     3,     3,     3,     1,     1,
       1,     4,     4,     4,     2,     2,     4,     2,     2,     1,
       0,     4,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   422,     0,     0,     0,     0,   415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   621,     0,     0,   476,
       0,   484,   485,     6,   545,   601,    82,   486,     0,    62,
      59,     0,     0,    91,     0,     0,     0,     0,   437,     0,
       0,    94,     0,     0,     0,     0,     0,   460,     0,     0,
       0,     0,   186,   188,   192,     0,     0,   551,   490,   491,
     492,   487,   488,     0,     0,   493,   489,     0,     0,    44,
       0,     0,     0,    93,    44,     0,   613,   479,   542,     4,
       0,     8,    50,    21,     9,    10,   174,   175,     0,     0,
     398,   561,     0,   418,   419,   176,   592,     0,   548,   546,
     417,     0,   397,   560,     0,   564,   458,   595,     0,   591,
     570,   590,   593,   600,     0,   406,   541,   547,   422,     6,
     460,     0,   176,   658,   657,     0,   655,   654,   421,   561,
       0,   564,   384,   385,   386,   387,     0,   413,   412,   411,
     410,   409,   408,   407,   460,     0,     0,   444,     0,   363,
     566,     0,   361,     0,   626,     0,   554,   347,     0,     0,
     461,   467,   339,   468,     0,   472,   593,     0,     0,   414,
     478,     0,    53,    51,   603,     0,   322,     0,     0,   323,
       0,     0,    69,    71,     0,    73,     0,     0,     0,    75,
     561,     0,   564,     0,     0,     0,     0,     0,    24,     0,
      23,   265,     0,     0,   264,   189,   187,   270,     0,   176,
       0,     0,     0,     0,   341,   621,   639,     0,   495,     0,
       0,     0,     0,   633,   635,     0,    15,     0,   544,     0,
       6,   486,     0,     0,     0,   561,   560,    42,   134,   133,
       0,   135,     0,     0,   398,     0,     0,    42,     0,     0,
       0,   480,     0,   481,     0,     0,     0,    20,   190,   184,
      78,   603,   603,   177,   423,     0,     0,   603,   368,     0,
     370,   401,   364,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,   362,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   603,   567,   603,     0,   614,   594,   423,     0,
       0,   416,     0,   448,     0,     0,   630,   565,     0,   436,
     555,   622,     0,   463,     0,   482,     0,   469,   594,   477,
      56,     0,   604,     0,     0,    81,     0,    60,     0,   324,
     327,   561,   564,     0,     0,    72,    74,    98,     0,    76,
      77,    44,    97,     0,    30,     0,    29,     0,    36,     0,
      35,    26,     0,     0,    17,     0,   266,   564,     0,    79,
       0,     0,    80,   425,     0,   171,   173,   561,   564,     0,
     659,   561,   564,     0,   620,     0,   640,     0,   638,   494,
     634,   636,   545,     0,     0,     0,     0,     0,     0,   586,
       0,   632,   550,   631,   637,   543,     5,    12,    13,     0,
       0,   120,   124,   486,     0,     0,     0,     0,   131,     0,
     123,   122,   596,     0,     0,     0,   323,   199,   201,     0,
       0,     0,   136,   137,     0,   112,   139,     0,   142,     0,
     140,   399,   563,   562,    52,   549,     0,   420,     7,     0,
     445,     0,     0,   182,   193,     0,     0,   180,     0,   603,
     664,   667,     0,   584,   582,   450,     0,     0,     0,   372,
       0,   404,     0,     0,     0,   374,   373,   389,   388,   391,
     390,   392,   394,   395,   393,   383,   382,   376,   377,   375,
     378,   380,   381,   396,   379,     0,   343,   351,   359,   358,
     357,   356,   355,   354,   353,   352,   350,   349,   348,   459,
     665,   585,   454,     0,     0,     0,     0,   656,   561,   564,
     446,   611,     0,   625,     0,   624,   462,   584,   483,   340,
     585,     0,    44,    54,   433,   321,    63,     0,    65,   325,
      88,    85,     0,     0,   215,   215,    70,     0,     0,     0,
       0,   552,   486,     0,   506,     0,     0,     0,   500,     0,
     498,   505,    41,   497,   507,   499,    42,    32,     0,     0,
      18,    38,     0,     0,    19,     0,    25,    22,     0,   263,
     271,   268,     0,     0,     0,   660,   651,   653,   652,    11,
       0,   617,     0,   616,   435,     0,   642,     0,   643,   645,
       0,   646,     0,   647,     0,     3,     5,   449,   151,   621,
       0,     0,   127,   143,     0,   132,   597,   113,   202,   199,
       0,   564,     0,     0,     0,     0,   115,   138,     0,    43,
      45,    46,    47,    48,     0,   336,   602,     0,     0,   254,
       0,   257,   561,     0,   564,     0,     0,     0,   464,   191,
     195,     0,     0,   432,   431,     0,   250,     0,     0,     0,
       0,   583,   434,   369,   371,     0,     0,   365,   367,     0,
     344,     0,     0,   587,   606,   568,   605,   610,   598,   599,
     629,   628,     0,   470,    42,   224,     0,    44,   222,    61,
     323,     0,     0,     0,     0,     0,     0,   215,     0,   215,
       0,   538,   539,   515,   516,   559,     0,   554,   552,     0,
     502,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,    31,    28,     0,    37,    34,    27,   267,     0,
     250,   172,    84,     0,   618,   620,     0,   648,   650,   649,
       0,     0,   664,   665,   447,    16,     3,   110,     0,   125,
       0,   129,   117,     0,   154,   200,     0,   144,   199,   117,
       0,   141,   400,     0,   261,   262,     0,   255,   256,    40,
       0,   466,     0,     0,   194,   197,   273,   250,   251,   252,
       0,   244,   246,   176,   253,   589,   612,   453,   451,   405,
     402,   345,   457,   455,   607,   581,   603,     0,     0,   623,
     474,   232,   235,     0,    42,     0,   326,   199,   199,   209,
       0,    44,   207,    92,     0,     0,     0,     0,     0,   211,
       0,   504,   555,   553,     0,   501,   540,   496,   666,   525,
     523,   524,     0,     0,   527,   526,   517,   519,   518,   529,
     528,   531,   530,   532,   533,   535,   534,   521,   520,   509,
     510,   522,   511,   513,   514,   512,     0,     0,    95,    33,
      39,   269,     0,   661,   620,   615,     0,   641,     0,    14,
       0,   126,   128,     0,   114,     0,   323,     0,     0,     0,
     116,     0,   603,     0,   335,   334,   338,   329,   258,   465,
     196,   273,     0,   305,     0,   438,   250,   178,     0,   482,
     580,   579,     0,   572,     0,     0,   627,   471,   240,     0,
       0,    55,    64,     0,    66,     0,     0,     0,    42,     0,
     213,     0,   220,   221,   218,   212,   558,   557,   503,   536,
       0,   508,   100,   105,   438,     0,   342,   644,   109,   152,
     108,   130,   118,     0,     0,   161,   199,   148,    49,     0,
     573,   328,   603,     0,   305,   198,     0,     0,   309,   310,
     311,   314,   313,   312,   304,   185,   272,   277,   274,     0,
     303,   307,     0,     0,     0,     0,   247,   179,     0,   403,
     346,   603,   603,   578,   569,   608,   609,     0,   473,     0,
       0,     0,   225,   236,   223,   323,    89,    86,   210,     0,
     214,   216,    44,     0,   537,     0,   106,    96,     0,   619,
     227,     0,     0,   155,   110,     0,   110,   331,   581,     0,
     333,   183,     0,     0,   281,     0,   176,   308,     0,   276,
      44,     0,    44,   248,     0,     0,   571,   475,     0,    44,
       0,     0,     0,     0,     0,   208,    44,    42,   556,   101,
       0,    44,   237,   119,   158,   323,     0,     0,     0,   574,
     330,     0,     0,   283,   285,   280,   317,     0,     0,     0,
      42,     0,   442,     0,    42,     0,   575,   576,   233,    42,
      58,   226,    67,    44,   205,    90,    87,    42,     0,    44,
      42,     0,     0,     0,   110,     0,   162,   145,   149,   320,
     282,     6,     0,   286,   287,     0,     0,   295,     0,     0,
       0,     0,   275,   278,     0,   181,   443,     0,   439,   424,
     249,    44,     0,    42,     0,    42,   426,     0,     0,   110,
       0,   153,     0,     0,   242,   110,   242,   284,   288,   289,
     299,     0,   290,     0,   318,   315,     0,   319,     0,   440,
      42,    44,   203,    68,     0,   102,   107,   228,     0,     0,
       0,   159,   156,     0,     0,     0,     0,     0,   298,   291,
     292,   296,     0,   250,   441,    42,   206,     0,   110,   230,
     238,   239,   242,   110,   110,     0,   146,     0,   297,     0,
     316,     0,     0,    44,     0,   110,     0,     0,     0,     0,
     242,     0,   293,     0,   204,    42,   229,     0,     0,     0,
     243,   163,     0,   150,   301,    44,   279,   103,   231,     0,
       0,     0,    42,   165,   160,     0,     0,   302,     0,   104,
     164,   166,   157,   147,     0,   167,   168,     0,     0,   169,
       0,    44,    42,   170
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    88,    89,   626,   426,   209,   210,
     375,   376,   379,   380,    90,   247,   457,   649,  1124,    92,
     351,   705,   552,   841,   188,   557,   187,   706,   710,  1035,
    1162,   364,   713,  1084,   712,  1083,   191,   203,   973,   898,
    1045,  1128,  1217,  1263,  1047,  1090,   910,   244,   792,   799,
     914,  1051,   437,   438,   439,   790,   913,   250,   980,   918,
    1175,  1240,  1056,  1176,   787,  1050,   916,  1095,  1223,  1134,
    1222,  1054,  1174,  1269,  1270,  1271,  1277,  1280,   394,   395,
      94,    95,   274,  1018,    96,   675,    97,   670,   474,    98,
     473,    99,   672,   813,   814,   643,   447,  1193,  1125,   853,
     563,   566,   718,  1086,  1042,   964,   709,   842,  1081,  1092,
    1218,  1235,   948,  1161,   951,  1133,  1171,  1031,  1204,   820,
     821,   822,   823,   548,   660,   661,   213,   214,   218,   933,
    1006,  1065,  1186,  1007,  1063,  1105,  1142,  1143,  1144,  1145,
    1209,  1146,  1147,  1148,  1207,  1256,  1008,  1009,  1010,  1011,
    1107,  1012,   185,   358,   359,   711,   924,   925,   926,   993,
     802,   803,   100,   345,   101,   404,   939,   493,   494,   488,
     490,   655,   492,   938,   685,   146,   478,   602,   102,   103,
     104,   132,  1015,  1113,   106,   265,   624,   429,   680,   679,
     692,   691,   320,   107,   824,   172,   173,   551,   840,   947,
    1028,   179,   262,   549,   108,   581,   582,   583,   584,   109,
     110,   726,   341,   727,   201,   112,   113,   336,   114,   115,
     534,   835,  1024,   927,  1058,   940,   941,   942,   943,   116,
     117,   118,   119,   275,   120,   121,   441,   122,   123,   353,
     695,   834,   696,   697,   124,   612,   613,   904,   165,   166,
     232,   233,   615,   234,   780,   125,   399,   773,   400,   126,
     585,   127
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1101
static const yytype_int16 yypact[] =
{
   -1101,   107,   115, -1101,  2572,  5672,  5672,   -37,  5672,  5672,
    5672,  5672,  5672,  5672,  5672,  5672, -1101,  5672,  5672,  5672,
    5672,  5672,  5672,  5672,   227,   227,  4106,  5672,   408,   -34,
     -32, -1101, -1101,   108, -1101, -1101, -1101,   105,  5672, -1101,
   -1101,   -13,     2, -1101,   -32,  4241,  4376,   127, -1101,   172,
    4511, -1101,  5672,    22,   -11,    16,   149,    66,   111,   119,
     124,   126, -1101, -1101, -1101,   129,   138, -1101, -1101, -1101,
   -1101, -1101, -1101,   517,   198, -1101, -1101,   243,  3652, -1101,
     502,  4646,  5807, -1101, -1101,   255,   173,   526,   159, -1101,
      23, -1101, -1101, -1101, -1101, -1101, -1101, -1101,   274,   280,
   -1101, -1101,   194,   300,   307,   348,   321,   245, -1101,   339,
   -1101,  2450, -1101, -1101,   364,  2500, -1101, -1101,   257,   373,
     285, -1101,     3, -1101,    71, -1101, -1101, -1101, -1101, -1101,
     338,   290,   348,  7427,  7427,  5672,  7427,  7427,  3854,   268,
    7058,   933,   416,   416,    93,   416,  5672,   416,   416,   416,
     416,   416,   416,   416, -1101,   313,   243,   128,   346, -1101,
   -1101,   378, -1101,   227,  7113,   318,   507, -1101,   365,   243,
     382,   388, -1101, -1101,   394,   423,   -17,    71,  4781, -1101,
   -1101,  5807,   493, -1101,  5672,    29,  7427,  3382,   -32,  5672,
    5672,   405, -1101, -1101,  6307, -1101,  6356,   418,   573, -1101,
     426,  7427,  1857,   427,  6400,    28,    96,   243,   189,    35,
   -1101, -1101,   161,    36, -1101, -1101, -1101,   581,    38,   348,
     227,  5672,  5672,   438, -1101,  4106,    45,   533, -1101,  5942,
     227,   412,   594, -1101, -1101,   243, -1101,   -31,   389,  5672,
    1372,    95,   266,  6077,    20,   -47,    81,   442,   616, -1101,
     449,   619,   618,  6637,   488,   498,  6505,   500,   616,   457,
    5672,   616,   483,   619,   607,   494,   611, -1101,   544, -1101,
   -1101,  5672,  5672, -1101,   613,   635,    30,  5672, -1101,  5672,
   -1101,   674, -1101, -1101,  5672,  5672,  5672,  5672,  5672,  5672,
    5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,
    5672,  5672,   408,  5672, -1101, -1101, -1101,  4933,  5672,  5672,
    5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,  5672,
     494,    61,  5672, -1101,  5672,  5672,   173,    14, -1101,  6548,
    5672,   416,   243,   135,   147,   147, -1101, -1101,  5084, -1101,
    5235, -1101,   243,   382,    74,   494,    74, -1101,     6, -1101,
   -1101,  3382,  7427,   567,  5672, -1101,   652, -1101,   580,   739,
    7427,   656,  2306,   676,    27, -1101, -1101, -1101,  7166, -1101,
   -1101, -1101, -1101,   243,   226,    40, -1101,   243,   240,    41,
   -1101,   267,   683,   200, -1101,  5672, -1101, -1101,   -11, -1101,
    7166,   685, -1101, -1101,    51, -1101, -1101,    52,   236,    64,
   -1101,   597,  2212,   603,   367,   626, -1101,   705, -1101, -1101,
   -1101, -1101,   726,  1253,   628,   173,   644,   636,   655,     6,
     638, -1101, -1101, -1101, -1101,   429, -1101, -1101, -1101,   494,
    6680, -1101, -1101,   791,   646,    17,   255,   792, -1101,   748,
   -1101, -1101,     6,    71,   736,   227,  5386,   681, -1101,  5807,
    7226,   737, -1101, -1101,   659, -1101, -1101,  2707, -1101,  5672,
   -1101, -1101, -1101, -1101, -1101, -1101,  1534, -1101, -1101,  3803,
   -1101,   798,   221, -1101,   692,   649,   650, -1101,   661,  5672,
     665, -1101,  5672,   673,     6, -1101,    71,   670,  5672,  7587,
    5672, -1101,  5672,  5672,  5672,  4697,  1795,  4830,  4830,  4830,
    4830,  1486,  1486,  1486,  1486,  1096,  1096,   591,   591,   591,
      93,    93,    93, -1101,   416,   261,  3854,  3854,  3854,  3854,
    3854,  3854,  3854,  3854,  3854,  3854,  3854,  3854,  3854, -1101,
     665,   682, -1101,   706,   147,   708,  2002, -1101,   291,  1208,
     168, -1101,   227,  7427,   227,  7158,   382, -1101, -1101, -1101,
   -1101,   147, -1101, -1101, -1101,  7427, -1101,  2842, -1101, -1101,
   -1101, -1101,   817,    67,   679,   687, -1101,  7166,  7166,  7166,
    7166,  7166, -1101,   712, -1101,   693,   243,  7166,   128,   728,
   -1101, -1101, -1101,  7343, -1101, -1101,   713,   294,   816,    28,
   -1101,   375,   819,    96, -1101,   826, -1101, -1101,  2083, -1101,
   -1101,   887,   740,   227,   742, -1101, -1101, -1101, -1101, -1101,
     741, -1101,    69, -1101, -1101,   383, -1101,  5672, -1101, -1101,
      79, -1101,   193, -1101,   494,   738, -1101, -1101, -1101,  4106,
     762,   490, -1101, -1101,   895, -1101,     6, -1101, -1101,   681,
     746,  2236,   281,   755,  6443,   281, -1101, -1101,   756, -1101,
   -1101, -1101, -1101, -1101,  6723,   122, -1101,   227,  5672, -1101,
      73, -1101,    78,   758,   487,  7166,   770,   243,   382, -1101,
     799,   221,   761, -1101, -1101,   766,   322,   760,  2392,   494,
     494,     6, -1101,  7509,  3854,  5672,  7384,  4157,  4427,   408,
   -1101,   494,   494, -1101, -1101, -1101,    47, -1101, -1101, -1101,
   -1101, -1101,  5537, -1101,   406, -1101,   -32, -1101, -1101, -1101,
    5672,  5672,   281,   281,  7166,   857,  2977, -1101,   516, -1101,
     208,   707,   707,   436,   436,  6938,   767,   922,  7166,   243,
     135,  1019,    53,  7166,  7166,  7166,  6880,  7166,  7166,  7166,
    7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,
    7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,  7166,
     827,   861, -1101, -1101,   863, -1101, -1101, -1101, -1101,  7166,
     322, -1101, -1101,  5672, -1101,   367,   924, -1101, -1101, -1101,
     771,  1449, -1101, -1101, -1101, -1101,   775, -1101,   779, -1101,
    5672, -1101, -1101,   784, -1101, -1101,  5672, -1101,   681, -1101,
     781, -1101, -1101,   201, -1101,  7427,  3955, -1101, -1101, -1101,
     243,   382,   221,   780,   953, -1101, -1101,   322, -1101, -1101,
     802,   954, -1101,   348, -1101, -1101, -1101, -1101, -1101,  4006,
   -1101, -1101, -1101, -1101, -1101,   805,  5672,  5672,   227,  7427,
   -1101, -1101,   485,   804,   883,   808,  7427,   681,   681, -1101,
     961, -1101, -1101, -1101,   520,   812,  5672,    33,   312, -1101,
    7166, -1101,  7166, -1101,   815,   168, -1101, -1101, -1101,  7469,
    7548,  7622,  7166,  7302,  7693,  7727,  4292,  4561,  1695,  2508,
    2508,  2508,  2508,  2548,  2548,  2548,  2548,   582,   582,   707,
     707,   707,   436,   436,   436,   436,   823,   818, -1101, -1101,
   -1101, -1101,   820, -1101,   367, -1101,  5672, -1101,   813, -1101,
     284, -1101,  7427,  5672,   956,  5672,  5672,  6766,   281,   824,
     956,   822,  5672,   147,   860,   242, -1101, -1101, -1101,   382,
     953, -1101,   221,   987,   828,   881,   320,   840,  5672,   494,
     936,   937,   494, -1101,   836,  6221, -1101,   879,   565,   -32,
    3382, -1101, -1101,   847, -1101,   850,   851,  7166,   926,   858,
   -1101,  6264, -1101, -1101, -1101, -1101,  7343,  7016, -1101,  7658,
    7166, -1101, -1101,   914,   881,    80,  3854, -1101, -1101,  3652,
   -1101,  7427, -1101,  6591,   859, -1101,   681, -1101, -1101,   855,
   -1101, -1101,  5672,   860,  1095, -1101,   951,   221, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,   338,
     684, -1101,    46,   862,   864,   866, -1101, -1101,   957,  4006,
   -1101,  5672,  5672, -1101,   860, -1101, -1101,   147, -1101,   -32,
    1004,   963, -1101, -1101, -1101,  5672, -1101, -1101, -1101,   871,
   -1101, -1101, -1101,  7166,  7658,   221, -1101, -1101,   872, -1101,
   -1101,  5672,   882, -1101, -1101,   873, -1101, -1101,   805,   869,
     860, -1101,  1028,    26, -1101,   967,   348, -1101,   970, -1101,
   -1101,    85, -1101,  1031,   900,   902, -1101, -1101,  1045, -1101,
     910,  3382,   912,  3112,  3112, -1101, -1101,   250,  7343, -1101,
     911, -1101,   589,  7427, -1101,  5672,   369,   927,   402, -1101,
   -1101,  7166,   221, -1101,   265, -1101,  1071,    49,  1012,  1073,
     928,  1014, -1101,   100,   939,  7166, -1101, -1101, -1101,  1017,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101,   366,  1016, -1101,
     940,  5672,   -16,  1059, -1101,   930,  3652, -1101,  3652, -1101,
   -1101,  1015,   945,   265, -1101,   948,  1021,  1006,   952,   969,
    7166,  1042, -1101, -1101,  7166, -1101, -1101,    87, -1101, -1101,
   -1101, -1101,  3247,  1030,   958,   959, -1101,  6809,  5672, -1101,
    1054, -1101,   414,   966,  1057, -1101,  1057, -1101, -1101, -1101,
     662,   221, -1101,  1050, -1101,  1114,   972, -1101,  1053, -1101,
     637, -1101, -1101, -1101,   968, -1101, -1101, -1101,  6852,   686,
     979,  3652, -1101,   981,  1098,   735,  1100,  1075,  1076,  1144,
   -1101, -1101,  7166,   322, -1101,  1067, -1101,   991, -1101, -1101,
    3652, -1101,  1057, -1101, -1101,  1074,  3652,  1069, -1101,   221,
   -1101,  1005,  1003, -1101,   763, -1101,  1121,   810,   842,  1013,
    1057,  1018, -1101,   421, -1101,  1008,  3652,   856,  1084,  3517,
    3652, -1101,  1128, -1101, -1101, -1101, -1101, -1101,  3652,  1020,
    1091,  1090,  1024,  1080, -1101,  1029,  1034, -1101,  1025, -1101,
    1080, -1101, -1101, -1101,   221, -1101, -1101,  1105,  1037, -1101,
    1036, -1101,  1027, -1101
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1101, -1101,  -402, -1101,   -24, -1101, -1101, -1101, -1101,   821,
   -1101,   606, -1101,   609, -1101,   -82, -1101, -1101,    32, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1015, -1101, -1101, -1101,
     415, -1101,   774,   777, -1101, -1101, -1101, -1101,     9, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101,   -53, -1101, -1101, -1101,   615,
     778,   782,  -127, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101,   407,  -614,  -420, -1101,   136, -1101,
   -1101, -1101,  -451, -1101, -1101,   275, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1100,  -755,
   -1101,   302, -1101,  -256, -1101,   437, -1101,   854, -1101,   315,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,   104, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,  -991,
   -1101, -1101, -1101,  -435, -1101, -1101,   256, -1101, -1101, -1101,
   -1101, -1101,   -59, -1101,    -5, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,   -65, -1101,
   -1101,    -1,   277, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101,   595,  -401,  -282, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101,   309,  1032, -1101,  -363,  1226, -1101, -1101,
   -1101,   527,   529, -1101,  1369,   -22,   -66,  -514,   669,  1703,
   -1101, -1101, -1101,  -866, -1101, -1101, -1101, -1101,   196,  -255,
    1026,  1697, -1101, -1101, -1101,   -18, -1101,    54, -1101,  -239,
    -537, -1101, -1101,   238,   -12,   354,   484, -1101,  -207, -1101,
     -45,  -164, -1101,  -158, -1101, -1101, -1101, -1101,   492,  1035,
   -1101, -1101
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -664
static const yytype_int16 yytable[] =
{
     157,   157,   257,   105,   170,   328,   139,   180,   182,   470,
     175,   640,   246,    93,   703,   902,   177,   255,   405,  1067,
     513,   483,   192,   254,   625,   793,   639,   600,   700,   208,
     701,   266,   475,   476,  1102,   251,    91,   354,   487,  1096,
     259,  1098,   263,   383,   388,   200,   391,   324,   589,   593,
     237,   451,  1168,   238,  1068,   564,   219,  1151,   991,   603,
    -663,   962,   934,   410,   529,   211,   531,   324,   423,   411,
     324,   669,   605,   245,   424,   715,  1206,   775,   324,   483,
     531,   806,   176,   533,   410,   535,  -259,   423,   775,   547,
     411,   550,   393,   424,   410,   423,   129,   410,   630,   423,
     411,   424,   129,   411,   480,   424,    35,     3,  1157,   406,
     453,   836,  -111,   255,   720,    -2,   255,   454,  1111,  1172,
    1188,   264,  1236,   205,   206,   135,   444,   867,   178,   219,
     181,  -586,   333,   427,   428,   530,   183,    35,   215,   157,
    1252,  1169,   217,   804,   302,   343,   386,    35,   325,   189,
      35,  -586,   481,   782,  1199,    35,   303,   212,  1076,   184,
    1205,  1112,   228,  1189,   190,  -582,   357,    48,   325,   184,
     129,   325,   407,   627,   207,   868,  -583,   452,   327,   325,
     373,   374,   378,   381,   919,   361,  -337,   267,   157,  1208,
    1103,  1104,   565,   355,   991,   482,   157,   963,    86,   384,
     389,   197,   392,  1234,   590,   594,   157,   170,  1237,  1238,
    1069,   425,   837,  1152,   604,  -663,   397,   401,   157,   356,
    1247,   541,   795,    35,   786,   798,   482,   606,   443,    86,
     716,   348,   776,   955,   956,   129,   807,    35,  -111,   326,
     677,  -259,    86,  1049,  -662,   455,   198,    86,   377,  -337,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,  1158,   486,   922,   854,   783,   858,    35,
     815,   216,   129,   220,   129,   845,  -461,   154,   170,   694,
     264,   221,   382,  -463,   175,   419,   222,   264,   223,   586,
     177,   224,   847,   848,   442,   129,   694,  -566,  -566,   445,
     225,   129,   809,    35,   856,   857,   992,  -461,   540,   486,
     155,   264,   482,   156,   445,    86,  -462,   129,   546,   588,
     264,  -444,   486,   486,   946,   538,   385,   689,   923,    86,
     484,   226,   486,   592,   486,   129,   258,    35,   260,  1141,
     129,   264,    35,   154,   578,  -219,  -219,  -219,   268,   587,
     235,   849,   207,   591,   269,   129,   176,    35,   270,   208,
     595,    86,   978,   236,   271,   547,   578,   550,   784,  -332,
     666,   272,  1055,   667,   859,   484,   155,   154,   264,   156,
     157,   273,   154,   553,   255,  -588,   990,   761,   484,   484,
     254,   631,   264,   276,   129,    86,   129,   154,   484,  -662,
     484,   229,   230,   277,   663,   321,   901,   831,   856,   857,
     155,   815,   323,   156,   666,   155,  -219,   667,   156,   264,
     231,   157,   788,   827,   828,   305,   306,   443,   446,    86,
     155,  -427,  -427,   156,    86,   832,   833,   322,   979,    48,
      79,   129,   235,    35,    80,    81,   264,   978,   668,    86,
     818,   819,   818,   819,  -429,  -429,   105,   777,  1231,   778,
     779,  -217,  -217,  -217,   662,   332,   651,   423,   764,   666,
     704,   666,   667,   424,   667,   -57,   -57,   -57,   965,   303,
     978,   984,   129,   154,    35,  -245,   129,   339,    35,   650,
    1077,   157,   978,   442,   334,  -260,   610,   636,   986,   758,
     759,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   485,   340,   155,   342,   157,   156,
     157,   350,   486,  1136,   154,    79,   335,   264,   154,    80,
      81,   995,  -217,   226,   264,    86,   344,  -463,   421,   486,
     681,   264,   346,   578,   578,   578,   578,   578,  -566,  -566,
     347,  -448,   730,   578,   949,   950,  1138,   168,    79,   532,
     169,   168,    80,    81,   169,   374,   226,   363,  1201,   378,
      79,   421,   485,   532,    80,    81,    86,  -462,   226,   157,
     415,   264,   367,   248,   249,  1254,  1255,   368,   484,   708,
     369,  -446,   371,   226,  1038,   390,  1064,   944,   227,   456,
    1082,   403,   226,   229,   230,   484,   458,   261,   486,   226,
     486,   855,   856,   857,   408,   959,   856,   857,   157,   158,
     158,   157,   231,   171,   465,   844,   752,   753,   754,   755,
     756,   757,   459,   157,  1029,  1030,   229,   230,   299,   300,
     301,   578,   302,   811,  1089,   758,   759,   668,   229,   230,
    -260,   461,   668,   467,   303,   231,   469,   789,  1131,  1132,
    1135,   462,   228,   229,   230,   170,   464,   231,   694,   472,
     226,   175,   229,   230,   484,   421,   484,   177,   409,   229,
     230,   468,   231,   989,   843,   471,  1023,   477,   157,   157,
     578,   231,   226,   159,   162,   226,   937,   408,   231,   479,
     421,  1140,   491,  1149,   578,   865,  -234,  -234,  -234,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   554,   556,  1139,   422,
     229,   230,  1149,   176,   558,   578,   668,   559,   852,   560,
     562,   157,  1160,  1059,   755,   756,   757,   596,   158,   231,
     607,   601,   229,   230,   978,   229,   230,   609,   397,   958,
     758,   759,   694,   998,   999,  1000,  1001,  1002,  1003,   616,
    1210,   231,  1074,  1075,   231,  -306,   929,  1184,   668,   614,
     617,  1187,   620,   668,   619,   998,   999,  1000,  1001,  1002,
    1003,   662,   621,   622,   623,  -121,   632,   158,   629,   642,
     637,   646,   665,   978,   157,   158,   647,   671,   673,   674,
      31,    32,   431,   676,    35,   158,   416,  -611,  1242,   432,
     433,   714,   733,   734,   735,  -452,   578,   158,   578,   682,
    1220,   978,    79,   717,  -456,   729,    80,    81,   578,  1230,
     736,   719,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,  1276,   728,   693,   732,   698,   434,   760,
     157,    68,    69,    70,    71,    72,   758,   759,   978,  1226,
     762,    79,   435,   765,   157,    80,    81,   171,    75,    76,
     767,   769,   770,   774,   785,   633,   772,   409,   668,   791,
     794,   486,   668,   246,   796,   436,    86,  1246,   800,    79,
     978,   808,   810,    80,    81,   812,   816,  1032,   817,   825,
     862,   850,   897,   578,   978,   899,   861,   900,   906,  1108,
     907,   909,   911,   915,   921,   931,   578,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
    1087,   932,   936,   579,  1249,   935,    79,  -577,   952,   953,
      80,    81,   954,   668,   245,   957,   960,   484,   968,   977,
     972,   987,  1033,   974,   982,   579,   988,   923,  1110,  1014,
    1114,  1013,   971,  1017,  -566,  -566,  1250,  1119,    79,   158,
    1021,  1022,    80,    81,  1127,  1025,  1027,  1078,  1066,  1130,
    1258,  1034,    79,  1036,  1037,   486,    80,    81,  1039,   578,
    1046,   668,  1040,  1053,  1057,  1062,  1071,  1070,   733,   734,
     735,  1072,  1079,  1073,  1080,  1085,  1097,  1091,  1100,  1094,
     158,  1163,  1101,  1106,  1109,  1115,   736,  1165,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,  1116,
     246,  1117,   246,  1118,  1120,  1122,  1129,   578,   668,  1190,
     668,   484,   758,   759,  1137,  1150,  1153,  1154,  -241,   996,
    1156,   578,  1164,  1173,  1155,   997,  -428,  -428,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1159,  1166,  1170,  -294,  1215,
     158,  1177,  1179,  1121,  1180,  1181,  1182,  1183,  1185,   668,
    1194,  1195,  1200,  1202,  1211,  1196,   578,  1203,  1212,  1214,
     578,   245,  1216,   245,  1213,   246,  1221,   158,  1224,   158,
     296,   297,   298,   299,   300,   301,  1225,   302,  1227,  1228,
    -300,  1245,  1229,  1005,   246,  1232,  1233,   668,  1241,   303,
     246,  1239,   579,   579,   579,   579,   579,  1244,  1243,  1248,
    1251,  1259,   579,  1262,  1257,  1253,  1261,  1264,  1265,  1266,
     246,  1278,   866,   246,   246,  1268,  1272,  1274,   578,   668,
    1267,  1273,   246,  1283,  1192,   763,   245,   996,   158,  1282,
    1279,  1281,   766,   997,   597,   668,   998,   999,  1000,  1001,
    1002,  1003,  1004,   634,   920,   245,   635,  1275,   771,   930,
    1126,   245,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   652,  1041,   158,  1016,   653,
     158,   245,   599,   928,   245,   245,   994,  1178,  1020,  1060,
     668,  1048,   158,   245,  1099,   864,   863,   417,   975,   905,
     579,  1061,   278,   279,   280,   903,   420,     0,     0,  -566,
    -566,     0,   440,     0,     0,     0,     0,     0,     0,     0,
     281,     0,   282,   283,   171,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,     0,   302,     0,     0,   158,   158,   579,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,     0,   579,     0,     0,     0,     0,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   579,     0,     0,     0,     0,     0,
     158,  -430,  -430,   111,   133,   134,     0,   136,   137,   138,
     140,   142,   143,   144,   145,     0,   147,   148,   149,   150,
     151,   152,   153,     0,     0,   164,   167,     0,     0,     0,
     580,     0,     0,     0,     0,     0,     0,   186,     0,     0,
       0,     0,     0,     0,   194,   196,     0,     0,     0,   618,
       0,   204,   580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,   431,     0,    35,     0,
     253,   256,     0,   432,   433,   579,     0,   579,   278,   279,
     280,     0,     0,     0,     0,     0,     0,   579,     0,     0,
       0,   440,     0,     0,     0,     0,   281,     0,   282,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   158,
     302,     0,   434,     0,   329,    68,    69,    70,    71,    72,
       0,     0,   303,   158,     0,   331,   435,     0,     0,     0,
       0,     0,    75,    76,  -664,  -664,  -664,  -664,   294,   295,
     296,   297,   298,   299,   300,   301,     0,   302,     0,   436,
      86,     0,     0,   278,   279,   280,     0,   256,     0,   303,
     256,     0,   579,   352,     0,     0,   111,     0,   360,     0,
       0,   281,     0,   282,   283,   579,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,     0,   302,     0,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,   303,   413,   580,
     580,   580,   580,   580,     0,     0,     0,     0,   430,   580,
       0,     0,   450,     0,     0,     0,     0,     0,   908,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   466,
       0,     0,     0,     0,     0,     0,     0,     0,   579,     0,
     352,   352,     0,     0,     0,     0,   352,     0,   489,     0,
       0,     0,     0,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,     0,   514,     0,     0,     0,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,     0,
       0,   352,     0,   352,   536,     0,   579,   580,     0,     0,
     656,     0,     0,     0,     0,     0,     0,   543,     0,   545,
     579,     0,     0,     0,   141,     0,     0,     0,     0,     0,
     111,   161,   161,   555,     0,   174,     0,   160,   160,   742,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   579,   580,     0,     0,   579,
       0,     0,     0,   202,   598,     0,     0,     0,   758,   759,
     580,     0,     0,     0,     0,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,     0,   721,   722,   723,   724,   725,     0,     0,
       0,   580,     0,   731,     0,     0,     0,   579,     0,     0,
       0,     0,     0,     0,     0,   360,     0,     0,   644,     0,
       0,     0,     0,     0,     0,     0,   111,     0,   654,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,     0,   302,     0,   352,     0,
       0,   678,     0,     0,     0,     0,     0,   683,   303,   684,
     161,   686,   687,   688,     0,     0,   337,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,     0,     0,     0,     0,     0,     0,
       0,     0,   580,   362,   580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,     0,     0,     0,     0,   161,
       0,     0,     0,     0,     0,   387,     0,   161,  -566,  -566,
       0,     0,     0,   396,   398,   402,   111,   161,   418,     0,
       0,     0,     0,   414,     0,     0,     0,     0,     0,   161,
       0,     0,     0,     0,     0,   448,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,   869,
     870,   871,   873,   874,   875,   876,   877,   878,   879,   880,
     881,   882,   883,   884,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   781,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,   164,   174,
       0,     0,   580,     0,     0,     0,     0,     0,     0,     0,
       0,   278,   279,   280,     0,     0,     0,     0,     0,     0,
       0,   370,     0,     0,     0,     0,     0,   805,     0,   281,
       0,   282,   283,   539,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,     0,   302,   829,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
       0,   839,     0,     0,     0,   580,     0,     0,     0,   360,
     846,     0,     0,     0,     0,   111,   966,     0,   967,     0,
       0,     0,   278,   279,   280,     0,     0,     0,   969,     0,
       0,   161,     0,     0,     0,     0,     0,   611,     0,     0,
     281,     0,   282,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   580,   302,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,   303,   580,   638,   641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
       0,     0,     0,     0,     0,   917,     0,     0,   699,     0,
       0,     0,   664,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   580,     0,     0,     0,   580,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1044,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   945,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,   690,     0,
       0,     0,     0,     0,     0,   961,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   161,
       0,   161,     0,     0,   580,   337,     0,   337,     0,   768,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,  -566,  -566,   976,     0,     0,     0,     0,
       0,     0,   981,     0,   983,   360,     0,     0,     0,     0,
       0,   352,     0,     0,     0,     0,     0,  -566,  -566,     0,
     161,     0,     0,     0,     0,     0,   396,  1019,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,     0,     0,     0,     0,     0,   161,
       0,     0,   161,     0,     0,   448,     0,     0,   448,     0,
       0,     0,     0,     0,   161,     0,     0,     0,     0,     0,
     337,   352,     0,     0,  -201,     0,     0,  -566,  -566,     0,
       0,     0,     0,     0,     0,   608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
     352,   352,     0,     0,     0,  -201,     0,     0,     0,   561,
       0,   278,   279,   280,   360,     0,     0,     0,     0,   161,
     161,     0,     0,     0,     0,   448,   448,     0,     0,   281,
    1093,   282,   283,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,     0,   302,     0,     0,     0,     0,     0,     0,
     111,     0,   111,   111,     0,   303,     0,     0,     0,   278,
     279,   280,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,   398,   281,   611,   282,
     283,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
    1167,   302,     0,     0,     0,     0,     0,     0,     0,   664,
       0,     0,     0,   303,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,     0,     0,
       0,   111,     0,     0,     0,   161,     0,  1198,     0,     0,
       0,   337,  -664,  -664,  -664,  -664,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   826,     0,
       0,  -566,  -566,     0,     0,     0,     0,     0,     0,     0,
       0,   758,   759,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,    11,  -664,  -664,  -664,  -664,
     750,   751,   752,   753,   754,   755,   756,   757,     0,     0,
       0,   161,     0,     0,     0,     0,     0,   611,     0,     0,
       0,   758,   759,     0,   304,   161,    12,    13,     0,     0,
       0,   448,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    51,     0,     0,    52,
      53,     0,    54,     0,     0,     0,    55,    56,    57,     0,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
      11,    74,    75,    76,    77,     0,    78,     0,    79,     0,
       0,     0,    80,    81,    82,     0,    83,    84,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,    55,    56,    57,     0,    58,    59,    60,   648,    62,
      63,    64,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,   131,    75,    76,    77,
       0,    78,     0,    79,     0,     0,     0,    80,    81,    82,
     707,    83,    84,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,     0,    50,    51,     0,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
      11,   131,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,   851,    83,    84,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,   131,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
    1123,    83,    84,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,     0,    50,    51,     0,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
      11,   131,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,  1191,    83,    84,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,   131,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,     0,    50,    51,     0,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     128,   131,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,    83,    84,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,  1260,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,   239,     0,     0,     0,    31,
      32,   240,    34,    35,     0,     0,     0,     0,     0,   241,
       0,     0,     0,     0,   242,     0,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   128,   131,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
     239,     0,     0,     0,    31,    32,   240,    34,    35,     0,
       0,     0,     0,     0,   241,     0,     0,     0,     0,   242,
       0,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   131,    75,    76,    77,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    82,    10,    11,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   129,    34,    35,
       0,   281,     0,   282,   283,    37,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,    48,   302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,   130,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   131,    75,    76,    77,   658,     0,     5,     6,
       7,     8,     9,     0,     0,    82,   659,    10,   128,     0,
      85,    86,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   129,
      34,    35,     0,     0,     0,   282,   283,    37,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,    48,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   303,
       0,   130,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   131,    75,    76,    77,   658,     5,
       6,     7,     8,     9,     0,     0,     0,    82,    10,   128,
       0,     0,    85,    86,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     129,    34,    35,     0,     0,     0,     0,   283,    37,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    48,   302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   130,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   128,   131,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   129,    34,    35,     0,     0,
       0,     0,     0,    37,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   758,   759,   130,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   128,
     131,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,   193,     0,     0,    85,    86,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     129,    34,    35,     0,     0,     0,     0,     0,    37,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    48,   302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   130,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   128,   131,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
     195,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   129,    34,    35,     0,     0,
       0,     0,     0,    37,   741,   742,   743,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   758,   759,     0,   130,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   128,
     131,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,   199,     0,     0,    85,    86,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     129,    34,    35,     0,     0,     0,     0,     0,    37,     0,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    48,   302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,   130,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   131,    75,    76,    77,     0,
       0,     0,     0,     0,   252,     0,     0,     0,    82,     0,
       0,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   129,    34,    35,     0,     0,
       0,     0,     0,    37,  -664,  -664,  -664,  -664,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
       0,   302,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,     0,   130,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     131,    75,    76,    77,     0,     0,     5,     6,     7,     8,
       9,     0,     0,    82,   349,    10,   128,     0,    85,    86,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   129,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   131,    75,    76,    77,     0,     5,     6,     7,
       8,     9,     0,     0,     0,    82,    10,   128,     0,     0,
      85,    86,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   542,     0,     0,
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
      71,    72,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,     0,   131,    75,    76,    77,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    82,    10,   128,     0,
       0,    85,    86,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   129,
      34,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   131,    75,    76,    77,     0,     5,
       6,     7,     8,     9,     0,     0,     0,    82,    10,   128,
       0,     0,    85,    86,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     129,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   131,    75,    76,    77,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    82,    10,
     128,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     838,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   129,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   128,   131,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   129,    34,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
      11,   131,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   129,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   128,   131,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   129,   412,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     128,   131,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   129,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   131,    75,    76,    77,
     278,   279,   280,     0,     0,     0,     0,     0,     0,   449,
       0,     0,     0,     0,    85,    86,     0,    87,   281,     0,
     282,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,     0,   302,   278,   279,   280,     0,     0,     0,     0,
       0,     0,     0,     0,   303,     0,     0,     0,     0,     0,
       0,   281,   962,   282,   283,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,     0,   302,   278,   279,   280,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,     0,
       0,     0,     0,     0,   281,     0,   282,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,     0,   302,     0,
       0,     0,     0,     0,     0,   278,   279,   280,     0,     0,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   281,     0,   282,   283,  1026,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,     0,   302,     0,   278,
     279,   280,     0,     0,     0,     0,     0,     0,     0,   303,
       0,     0,     0,     0,     0,     0,     0,   281,   963,   282,
     283,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
       0,   302,   278,   279,   280,     0,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,     0,     0,     0,     0,
     281,   365,   282,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,     0,   302,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,     0,     0,   278,   279,   280,     0,     0,     0,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   281,     0,   282,   283,   797,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,     0,   302,   278,   279,   280,
       0,     0,     0,     0,   372,     0,     0,     0,   303,     0,
       0,     0,     0,     0,     0,   281,     0,   282,   283,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,     0,   302,
     278,   279,   280,     0,     0,     0,   463,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,     0,   281,     0,
     282,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,     0,   302,     0,     0,     0,   278,   279,   280,     0,
       0,     0,     0,     0,   303,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   281,     0,   282,   283,   463,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,     0,   302,   278,
     279,   280,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,     0,     0,     0,     0,     0,   281,     0,   282,
     283,   537,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
       0,   302,   278,   279,   280,     0,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,     0,     0,     0,     0,
     281,     0,   282,   283,  1052,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,     0,   302,   278,   279,   280,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,     0,   281,   460,   282,   283,     0,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,     0,   302,   278,   279,
     280,     0,     0,     0,     0,     0,     0,     0,     0,   303,
       0,     0,     0,     0,     0,     0,   281,   628,   282,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,     0,
     302,   278,   279,   280,     0,     0,     0,     0,     0,     0,
       0,     0,   303,     0,     0,     0,     0,     0,     0,   281,
     801,   282,   283,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,     0,   302,     0,     0,     0,     0,   872,     0,
       0,     0,     0,     0,     0,   303,     0,     0,     0,     0,
       0,     0,     0,   985,   567,   568,     0,     0,     0,     0,
     569,     0,   570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   571,     0,     0,   733,   734,   735,
       0,     0,    31,    32,   129,     0,     0,     0,     0,     0,
       0,     0,   572,     0,     0,   736,  1197,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,     0,
       0,   758,   759,     0,     0,     0,     0,     0,     0,  1219,
     573,     0,   574,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,   435,   733,   734,   735,     0,   575,
      75,    76,   576,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   577,   736,     0,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   860,   278,   279,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   758,
     759,     0,     0,     0,     0,   281,     0,   282,   283,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,     0,   302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   278,   279,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     281,     0,   282,   283,  1043,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,     0,   302,     0,     0,   278,   279,   280,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,     0,     0,     0,   281,   330,   282,   283,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,     0,   302,
     567,   568,     0,     0,     0,     0,   569,     0,   570,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
     571,     0,     0,     0,     0,   278,   279,   280,    31,    32,
     129,   338,     0,     0,     0,     0,     0,     0,   572,     0,
       0,     0,     0,   281,     0,   282,   283,     0,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,     0,   302,     0,     0,
       0,     0,   154,     0,     0,     0,   702,     0,     0,   303,
       0,     0,     0,     0,     0,     0,   573,     0,   574,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
     435,   733,   734,   735,     0,   575,    75,    76,   576,   645,
       0,     0,     0,     0,     0,     0,     0,     0,   577,   736,
     970,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   733,   734,   735,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   758,   759,     0,     0,     0,
     736,     0,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   278,   279,   280,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   758,   759,     0,     0,
       0,   281,   830,   282,   283,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,     0,   302,   278,   279,   280,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,     0,
       0,     0,     0,     0,   281,     0,   282,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,     0,   302,   734,
     735,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,     0,     0,     0,     0,   736,     0,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   279,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   758,   759,     0,     0,   281,     0,   282,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   735,
     302,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   303,     0,     0,   736,     0,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   758,   759,     0,   281,     0,   282,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,     0,   302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   736,
     303,   737,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   758,   759,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   747,   748,   749,
     750,   751,   752,   753,   754,   755,   756,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   758,   759,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   758,   759,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     758,   759
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1101)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-664)))

static const yytype_int16 yycheck[] =
{
      24,    25,    84,     4,    28,   132,    11,    29,    30,   265,
      28,   446,    78,     4,   551,   770,    28,    82,   225,  1010,
     302,   276,    44,    82,   426,   639,   446,   390,   542,    53,
     544,     8,   271,   272,     8,    80,     4,     8,   277,  1054,
      85,  1056,    87,     8,     8,    50,     8,    64,     8,     8,
      74,    31,    68,    77,     8,    28,    57,     8,   924,     8,
       8,    28,   817,   227,   320,    76,   321,    64,   232,   227,
      64,   472,     8,    78,   232,     8,  1176,     8,    64,   334,
     335,     8,    28,   322,   248,   324,     8,   251,     8,   344,
     248,   346,   219,   251,   258,   259,    74,   261,    81,   263,
     258,   259,    74,   261,    74,   263,    76,     0,     8,    64,
     157,    64,    31,   178,   565,     0,   181,   164,    33,  1134,
      33,   152,  1222,   101,   102,   162,    31,    74,   162,   130,
     162,   148,   156,   164,   165,    74,    28,    76,   122,   163,
    1240,   157,    76,   657,    51,   169,   212,    76,   165,   162,
      76,   148,   122,    74,  1169,    76,    63,   168,  1024,    64,
    1175,    76,   145,    76,   162,   162,   188,   101,   165,    64,
      74,   165,   127,   429,   152,   122,   162,   157,   124,   165,
     152,   205,   206,   207,   798,   190,    64,   164,   212,  1180,
     164,   165,   165,   164,  1060,   165,   220,   164,   168,   164,
     164,    74,   164,  1218,   164,   164,   230,   231,  1223,  1224,
     164,   235,   165,   164,   163,   163,   221,   222,   242,   187,
    1235,    74,   642,    76,   626,   645,   165,   163,   240,   168,
     163,   177,   163,   847,   848,    74,   163,    76,   157,   168,
     479,   163,   168,   163,     8,   164,    74,   168,   152,   127,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   163,   276,    64,   717,    74,   719,    76,
     671,   122,    74,   162,    74,   710,   148,   116,   302,   534,
     152,   162,    93,   148,   302,   231,   162,   152,   162,   371,
     302,   162,   712,   713,   240,    74,   551,    61,    62,    33,
     162,    74,   665,    76,    96,    97,    64,   148,   332,   321,
     149,   152,   165,   152,    33,   168,   148,    74,   342,    93,
     152,   162,   334,   335,   838,   330,   165,    66,   127,   168,
     276,    76,   344,    93,   346,    74,    81,    76,   165,    74,
      74,   152,    76,   116,   368,    95,    96,    97,    74,   373,
     152,   714,   152,   377,    74,    74,   302,    76,   164,   383,
      93,   168,    78,   165,    64,   620,   390,   622,   624,   127,
     149,    64,   986,   152,   166,   321,   149,   116,   152,   152,
     404,    33,   116,   351,   449,    64,   923,    93,   334,   335,
     449,   436,   152,   148,    74,   168,    74,   116,   344,   163,
     346,   146,   147,    64,   469,   148,   769,   689,    96,    97,
     149,   812,   127,   152,   149,   149,   166,   152,   152,   152,
     165,   445,   629,   679,   680,    61,    62,   439,   162,   168,
     149,   163,   164,   152,   168,   691,   692,    64,   154,   101,
     156,    74,   152,    76,   160,   161,   152,    78,   472,   168,
     130,   131,   130,   131,   163,   164,   457,    74,  1213,    76,
      77,    95,    96,    97,   469,   152,   457,   631,    93,   149,
     552,   149,   152,   631,   152,    69,    70,    71,   166,    63,
      78,   916,    74,   116,    76,   163,    74,   169,    76,   457,
    1027,   515,    78,   439,   148,     8,   129,   443,   918,    63,
      64,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   276,     8,   149,   152,   542,   152,
     544,    28,   534,   154,   116,   156,   148,   152,   116,   160,
     161,   932,   166,    76,   152,   168,   148,   148,    81,   551,
     486,   152,   148,   567,   568,   569,   570,   571,    61,    62,
     127,   162,   576,   577,    69,    70,   154,   149,   156,   321,
     152,   149,   160,   161,   152,   589,    76,   162,   154,   593,
     156,    81,   334,   335,   160,   161,   168,   148,    76,   603,
     168,   152,   164,    81,    82,   164,   165,    14,   534,   557,
     164,   162,   165,    76,   957,    14,   997,   836,    81,   157,
    1035,   163,    76,   146,   147,   551,   157,    81,   620,    76,
     622,    95,    96,    97,    81,    95,    96,    97,   642,    24,
      25,   645,   165,    28,   167,   707,    44,    45,    46,    47,
      48,    49,    14,   657,    69,    70,   146,   147,    47,    48,
      49,   665,    51,   667,  1045,    63,    64,   671,   146,   147,
     163,   163,   676,   170,    63,   165,   162,   167,    69,    70,
    1095,   163,   145,   146,   147,   689,   166,   165,   923,   125,
      76,   689,   146,   147,   620,    81,   622,   689,   145,   146,
     147,    74,   165,   922,   706,    74,   942,    74,   712,   713,
     714,   165,    76,    24,    25,    76,   823,    81,   165,    64,
      81,  1102,    28,  1104,   728,   729,    69,    70,    71,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   169,    85,  1101,   145,
     146,   147,  1143,   689,   164,   769,   770,     8,   716,    93,
      74,   775,  1115,   992,    47,    48,    49,    74,   163,   165,
     163,    76,   146,   147,    78,   146,   147,   164,   773,   851,
      63,    64,  1027,   111,   112,   113,   114,   115,   116,    74,
    1181,   165,  1021,  1022,   165,   101,   810,  1150,   812,   163,
      64,  1154,   148,   817,   166,   111,   112,   113,   114,   115,
     116,   806,   166,   148,   166,    14,    14,   212,   162,   128,
      74,    74,    14,    78,   838,   220,   157,   125,   169,   169,
      72,    73,    74,   162,    76,   230,   231,   162,  1229,    81,
      82,    14,     9,    10,    11,   162,   860,   242,   862,   169,
     154,    78,   156,   164,   162,   152,   160,   161,   872,  1212,
      27,   164,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,  1274,   162,   169,   148,   169,   130,   166,
     904,   133,   134,   135,   136,   137,    63,    64,    78,   154,
      74,   156,   144,    74,   918,   160,   161,   302,   150,   151,
      74,    14,   162,   162,   166,   157,   164,   145,   932,    14,
     164,   923,   936,   979,   159,   167,   168,   154,   162,   156,
      78,   163,   152,   160,   161,   126,   165,   949,   162,   169,
       8,    74,   105,   957,    78,    74,   169,    74,    14,  1066,
     169,   166,   163,   159,   163,   165,   970,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    1042,     8,     8,   368,   154,   163,   156,   162,   164,    86,
     160,   161,   164,   997,   979,    14,   164,   923,   163,   166,
     162,   157,   950,   163,    28,   390,   164,   127,  1070,   108,
    1072,   163,   169,   153,    61,    62,   154,  1079,   156,   404,
      64,    64,   160,   161,  1086,   169,   127,  1029,  1009,  1091,
     154,   164,   156,   163,   163,  1027,   160,   161,    92,  1043,
     106,  1045,   164,   164,   169,    74,   162,   165,     9,    10,
      11,   165,    28,    76,    71,   164,   163,   165,   169,   157,
     445,  1123,    14,    76,    74,    14,    27,  1129,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   169,
    1136,   169,  1138,    28,   164,   163,   165,  1101,  1102,  1161,
    1104,  1027,    63,    64,   157,    14,    74,    14,    71,   102,
      76,  1115,    76,   163,   166,   108,   163,   164,   111,   112,
     113,   114,   115,   116,   117,   166,   166,    48,    93,  1191,
     515,   166,   164,  1081,    93,   109,   164,   148,    76,  1143,
      90,   163,    68,   157,    74,   166,  1150,    70,    14,    76,
    1154,  1136,   164,  1138,   162,  1201,   157,   542,   157,   544,
      44,    45,    46,    47,    48,    49,    48,    51,    48,    74,
      74,  1233,     8,   166,  1220,    88,   165,  1181,    89,    63,
    1226,    87,   567,   568,   569,   570,   571,   164,   163,    48,
     157,    87,   577,  1255,   166,   157,    48,   157,    87,    89,
    1246,    76,   163,  1249,  1250,   105,   157,   162,  1212,  1213,
     166,   157,  1258,   166,  1162,   589,  1201,   102,   603,  1281,
     163,   165,   593,   108,   383,  1229,   111,   112,   113,   114,
     115,   116,   117,   439,   799,  1220,   439,  1270,   603,   812,
    1084,  1226,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   457,   961,   642,   936,   457,
     645,  1246,   388,   806,  1249,  1250,   931,  1143,   939,   993,
    1274,   974,   657,  1258,  1058,   728,   727,   231,   904,   775,
     665,   166,     9,    10,    11,   773,   231,    -1,    -1,    61,
      62,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,   689,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,   712,   713,   714,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,   728,    -1,    -1,    -1,    -1,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   769,    -1,    -1,    -1,    -1,    -1,
     775,   163,   164,     4,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,   166,
      -1,    52,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,
      81,    82,    -1,    81,    82,   860,    -1,   862,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   872,    -1,    -1,
      -1,   439,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   904,
      51,    -1,   130,    -1,   135,   133,   134,   135,   136,   137,
      -1,    -1,    63,   918,    -1,   146,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,   167,
     168,    -1,    -1,     9,    10,    11,    -1,   178,    -1,    63,
     181,    -1,   957,   184,    -1,    -1,   187,    -1,   189,    -1,
      -1,    27,    -1,    29,    30,   970,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    63,   229,   567,
     568,   569,   570,   571,    -1,    -1,    -1,    -1,   239,   577,
      -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1043,    -1,
     271,   272,    -1,    -1,    -1,    -1,   277,    -1,   279,    -1,
      -1,    -1,    -1,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,    -1,   303,    -1,    -1,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,   322,    -1,   324,   325,    -1,  1101,   665,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,   340,
    1115,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
     351,    24,    25,   354,    -1,    28,    -1,    24,    25,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,  1150,   714,    -1,    -1,  1154,
      -1,    -1,    -1,    50,   385,    -1,    -1,    -1,    63,    64,
     728,    -1,    -1,    -1,    -1,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,    -1,   567,   568,   569,   570,   571,    -1,    -1,
      -1,   769,    -1,   577,    -1,    -1,    -1,  1212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   446,    -1,    -1,   449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   457,    -1,   459,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,   479,    -1,
      -1,   482,    -1,    -1,    -1,    -1,    -1,   488,    63,   490,
     163,   492,   493,   494,    -1,    -1,   163,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   860,   190,   862,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   872,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   220,    61,    62,
      -1,    -1,    -1,   220,   221,   222,   557,   230,   231,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   728,    -1,    -1,    -1,    -1,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   617,    -1,    -1,   957,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   629,   302,
      -1,    -1,   970,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,   658,    -1,    27,
      -1,    29,    30,   330,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,   685,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,   702,    -1,    -1,    -1,  1043,    -1,    -1,    -1,   710,
     711,    -1,    -1,    -1,    -1,   716,   860,    -1,   862,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,   872,    -1,
      -1,   404,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
      27,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,  1101,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    -1,    -1,    -1,    63,  1115,   445,   446,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   790,
      -1,    -1,    -1,    -1,    -1,   796,    -1,    -1,   166,    -1,
      -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1150,    -1,    -1,    -1,  1154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   970,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   836,   837,    -1,    -1,    -1,
      -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,   515,    -1,
      -1,    -1,    -1,    -1,    -1,   856,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   542,
      -1,   544,    -1,    -1,  1212,   542,    -1,   544,    -1,   166,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,  1043,
      -1,    -1,    -1,    61,    62,   906,    -1,    -1,    -1,    -1,
      -1,    -1,   913,    -1,   915,   916,    -1,    -1,    -1,    -1,
      -1,   922,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
     603,    -1,    -1,    -1,    -1,    -1,   603,   938,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   950,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,   642,
      -1,    -1,   645,    -1,    -1,   642,    -1,    -1,   645,    -1,
      -1,    -1,    -1,    -1,   657,    -1,    -1,    -1,    -1,    -1,
     657,   992,    -1,    -1,   128,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,
    1021,  1022,    -1,    -1,    -1,   159,    -1,    -1,    -1,    93,
      -1,     9,    10,    11,  1035,    -1,    -1,    -1,    -1,   712,
     713,    -1,    -1,    -1,    -1,   712,   713,    -1,    -1,    27,
    1051,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
    1081,    -1,  1083,  1084,    -1,    63,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,  1095,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   775,    -1,    -1,    -1,   773,    27,   775,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    1131,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   806,
      -1,    -1,    -1,    63,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,  1162,    -1,    -1,    -1,   838,    -1,  1168,    -1,    -1,
      -1,   838,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   166,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,   904,    -1,    -1,    -1,    -1,    -1,   904,    -1,    -1,
      -1,    63,    64,    -1,   164,   918,    44,    45,    -1,    -1,
      -1,   918,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,   107,
     108,    -1,   110,    -1,    -1,    -1,   114,   115,   116,    -1,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,   154,    -1,   156,    -1,
      -1,    -1,   160,   161,   162,    -1,   164,   165,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
     103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,   114,   115,   116,    -1,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,   154,    -1,   156,    -1,    -1,    -1,   160,   161,   162,
      28,   164,   165,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    28,   164,   165,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
     103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      28,   164,   165,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    28,   164,   165,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,
      83,    84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,
     103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,   164,   165,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,   164,   165,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,   149,   150,   151,   152,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,   162,    12,    13,    -1,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    27,    -1,    29,    30,    82,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   101,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,   152,   153,    -1,     3,     4,
       5,     6,     7,    -1,    -1,   162,   163,    12,    13,    -1,
     167,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    29,    30,    82,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   101,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,   150,   151,   152,   153,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   162,    12,    13,
      -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    30,    82,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   101,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,   164,    -1,    -1,   167,   168,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   101,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
     164,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,   164,    -1,    -1,   167,   168,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   101,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     149,   150,   151,   152,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   162,   163,    12,    13,    -1,   167,   168,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,   152,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,   162,    12,    13,    -1,    -1,
     167,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
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
     136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,   149,   150,   151,   152,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   162,    12,    13,    -1,
      -1,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,   150,   151,   152,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   162,    12,    13,
      -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,   152,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,   162,    12,
      13,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    13,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   167,   168,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      13,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   167,
     168,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,   151,   152,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,   167,   168,    -1,   170,    27,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,   166,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,   164,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      27,   164,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    93,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
       9,    10,    11,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,   163,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,
      30,   163,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,   163,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   157,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    27,   157,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     157,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    44,    45,    -1,    -1,    -1,    -1,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,     9,    10,    11,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    27,   157,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,   157,
     130,    -1,   132,   133,   134,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,   144,     9,    10,    11,    -1,   149,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   128,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    29,    30,   128,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,   128,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,     9,    10,    11,    72,    73,
      74,   128,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,   128,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,     9,    10,    11,    -1,   149,   150,   151,   152,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    27,    28,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    -1,    -1,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    11,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      63,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64
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
     135,   136,   137,   144,   149,   150,   151,   152,   154,   156,
     160,   161,   162,   164,   165,   167,   168,   170,   175,   176,
     185,   189,   190,   229,   251,   252,   255,   257,   260,   262,
     333,   335,   349,   350,   351,   352,   355,   364,   375,   380,
     381,   385,   386,   387,   389,   390,   400,   401,   402,   403,
     405,   406,   408,   409,   415,   426,   430,   432,    13,    74,
     116,   149,   352,   385,   385,   162,   385,   385,   385,   335,
     385,   390,   385,   385,   385,   385,   346,   385,   385,   385,
     385,   385,   385,   385,   116,   149,   152,   175,   364,   389,
     390,   402,   389,    33,   385,   419,   420,   385,   149,   152,
     175,   364,   366,   367,   402,   406,   408,   415,   162,   372,
     386,   162,   386,    28,    64,   323,   385,   197,   195,   162,
     162,   207,   386,   164,   385,   164,   385,    74,    74,   164,
     335,   385,   390,   208,   385,   101,   102,   152,   175,   179,
     180,    76,   168,   297,   298,   122,   122,    76,   299,   352,
     162,   162,   162,   162,   162,   162,    76,    81,   145,   146,
     147,   165,   421,   422,   424,   152,   165,   175,   175,    68,
      74,    82,    87,    89,   218,   335,   387,   186,    81,    82,
     228,   421,   158,   385,   333,   349,   385,   186,    81,   421,
     165,    81,   373,   421,   152,   356,     8,   164,    74,    74,
     164,    64,    64,    33,   253,   404,   148,    64,     9,    10,
      11,    27,    29,    30,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    51,    63,   164,    61,    62,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     363,   148,    64,   127,    64,   165,   168,   408,   253,   385,
     128,   385,   152,   175,   148,   148,   388,   390,   128,   169,
       8,   383,   152,   175,   148,   334,   148,   127,   408,   163,
      28,   191,   385,   410,     8,   164,   189,   386,   324,   325,
     385,   335,   390,   162,   202,   164,   164,   164,    14,   164,
     164,   165,   164,   152,   175,   181,   182,   152,   175,   183,
     184,   175,    93,     8,   164,   165,   387,   390,     8,   164,
      14,     8,   164,   253,   249,   250,   390,   335,   390,   427,
     429,   335,   390,   163,   336,   419,    64,   127,    81,   145,
     422,   424,    75,   385,   390,   168,   364,   401,   402,   408,
     430,    81,   145,   422,   424,   175,   178,   164,   165,   358,
     385,    74,    81,    82,   130,   144,   167,   223,   224,   225,
     375,   407,   408,   415,    31,    33,   162,   267,   390,   162,
     385,    31,   157,   157,   164,   164,   157,   187,   157,    14,
     157,   163,   163,   163,   166,   167,   385,   170,    74,   162,
     294,    74,   125,   261,   259,   410,   410,    74,   347,    64,
      74,   122,   165,   400,   408,   414,   415,   410,   340,   385,
     341,    28,   343,   338,   339,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   366,   385,    33,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   294,
      74,   400,   414,   410,   391,   410,   385,   163,   335,   390,
     175,    74,    33,   385,    33,   385,   175,   400,   294,   374,
     400,   368,   193,   189,   169,   385,    85,   196,   164,     8,
      93,    93,    74,   271,    28,   165,   272,    44,    45,    50,
      52,    64,    82,   130,   132,   149,   152,   162,   175,   364,
     375,   376,   377,   378,   379,   431,   186,   175,    93,     8,
     164,   175,    93,     8,   164,    93,    74,   180,   385,   298,
     377,    76,   348,     8,   163,     8,   163,   163,   163,   164,
     129,   390,   416,   417,   163,   423,    74,    64,   166,   166,
     148,   166,   148,   166,   357,   173,   177,   294,   157,   162,
      81,   421,    14,   157,   223,   224,   408,    74,   390,   267,
     324,   390,   128,   266,   385,    93,    74,   157,   121,   188,
     189,   229,   251,   252,   385,   342,   166,    33,   153,   163,
     295,   296,   335,   349,   390,    14,   149,   152,   175,   365,
     258,   125,   263,   169,   169,   256,   162,   410,   385,   360,
     359,   408,   169,   385,   385,   345,   385,   385,   385,    66,
     390,   362,   361,   169,   400,   411,   413,   414,   169,   166,
     388,   388,   128,   411,   186,   192,   198,    28,   189,   277,
     199,   326,   205,   203,    14,     8,   163,   164,   273,   164,
     273,   378,   378,   378,   378,   378,   382,   384,   162,   152,
     175,   378,   148,     9,    10,    11,    27,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    63,    64,
     166,    93,    74,   182,    93,    74,   184,    74,   166,    14,
     162,   250,   164,   428,   162,     8,   163,    74,    76,    77,
     425,   385,    74,    74,   294,   166,   173,   235,   419,   167,
     226,    14,   219,   266,   164,   267,   159,    93,   267,   220,
     162,   157,   331,   332,   388,   385,     8,   163,   163,   377,
     152,   175,   126,   264,   265,   365,   165,   162,   130,   131,
     290,   291,   292,   293,   365,   169,   166,   294,   294,   385,
      28,   366,   294,   294,   412,   392,    64,   165,    33,   385,
     369,   194,   278,   386,   186,   324,   385,   267,   267,   377,
      74,    28,   189,   270,   273,    95,    96,    97,   273,   166,
     128,   169,     8,   383,   382,   175,   163,    74,   122,   378,
     378,   378,    28,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   105,   210,    74,
      74,   377,   290,   429,   418,   417,    14,   169,   169,   166,
     217,   163,   385,   227,   221,   159,   237,   385,   230,   266,
     221,   163,    64,   127,   327,   328,   329,   394,   296,   175,
     265,   165,     8,   300,   290,   163,     8,   253,   344,   337,
     396,   397,   398,   399,   410,   385,   388,   370,   283,    69,
      70,   285,   164,    86,   164,   266,   266,    14,   186,    95,
     164,   385,    28,   164,   276,   166,   378,   378,   163,   378,
      28,   169,   162,   209,   163,   416,   385,   166,    78,   154,
     229,   385,    28,   385,   324,   157,   267,   157,   164,   410,
     411,   394,    64,   330,   300,   365,   102,   108,   111,   112,
     113,   114,   115,   116,   117,   166,   301,   304,   317,   318,
     319,   320,   322,   163,   108,   353,   292,   153,   254,   385,
     374,    64,    64,   294,   393,   169,   166,   127,   371,    69,
      70,   288,   386,   189,   164,   200,   163,   163,   377,    92,
     164,   276,   275,   128,   378,   211,   106,   215,   353,   163,
     236,   222,   163,   164,   242,   266,   233,   169,   395,   410,
     327,   166,    74,   305,   365,   302,   352,   320,     8,   164,
     165,   162,   165,    76,   410,   410,   394,   411,   386,    28,
      71,   279,   324,   206,   204,   164,   274,   186,   378,   365,
     216,   165,   280,   385,   157,   238,   217,   163,   217,   399,
     169,    14,     8,   164,   165,   306,    76,   321,   253,    74,
     186,    33,    76,   354,   186,    14,   169,   169,    28,   186,
     164,   189,   163,    28,   189,   269,   269,   186,   212,   165,
     186,    69,    70,   286,   240,   324,   154,   157,   154,   377,
     365,    74,   307,   308,   309,   310,   312,   313,   314,   365,
      14,     8,   164,    74,    14,   166,    76,     8,   163,   166,
     377,   284,   201,   186,    76,   186,   166,   385,    68,   157,
      48,   287,   217,   163,   243,   231,   234,   166,   309,   164,
      93,   109,   164,   148,   377,    76,   303,   377,    33,    76,
     186,    28,   189,   268,    90,   163,   166,   157,   385,   217,
      68,   154,   157,    70,   289,   217,   289,   315,   320,   311,
     365,    74,    14,   162,    76,   186,   164,   213,   281,   157,
     154,   157,   241,   239,   157,    48,   154,    48,    74,     8,
     377,   290,    88,   165,   217,   282,   289,   217,   217,    87,
     232,    89,   365,   163,   164,   186,   154,   217,    48,   154,
     154,   157,   289,   157,   164,   165,   316,   166,   154,    87,
      48,    48,   186,   214,   157,    87,    89,   166,   105,   244,
     245,   246,   157,   157,   162,   246,   365,   247,    76,   163,
     248,   165,   186,   166
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
#line 232 "Zend56/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 236 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 236 "Zend56/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 241 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 242 "Zend56/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 246 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 247 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 248 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 249 "Zend56/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 250 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 251 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 252 "Zend56/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 253 "Zend56/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 254 "Zend56/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 255 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 256 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 257 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 258 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 259 "Zend56/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 268 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 269 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 270 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 271 "Zend56/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 280 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 281 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 282 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 283 "Zend56/zend_language_parser.y"
    { zend_do_use_function(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 292 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 293 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 294 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 295 "Zend56/zend_language_parser.y"
    { zend_do_use_const(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 299 "Zend56/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 300 "Zend56/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 304 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 304 "Zend56/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 314 "Zend56/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 319 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 320 "Zend56/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 325 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 325 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 325 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 326 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 326 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 326 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 327 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 327 "Zend56/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 327 "Zend56/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 328 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 328 "Zend56/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 328 "Zend56/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 332 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 334 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 336 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 337 "Zend56/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 338 "Zend56/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 338 "Zend56/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 339 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 340 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 341 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 342 "Zend56/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 343 "Zend56/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 344 "Zend56/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 345 "Zend56/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 346 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 350 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 351 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 354 "Zend56/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 355 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 356 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 358 "Zend56/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 359 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 360 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 361 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 361 "Zend56/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 363 "Zend56/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 364 "Zend56/zend_language_parser.y"
    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 365 "Zend56/zend_language_parser.y"
    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 366 "Zend56/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 367 "Zend56/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 371 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 372 "Zend56/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 373 "Zend56/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 374 "Zend56/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 375 "Zend56/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 376 "Zend56/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 379 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 380 "Zend56/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 380 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 386 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 391 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 392 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 393 "Zend56/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 394 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 395 "Zend56/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 396 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 401 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 402 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 402 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 406 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 407 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 411 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 413 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 414 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 415 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 419 "Zend56/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 419 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 420 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 420 "Zend56/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 421 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 422 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 426 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 427 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 428 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 435 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 437 "Zend56/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 444 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 449 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 450 "Zend56/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 451 "Zend56/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 453 "Zend56/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 457 "Zend56/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 459 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 460 "Zend56/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 461 "Zend56/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 462 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 464 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 465 "Zend56/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 466 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 468 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 471 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 473 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 476 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 477 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 478 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 480 "Zend56/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 483 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 484 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 485 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 487 "Zend56/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 488 "Zend56/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 489 "Zend56/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 493 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 494 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 498 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 499 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 503 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 503 "Zend56/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 503 "Zend56/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 512 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 516 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 520 "Zend56/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 524 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 525 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 529 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 530 "Zend56/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 534 "Zend56/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 536 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 541 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 545 "Zend56/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 547 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 551 "Zend56/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 556 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 557 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 558 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 559 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 563 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 564 "Zend56/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 568 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 582 "Zend56/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 583 "Zend56/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 587 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 588 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 592 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 593 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 617 "Zend56/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 618 "Zend56/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 623 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 624 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 625 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 626 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 631 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 632 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 632 "Zend56/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 633 "Zend56/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 633 "Zend56/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 652 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 652 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 657 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 657 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 658 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 658 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 663 "Zend56/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 663 "Zend56/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 704 "Zend56/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV, &(yyvsp[(4) - (4)]), NULL, &(yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]).op_type, (yyvsp[(3) - (4)]).op_type TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 706 "Zend56/zend_language_parser.y"
    { zend_do_receive_param(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyvsp[(6) - (6)]), &(yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]).op_type, (yyvsp[(3) - (6)]).op_type TSRMLS_CC); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 711 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 712 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 713 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 714 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 719 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 720 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 721 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 731 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 732 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR TSRMLS_CC); }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 733 "Zend56/zend_language_parser.y"
    { zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF TSRMLS_CC); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 734 "Zend56/zend_language_parser.y"
    { zend_do_unpack_params(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 738 "Zend56/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 739 "Zend56/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 744 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 745 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 746 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 751 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 752 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 753 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 754 "Zend56/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 766 "Zend56/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 769 "Zend56/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 771 "Zend56/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 779 "Zend56/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 780 "Zend56/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 804 "Zend56/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 808 "Zend56/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 809 "Zend56/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]) TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 813 "Zend56/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 814 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 818 "Zend56/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 822 "Zend56/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 823 "Zend56/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 827 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 828 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 832 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 833 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 837 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 838 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 842 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 843 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 847 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 848 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 852 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 853 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 854 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 855 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 856 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 857 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 861 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 862 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 863 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 864 "Zend56/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 868 "Zend56/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 869 "Zend56/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 873 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 874 "Zend56/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 879 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 880 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 884 "Zend56/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 884 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 885 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 889 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 890 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 894 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 895 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 899 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 899 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 900 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 901 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 905 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 906 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 907 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 911 "Zend56/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 911 "Zend56/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 915 "Zend56/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 915 "Zend56/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 916 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 917 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 918 "Zend56/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 918 "Zend56/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 919 "Zend56/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 920 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 921 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 922 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 923 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 924 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 925 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 926 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 927 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 928 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 929 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 930 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 931 "Zend56/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 932 "Zend56/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 933 "Zend56/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 934 "Zend56/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 935 "Zend56/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 936 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 936 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 937 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 937 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 938 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 938 "Zend56/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 939 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 939 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 940 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 943 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 944 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 945 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 946 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 947 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 948 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 949 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 950 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 951 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 952 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 953 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 954 "Zend56/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 955 "Zend56/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 956 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 957 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 958 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 959 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 960 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 961 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 962 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 963 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 964 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 965 "Zend56/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 966 "Zend56/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 967 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 968 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 969 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 969 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 970 "Zend56/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 971 "Zend56/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 972 "Zend56/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 973 "Zend56/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 974 "Zend56/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 975 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 976 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 977 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 978 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 979 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 980 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 981 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 982 "Zend56/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 983 "Zend56/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 984 "Zend56/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 984 "Zend56/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 985 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 986 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 987 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 988 "Zend56/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 989 "Zend56/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 990 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 991 "Zend56/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 993 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 994 "Zend56/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 996 "Zend56/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 1000 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 1001 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 1002 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 1003 "Zend56/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 1007 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 1008 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1009 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1010 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1014 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1015 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1019 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1028 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1029 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1030 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1031 "Zend56/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1035 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1036 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1037 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1038 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1039 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1040 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1041 "Zend56/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1042 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1043 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1044 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1045 "Zend56/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1046 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1047 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1048 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1049 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1050 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1054 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1055 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1056 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1057 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1061 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1062 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1063 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1069 "Zend56/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1070 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1075 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1076 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1077 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1078 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1089 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1093 "Zend56/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1094 "Zend56/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1095 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1099 "Zend56/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1100 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1101 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1106 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1107 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1112 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1113 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1114 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1115 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1116 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1117 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1118 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1119 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1120 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1121 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1122 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1123 "Zend56/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1127 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1131 "Zend56/zend_language_parser.y"
    { zend_do_constant_expression(&(yyval), (yyvsp[(1) - (1)]).u.ast TSRMLS_CC); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1135 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1136 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1137 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1138 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1139 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1140 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1141 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1142 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1143 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1144 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1148 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_FETCH_DIM_R, (yyvsp[(1) - (4)]).u.ast, (yyvsp[(3) - (4)]).u.ast); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1149 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1150 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1151 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1152 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_POW, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1153 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_DIV, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1154 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_MOD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1155 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BOOL_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1156 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_BW_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1157 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1158 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1159 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1160 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1161 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_SR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1162 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_CONCAT, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1163 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1164 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1165 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1166 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1167 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1168 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1169 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1170 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1171 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1172 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1173 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1174 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1175 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1176 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (4)]).u.ast, NULL, (yyvsp[(4) - (4)]).u.ast); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1177 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (5)]).u.ast, (yyvsp[(3) - (5)]).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1178 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_PLUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1179 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_MINUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1180 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1184 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1185 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1186 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1187 "Zend56/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1191 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1192 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1193 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1194 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1195 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1196 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1197 "Zend56/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1201 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1202 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_shrink(&(yyvsp[(1) - (2)]).u.ast); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1211 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (5)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1212 "Zend56/zend_language_parser.y"
    { zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1213 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (3)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1214 "Zend56/zend_language_parser.y"
    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (1)]).u.ast); }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1218 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1219 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1223 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1224 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1229 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1234 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1239 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1244 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1245 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1246 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1247 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1251 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1252 "Zend56/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1257 "Zend56/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1257 "Zend56/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1261 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1262 "Zend56/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1266 "Zend56/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1267 "Zend56/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1271 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1272 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1273 "Zend56/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1277 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1278 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1282 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1283 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1288 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1292 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1293 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1294 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1298 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1299 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 1300 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 1305 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 1306 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 1307 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 1311 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 597:
/* Line 1787 of yacc.c  */
#line 1312 "Zend56/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 598:
/* Line 1787 of yacc.c  */
#line 1316 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 599:
/* Line 1787 of yacc.c  */
#line 1317 "Zend56/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 600:
/* Line 1787 of yacc.c  */
#line 1318 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 601:
/* Line 1787 of yacc.c  */
#line 1323 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 602:
/* Line 1787 of yacc.c  */
#line 1324 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 1328 "Zend56/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 1329 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 1334 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 1335 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 1335 "Zend56/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 608:
/* Line 1787 of yacc.c  */
#line 1339 "Zend56/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 609:
/* Line 1787 of yacc.c  */
#line 1340 "Zend56/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 610:
/* Line 1787 of yacc.c  */
#line 1341 "Zend56/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 611:
/* Line 1787 of yacc.c  */
#line 1345 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 612:
/* Line 1787 of yacc.c  */
#line 1346 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 613:
/* Line 1787 of yacc.c  */
#line 1350 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 614:
/* Line 1787 of yacc.c  */
#line 1351 "Zend56/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 617:
/* Line 1787 of yacc.c  */
#line 1361 "Zend56/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 618:
/* Line 1787 of yacc.c  */
#line 1362 "Zend56/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 619:
/* Line 1787 of yacc.c  */
#line 1362 "Zend56/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 620:
/* Line 1787 of yacc.c  */
#line 1363 "Zend56/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 621:
/* Line 1787 of yacc.c  */
#line 1368 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 622:
/* Line 1787 of yacc.c  */
#line 1369 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 623:
/* Line 1787 of yacc.c  */
#line 1373 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 624:
/* Line 1787 of yacc.c  */
#line 1374 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 625:
/* Line 1787 of yacc.c  */
#line 1375 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 626:
/* Line 1787 of yacc.c  */
#line 1376 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 627:
/* Line 1787 of yacc.c  */
#line 1377 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 628:
/* Line 1787 of yacc.c  */
#line 1378 "Zend56/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 629:
/* Line 1787 of yacc.c  */
#line 1379 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 630:
/* Line 1787 of yacc.c  */
#line 1380 "Zend56/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 631:
/* Line 1787 of yacc.c  */
#line 1384 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 632:
/* Line 1787 of yacc.c  */
#line 1385 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 633:
/* Line 1787 of yacc.c  */
#line 1386 "Zend56/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 634:
/* Line 1787 of yacc.c  */
#line 1387 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 635:
/* Line 1787 of yacc.c  */
#line 1388 "Zend56/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 636:
/* Line 1787 of yacc.c  */
#line 1389 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 637:
/* Line 1787 of yacc.c  */
#line 1390 "Zend56/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 638:
/* Line 1787 of yacc.c  */
#line 1391 "Zend56/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_string(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 639:
/* Line 1787 of yacc.c  */
#line 1397 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 640:
/* Line 1787 of yacc.c  */
#line 1398 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 641:
/* Line 1787 of yacc.c  */
#line 1398 "Zend56/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 642:
/* Line 1787 of yacc.c  */
#line 1399 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 643:
/* Line 1787 of yacc.c  */
#line 1400 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 644:
/* Line 1787 of yacc.c  */
#line 1401 "Zend56/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 645:
/* Line 1787 of yacc.c  */
#line 1402 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 646:
/* Line 1787 of yacc.c  */
#line 1403 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 647:
/* Line 1787 of yacc.c  */
#line 1407 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 648:
/* Line 1787 of yacc.c  */
#line 1411 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 649:
/* Line 1787 of yacc.c  */
#line 1412 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 650:
/* Line 1787 of yacc.c  */
#line 1413 "Zend56/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 651:
/* Line 1787 of yacc.c  */
#line 1418 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 652:
/* Line 1787 of yacc.c  */
#line 1419 "Zend56/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 653:
/* Line 1787 of yacc.c  */
#line 1420 "Zend56/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 654:
/* Line 1787 of yacc.c  */
#line 1421 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 655:
/* Line 1787 of yacc.c  */
#line 1422 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 656:
/* Line 1787 of yacc.c  */
#line 1423 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 657:
/* Line 1787 of yacc.c  */
#line 1424 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 658:
/* Line 1787 of yacc.c  */
#line 1425 "Zend56/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 659:
/* Line 1787 of yacc.c  */
#line 1429 "Zend56/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 660:
/* Line 1787 of yacc.c  */
#line 1430 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 661:
/* Line 1787 of yacc.c  */
#line 1430 "Zend56/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 662:
/* Line 1787 of yacc.c  */
#line 1434 "Zend56/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 663:
/* Line 1787 of yacc.c  */
#line 1435 "Zend56/zend_language_parser.y"
    { zend_error_noreturn(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 664:
/* Line 1787 of yacc.c  */
#line 1439 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 665:
/* Line 1787 of yacc.c  */
#line 1440 "Zend56/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 666:
/* Line 1787 of yacc.c  */
#line 1444 "Zend56/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 667:
/* Line 1787 of yacc.c  */
#line 1448 "Zend56/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7857 "Zend56/zend_language_parser.c"
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
#line 1451 "Zend56/zend_language_parser.y"


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
