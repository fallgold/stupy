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
#line 1 "Zend55/zend_language_parser.y"

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
#line 121 "Zend55/zend_language_parser.c"

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
#ifndef YY_ZEND_ZEND55_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND55_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 50 "Zend55/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 161 "Zend55/zend_language_parser.c"

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
     T_SR_EQUAL = 268,
     T_SL_EQUAL = 269,
     T_XOR_EQUAL = 270,
     T_OR_EQUAL = 271,
     T_AND_EQUAL = 272,
     T_MOD_EQUAL = 273,
     T_CONCAT_EQUAL = 274,
     T_DIV_EQUAL = 275,
     T_MUL_EQUAL = 276,
     T_MINUS_EQUAL = 277,
     T_PLUS_EQUAL = 278,
     T_BOOLEAN_OR = 279,
     T_BOOLEAN_AND = 280,
     T_IS_NOT_IDENTICAL = 281,
     T_IS_IDENTICAL = 282,
     T_IS_NOT_EQUAL = 283,
     T_IS_EQUAL = 284,
     T_IS_GREATER_OR_EQUAL = 285,
     T_IS_SMALLER_OR_EQUAL = 286,
     T_SR = 287,
     T_SL = 288,
     T_INSTANCEOF = 289,
     T_UNSET_CAST = 290,
     T_BOOL_CAST = 291,
     T_OBJECT_CAST = 292,
     T_ARRAY_CAST = 293,
     T_STRING_CAST = 294,
     T_DOUBLE_CAST = 295,
     T_INT_CAST = 296,
     T_DEC = 297,
     T_INC = 298,
     T_CLONE = 299,
     T_NEW = 300,
     T_EXIT = 301,
     T_IF = 302,
     T_ELSEIF = 303,
     T_ELSE = 304,
     T_ENDIF = 305,
     T_LNUMBER = 306,
     T_DNUMBER = 307,
     T_STRING = 308,
     T_STRING_VARNAME = 309,
     T_VARIABLE = 310,
     T_NUM_STRING = 311,
     T_INLINE_HTML = 312,
     T_CHARACTER = 313,
     T_BAD_CHARACTER = 314,
     T_ENCAPSED_AND_WHITESPACE = 315,
     T_CONSTANT_ENCAPSED_STRING = 316,
     T_ECHO = 317,
     T_DO = 318,
     T_WHILE = 319,
     T_ENDWHILE = 320,
     T_FOR = 321,
     T_ENDFOR = 322,
     T_FOREACH = 323,
     T_ENDFOREACH = 324,
     T_DECLARE = 325,
     T_ENDDECLARE = 326,
     T_AS = 327,
     T_SWITCH = 328,
     T_ENDSWITCH = 329,
     T_CASE = 330,
     T_DEFAULT = 331,
     T_BREAK = 332,
     T_CONTINUE = 333,
     T_GOTO = 334,
     T_FUNCTION = 335,
     T_CONST = 336,
     T_RETURN = 337,
     T_TRY = 338,
     T_CATCH = 339,
     T_FINALLY = 340,
     T_THROW = 341,
     T_USE = 342,
     T_INSTEADOF = 343,
     T_GLOBAL = 344,
     T_PUBLIC = 345,
     T_PROTECTED = 346,
     T_PRIVATE = 347,
     T_FINAL = 348,
     T_ABSTRACT = 349,
     T_STATIC = 350,
     T_VAR = 351,
     T_UNSET = 352,
     T_ISSET = 353,
     T_EMPTY = 354,
     T_HALT_COMPILER = 355,
     T_CLASS = 356,
     T_TRAIT = 357,
     T_INTERFACE = 358,
     T_EXTENDS = 359,
     T_IMPLEMENTS = 360,
     T_OBJECT_OPERATOR = 361,
     T_DOUBLE_ARROW = 362,
     T_LIST = 363,
     T_ARRAY = 364,
     T_CALLABLE = 365,
     T_CLASS_C = 366,
     T_TRAIT_C = 367,
     T_METHOD_C = 368,
     T_FUNC_C = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_COMMENT = 372,
     T_DOC_COMMENT = 373,
     T_OPEN_TAG = 374,
     T_OPEN_TAG_WITH_ECHO = 375,
     T_CLOSE_TAG = 376,
     T_WHITESPACE = 377,
     T_START_HEREDOC = 378,
     T_END_HEREDOC = 379,
     T_DOLLAR_OPEN_CURLY_BRACES = 380,
     T_CURLY_OPEN = 381,
     T_PAAMAYIM_NEKUDOTAYIM = 382,
     T_NAMESPACE = 383,
     T_NS_C = 384,
     T_DIR = 385,
     T_NS_SEPARATOR = 386,
     T_START_TPL = 387,
     T_START_TPL_WITH_ECHO = 388,
     T_START_TPL_WITH_SCRIPT = 389,
     T_END_TPL = 390,
     T_ATTR_FILE = 391,
     T_IN = 392,
     T_START_TPL_TRANSLATE = 393,
     T_TPL_INCLUDE = 394
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
#define T_SR_EQUAL 268
#define T_SL_EQUAL 269
#define T_XOR_EQUAL 270
#define T_OR_EQUAL 271
#define T_AND_EQUAL 272
#define T_MOD_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_DIV_EQUAL 275
#define T_MUL_EQUAL 276
#define T_MINUS_EQUAL 277
#define T_PLUS_EQUAL 278
#define T_BOOLEAN_OR 279
#define T_BOOLEAN_AND 280
#define T_IS_NOT_IDENTICAL 281
#define T_IS_IDENTICAL 282
#define T_IS_NOT_EQUAL 283
#define T_IS_EQUAL 284
#define T_IS_GREATER_OR_EQUAL 285
#define T_IS_SMALLER_OR_EQUAL 286
#define T_SR 287
#define T_SL 288
#define T_INSTANCEOF 289
#define T_UNSET_CAST 290
#define T_BOOL_CAST 291
#define T_OBJECT_CAST 292
#define T_ARRAY_CAST 293
#define T_STRING_CAST 294
#define T_DOUBLE_CAST 295
#define T_INT_CAST 296
#define T_DEC 297
#define T_INC 298
#define T_CLONE 299
#define T_NEW 300
#define T_EXIT 301
#define T_IF 302
#define T_ELSEIF 303
#define T_ELSE 304
#define T_ENDIF 305
#define T_LNUMBER 306
#define T_DNUMBER 307
#define T_STRING 308
#define T_STRING_VARNAME 309
#define T_VARIABLE 310
#define T_NUM_STRING 311
#define T_INLINE_HTML 312
#define T_CHARACTER 313
#define T_BAD_CHARACTER 314
#define T_ENCAPSED_AND_WHITESPACE 315
#define T_CONSTANT_ENCAPSED_STRING 316
#define T_ECHO 317
#define T_DO 318
#define T_WHILE 319
#define T_ENDWHILE 320
#define T_FOR 321
#define T_ENDFOR 322
#define T_FOREACH 323
#define T_ENDFOREACH 324
#define T_DECLARE 325
#define T_ENDDECLARE 326
#define T_AS 327
#define T_SWITCH 328
#define T_ENDSWITCH 329
#define T_CASE 330
#define T_DEFAULT 331
#define T_BREAK 332
#define T_CONTINUE 333
#define T_GOTO 334
#define T_FUNCTION 335
#define T_CONST 336
#define T_RETURN 337
#define T_TRY 338
#define T_CATCH 339
#define T_FINALLY 340
#define T_THROW 341
#define T_USE 342
#define T_INSTEADOF 343
#define T_GLOBAL 344
#define T_PUBLIC 345
#define T_PROTECTED 346
#define T_PRIVATE 347
#define T_FINAL 348
#define T_ABSTRACT 349
#define T_STATIC 350
#define T_VAR 351
#define T_UNSET 352
#define T_ISSET 353
#define T_EMPTY 354
#define T_HALT_COMPILER 355
#define T_CLASS 356
#define T_TRAIT 357
#define T_INTERFACE 358
#define T_EXTENDS 359
#define T_IMPLEMENTS 360
#define T_OBJECT_OPERATOR 361
#define T_DOUBLE_ARROW 362
#define T_LIST 363
#define T_ARRAY 364
#define T_CALLABLE 365
#define T_CLASS_C 366
#define T_TRAIT_C 367
#define T_METHOD_C 368
#define T_FUNC_C 369
#define T_LINE 370
#define T_FILE 371
#define T_COMMENT 372
#define T_DOC_COMMENT 373
#define T_OPEN_TAG 374
#define T_OPEN_TAG_WITH_ECHO 375
#define T_CLOSE_TAG 376
#define T_WHITESPACE 377
#define T_START_HEREDOC 378
#define T_END_HEREDOC 379
#define T_DOLLAR_OPEN_CURLY_BRACES 380
#define T_CURLY_OPEN 381
#define T_PAAMAYIM_NEKUDOTAYIM 382
#define T_NAMESPACE 383
#define T_NS_C 384
#define T_DIR 385
#define T_NS_SEPARATOR 386
#define T_START_TPL 387
#define T_START_TPL_WITH_ECHO 388
#define T_START_TPL_WITH_SCRIPT 389
#define T_END_TPL 390
#define T_ATTR_FILE 391
#define T_IN 392
#define T_START_TPL_TRANSLATE 393
#define T_TPL_INCLUDE 394



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

#endif /* !YY_ZEND_ZEND55_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 478 "Zend55/zend_language_parser.c"

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
#define YYLAST   6730

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  252
/* YYNRULES -- Number of rules.  */
#define YYNRULES  618
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1189

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   394

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,   164,     2,   165,    48,    32,     2,
     159,   160,    46,    43,     8,    44,    45,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,   161,
      37,    14,    38,    26,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   166,    31,     2,   167,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   162,    30,   163,    51,     2,     2,     2,
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
      17,    18,    19,    20,    21,    22,    23,    24,    25,    28,
      29,    33,    34,    35,    36,    39,    40,    41,    42,    50,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158
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
     116,   117,   125,   126,   127,   138,   139,   140,   146,   147,
     148,   156,   157,   158,   159,   172,   173,   178,   181,   185,
     188,   192,   195,   199,   203,   206,   210,   214,   218,   220,
     223,   229,   230,   231,   242,   243,   244,   255,   256,   263,
     265,   266,   267,   276,   280,   284,   285,   286,   287,   288,
     289,   303,   304,   305,   311,   314,   317,   318,   320,   323,
     324,   330,   331,   337,   338,   339,   344,   346,   348,   350,
     352,   354,   358,   363,   364,   369,   370,   376,   378,   381,
     383,   385,   387,   391,   395,   400,   404,   408,   414,   418,
     423,   424,   425,   426,   445,   446,   447,   463,   464,   465,
     477,   478,   479,   480,   499,   500,   501,   519,   520,   521,
     537,   539,   540,   542,   545,   546,   547,   558,   560,   564,
     566,   568,   570,   571,   573,   574,   585,   586,   595,   596,
     604,   606,   609,   611,   614,   615,   618,   620,   621,   624,
     625,   628,   630,   634,   635,   638,   640,   643,   645,   650,
     652,   657,   659,   664,   668,   674,   678,   683,   688,   694,
     695,   696,   703,   704,   710,   712,   714,   716,   721,   722,
     723,   729,   730,   731,   739,   740,   749,   750,   751,   758,
     759,   762,   763,   768,   772,   773,   777,   778,   783,   785,
     786,   789,   793,   799,   804,   809,   815,   823,   830,   831,
     833,   835,   837,   840,   844,   848,   850,   852,   855,   859,
     863,   868,   872,   874,   876,   879,   884,   888,   894,   896,
     900,   903,   904,   905,   910,   913,   915,   916,   926,   930,
     932,   936,   938,   942,   943,   945,   947,   950,   953,   956,
     960,   962,   966,   968,   970,   974,   979,   983,   984,   986,
     988,   992,   994,   996,   997,   999,  1001,  1004,  1006,  1008,
    1010,  1012,  1014,  1016,  1020,  1026,  1028,  1032,  1038,  1043,
    1047,  1049,  1050,  1052,  1053,  1058,  1060,  1063,  1065,  1070,
    1074,  1075,  1079,  1081,  1083,  1084,  1085,  1088,  1089,  1094,
    1095,  1103,  1107,  1112,  1113,  1121,  1124,  1128,  1132,  1136,
    1140,  1144,  1148,  1152,  1156,  1160,  1164,  1168,  1171,  1174,
    1177,  1180,  1181,  1186,  1187,  1192,  1193,  1198,  1199,  1204,
    1208,  1212,  1216,  1220,  1224,  1228,  1232,  1236,  1240,  1244,
    1248,  1251,  1254,  1257,  1260,  1264,  1268,  1272,  1276,  1280,
    1284,  1288,  1292,  1296,  1298,  1300,  1301,  1307,  1308,  1309,
    1317,  1318,  1324,  1326,  1329,  1332,  1335,  1338,  1341,  1344,
    1347,  1350,  1351,  1355,  1357,  1359,  1361,  1365,  1368,  1370,
    1371,  1382,  1383,  1395,  1398,  1401,  1406,  1411,  1416,  1421,
    1426,  1431,  1435,  1437,  1438,  1443,  1447,  1452,  1454,  1457,
    1458,  1462,  1463,  1469,  1470,  1475,  1476,  1482,  1483,  1489,
    1490,  1496,  1497,  1503,  1504,  1508,  1510,  1512,  1516,  1519,
    1521,  1525,  1528,  1530,  1532,  1533,  1534,  1541,  1543,  1546,
    1547,  1550,  1551,  1554,  1556,  1557,  1559,  1561,  1562,  1564,
    1566,  1568,  1570,  1572,  1574,  1576,  1578,  1580,  1582,  1584,
    1588,  1591,  1593,  1595,  1597,  1601,  1604,  1607,  1610,  1615,
    1619,  1621,  1623,  1627,  1629,  1631,  1633,  1635,  1639,  1642,
    1644,  1648,  1652,  1654,  1655,  1658,  1659,  1661,  1667,  1671,
    1675,  1677,  1679,  1681,  1685,  1689,  1691,  1693,  1695,  1696,
    1697,  1705,  1707,  1710,  1711,  1712,  1717,  1722,  1727,  1728,
    1731,  1733,  1735,  1736,  1738,  1741,  1745,  1749,  1751,  1756,
    1757,  1763,  1765,  1767,  1769,  1771,  1774,  1776,  1778,  1781,
    1786,  1791,  1793,  1795,  1800,  1801,  1803,  1805,  1806,  1809,
    1814,  1819,  1821,  1823,  1827,  1829,  1832,  1836,  1838,  1840,
    1841,  1847,  1848,  1849,  1852,  1858,  1862,  1866,  1868,  1875,
    1880,  1885,  1888,  1891,  1894,  1896,  1899,  1901,  1904,  1907,
    1910,  1912,  1913,  1919,  1923,  1927,  1934,  1938,  1942,  1946,
    1948,  1950,  1952,  1957,  1962,  1967,  1970,  1973,  1978,  1981,
    1984,  1986,  1987,  1992,  1994,  1996,  2000,  2004,  2008
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     169,     0,    -1,   170,    -1,    -1,   170,   171,   173,    -1,
      -1,    72,    -1,   172,   150,    72,    -1,   182,    -1,   244,
      -1,   245,    -1,   119,   159,   160,   161,    -1,   147,   172,
     161,    -1,    -1,   147,   172,   162,   174,   170,   163,    -1,
      -1,   147,   162,   175,   170,   163,    -1,   106,   176,   161,
      -1,   178,   161,    -1,   222,    -1,   176,     8,   177,    -1,
     177,    -1,   172,    -1,   172,    91,    72,    -1,   150,   172,
      -1,   150,   172,    91,    72,    -1,   178,     8,    72,    14,
     366,    -1,   100,    72,    14,   366,    -1,    -1,   179,   180,
     181,    -1,    -1,   182,    -1,   222,    -1,   244,    -1,   245,
      -1,   119,   159,   160,   161,    -1,   183,    -1,    72,    27,
      -1,   162,   179,   163,    -1,    -1,    -1,    66,   373,   184,
     182,   185,   270,   277,    -1,    -1,    -1,    66,   373,    27,
     186,   179,   187,   275,   280,    69,   161,    -1,    -1,    -1,
      83,   188,   373,   189,   269,    -1,    -1,    -1,    82,   190,
     182,    83,   191,   373,   161,    -1,    -1,    -1,    -1,    85,
     159,   314,   161,   192,   314,   161,   193,   314,   160,   194,
     260,    -1,    -1,    92,   373,   195,   264,    -1,    96,   161,
      -1,    96,   372,   161,    -1,    97,   161,    -1,    97,   372,
     161,    -1,   101,   161,    -1,   101,   325,   161,    -1,   101,
     377,   161,    -1,   339,   161,    -1,   108,   287,   161,    -1,
     114,   289,   161,    -1,    81,   313,   161,    -1,    76,    -1,
     372,   161,    -1,   116,   159,   242,   160,   161,    -1,    -1,
      -1,    87,   159,   377,    91,   196,   259,   258,   160,   197,
     261,    -1,    -1,    -1,    87,   159,   325,    91,   198,   259,
     258,   160,   199,   261,    -1,    -1,    89,   200,   159,   263,
     160,   262,    -1,   161,    -1,    -1,    -1,   102,   201,   162,
     179,   163,   203,   202,   208,    -1,   105,   372,   161,    -1,
      98,    72,   161,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     159,   204,   355,   205,    74,   160,   206,   162,   179,   163,
     207,   237,    -1,    -1,    -1,   104,   209,   162,   179,   163,
      -1,   210,   222,    -1,   210,    76,    -1,    -1,   374,    -1,
     374,   161,    -1,    -1,    80,    30,    72,   212,   214,    -1,
      -1,   211,    30,    72,   213,   214,    -1,    -1,    -1,   214,
      27,   215,   372,    -1,    72,    -1,    80,    -1,   394,    -1,
     365,    -1,    79,    -1,   164,   408,   164,    -1,   128,   159,
     406,   160,    -1,    -1,   216,    14,   219,   372,    -1,    -1,
     218,   216,    14,   220,   372,    -1,   217,    -1,   218,   217,
      -1,    80,    -1,    79,    -1,   408,    -1,   151,   211,   154,
      -1,   151,   325,   154,    -1,   151,   325,   161,   154,    -1,
     153,   179,   154,    -1,   158,   372,   154,    -1,   158,   155,
      14,   372,   154,    -1,   157,   221,   154,    -1,   151,    72,
     218,   154,    -1,    -1,    -1,    -1,   151,    87,   159,   372,
      91,   223,   259,   258,   160,   154,   224,   210,   151,   225,
     281,    47,    87,   154,    -1,    -1,    -1,   151,    87,   372,
      91,   259,   258,   154,   226,   210,   151,   227,   281,    47,
      87,   154,    -1,    -1,    -1,   151,    66,   372,   154,   228,
     210,   151,   229,   272,   278,   279,    -1,    -1,    -1,    -1,
     151,    85,   159,   314,   161,   230,   314,   161,   231,   314,
     160,   154,   232,   210,   151,    47,    85,   154,    -1,    -1,
      -1,   151,    85,   159,   259,   258,   156,   372,   160,   154,
     233,   210,   151,   234,   281,    47,    85,   154,    -1,    -1,
      -1,   151,    85,   259,   258,   156,   372,   154,   235,   210,
     151,   236,   281,    47,    85,   154,    -1,   238,    -1,    -1,
     239,    -1,   238,   239,    -1,    -1,    -1,   103,   159,   355,
     240,    74,   160,   241,   162,   179,   163,    -1,   243,    -1,
     242,     8,   243,    -1,   377,    -1,   247,    -1,   249,    -1,
      -1,    32,    -1,    -1,   342,   246,    72,   248,   159,   282,
     160,   162,   179,   163,    -1,    -1,   252,    72,   253,   250,
     256,   162,   290,   163,    -1,    -1,   254,    72,   251,   255,
     162,   290,   163,    -1,   120,    -1,   113,   120,    -1,   121,
      -1,   112,   120,    -1,    -1,   123,   355,    -1,   122,    -1,
      -1,   123,   257,    -1,    -1,   124,   257,    -1,   355,    -1,
     257,     8,   355,    -1,    -1,   126,   259,    -1,   377,    -1,
      32,   377,    -1,   182,    -1,    27,   179,    86,   161,    -1,
     182,    -1,    27,   179,    88,   161,    -1,   182,    -1,    27,
     179,    90,   161,    -1,    72,    14,   366,    -1,   263,     8,
      72,    14,   366,    -1,   162,   265,   163,    -1,   162,   161,
     265,   163,    -1,    27,   265,    93,   161,    -1,    27,   161,
     265,    93,   161,    -1,    -1,    -1,   265,    94,   372,   268,
     266,   179,    -1,    -1,   265,    95,   268,   267,   179,    -1,
      27,    -1,   161,    -1,   182,    -1,    27,   179,    84,   161,
      -1,    -1,    -1,   270,    67,   373,   271,   182,    -1,    -1,
      -1,   272,    67,   372,   154,   273,   210,   151,    -1,    -1,
     272,    68,    66,   372,   154,   274,   210,   151,    -1,    -1,
      -1,   275,    67,   373,    27,   276,   179,    -1,    -1,    68,
     182,    -1,    -1,    68,   154,   210,   151,    -1,    47,    66,
     154,    -1,    -1,    68,    27,   179,    -1,    -1,    68,   154,
     210,   151,    -1,   283,    -1,    -1,   284,    74,    -1,   284,
      32,    74,    -1,   284,    32,    74,    14,   366,    -1,   284,
      74,    14,   366,    -1,   283,     8,   284,    74,    -1,   283,
       8,   284,    32,    74,    -1,   283,     8,   284,    32,    74,
      14,   366,    -1,   283,     8,   284,    74,    14,   366,    -1,
      -1,   128,    -1,   129,    -1,   355,    -1,   159,   160,    -1,
     159,   286,   160,    -1,   159,   339,   160,    -1,   325,    -1,
     377,    -1,    32,   375,    -1,   286,     8,   325,    -1,   286,
       8,   377,    -1,   286,     8,    32,   375,    -1,   287,     8,
     288,    -1,   288,    -1,    74,    -1,   165,   374,    -1,   165,
     162,   372,   163,    -1,   289,     8,    74,    -1,   289,     8,
      74,    14,   366,    -1,    74,    -1,    74,    14,   366,    -1,
     290,   291,    -1,    -1,    -1,   307,   292,   311,   161,    -1,
     312,   161,    -1,   294,    -1,    -1,   308,   342,   246,    72,
     293,   159,   282,   160,   306,    -1,   106,   295,   296,    -1,
     355,    -1,   295,     8,   355,    -1,   161,    -1,   162,   297,
     163,    -1,    -1,   298,    -1,   299,    -1,   298,   299,    -1,
     300,   161,    -1,   304,   161,    -1,   303,   107,   301,    -1,
     355,    -1,   301,     8,   355,    -1,    72,    -1,   303,    -1,
     355,   146,    72,    -1,   302,    91,   305,    72,    -1,   302,
      91,   310,    -1,    -1,   310,    -1,   161,    -1,   162,   179,
     163,    -1,   309,    -1,   115,    -1,    -1,   309,    -1,   310,
      -1,   309,   310,    -1,   109,    -1,   110,    -1,   111,    -1,
     114,    -1,   113,    -1,   112,    -1,   311,     8,    74,    -1,
     311,     8,    74,    14,   366,    -1,    74,    -1,    74,    14,
     366,    -1,   312,     8,    72,    14,   366,    -1,   100,    72,
      14,   366,    -1,   313,     8,   372,    -1,   372,    -1,    -1,
     315,    -1,    -1,   315,     8,   316,   372,    -1,   372,    -1,
     317,   381,    -1,   381,    -1,   318,    62,   397,   166,    -1,
      62,   397,   166,    -1,    -1,   318,   320,   317,    -1,   318,
      -1,   317,    -1,    -1,    -1,   322,   319,    -1,    -1,    64,
     356,   324,   364,    -1,    -1,   127,   159,   326,   403,   160,
      14,   372,    -1,   377,    14,   372,    -1,   377,    14,    32,
     377,    -1,    -1,   377,    14,    32,    64,   356,   327,   364,
      -1,    63,   372,    -1,   377,    25,   372,    -1,   377,    24,
     372,    -1,   377,    23,   372,    -1,   377,    22,   372,    -1,
     377,    21,   372,    -1,   377,    20,   372,    -1,   377,    19,
     372,    -1,   377,    18,   372,    -1,   377,    17,   372,    -1,
     377,    16,   372,    -1,   377,    15,   372,    -1,   376,    61,
      -1,    61,   376,    -1,   376,    60,    -1,    60,   376,    -1,
      -1,   372,    28,   328,   372,    -1,    -1,   372,    29,   329,
     372,    -1,    -1,   372,     9,   330,   372,    -1,    -1,   372,
      11,   331,   372,    -1,   372,    10,   372,    -1,   372,    32,
     372,    -1,   372,    31,   372,    -1,   372,    45,   372,    -1,
     372,    43,   372,    -1,   372,    44,   372,    -1,   372,    46,
     372,    -1,   372,    47,   372,    -1,   372,    48,   372,    -1,
     372,    42,   372,    -1,   372,    41,   372,    -1,    43,   372,
      -1,    44,   372,    -1,    49,   372,    -1,    51,   372,    -1,
     372,    34,   372,    -1,   372,    33,   372,    -1,   372,    36,
     372,    -1,   372,    35,   372,    -1,   372,    37,   372,    -1,
     372,    40,   372,    -1,   372,    38,   372,    -1,   372,    39,
     372,    -1,   372,    50,   356,    -1,   373,    -1,   323,    -1,
      -1,   159,   323,   160,   332,   321,    -1,    -1,    -1,   372,
      26,   333,   372,    27,   334,   372,    -1,    -1,   372,    26,
      27,   335,   372,    -1,   413,    -1,    59,   372,    -1,    58,
     372,    -1,    57,   372,    -1,    56,   372,    -1,    55,   372,
      -1,    54,   372,    -1,    53,   372,    -1,    65,   362,    -1,
      -1,    52,   336,   372,    -1,   368,    -1,   340,    -1,   341,
      -1,   167,   363,   167,    -1,    12,   372,    -1,    13,    -1,
      -1,   342,   246,   337,   159,   282,   160,   343,   162,   179,
     163,    -1,    -1,   114,   342,   246,   338,   159,   282,   160,
     343,   162,   179,   163,    -1,    13,   325,    -1,    13,   377,
      -1,    13,   372,   126,   325,    -1,    13,   372,   126,   377,
      -1,   341,    62,   397,   166,    -1,   340,    62,   397,   166,
      -1,    80,    62,   397,   166,    -1,   128,   159,   406,   160,
      -1,    62,   406,   166,    -1,    99,    -1,    -1,   106,   159,
     344,   160,    -1,   344,     8,    74,    -1,   344,     8,    32,
      74,    -1,    74,    -1,    32,    74,    -1,    -1,   172,   346,
     285,    -1,    -1,   147,   150,   172,   347,   285,    -1,    -1,
     150,   172,   348,   285,    -1,    -1,   354,   146,   401,   349,
     285,    -1,    -1,   354,   146,   387,   350,   285,    -1,    -1,
     389,   146,   401,   351,   285,    -1,    -1,   389,   146,   387,
     352,   285,    -1,    -1,   387,   353,   285,    -1,   114,    -1,
     172,    -1,   147,   150,   172,    -1,   150,   172,    -1,   172,
      -1,   147,   150,   172,    -1,   150,   172,    -1,   354,    -1,
     357,    -1,    -1,    -1,   393,   125,   358,   398,   359,   360,
      -1,   393,    -1,   360,   361,    -1,    -1,   125,   398,    -1,
      -1,   159,   160,    -1,   373,    -1,    -1,    79,    -1,   408,
      -1,    -1,   285,    -1,    70,    -1,    71,    -1,    80,    -1,
     134,    -1,   135,    -1,   149,    -1,   131,    -1,   132,    -1,
     133,    -1,   148,    -1,   142,    79,   143,    -1,   142,   143,
      -1,   365,    -1,   418,    -1,   172,    -1,   147,   150,   172,
      -1,   150,   172,    -1,    43,   366,    -1,    44,   366,    -1,
     128,   159,   369,   160,    -1,    62,   369,   166,    -1,   367,
      -1,   130,    -1,   354,   146,    72,    -1,    73,    -1,   419,
      -1,   417,    -1,   172,    -1,   147,   150,   172,    -1,   150,
     172,    -1,   365,    -1,   164,   408,   164,    -1,   142,   408,
     143,    -1,   130,    -1,    -1,   371,   370,    -1,    -1,     8,
      -1,   371,     8,   366,   126,   366,    -1,   371,     8,   366,
      -1,   366,   126,   366,    -1,   366,    -1,   374,    -1,   325,
      -1,   159,   372,   160,    -1,   159,   339,   160,    -1,   377,
      -1,   377,    -1,   377,    -1,    -1,    -1,   392,   125,   378,
     398,   379,   386,   380,    -1,   392,    -1,   380,   381,    -1,
      -1,    -1,   125,   398,   382,   386,    -1,   383,    62,   397,
     166,    -1,   384,    62,   397,   166,    -1,    -1,   385,   285,
      -1,   384,    -1,   383,    -1,    -1,   395,    -1,   402,   395,
      -1,   354,   146,   387,    -1,   389,   146,   387,    -1,   395,
      -1,   390,    62,   397,   166,    -1,    -1,   345,   391,    62,
     397,   166,    -1,   393,    -1,   390,    -1,   345,    -1,   395,
      -1,   402,   395,    -1,   388,    -1,   395,    -1,   402,   395,
      -1,   395,    62,   397,   166,    -1,   395,   162,   372,   163,
      -1,   396,    -1,    74,    -1,   165,   162,   372,   163,    -1,
      -1,   372,    -1,   400,    -1,    -1,   387,   399,    -1,   400,
      62,   397,   166,    -1,   400,   162,   372,   163,    -1,   401,
      -1,    72,    -1,   162,   372,   163,    -1,   165,    -1,   402,
     165,    -1,   403,     8,   404,    -1,   404,    -1,   377,    -1,
      -1,   127,   159,   405,   403,   160,    -1,    -1,    -1,   407,
     370,    -1,   407,     8,   372,   126,   372,    -1,   407,     8,
     372,    -1,   372,   126,   372,    -1,   372,    -1,   407,     8,
     372,   126,    32,   375,    -1,   407,     8,    32,   375,    -1,
     372,   126,    32,   375,    -1,    32,   375,    -1,   408,   409,
      -1,   408,    79,    -1,   409,    -1,    79,   409,    -1,   411,
      -1,    79,   411,    -1,   408,   411,    -1,    79,    79,    -1,
      74,    -1,    -1,    74,    62,   410,   412,   166,    -1,    74,
     125,    72,    -1,   144,   372,   163,    -1,   144,    73,    62,
     372,   166,   163,    -1,   145,   377,   163,    -1,   162,   388,
     163,    -1,   162,   417,   163,    -1,    72,    -1,    75,    -1,
      74,    -1,   117,   159,   414,   160,    -1,   118,   159,   377,
     160,    -1,   118,   159,   325,   160,    -1,     7,   372,    -1,
       6,   372,    -1,     5,   159,   372,   160,    -1,     4,   372,
      -1,     3,   372,    -1,   416,    -1,    -1,   414,     8,   415,
     416,    -1,   377,    -1,   325,    -1,   354,   146,    72,    -1,
     389,   146,    72,    -1,   354,   146,   120,    -1,   354,   146,
     120,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   228,   228,   232,   232,   233,   237,   238,   242,   243,
     244,   245,   246,   247,   247,   249,   249,   251,   252,   253,
     257,   258,   262,   263,   264,   265,   269,   270,   274,   274,
     275,   280,   281,   282,   283,   284,   289,   290,   294,   295,
     295,   295,   296,   296,   296,   297,   297,   297,   298,   298,
     298,   302,   304,   306,   299,   308,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   324,   325,   323,   328,   329,   327,   331,   331,   332,
     333,   334,   333,   336,   337,   341,   342,   343,   344,   345,
     342,   349,   350,   350,   355,   356,   357,   361,   362,   363,
     363,   365,   365,   371,   372,   372,   376,   377,   381,   382,
     383,   384,   385,   389,   389,   390,   390,   391,   392,   396,
     397,   398,   405,   407,   414,   419,   420,   421,   423,   427,
     429,   430,   431,   429,   434,   435,   433,   438,   441,   438,
     446,   447,   448,   445,   453,   454,   452,   457,   458,   456,
     463,   464,   468,   469,   473,   473,   473,   477,   478,   482,
     486,   490,   494,   495,   500,   500,   507,   506,   513,   512,
     522,   523,   524,   525,   529,   530,   534,   537,   539,   542,
     544,   548,   549,   553,   554,   558,   559,   565,   566,   571,
     572,   577,   578,   583,   584,   589,   590,   591,   592,   597,
     598,   598,   599,   599,   604,   605,   610,   611,   616,   618,
     618,   621,   623,   623,   624,   624,   627,   629,   629,   633,
     635,   638,   640,   644,   647,   649,   652,   654,   658,   659,
     664,   665,   666,   667,   668,   669,   670,   671,   676,   677,
     678,   679,   684,   685,   686,   691,   692,   693,   694,   695,
     696,   700,   701,   706,   707,   708,   713,   714,   715,   716,
     722,   723,   728,   728,   729,   730,   731,   731,   737,   741,
     742,   746,   747,   750,   752,   756,   757,   761,   762,   766,
     770,   771,   775,   776,   780,   784,   785,   789,   790,   794,
     795,   799,   800,   804,   805,   809,   810,   814,   815,   816,
     817,   818,   819,   823,   824,   825,   826,   830,   831,   835,
     836,   841,   842,   846,   846,   847,   851,   852,   856,   857,
     861,   861,   862,   863,   867,   868,   868,   873,   873,   877,
     877,   878,   879,   880,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   897,   898,   898,   899,   899,   900,   900,   901,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   929,   930,   931,   930,
     933,   933,   935,   936,   937,   938,   939,   940,   941,   942,
     943,   944,   944,   945,   946,   947,   948,   949,   950,   951,
     951,   954,   954,   960,   961,   962,   963,   967,   968,   969,
     972,   973,   976,   979,   981,   985,   986,   987,   988,   992,
     992,   994,   994,   996,   996,   998,   998,  1000,  1000,  1002,
    1002,  1004,  1004,  1006,  1006,  1011,  1012,  1013,  1014,  1018,
    1019,  1020,  1026,  1027,  1032,  1033,  1032,  1035,  1040,  1041,
    1046,  1050,  1051,  1052,  1056,  1057,  1058,  1063,  1064,  1069,
    1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,
    1094,  1095,  1099,  1103,  1104,  1105,  1106,  1107,  1108,  1109,
    1110,  1111,  1112,  1117,  1118,  1121,  1123,  1127,  1128,  1129,
    1130,  1134,  1135,  1139,  1140,  1145,  1150,  1155,  1160,  1161,
    1160,  1163,  1167,  1168,  1173,  1173,  1177,  1178,  1182,  1182,
    1187,  1188,  1189,  1193,  1194,  1198,  1199,  1204,  1208,  1209,
    1209,  1214,  1215,  1216,  1221,  1222,  1223,  1227,  1228,  1232,
    1233,  1234,  1239,  1240,  1244,  1245,  1250,  1251,  1251,  1255,
    1256,  1257,  1261,  1262,  1266,  1267,  1271,  1272,  1277,  1278,
    1278,  1279,  1284,  1285,  1289,  1290,  1291,  1292,  1293,  1294,
    1295,  1296,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1313,  1314,  1314,  1315,  1316,  1317,  1318,  1319,  1323,  1327,
    1328,  1329,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,
    1345,  1346,  1346,  1350,  1351,  1355,  1356,  1360,  1364
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
  "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
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
  "\"{include (T_TPL_INCLUDE)\"", "'('", "')'", "';'", "'{'", "'}'",
  "'\"'", "'$'", "']'", "'`'", "$accept", "start", "top_statement_list",
  "$@1", "namespace_name", "top_statement", "$@2", "$@3",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "$@4", "inner_statement", "statement",
  "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9", "@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "catch_statement", "$@24", "$@25", "$@26",
  "$@27", "finally_statement", "$@28", "tpl_block", "tpl_modifier_list",
  "$@29", "$@30", "tpl_modifier_param_list", "$@31",
  "tpl_inner_tpl_attr_name", "tpl_inner_tpl_attr_anony",
  "tpl_inner_tpl_attr_list", "$@32", "$@33", "tpl_encaps_list",
  "tpl_statement", "@34", "$@35", "$@36", "@37", "$@38", "$@39", "$@40",
  "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@48", "$@49", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@50",
  "unticked_class_declaration_statement", "$@51", "$@52",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@53", "$@54", "case_separator",
  "while_statement", "elseif_list", "$@55", "tpl_elseif_list", "$@56",
  "$@57", "new_elseif_list", "$@58", "else_single", "tpl_else_single",
  "tpl_endif", "new_else_single", "tpl_loopelse", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@59", "$@60",
  "trait_use_statement", "trait_list", "trait_adaptations",
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
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "parenthesis_expr", "r_variable", "w_variable", "rw_variable",
  "variable", "$@88", "$@89", "variable_properties", "variable_property",
  "$@90", "array_method_dereference", "method", "@91", "method_or_not",
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
     273,   274,   275,   276,   277,   278,    63,    58,   279,   280,
     124,    94,    38,   281,   282,   283,   284,    60,    62,   285,
     286,   287,   288,    43,    45,    46,    42,    47,    37,    33,
     289,   126,    64,   290,   291,   292,   293,   294,   295,   296,
     297,   298,    91,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,    40,
      41,    59,   123,   125,    34,    36,    93,    96
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   168,   169,   171,   170,   170,   172,   172,   173,   173,
     173,   173,   173,   174,   173,   175,   173,   173,   173,   173,
     176,   176,   177,   177,   177,   177,   178,   178,   180,   179,
     179,   181,   181,   181,   181,   181,   182,   182,   183,   184,
     185,   183,   186,   187,   183,   188,   189,   183,   190,   191,
     183,   192,   193,   194,   183,   195,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   196,   197,   183,   198,   199,   183,   200,   183,   183,
     201,   202,   183,   183,   183,   203,   204,   205,   206,   207,
     203,   208,   209,   208,   210,   210,   210,   211,   211,   212,
     211,   213,   211,   214,   215,   214,   216,   216,   217,   217,
     217,   217,   217,   219,   218,   220,   218,   218,   218,   221,
     221,   221,   222,   222,   222,   222,   222,   222,   222,   222,
     223,   224,   225,   222,   226,   227,   222,   228,   229,   222,
     230,   231,   232,   222,   233,   234,   222,   235,   236,   222,
     237,   237,   238,   238,   240,   241,   239,   242,   242,   243,
     244,   245,   246,   246,   248,   247,   250,   249,   251,   249,
     252,   252,   252,   252,   253,   253,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   264,   264,   265,
     266,   265,   267,   265,   268,   268,   269,   269,   270,   271,
     270,   272,   273,   272,   274,   272,   275,   276,   275,   277,
     277,   278,   278,   279,   280,   280,   281,   281,   282,   282,
     283,   283,   283,   283,   283,   283,   283,   283,   284,   284,
     284,   284,   285,   285,   285,   286,   286,   286,   286,   286,
     286,   287,   287,   288,   288,   288,   289,   289,   289,   289,
     290,   290,   292,   291,   291,   291,   293,   291,   294,   295,
     295,   296,   296,   297,   297,   298,   298,   299,   299,   300,
     301,   301,   302,   302,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   310,   310,   310,
     310,   310,   310,   311,   311,   311,   311,   312,   312,   313,
     313,   314,   314,   316,   315,   315,   317,   317,   318,   318,
     320,   319,   319,   319,   321,   322,   321,   324,   323,   326,
     325,   325,   325,   327,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   328,   325,   329,   325,   330,   325,   331,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   332,   325,   333,   334,   325,
     335,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   336,   325,   325,   325,   325,   325,   325,   325,   337,
     325,   338,   325,   339,   339,   339,   339,   340,   340,   340,
     341,   341,   342,   343,   343,   344,   344,   344,   344,   346,
     345,   347,   345,   348,   345,   349,   345,   350,   345,   351,
     345,   352,   345,   353,   345,   354,   354,   354,   354,   355,
     355,   355,   356,   356,   358,   359,   357,   357,   360,   360,
     361,   362,   362,   362,   363,   363,   363,   364,   364,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   367,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   369,   369,   370,   370,   371,   371,   371,
     371,   372,   372,   373,   373,   374,   375,   376,   378,   379,
     377,   377,   380,   380,   382,   381,   383,   383,   385,   384,
     386,   386,   386,   387,   387,   388,   388,   389,   390,   391,
     390,   392,   392,   392,   393,   393,   393,   394,   394,   395,
     395,   395,   396,   396,   397,   397,   398,   399,   398,   400,
     400,   400,   401,   401,   402,   402,   403,   403,   404,   405,
     404,   404,   406,   406,   407,   407,   407,   407,   407,   407,
     407,   407,   408,   408,   408,   408,   408,   408,   408,   408,
     409,   410,   409,   409,   409,   409,   409,   409,   411,   412,
     412,   412,   413,   413,   413,   413,   413,   413,   413,   413,
     414,   415,   414,   416,   416,   417,   417,   418,   419
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     1,
       3,     1,     1,     3,     2,     4,     5,     4,     0,     3,
       0,     1,     1,     1,     1,     4,     1,     2,     3,     0,
       0,     7,     0,     0,    10,     0,     0,     5,     0,     0,
       7,     0,     0,     0,    12,     0,     4,     2,     3,     2,
       3,     2,     3,     3,     2,     3,     3,     3,     1,     2,
       5,     0,     0,    10,     0,     0,    10,     0,     6,     1,
       0,     0,     8,     3,     3,     0,     0,     0,     0,     0,
      13,     0,     0,     5,     2,     2,     0,     1,     2,     0,
       5,     0,     5,     0,     0,     4,     1,     1,     1,     1,
       1,     3,     4,     0,     4,     0,     5,     1,     2,     1,
       1,     1,     3,     3,     4,     3,     3,     5,     3,     4,
       0,     0,     0,    18,     0,     0,    15,     0,     0,    11,
       0,     0,     0,    18,     0,     0,    17,     0,     0,    15,
       1,     0,     1,     2,     0,     0,    10,     1,     3,     1,
       1,     1,     0,     1,     0,    10,     0,     8,     0,     7,
       1,     2,     1,     2,     0,     2,     1,     0,     2,     0,
       2,     1,     3,     0,     2,     1,     2,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       0,     6,     0,     5,     1,     1,     1,     4,     0,     0,
       5,     0,     0,     7,     0,     8,     0,     0,     6,     0,
       2,     0,     4,     3,     0,     3,     0,     4,     1,     0,
       2,     3,     5,     4,     4,     5,     7,     6,     0,     1,
       1,     1,     2,     3,     3,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     2,     4,     3,     5,     1,     3,
       2,     0,     0,     4,     2,     1,     0,     9,     3,     1,
       3,     1,     3,     0,     1,     1,     2,     2,     2,     3,
       1,     3,     1,     1,     3,     4,     3,     0,     1,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     0,     4,     1,     2,     1,     4,     3,
       0,     3,     1,     1,     0,     0,     2,     0,     4,     0,
       7,     3,     4,     0,     7,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     0,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     0,     5,     0,     0,     7,
       0,     5,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     3,     1,     1,     1,     3,     2,     1,     0,
      10,     0,    11,     2,     2,     4,     4,     4,     4,     4,
       4,     3,     1,     0,     4,     3,     4,     1,     2,     0,
       3,     0,     5,     0,     4,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     3,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     1,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     1,     3,     2,     2,     2,     4,     3,
       1,     1,     3,     1,     1,     1,     1,     3,     2,     1,
       3,     3,     1,     0,     2,     0,     1,     5,     3,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     0,     0,
       7,     1,     2,     0,     0,     4,     4,     4,     0,     2,
       1,     1,     0,     1,     2,     3,     3,     1,     4,     0,
       5,     1,     1,     1,     1,     2,     1,     1,     2,     4,
       4,     1,     1,     4,     0,     1,     1,     0,     2,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     0,
       5,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       1,     0,     5,     3,     3,     6,     3,     3,     3,     1,
       1,     1,     4,     4,     4,     2,     2,     4,     2,     2,
       1,     0,     4,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   572,     0,     0,   461,
       0,   469,   470,     6,   493,   552,    68,   471,     0,    48,
      45,     0,     0,    77,     0,     0,     0,     0,   422,     0,
       0,    80,     0,     0,     0,     0,     0,   445,     0,     0,
       0,     0,   170,   172,   176,     0,     0,   502,   475,   476,
     477,   472,   473,     0,     0,   478,   474,     0,     0,    30,
       0,     0,     0,    79,    30,     0,   564,   464,   496,     4,
       0,     8,    36,    19,     9,    10,   160,   161,     0,     0,
     384,   512,     0,   404,   405,   162,   543,     0,   499,   403,
       0,   383,   511,     0,   515,   443,   546,     0,   542,   521,
     541,   544,   551,     0,   392,   495,   494,   408,     6,   445,
       0,   162,   609,   608,     0,   606,   605,   407,   512,     0,
     515,   370,   371,   372,   373,     0,   399,   398,   397,   396,
     395,   394,   393,   445,     0,     0,   429,     0,   350,   517,
       0,   348,     0,   577,     0,   505,   335,     0,     0,   446,
     452,   327,   453,     0,   457,   544,     0,     0,   400,   463,
       0,    39,    37,   554,     0,   310,     0,     0,   311,     0,
       0,    55,    57,     0,    59,     0,     0,     0,    61,   512,
       0,   515,     0,     0,     0,    22,     0,    21,   253,     0,
       0,   252,   173,   171,   258,     0,   162,     0,     0,     0,
       0,   329,   572,   590,     0,   480,     0,     0,     0,     0,
     584,   586,     0,    15,     0,   498,     0,     6,   471,     0,
       0,     0,   512,   511,    28,   120,   119,     0,   121,     0,
       0,   384,     0,     0,    28,     0,     0,     0,   465,     0,
     466,     0,     0,     0,    18,   174,   168,    64,   554,   554,
     163,   409,     0,     0,   355,     0,   357,   387,   351,   353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
     349,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   554,   518,   554,     0,
     565,   545,   409,     0,     0,   402,     0,   433,     0,     0,
     581,   516,     0,   421,   506,   573,     0,   448,     0,   467,
       0,   454,   545,   462,    42,     0,   555,     0,     0,    67,
       0,    46,     0,   312,   315,   512,   515,     0,     0,    58,
      60,    84,     0,    62,    63,    30,    83,    24,     0,     0,
      17,     0,   254,   515,     0,    65,     0,     0,    66,   411,
       0,   157,   159,   512,   515,     0,   610,   512,   515,     0,
     571,     0,   591,     0,   589,   479,   585,   587,   493,     0,
       0,     0,     0,     0,     0,   537,     0,   583,   501,   582,
     588,   497,     5,    12,    13,     0,     0,   106,   110,   471,
       0,     0,     0,     0,   117,     0,   109,   108,   547,     0,
       0,     0,   311,   183,   185,     0,     0,     0,   122,   123,
       0,    98,   125,     0,   128,     0,   126,   385,   514,   513,
      38,   500,     0,   406,     7,     0,   430,     0,     0,   166,
     177,     0,     0,   164,     0,   554,   615,   618,     0,   535,
     533,   435,     0,     0,   359,     0,   390,     0,     0,     0,
     361,   360,   375,   374,   377,   376,   378,   380,   381,   379,
     369,   368,   363,   364,   362,   365,   366,   367,   382,     0,
     331,   346,   345,   344,   343,   342,   341,   340,   339,   338,
     337,   336,   444,   616,   536,   439,     0,     0,     0,     0,
     607,   512,   515,   431,   562,     0,   576,     0,   575,   447,
     535,   468,   328,   536,     0,    30,    40,   419,   309,    49,
       0,    51,   313,    74,    71,     0,     0,   199,   199,    56,
       0,     0,   503,   471,     0,   491,     0,     0,   483,     0,
     481,    27,   490,   482,    28,     0,    23,    20,     0,   251,
     259,   256,     0,     0,     0,   611,   602,   604,   603,    11,
       0,   568,     0,   567,   420,     0,   593,     0,   594,   596,
       0,   597,     0,   598,     0,     3,     5,   434,   137,   572,
       0,     0,   113,   129,     0,   118,   548,    99,   186,   183,
       0,   515,     0,     0,     0,     0,   101,   124,     0,    29,
      31,    32,    33,    34,     0,   324,   553,     0,   242,     0,
     512,     0,   515,     0,     0,     0,   449,   175,   179,     0,
       0,   418,   417,     0,   238,     0,     0,     0,     0,   534,
     356,   358,     0,     0,   352,   354,     0,   332,     0,     0,
     538,   557,   519,   556,   561,   549,   550,   580,   579,     0,
     455,    28,   208,     0,    30,   206,    47,   311,     0,     0,
       0,     0,     0,     0,   199,     0,   199,     0,   486,   487,
     510,     0,   505,   503,     0,   485,     0,    85,    25,   255,
       0,   238,   158,    70,     0,   569,   571,     0,   599,   601,
     600,     0,     0,   615,   616,   432,    16,     3,    96,     0,
     111,     0,   115,   103,     0,   140,   184,     0,   130,   183,
     103,     0,   127,   386,     0,   247,     0,   243,   244,    26,
       0,   451,     0,     0,   178,   181,   261,   238,   239,   240,
       0,   228,     0,   241,   540,   563,   438,   436,   391,   388,
     333,   442,   440,   558,   532,   554,     0,     0,   574,   459,
     216,   219,     0,    28,     0,   314,   183,   183,   193,     0,
      30,   191,    78,     0,     0,     0,     0,     0,   195,     0,
     489,   506,   504,     0,   484,   492,   617,     0,    81,   257,
       0,   612,   571,   566,     0,   592,     0,    14,     0,   112,
     114,     0,   100,     0,   311,     0,     0,     0,   102,     0,
     554,     0,   323,   322,   326,   317,     0,   512,   515,   450,
     180,   261,     0,   293,     0,   423,   238,     0,   230,     0,
     467,   531,   530,     0,   523,     0,     0,   578,   456,   224,
       0,     0,    41,    50,     0,    52,     0,     0,     0,    28,
       0,   197,     0,   204,   205,   202,   196,   509,   508,   488,
      86,    91,   423,     0,   330,   595,    95,   138,    94,   116,
     104,     0,     0,   147,   183,   134,    35,     0,   524,   316,
     554,     0,   250,   293,   182,     0,     0,   297,   298,   299,
     302,   301,   300,   292,   169,   260,   265,   262,     0,   291,
     295,     0,     0,     0,     0,     0,   231,     0,   389,   334,
     554,   554,   529,   520,   559,   560,     0,   458,     0,     0,
       0,   209,   220,   207,   311,    75,    72,   194,     0,   198,
     200,    30,     0,     0,    92,    82,     0,   570,   211,     0,
       0,   141,    96,     0,    96,   319,   532,     0,   321,   167,
       0,     0,   269,     0,   162,   296,     0,   264,    30,     0,
      30,     0,   234,     0,   233,     0,     0,   522,   460,     0,
      30,     0,     0,     0,     0,     0,   192,    30,    28,   507,
      87,     0,    30,   221,   105,   144,   311,     0,     0,     0,
     525,   318,     0,     0,   271,   273,   268,   305,     0,     0,
       0,    28,     0,   427,     0,    28,   235,     0,   232,   526,
     527,   217,    28,    44,   210,    53,    30,   189,    76,    73,
      28,     0,    30,    28,     0,     0,     0,    96,     0,   148,
     131,   135,   308,   270,     6,     0,   274,   275,     0,     0,
     283,     0,     0,     0,     0,   263,   266,     0,   165,   428,
       0,   424,   410,     0,   237,    30,     0,    28,     0,    28,
     412,     0,     0,    96,     0,   139,     0,     0,   226,    96,
     226,   272,   276,   277,   287,     0,   278,     0,   306,   303,
       0,   307,     0,   425,   236,    28,    30,   187,    54,     0,
      88,    93,   212,     0,     0,     0,   145,   142,     0,     0,
       0,     0,     0,   286,   279,   280,   284,     0,   238,   426,
      28,   190,     0,    96,   214,   222,   223,   226,    96,    96,
       0,   132,     0,   285,     0,   304,     0,     0,    30,     0,
      96,     0,     0,     0,     0,   226,     0,   281,     0,   188,
      28,   213,     0,     0,     0,   227,   149,     0,   136,   289,
      30,   267,    89,   215,     0,     0,     0,    28,   151,   146,
       0,     0,   290,     0,    90,   150,   152,   143,   133,     0,
     153,   154,     0,     0,   155,     0,    30,    28,   156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    88,    89,   596,   412,   206,   207,
      90,   244,   443,   619,  1027,    92,   345,   672,   535,   770,
     187,   540,   186,   673,   677,   934,  1066,   358,   680,   985,
     679,   984,   190,   202,   871,   798,   943,  1031,  1122,  1168,
     945,   991,   808,   241,   723,   730,   812,   949,   423,   424,
     425,   721,   811,   247,   878,   816,  1079,  1145,   954,  1080,
     718,   948,   814,   996,  1128,  1037,  1127,   952,  1078,  1174,
    1175,  1176,  1182,  1185,   380,   381,    94,    95,   271,    96,
     643,    97,   638,   460,    98,   459,    99,   640,   743,   744,
     613,   433,  1098,  1028,   782,   546,   549,   685,   987,   941,
     865,   676,   771,   982,   993,  1123,  1140,   849,  1065,   852,
    1036,  1075,   930,  1109,   750,   751,   752,   531,   629,   210,
     211,   215,   833,   905,   963,  1090,   906,   961,  1006,  1045,
    1046,  1047,  1048,  1114,  1049,  1050,  1051,  1112,  1161,   907,
     908,   909,   910,  1008,   911,   184,   352,   353,   678,   822,
     823,   824,   891,   733,   734,   100,   339,   101,   390,   840,
     478,   479,   473,   475,   625,   477,   839,   652,   145,   464,
     572,   102,   103,   104,   131,   914,  1014,   106,   262,   594,
     415,   648,   647,   659,   658,   314,   107,   753,   171,   172,
     534,   769,   848,   927,   178,   259,   532,   108,   690,   562,
     109,   691,   335,   692,   200,   111,   112,   330,   113,   114,
     517,   764,   923,   825,   956,   841,   842,   843,   844,   115,
     116,   117,   118,   272,   119,   120,   427,   121,   122,   347,
     662,   763,   663,   664,   123,   582,   583,   802,   164,   165,
     229,   230,   585,   231,   711,   124,   385,   704,   386,   125,
     563,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -893
static const yytype_int16 yypact[] =
{
    -893,    91,   106,  -893,  2117,  5016,  5016,   -25,  5016,  5016,
    5016,  5016,  5016,  5016,  5016,  5016,  -893,  5016,  5016,  5016,
    5016,  5016,  5016,  5016,   350,   350,  3329,  5016,   396,   -13,
      14,  -893,  -893,   110,  -893,  -893,  -893,    96,  5016,  -893,
    -893,    90,   125,  -893,    14,  3462,  3595,   214,  -893,   229,
    3728,  -893,  5016,   156,    -9,    23,   188,    53,   206,   222,
     228,   231,  -893,  -893,  -893,   234,   239,  -893,  -893,  -893,
    -893,  -893,  -893,   463,   114,  -893,  -893,   298,  3181,  -893,
     497,  3861,  5149,  -893,  -893,   549,   241,   560,   317,  -893,
      29,  -893,  -893,  -893,  -893,  -893,  -893,  -893,   304,   346,
    -893,  -893,   275,   371,   376,   409,   381,   325,  -893,  -893,
    5732,  -893,  -893,   212,  4445,  -893,  -893,   328,   442,   333,
    -893,   -11,  -893,    11,  -893,  -893,  -893,  -893,  -893,   407,
     364,   409,  6601,  6601,  5016,  6601,  6601,  3512,   199,  6360,
     470,  -893,  -893,   469,  -893,  5016,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,   375,   298,   260,   386,  -893,  -893,
     389,  -893,   350,  6402,   378,   540,  -893,   401,   298,   404,
     414,  -893,  -893,   417,   454,    -5,    11,  3994,  -893,  -893,
    5149,   554,  -893,  5016,    36,  6601,  2915,    14,  5016,  5016,
     426,  -893,  -893,  5774,  -893,  5821,   449,   599,  -893,   453,
    6601,  1830,   457,  5863,   298,    22,    40,  -893,  -893,   295,
      44,  -893,  -893,  -893,   607,    51,   409,   350,  5016,  5016,
     462,  -893,  3329,    49,   473,  -893,  5282,   350,   439,   504,
    -893,  -893,   298,  -893,   137,   323,  5016,  4098,   338,   182,
    5415,    24,     7,    16,   472,   584,  -893,   475,   600,   622,
    6096,   467,   477,  5966,   487,   584,   211,  5016,   584,   466,
     600,   580,   494,   588,  -893,   538,  -893,  -893,  5016,  5016,
    -893,   592,   603,   217,  -893,  5016,  -893,   641,  -893,  -893,
    5016,  5016,  5016,  5016,  5016,  5016,  5016,  5016,  5016,  5016,
    5016,  5016,  5016,  5016,  5016,  5016,  5016,  5016,   396,  -893,
    -893,  -893,  4143,  5016,  5016,  5016,  5016,  5016,  5016,  5016,
    5016,  5016,  5016,  5016,   494,    88,  5016,  -893,  5016,  5016,
     241,    71,  -893,  6008,  5016,  -893,   298,   300,    95,    95,
    -893,  -893,  4291,  -893,  4439,  -893,   298,   404,    76,   494,
      76,  -893,    57,  -893,  -893,  2915,  6601,   505,  5016,  -893,
     589,  -893,   514,   670,  6601,   590,  4297,   608,    13,  -893,
    -893,  -893,  1935,  -893,  -893,  -893,  -893,   105,   614,   156,
    -893,  5016,  -893,  -893,    -9,  -893,  1935,   628,  -893,  -893,
      19,  -893,  -893,    56,    79,    63,  -893,   546,  1850,   548,
     312,   547,  -893,   638,  -893,  -893,  -893,  -893,   653,  1533,
     564,   241,   571,   567,   585,    57,   570,  -893,  -893,  -893,
    -893,   359,  -893,  -893,  -893,   494,  6138,  -893,  -893,   722,
     575,   104,   549,   723,  -893,  3284,  -893,  -893,    57,    11,
     666,   350,  4587,   615,  -893,  5149,  6498,   668,  -893,  -893,
     609,  -893,  -893,  2250,  -893,  5016,  -893,  -893,  -893,  -893,
    -893,  -893,  1642,  -893,  -893,  1895,  -893,   747,   150,  -893,
     649,   610,   618,  -893,   620,  5016,   621,  -893,  5016,   626,
      57,  -893,    11,  5016,  6680,  5016,  -893,  5016,  5016,  5016,
    4044,  4339,  4487,  4487,  4487,  4487,  2058,  2058,  2058,  2058,
     890,   890,   433,   433,   433,   469,   469,   469,  -893,   290,
    3512,  3512,  3512,  3512,  3512,  3512,  3512,  3512,  3512,  3512,
    3512,  3512,  -893,   621,   629,  -893,   625,    95,   627,  1698,
    -893,   251,  1757,   388,  -893,   350,  6601,   350,  6456,   404,
    -893,  -893,  -893,  -893,    95,  -893,  -893,  -893,  6601,  -893,
    2383,  -893,  -893,  -893,  -893,   760,    64,   636,   637,  -893,
    1935,  1935,  1935,  -893,   631,  -893,   650,   298,   260,   657,
    -893,  -893,  -893,  -893,   642,   727,  -893,  -893,  5557,  -893,
    -893,   792,   651,   350,   648,  -893,  -893,  -893,  -893,  -893,
     654,  -893,    78,  -893,  -893,    50,  -893,  5016,  -893,  -893,
      75,  -893,    81,  -893,   494,   655,  -893,  -893,  -893,  3329,
     672,   377,  -893,  -893,   802,  -893,    57,  -893,  -893,   615,
     656,  6264,   193,   664,  5905,   193,  -893,  -893,   665,  -893,
    -893,  -893,  -893,  -893,  6180,   190,  -893,   350,  -893,    82,
      84,   671,   734,  1935,   675,   298,   404,  -893,   702,   150,
     676,  -893,  -893,   673,   440,   677,  5599,   494,   494,    57,
    6642,  3512,  5016,  6559,  3778,  3911,   396,  -893,   494,   494,
    -893,  -893,  -893,    70,  -893,  -893,  -893,  -893,  -893,  4735,
    -893,   576,  -893,    14,  -893,  -893,  -893,  5016,  5016,   193,
     193,  1935,   767,  2516,  -893,   602,  -893,   186,  -893,  -893,
     719,   681,   840,  1935,   298,   300,     3,   746,  -893,  -893,
    1935,   440,  -893,  -893,  5016,  -893,   312,   838,  -893,  -893,
    -893,   691,  1321,  -893,  -893,  -893,  -893,   695,  -893,   703,
    -893,  5016,  -893,  -893,   709,  -893,  -893,  5016,  -893,   615,
    -893,   706,  -893,  -893,   232,  -893,  4883,  -893,  -893,  -893,
     298,   404,   150,   708,   867,  -893,  -893,   440,  -893,  -893,
     721,   876,    89,  -893,  -893,  -893,  -893,  -893,  3645,  -893,
    -893,  -893,  -893,  -893,   726,  5016,  5016,   350,  6601,  -893,
    -893,   353,   729,   803,   731,  6601,   615,   615,  -893,   883,
    -893,  -893,  -893,   619,   751,  5016,    28,   198,  -893,  1935,
    -893,  1935,  -893,   748,   388,  -893,  -893,   754,  -893,  -893,
     755,  -893,   312,  -893,  5016,  -893,   744,  -893,   169,  -893,
    6601,  5016,   887,  5016,  5016,  6223,   193,   773,   887,   769,
    5016,    95,   814,   280,  -893,  -893,   350,    99,  1250,   404,
     867,  -893,   150,   811,   768,   837,   732,   871,   932,  5016,
     494,   885,   897,   494,  -893,   794,  5641,  -893,   836,   431,
      14,  2915,  -893,  -893,   801,  -893,   804,   806,  1935,   877,
     816,  -893,  5690,  -893,  -893,  -893,  -893,  -893,   849,  -893,
    -893,   878,   837,   101,  3512,  -893,  -893,  3181,  -893,  6601,
    -893,  6050,   819,  -893,   615,  -893,  -893,   822,  -893,  -893,
    5016,   814,  -893,   842,  -893,   913,   150,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,   407,   859,
    -893,    59,   827,   832,   830,   194,   980,  1935,  3645,  -893,
    5016,  5016,  -893,   814,  -893,  -893,    95,  -893,    14,   968,
     927,  -893,  -893,  -893,  5016,  -893,  -893,  -893,   841,  -893,
    -893,  -893,  1935,   150,  -893,  -893,   835,  -893,  -893,  5016,
     845,  -893,  -893,   843,  -893,  -893,   726,   844,   814,  -893,
     990,    33,  -893,   933,   409,  -893,   929,  -893,  -893,   277,
    -893,   934,   992,  1935,  -893,   847,   850,  -893,  -893,   982,
    -893,   856,  2915,   858,  2649,  2649,  -893,  -893,   176,  -893,
    -893,   857,  -893,   499,  6601,  -893,  5016,   272,   866,   444,
    -893,  -893,  1935,   150,  -893,   163,  -893,  1007,    60,   951,
    1010,   862,   952,  -893,   102,   864,  1014,  1935,  -893,  -893,
    -893,  -893,   961,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
     302,   957,  -893,   872,  5016,    46,   989,  -893,   874,  3181,
    -893,  3181,  -893,  -893,   946,   879,   163,  -893,   880,   953,
     936,   884,   900,  1935,   973,  -893,  -893,  1935,  -893,  -893,
     279,  -893,  -893,  1935,  -893,  -893,  2782,   960,   889,   891,
    -893,  6265,  5016,  -893,   984,  -893,   613,   898,   985,  -893,
     985,  -893,  -893,  -893,   790,   150,  -893,   983,  -893,  1044,
     901,  -893,   988,  -893,  -893,   652,  -893,  -893,  -893,   902,
    -893,  -893,  -893,  6307,   624,   905,  3181,  -893,   910,  1018,
     684,  1019,   995,   996,  1061,  -893,  -893,  1935,   440,  -893,
     986,  -893,   911,  -893,  -893,  3181,  -893,   985,  -893,  -893,
     994,  3181,   993,  -893,   150,  -893,   914,   916,  -893,   693,
    -893,  1028,   711,   720,   930,   985,   931,  -893,   413,  -893,
     918,  3181,   738,   998,  3048,  3181,  -893,  1039,  -893,  -893,
    -893,  -893,  -893,  3181,   935,  1002,  1001,   939,  1000,  -893,
     938,   941,  -893,   947,  -893,  1000,  -893,  -893,  -893,   150,
    -893,  -893,  1016,   937,  -893,   945,  -893,   948,  -893
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -893,  -893,  -387,  -893,   -24,  -893,  -893,  -893,  -893,   740,
    -893,   -82,  -893,  -893,     5,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -892,  -893,  -893,  -893,   368,  -893,   687,   692,
    -893,  -893,  -893,  -893,     9,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,   -57,  -893,  -893,  -893,   550,   678,   679,  -128,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,   383,
    -570,  -402,  -893,   134,  -893,  -893,  -893,  -520,  -893,  -893,
     258,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -756,  -686,  -893,   291,  -231,  -893,  -893,
     752,  -893,   297,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,    83,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,  -893,  -873,  -893,  -893,  -893,  -426,  -893,  -893,   240,
    -893,  -893,  -893,  -893,  -893,   -61,  -893,    -1,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,  -893,
    -893,   -63,  -893,  -893,     1,   261,  -893,  -893,  -893,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,   174,  -447,  -278,  -893,
    -893,  -893,  -893,  -893,  -893,  -893,   292,   140,  -234,  -893,
    -893,   441,   443,  -893,  1160,   -22,   -55,  -501,   569,  1090,
    -893,  -893,  -893,  -787,  -893,  -893,  -893,  -893,   180,  -259,
     909,   987,  -893,  -893,  -893,   -16,  -893,     6,  -893,  -236,
    -518,  -893,  -893,   244,   -10,   336,   435,  -893,  -205,  -893,
     -42,  -182,  -893,  -140,  -893,  -893,  -893,  -893,   447,   915,
    -893,  -893
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -615
static const yytype_int16 yytable[] =
{
     156,   156,   254,   322,   169,   105,   610,   179,   181,    91,
     138,   637,   174,    93,   469,   800,   670,   391,   176,   252,
     498,   251,   191,   243,   667,   595,   668,   573,   687,   205,
     609,   456,   461,   462,   175,   889,   965,   263,   248,   724,
     547,  1003,   396,   256,   348,   260,   -97,   409,   369,   199,
     234,   318,   374,   235,   437,   863,   514,   318,   216,   377,
     997,   834,   999,   396,  -614,   208,   409,   966,  1054,   469,
     514,   575,   682,   396,   409,   795,   396,   242,   409,   530,
     516,   533,   518,   512,   397,    35,   706,  -613,   379,   410,
     736,     3,  -245,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   397,    -2,  -248,   410,   706,
    1060,   392,  1072,   368,   252,   397,   410,   252,   397,   318,
     410,   837,   708,   796,   709,   710,   735,   214,   561,   321,
     216,   327,   765,   318,   134,  -537,   977,   182,   156,  -517,
    -517,  -537,   570,   212,   337,  1076,   177,   713,  -533,    35,
      35,   319,    48,   714,   372,    35,   209,   319,   183,   817,
     513,   439,    35,   838,   783,   351,   787,   524,   440,    35,
     -97,   889,   261,   180,   393,   548,   320,   441,   438,   574,
     367,  1104,   342,   600,   597,   156,   128,  1110,   355,   864,
     264,   350,   745,   156,  1004,  1005,   565,   349,   157,   157,
    1073,   370,   170,   156,   169,   375,   856,   857,   411,   717,
     726,  1113,   378,   729,   431,   156,  -614,   383,   387,   319,
     967,  1055,   128,   576,   683,   431,   971,   429,   128,   645,
    -534,  1139,   766,   319,   405,  1044,  1142,  1143,   707,  -613,
      86,    86,   737,   428,  -245,   876,    86,   225,  1152,   188,
     468,   774,  -325,    86,   128,   261,    35,   468,   661,  -248,
      86,   947,  1061,   472,   232,   128,   847,    35,   972,  -203,
    -203,  -203,   300,   301,   169,   661,   233,   776,   777,   470,
     785,   786,   174,   564,   189,   223,   196,   261,   176,   466,
     407,    35,   785,   786,   820,   745,   153,   634,   413,   414,
     635,   197,   523,   888,   175,   472,   204,   153,   213,  1012,
     634,  1092,   529,   635,   953,  -325,   688,   689,   472,   472,
     877,   470,    79,   521,  1111,   892,    80,    81,   472,   154,
     472,   530,   155,   533,   470,   470,   157,   467,   558,  -203,
     154,   432,   890,   155,   470,   205,   470,    86,   876,   788,
     536,  1013,   558,  1093,   656,   226,   227,   821,    86,  -413,
    -413,   866,   128,   715,    35,   217,   156,   128,   430,    35,
     128,  1141,   252,   228,   251,   451,   265,   426,   760,   468,
     601,   218,    86,   157,   128,   894,    35,   219,   882,  1157,
     220,   157,   631,   221,   719,  -201,  -201,  -201,   222,   739,
     183,   157,   402,   257,   153,  -320,  -446,   156,   978,   153,
     261,  -415,  -415,   157,   884,   429,   756,   757,   266,   409,
     850,   851,   128,  1039,    35,    79,   153,   761,   762,    80,
      81,   428,  1136,   268,   636,   606,   267,   154,   269,   580,
     155,   270,   154,  -539,   105,   155,  -448,   778,   620,   962,
     261,   223,   621,   671,   630,    86,   407,   371,   317,   154,
      86,   410,   155,  -446,   153,  -201,   799,   261,   128,  -448,
      35,   273,   170,   261,   315,   156,  -429,    86,   649,   295,
     296,   297,  -433,   298,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   990,   154,   928,   929,
     155,   156,   560,   156,   316,  -447,    48,   472,   983,   261,
     153,   128,   128,    35,   232,    86,   560,   471,  -431,   298,
     876,   226,   227,   470,   472,   326,   558,   558,   558,   845,
    -517,  -517,   328,   695,  -447,   329,   559,   223,   261,   228,
     470,   720,   224,   167,   333,   675,   168,   223,   334,   156,
     559,   336,   394,   153,   261,   867,  1043,   868,  1052,   515,
     338,    86,   661,   340,   157,   426,  1034,  1035,   748,   749,
    1038,   223,   471,   515,  1159,  1160,   245,   246,   223,   341,
     472,   344,   472,   407,   887,   357,   167,   634,   156,   168,
     635,   156,   773,   158,   161,  1041,   470,    79,   470,  1052,
    -229,    80,    81,   156,   401,   157,   225,   226,   227,   558,
     361,   741,   922,   362,   363,   636,   395,   226,   227,   365,
     636,   376,   389,   223,   937,   228,   442,   447,   255,   444,
    -414,  -414,   169,   453,   223,   228,   445,   448,  1115,   258,
     174,   226,   227,   -43,   -43,   -43,   176,   408,   226,   227,
     450,   772,   454,   455,   957,   156,   156,   558,   223,   228,
     457,   458,   175,   394,   463,   465,   228,   661,   476,   558,
     794,   537,   539,   157,   223,   541,   558,   636,   542,   407,
     545,   543,   156,   974,   975,   976,   566,  1147,   781,   876,
     560,   560,   560,   226,   227,   784,   785,   786,   859,   157,
     876,   157,   571,   383,   226,   227,   577,   584,   989,   579,
     586,   228,   860,   785,   786,   587,   829,   590,   636,  -218,
    -218,  -218,   228,   636,   559,   559,   559,   589,   226,   227,
     591,   592,  1181,   593,   599,   827,  -107,   602,   607,  1018,
     616,   612,  -246,   156,   226,   227,   228,   157,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     876,   633,   228,   617,  1106,   558,    79,   558,  1042,   876,
      80,    81,   639,   560,   681,  1125,   641,    79,   156,   644,
    -562,    80,    81,  1064,   642,  -437,   157,   876,  -441,   157,
     693,   660,   156,   665,  -517,  -517,   876,   684,   686,   698,
     694,   157,   156,   696,   128,   697,   700,   559,   636,   703,
     701,   472,   636,   705,   876,   395,   722,   725,   716,  1088,
     727,   560,   243,  1091,   731,   740,   742,   470,   931,  1094,
     170,   738,   747,   560,   558,  1131,  1009,    79,   746,   779,
     560,    80,    81,   754,  1151,   789,    79,   790,   791,   797,
      80,    81,   804,   157,   157,   559,   932,   805,   807,   988,
     748,   749,  1154,   809,    79,   813,   819,   559,    80,    81,
     831,  1155,   636,    79,   559,   832,   242,    80,    81,   634,
     157,   835,   635,  1135,   836,  -528,  1011,   854,  1015,  1163,
     853,    79,   855,   558,  -246,    80,    81,   858,  1022,   897,
     898,   899,   900,   901,   902,  1030,   979,   875,   869,   964,
    1033,   895,   861,   870,   880,   872,   472,   896,   558,   636,
     897,   898,   899,   900,   901,   902,   903,   885,   912,   560,
     886,   560,   470,   292,   293,   294,   295,   296,   297,   821,
     298,   157,   895,   913,  1067,   916,   917,   920,   896,   558,
    1069,   897,   898,   899,   900,   901,   902,   903,  -294,   921,
     924,   926,   933,   559,   935,   559,   936,   938,   897,   898,
     899,   900,   901,   902,   904,   942,   157,   939,   558,   636,
     951,   636,   944,  1095,   243,   960,   243,  1024,   955,   968,
     157,   969,   970,   558,   973,   980,   981,   992,   560,   995,
     157,  1010,   986,   998,  1002,   959,  1017,  1007,  1016,  1021,
    1001,   160,   160,  1019,  1120,   173,  1020,  1023,  1025,  1032,
    1040,  1053,   636,  1056,  1057,  1058,  1059,  1062,  1063,   558,
    -225,  1068,   559,   558,  1077,  1070,  1074,  -282,   242,   558,
     242,  1083,  1081,  1085,  1084,  1086,  1087,  1089,  1099,  1100,
    1105,   243,  1107,  1108,  1101,  1116,  1150,   560,  1117,  1126,
    1118,   636,  1119,  1121,  1129,  1130,  1132,  1133,  -288,  1134,
     243,  1097,  1137,  1138,  1148,  1153,   243,  1149,  1167,  1144,
    1146,  1162,   560,  1164,  1156,  1158,  1166,  1170,  1171,  1169,
    1183,   559,  1177,   558,   636,  1178,   243,  1184,   818,   243,
     243,   140,  1172,  1173,  1187,   242,  1179,  1186,   243,   567,
     636,  1188,   604,   560,   159,   159,   559,   605,  1180,  1029,
     940,   622,   623,   702,   242,   830,   569,   915,   893,  1082,
     242,   958,   919,   946,   793,   792,  1000,   403,   873,     0,
     201,   803,   560,   406,     0,     0,     0,   559,     0,   160,
     242,   801,     0,   242,   242,   636,     0,   560,     0,     0,
       0,     0,   242,     0,   110,   132,   133,     0,   135,   136,
     137,   139,   141,   142,   143,   144,   559,   146,   147,   148,
     149,   150,   151,   152,     0,     0,   163,   166,     0,     0,
       0,   559,     0,   560,     0,     0,   160,   560,   185,     0,
       0,     0,     0,   560,   160,   193,   195,     0,     0,     0,
       0,     0,   203,     0,   160,   404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   559,     0,     0,
       0,   559,     0,     0,     0,     0,     0,   559,     0,     0,
       0,   250,   253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   331,     0,     0,     0,     0,   560,  -249,     0,
       0,     0,     0,     0,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     0,     0,     0,   356,
       0,     0,     0,     0,     0,   173,     0,     0,     0,     0,
       0,   559,     0,     0,   323,     0,     0,     0,     0,   373,
       0,     0,     0,     0,     0,   325,     0,   382,   384,   388,
    -517,  -517,     0,     0,     0,     0,     0,   400,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   434,
     274,   275,   276,     0,     0,     0,     0,   253,     0,     0,
     253,     0,     0,   346,     0,     0,   110,   277,   354,   278,
     279,     0,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,   298,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,   163,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   416,     0,     0,     0,
     436,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -249,     0,     0,     0,   522,     0,     0,   452,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   346,   346,
       0,     0,     0,     0,     0,   474,     0,     0,     0,     0,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,     0,     0,
       0,     0,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,     0,     0,   346,     0,   346,   519,
     581,     0,     0,     0,     0,     0,   160,   806,     0,     0,
       0,     0,   526,     0,   528,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,   538,     0,
       0,     0,   160,     0,   160,     0,     0,     0,     0,     0,
       0,   608,   611,     0,     0,     0,     0,     0,     0,     0,
       0,   568,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   275,   276,   632,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
     160,   278,   279,     0,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,     0,     0,     0,     0,     0,   657,
       0,     0,   354,     0,     0,   614,     0,     0,     0,   160,
       0,     0,   160,   110,     0,   624,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   331,     0,   331,     0,     0,
       0,     0,     0,     0,     0,   346,     0,     0,   646,     0,
       0,     0,     0,   650,     0,   651,     0,   653,   654,   655,
       0,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,   274,   275,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   382,     0,     0,   160,   160,   277,     0,
     278,   279,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,   160,     0,     0,   588,     0,     0,     0,
     110,     0,   434,     0,     0,   434,     0,   274,   275,   276,
       0,     0,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,     0,   277,     0,   278,   279,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   712,   298,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   434,
     434,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,   384,     0,   581,     0,     0,     0,
       0,     0,     0,   160,     0,   626,     0,     0,     0,     0,
       0,     0,   758,   160,     0,     0,     0,  -517,  -517,     0,
       0,     0,     0,     0,     0,     0,   828,     0,     0,   768,
       0,     0,     0,     0,     0,     0,     0,   354,   775,     0,
       0,     0,     0,   110,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     0,   331,     0,     0,
       0,   666,     0,     0,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     0,     0,     0,     0,
       0,   810,     0,     0,     0,     0,     0,   815,     0,     0,
    -517,  -517,   581,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,   434,    10,    11,     0,
    -517,  -517,     0,     0,     0,     0,   331,  -416,  -416,     0,
       0,     0,     0,     0,     0,   346,   846,   627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,   862,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,   874,    31,    32,   128,    34,    35,
       0,   879,     0,   881,   354,    37,     0,     0,   550,   551,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,     0,    48,     0,     0,   552,     0,   918,
       0,     0,     0,     0,     0,    31,    32,   128,     0,   129,
     578,   110,    59,    60,     0,   553,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   130,    75,    76,    77,     0,     0,     0,   153,
     346,     0,     0,     0,    82,   628,     0,     0,     0,    85,
      86,     0,    87,   554,     0,   555,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,   421,     0,     0,
     346,   346,   556,    75,    76,   557,     0,     0,     0,     0,
       0,     0,     0,     0,   354,  -615,  -615,  -615,  -615,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,   994,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,   110,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   354,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,     0,    36,  1071,     0,     0,    37,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
       0,     0,    52,    53,     0,    54,   110,     0,     0,    55,
      56,    57,  1103,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,    11,    74,    75,    76,    77,    78,     0,
      79,     0,     0,     0,    80,    81,    82,     0,    83,    84,
       0,    85,    86,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,    55,    56,    57,     0,    58,    59,    60,   618,
      62,    63,    64,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   130,    75,    76,
      77,    78,     0,    79,     0,     0,     0,    80,    81,    82,
     674,    83,    84,     0,    85,    86,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
     130,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    82,   780,    83,    84,     0,    85,    86,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   130,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    82,  1026,    83,    84,     0,
      85,    86,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,   130,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    82,  1096,
      83,    84,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,     0,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,     0,    50,    51,     0,     0,    52,     0,     0,
      54,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,    11,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,     0,    85,    86,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   127,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,    83,    84,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,  1165,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   236,     0,     0,     0,    31,    32,
     237,    34,    35,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,   239,     0,   240,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   127,   130,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    85,    86,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   236,     0,     0,
       0,    31,    32,   237,    34,    35,     0,     0,     0,     0,
       0,   238,     0,     0,     0,     0,   239,     0,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   130,    75,
      76,    77,     5,     6,     7,     8,     9,     0,     0,     0,
      82,    10,   127,     0,     0,    85,    86,     0,    87,     0,
       0,     0,     0,     0,    31,    32,   417,     0,    35,     0,
       0,   162,     0,   418,   419,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   128,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,   420,     0,     0,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,   421,     0,    48,     0,
       0,     0,    75,    76,     0,     0,     0,     0,   603,     0,
       0,     0,     0,   129,     0,     0,    59,    60,   422,    86,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   127,   130,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   128,    34,    35,     0,   277,     0,
     278,   279,    37,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    48,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   127,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   192,     0,     0,    85,    86,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   128,    34,    35,
       0,     0,     0,   278,   279,    37,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,    48,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   127,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,   194,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,    34,    35,     0,     0,     0,     0,   279,    37,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,    48,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   127,   130,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,   198,
       0,     0,    85,    86,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   128,    34,    35,     0,     0,     0,     0,
       0,    37,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
      48,   298,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   130,    75,
      76,    77,     0,     0,     0,     0,   249,     0,     0,     0,
      82,     0,     0,     0,     0,    85,    86,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   128,    34,    35,     0,
       0,     0,     0,     0,    37,     0,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    48,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   130,    75,    76,    77,     0,     5,     6,     7,     8,
       9,     0,     0,    82,   343,    10,   127,     0,    85,    86,
       0,    87,     0,     0,     0,     0,     0,     0,    31,    32,
     417,     0,    35,     0,     0,   499,     0,   418,   419,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   128,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,   420,     0,     0,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
     421,     0,    48,     0,     0,     0,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
      59,    60,   422,    86,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     130,    75,    76,    77,     5,     6,     7,     8,     9,     0,
       0,     0,    82,    10,   127,     0,     0,    85,    86,     0,
      87,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   525,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,  -517,  -517,     0,
       0,    31,    32,   128,    34,    35,     0,     0,     0,     0,
       0,    37,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   544,   298,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   130,    75,
      76,    77,     5,     6,     7,     8,     9,     0,     0,     0,
      82,    10,   127,     0,     0,    85,    86,     0,    87,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   527,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,  -517,  -517,     0,     0,    31,
      32,   128,    34,    35,     0,     0,     0,     0,     0,    37,
    -615,  -615,  -615,  -615,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   130,    75,    76,    77,
       5,     6,     7,     8,     9,     0,     0,     0,    82,    10,
     127,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   431,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   128,
      34,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   130,    75,    76,    77,     5,     6,
       7,     8,     9,     0,     0,     0,    82,    10,   127,     0,
       0,    85,    86,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   767,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   128,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   130,    75,    76,    77,     5,     6,     7,     8,
       9,     0,     0,     0,    82,    10,   127,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   826,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   128,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   127,
     130,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    85,    86,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   128,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   130,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      85,    86,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   128,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   127,   130,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    85,    86,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   128,   398,    35,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   127,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,    86,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   128,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   130,    75,    76,    77,   274,   275,   276,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,    85,
      86,     0,    87,   277,     0,   278,   279,     0,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,   274,   275,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,   278,   279,     0,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     0,   298,
     274,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     279,     0,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,   298,     0,     0,     0,     0,     0,     0,     0,   274,
     275,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,   863,   278,   279,
     699,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,   274,   275,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,     0,
     278,   279,   755,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,   274,   275,   276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     277,     0,   278,   279,   925,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     0,   298,     0,     0,     0,     0,     0,
     274,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     279,   864,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,   298,   274,   275,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
       0,   278,   279,   299,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,   274,   275,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   277,     0,   278,   279,   359,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,   275,   276,     0,     0,
       0,     0,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,   278,   279,   728,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,   274,   275,   276,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,   278,   279,     0,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,   274,
     275,   276,     0,     0,     0,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,   278,   279,
       0,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,     0,     0,     0,     0,   274,   275,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,   278,   279,   449,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,   274,   275,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,   278,   279,   520,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,   274,
     275,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,   278,   279,
     950,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,     0,   274,   275,   276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
     446,   278,   279,     0,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,     0,   298,   274,   275,   276,     0,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
       0,   277,   598,   278,   279,     0,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,     0,   298,   274,   275,   276,     0,
       0,     0,     0,     0,  -517,  -517,     0,     0,     0,     0,
       0,     0,     0,   277,   732,   278,   279,     0,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,     0,   298,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     275,   276,     0,     0,     0,     0,     0,   883,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,   278,   279,
    -185,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298,   274,   275,   276,     0,     0,     0,     0,     0,  1102,
    -185,     0,     0,     0,     0,     0,     0,     0,   277,     0,
     278,   279,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     0,   298,     0,     0,     0,     0,     0,     0,     0,
       0,  1124,     0,     0,     0,   274,   275,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,   278,   279,   324,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     0,   298,   274,   275,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,   278,   279,   332,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     0,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   274,   275,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   669,     0,     0,   277,   759,   278,   279,   615,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,     0,   298,
     274,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     279,     0,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
       0,   298,   275,   276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,     0,
     278,   279,     0,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   276,   298,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   277,     0,   278,   279,
       0,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     0,
     298
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-893)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-615)))

static const yytype_int16 yycheck[] =
{
      24,    25,    84,   131,    28,     4,   432,    29,    30,     4,
      11,   458,    28,     4,   273,   701,   534,   222,    28,    82,
     298,    82,    44,    78,   525,   412,   527,     8,   548,    53,
     432,   262,   268,   269,    28,   822,   909,     8,    80,   609,
      27,     8,   224,    85,     8,    87,    30,   229,     8,    50,
      74,    62,     8,    77,    30,    27,   315,    62,    57,     8,
     952,   747,   954,   245,     8,    74,   248,     8,     8,   328,
     329,     8,     8,   255,   256,    72,   258,    78,   260,   338,
     316,   340,   318,   314,   224,    74,     8,     8,   216,   229,
       8,     0,     8,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   245,     0,     8,   248,     8,
       8,    62,    66,    91,   177,   255,   256,   180,   258,    62,
     260,    32,    72,   120,    74,    75,   627,    74,   362,   123,
     129,   155,    62,    62,   159,   146,   923,    27,   162,    60,
      61,   146,   376,   120,   168,  1037,   159,    72,   159,    74,
      74,   162,    99,    72,   209,    74,   165,   162,    62,   729,
      72,   154,    74,    74,   684,   187,   686,    72,   161,    74,
     154,   958,   150,   159,   125,   162,   165,   161,   154,   160,
     204,  1073,   176,    79,   415,   209,    72,  1079,   189,   161,
     161,   186,   639,   217,   161,   162,    91,   161,    24,    25,
     154,   161,    28,   227,   228,   161,   776,   777,   232,   596,
     612,  1084,   161,   615,    32,   239,   160,   218,   219,   162,
     161,   161,    72,   160,   160,    32,    32,   237,    72,   465,
     159,  1123,   162,   162,   228,    72,  1128,  1129,   160,   160,
     165,   165,   160,   237,   160,    76,   165,   143,  1140,   159,
     162,   677,    62,   165,    72,   150,    74,   162,   517,   160,
     165,   160,   160,   273,   150,    72,   767,    74,    74,    93,
      94,    95,    60,    61,   298,   534,   162,   679,   680,   273,
      94,    95,   298,   365,   159,    74,    72,   150,   298,    72,
      79,    74,    94,    95,    62,   742,   114,   147,   161,   162,
     150,    72,   326,   821,   298,   315,   150,   114,   120,    32,
     147,    32,   336,   150,   884,   125,   550,   551,   328,   329,
     151,   315,   153,   324,  1080,   826,   157,   158,   338,   147,
     340,   590,   150,   592,   328,   329,   162,   120,   362,   163,
     147,   159,    62,   150,   338,   369,   340,   165,    76,   163,
     345,    74,   376,    74,    64,   144,   145,   125,   165,   160,
     161,   163,    72,   594,    74,   159,   390,    72,    30,    74,
      72,  1127,   435,   162,   435,   164,    72,   237,   656,   162,
     422,   159,   165,   209,    72,   832,    74,   159,   814,  1145,
     159,   217,   455,   159,   599,    93,    94,    95,   159,   633,
      62,   227,   228,   162,   114,   125,   146,   431,   926,   114,
     150,   160,   161,   239,   816,   425,   647,   648,    72,   601,
      67,    68,    72,   151,    74,   153,   114,   658,   659,   157,
     158,   425,  1118,    62,   458,   429,   161,   147,    62,   127,
     150,    32,   147,    62,   443,   150,   146,   681,   443,   896,
     150,    74,   443,   535,   455,   165,    79,   162,   125,   147,
     165,   601,   150,   146,   114,   163,   700,   150,    72,   146,
      74,   146,   298,   150,   146,   499,   159,   165,   472,    46,
      47,    48,   159,    50,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   943,   147,    67,    68,
     150,   525,   362,   527,    62,   146,    99,   517,   934,   150,
     114,    72,    72,    74,   150,   165,   376,   273,   159,    50,
      76,   144,   145,   517,   534,   150,   550,   551,   552,   765,
      60,    61,   146,   557,   146,   146,   362,    74,   150,   162,
     534,   164,    79,   147,   166,   540,   150,    74,     8,   573,
     376,   150,    79,   114,   150,   789,  1003,   791,  1005,   315,
     146,   165,   821,   146,   390,   425,    67,    68,   128,   129,
     996,    74,   328,   329,   161,   162,    79,    80,    74,   125,
     590,    27,   592,    79,   820,   159,   147,   147,   612,   150,
     150,   615,   674,    24,    25,   151,   590,   153,   592,  1046,
     160,   157,   158,   627,   165,   431,   143,   144,   145,   633,
     161,   635,   843,    14,   161,   639,   143,   144,   145,   162,
     644,    14,   160,    74,   858,   162,   154,   160,    79,   154,
     160,   161,   656,   167,    74,   162,    14,   160,  1085,    79,
     656,   144,   145,    67,    68,    69,   656,   143,   144,   145,
     163,   673,    72,   159,   890,   679,   680,   681,    74,   162,
      72,   123,   656,    79,    72,    62,   162,   926,    27,   693,
     694,   166,    83,   499,    74,   161,   700,   701,     8,    79,
      72,    91,   706,   917,   920,   921,    72,  1134,   683,    76,
     550,   551,   552,   144,   145,    93,    94,    95,   780,   525,
      76,   527,    74,   704,   144,   145,   160,   160,   942,   161,
      72,   162,    93,    94,    95,    62,   740,   146,   742,    67,
      68,    69,   162,   747,   550,   551,   552,   163,   144,   145,
     163,   146,  1179,   163,   159,   736,    14,    14,    72,   973,
      72,   126,     8,   767,   144,   145,   162,   573,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      76,    14,   162,   154,   151,   789,   153,   791,  1002,    76,
     157,   158,   123,   633,    14,   151,   166,   153,   802,   159,
     159,   157,   158,  1017,   166,   159,   612,    76,   159,   615,
     159,   166,   816,   166,    60,    61,    76,   161,   161,    72,
     150,   627,   826,   146,    72,   163,    14,   633,   832,   161,
     159,   821,   836,   159,    76,   143,    14,   161,   163,  1053,
     156,   681,   877,  1057,   159,   150,   124,   821,   850,  1063,
     656,   160,   159,   693,   858,   151,   964,   153,   162,    72,
     700,   157,   158,   166,   151,   126,   153,   166,     8,   103,
     157,   158,    14,   679,   680,   681,   851,   166,   163,   941,
     128,   129,   151,   160,   153,   156,   160,   693,   157,   158,
     162,   151,   896,   153,   700,     8,   877,   157,   158,   147,
     706,   160,   150,  1117,     8,   159,   968,    84,   970,   151,
     161,   153,   161,   917,   160,   157,   158,    14,   980,   109,
     110,   111,   112,   113,   114,   987,   928,   163,   160,   908,
     992,   100,   161,   159,    27,   160,   926,   106,   942,   943,
     109,   110,   111,   112,   113,   114,   115,   154,   160,   789,
     161,   791,   926,    43,    44,    45,    46,    47,    48,   125,
      50,   767,   100,   106,  1026,    74,    14,    62,   106,   973,
    1032,   109,   110,   111,   112,   113,   114,   115,    99,    62,
     166,   125,   161,   789,   160,   791,   160,    90,   109,   110,
     111,   112,   113,   114,   163,   126,   802,   161,  1002,  1003,
     161,  1005,   104,  1065,  1039,    72,  1041,   982,   166,   162,
     816,   159,   162,  1017,    14,    27,    69,   162,   858,   154,
     826,    72,   161,   160,    14,   163,    14,    74,    74,    27,
     166,    24,    25,   166,  1096,    28,   166,   161,   160,   162,
     154,    14,  1046,    72,    14,   163,    74,   163,    14,  1053,
      69,    74,   858,  1057,   160,   163,    47,    91,  1039,  1063,
    1041,   161,   163,   107,    91,   161,   146,    74,    88,   160,
      66,  1106,   154,    68,   163,    72,  1138,   917,    14,   154,
     159,  1085,    74,   161,   154,    47,    47,    72,    72,     8,
    1125,  1066,    86,   162,   160,    47,  1131,   161,  1160,    85,
      87,   163,   942,    85,   154,   154,    47,    85,    87,   154,
      74,   917,   154,  1117,  1118,   154,  1151,   160,   730,  1154,
    1155,    11,   163,   103,  1186,  1106,   159,   162,  1163,   369,
    1134,   163,   425,   973,    24,    25,   942,   425,  1175,   985,
     862,   443,   443,   573,  1125,   742,   374,   836,   831,  1046,
    1131,   891,   840,   872,   693,   692,   956,   228,   802,    -1,
      50,   706,  1002,   228,    -1,    -1,    -1,   973,    -1,   162,
    1151,   704,    -1,  1154,  1155,  1179,    -1,  1017,    -1,    -1,
      -1,    -1,  1163,    -1,     4,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,  1002,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,  1017,    -1,  1053,    -1,    -1,   209,  1057,    38,    -1,
      -1,    -1,    -1,  1063,   217,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,   227,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,  1053,    -1,    -1,
      -1,  1057,    -1,    -1,    -1,    -1,    -1,  1063,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,  1117,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,
      -1,  1117,    -1,    -1,   134,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,   145,    -1,   217,   218,   219,
      60,    61,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,
       9,    10,    11,    -1,    -1,    -1,    -1,   177,    -1,    -1,
     180,    -1,    -1,   183,    -1,    -1,   186,    26,   188,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,   324,    -1,    -1,   257,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,   269,
      -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,    -1,    -1,
      -1,    -1,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,    -1,    -1,   316,    -1,   318,   319,
     390,    -1,    -1,    -1,    -1,    -1,   499,   166,    -1,    -1,
      -1,    -1,   332,    -1,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,   348,    -1,
      -1,    -1,   525,    -1,   527,    -1,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     573,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,   499,
      -1,    -1,   432,    -1,    -1,   435,    -1,    -1,    -1,   612,
      -1,    -1,   615,   443,    -1,   445,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   627,   525,    -1,   527,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,   468,    -1,
      -1,    -1,    -1,   473,    -1,   475,    -1,   477,   478,   479,
      -1,    -1,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   573,    -1,    -1,   679,   680,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,   706,    -1,    -1,   163,    -1,    -1,    -1,
     540,    -1,   612,    -1,    -1,   615,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   627,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,   587,    50,    -1,
      -1,    -1,    -1,    -1,   767,    -1,    -1,    -1,    -1,   599,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   679,
     680,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,   802,
      -1,    -1,    -1,    -1,   704,    -1,   706,    -1,    -1,    -1,
      -1,    -1,    -1,   816,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,   652,   826,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   736,    -1,    -1,   669,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   677,   678,    -1,
      -1,    -1,    -1,   683,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,   767,    -1,    -1,
      -1,   163,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,   721,    -1,    -1,    -1,    -1,    -1,   727,    -1,    -1,
      60,    61,   802,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   816,    12,    13,    -1,
      60,    61,    -1,    -1,    -1,    -1,   826,   160,   161,    -1,
      -1,    -1,    -1,    -1,    -1,   765,   766,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,   785,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,   804,    70,    71,    72,    73,    74,
      -1,   811,    -1,   813,   814,    80,    -1,    -1,    43,    44,
     820,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,    -1,    99,    -1,    -1,    62,    -1,   839,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,   114,
     160,   851,   117,   118,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,    -1,    -1,    -1,   114,
     890,    -1,    -1,    -1,   159,   160,    -1,    -1,    -1,   164,
     165,    -1,   167,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
     920,   921,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   934,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,   949,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   982,    -1,   984,   985,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    76,  1034,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,   105,   106,    -1,   108,  1066,    -1,    -1,   112,
     113,   114,  1072,   116,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,   151,    -1,
     153,    -1,    -1,    -1,   157,   158,   159,    -1,   161,   162,
      -1,   164,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,   151,    -1,   153,    -1,    -1,    -1,   157,   158,   159,
      27,   161,   162,    -1,   164,   165,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,
      87,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    13,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    27,   161,   162,    -1,   164,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    27,   161,   162,    -1,
     164,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    27,
     161,   162,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,    -1,   164,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    47,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,     3,     4,     5,     6,     7,    -1,    -1,    -1,
     159,    12,    13,    -1,    -1,   164,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,    -1,
      -1,    32,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,   128,    -1,    -1,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    99,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    26,    -1,
      28,    29,    80,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    99,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,    -1,    -1,   164,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    28,    29,    80,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    99,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,   161,    -1,    -1,   164,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    29,    80,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    99,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
      -1,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      99,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,   164,   165,    -1,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    99,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,    -1,     3,     4,     5,     6,
       7,    -1,    -1,   159,   160,    12,    13,    -1,   164,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    74,    -1,    -1,    32,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,   128,    -1,    -1,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    99,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   159,    12,    13,    -1,    -1,   164,   165,    -1,
     167,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    60,    61,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    91,    50,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,     3,     4,     5,     6,     7,    -1,    -1,    -1,
     159,    12,    13,    -1,    -1,   164,   165,    -1,   167,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    60,    61,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
       3,     4,     5,     6,     7,    -1,    -1,    -1,   159,    12,
      13,    -1,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   159,    12,    13,    -1,
      -1,   164,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,     3,     4,     5,     6,
       7,    -1,    -1,    -1,   159,    12,    13,    -1,    -1,   164,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    13,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,   164,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
     164,   165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   164,   165,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,   164,   165,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,
     165,    -1,   167,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
     163,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,   163,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,   163,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,   161,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   161,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,   161,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    91,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,   160,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   160,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
     160,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     154,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    26,   154,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   154,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
     126,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   154,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,   126,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   126,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    26,    27,    28,    29,    91,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    11,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   169,   170,     0,   171,     3,     4,     5,     6,     7,
      12,    13,    43,    44,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    70,    71,    72,    73,    74,    76,    80,    81,    82,
      83,    85,    87,    89,    92,    96,    97,    98,    99,   100,
     101,   102,   105,   106,   108,   112,   113,   114,   116,   117,
     118,   119,   120,   121,   122,   127,   128,   130,   131,   132,
     133,   134,   135,   142,   147,   148,   149,   150,   151,   153,
     157,   158,   159,   161,   162,   164,   165,   167,   172,   173,
     178,   182,   183,   222,   244,   245,   247,   249,   252,   254,
     323,   325,   339,   340,   341,   342,   345,   354,   365,   368,
     372,   373,   374,   376,   377,   387,   388,   389,   390,   392,
     393,   395,   396,   402,   413,   417,   419,    13,    72,   114,
     147,   342,   372,   372,   159,   372,   372,   372,   325,   372,
     377,   372,   372,   372,   372,   336,   372,   372,   372,   372,
     372,   372,   372,   114,   147,   150,   172,   354,   376,   377,
     389,   376,    32,   372,   406,   407,   372,   147,   150,   172,
     354,   356,   357,   389,   393,   395,   402,   159,   362,   373,
     159,   373,    27,    62,   313,   372,   190,   188,   159,   159,
     200,   373,   161,   372,   161,   372,    72,    72,   161,   325,
     372,   377,   201,   372,   150,   172,   176,   177,    74,   165,
     287,   288,   120,   120,    74,   289,   342,   159,   159,   159,
     159,   159,   159,    74,    79,   143,   144,   145,   162,   408,
     409,   411,   150,   162,   172,   172,    66,    72,    80,    85,
      87,   211,   325,   374,   179,    79,    80,   221,   408,   155,
     372,   323,   339,   372,   179,    79,   408,   162,    79,   363,
     408,   150,   346,     8,   161,    72,    72,   161,    62,    62,
      32,   246,   391,   146,     9,    10,    11,    26,    28,    29,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    50,   161,
      60,    61,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   353,   146,    62,   125,    62,   162,
     165,   395,   246,   372,   126,   372,   150,   172,   146,   146,
     375,   377,   126,   166,     8,   370,   150,   172,   146,   324,
     146,   125,   395,   160,    27,   184,   372,   397,     8,   161,
     182,   373,   314,   315,   372,   325,   377,   159,   195,   161,
     161,   161,    14,   161,   161,   162,   161,   172,    91,     8,
     161,   162,   374,   377,     8,   161,    14,     8,   161,   246,
     242,   243,   377,   325,   377,   414,   416,   325,   377,   160,
     326,   406,    62,   125,    79,   143,   409,   411,    73,   372,
     377,   165,   354,   388,   389,   395,   417,    79,   143,   409,
     411,   172,   175,   161,   162,   348,   372,    72,    79,    80,
     128,   142,   164,   216,   217,   218,   365,   394,   395,   402,
      30,    32,   159,   259,   377,   159,   372,    30,   154,   154,
     161,   161,   154,   180,   154,    14,   154,   160,   160,   160,
     163,   164,   372,   167,    72,   159,   285,    72,   123,   253,
     251,   397,   397,    72,   337,    62,    72,   120,   162,   387,
     395,   401,   402,   330,   372,   331,    27,   333,   328,   329,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   356,    32,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   285,    72,   387,   401,   397,   378,   397,   372,
     160,   325,   377,   172,    72,    32,   372,    32,   372,   172,
     387,   285,   364,   387,   358,   186,   182,   166,   372,    83,
     189,   161,     8,    91,    91,    72,   263,    27,   162,   264,
      43,    44,    62,    80,   128,   130,   147,   150,   172,   354,
     365,   366,   367,   418,   179,    91,    72,   177,   372,   288,
     366,    74,   338,     8,   160,     8,   160,   160,   160,   161,
     127,   377,   403,   404,   160,   410,    72,    62,   163,   163,
     146,   163,   146,   163,   347,   170,   174,   285,   154,   159,
      79,   408,    14,   154,   216,   217,   395,    72,   377,   259,
     314,   377,   126,   258,   372,    91,    72,   154,   119,   181,
     182,   222,   244,   245,   372,   332,   163,    32,   160,   286,
     325,   339,   377,    14,   147,   150,   172,   355,   250,   123,
     255,   166,   166,   248,   159,   397,   372,   350,   349,   395,
     372,   372,   335,   372,   372,   372,    64,   377,   352,   351,
     166,   387,   398,   400,   401,   166,   163,   375,   375,   126,
     398,   179,   185,   191,    27,   182,   269,   192,   316,   198,
     196,    14,     8,   160,   161,   265,   161,   265,   366,   366,
     366,   369,   371,   159,   150,   172,   146,   163,    72,   163,
      14,   159,   243,   161,   415,   159,     8,   160,    72,    74,
      75,   412,   372,    72,    72,   285,   163,   170,   228,   406,
     164,   219,    14,   212,   258,   161,   259,   156,    91,   259,
     213,   159,   154,   321,   322,   375,     8,   160,   160,   366,
     150,   172,   124,   256,   257,   355,   162,   159,   128,   129,
     282,   283,   284,   355,   166,   163,   285,   285,   372,    27,
     356,   285,   285,   399,   379,    62,   162,    32,   372,   359,
     187,   270,   373,   179,   314,   372,   259,   259,   366,    72,
      27,   182,   262,   265,    93,    94,    95,   265,   163,   126,
     166,     8,   370,   369,   172,    72,   120,   103,   203,   366,
     282,   416,   405,   404,    14,   166,   166,   163,   210,   160,
     372,   220,   214,   156,   230,   372,   223,   258,   214,   160,
      62,   125,   317,   318,   319,   381,    32,   325,   377,   172,
     257,   162,     8,   290,   282,   160,     8,    32,    74,   334,
     327,   383,   384,   385,   386,   397,   372,   375,   360,   275,
      67,    68,   277,   161,    84,   161,   258,   258,    14,   179,
      93,   161,   372,    27,   161,   268,   163,   366,   366,   160,
     159,   202,   160,   403,   372,   163,    76,   151,   222,   372,
      27,   372,   314,   154,   259,   154,   161,   397,   398,   381,
      62,   320,   375,   290,   355,   100,   106,   109,   110,   111,
     112,   113,   114,   115,   163,   291,   294,   307,   308,   309,
     310,   312,   160,   106,   343,   284,    74,    14,   372,   364,
      62,    62,   285,   380,   166,   163,   125,   361,    67,    68,
     280,   373,   182,   161,   193,   160,   160,   366,    90,   161,
     268,   267,   126,   204,   104,   208,   343,   160,   229,   215,
     160,   161,   235,   258,   226,   166,   382,   397,   317,   163,
      72,   295,   355,   292,   342,   310,     8,   161,   162,   159,
     162,    32,    74,    14,   366,   397,   397,   381,   398,   373,
      27,    69,   271,   314,   199,   197,   161,   266,   179,   366,
     355,   209,   162,   272,   372,   154,   231,   210,   160,   210,
     386,   166,    14,     8,   161,   162,   296,    74,   311,   246,
      72,   179,    32,    74,   344,   179,    74,    14,   366,   166,
     166,    27,   179,   161,   182,   160,    27,   182,   261,   261,
     179,   205,   162,   179,    67,    68,   278,   233,   314,   151,
     154,   151,   366,   355,    72,   297,   298,   299,   300,   302,
     303,   304,   355,    14,     8,   161,    72,    14,   163,    74,
       8,   160,   163,    14,   366,   276,   194,   179,    74,   179,
     163,   372,    66,   154,    47,   279,   210,   160,   236,   224,
     227,   163,   299,   161,    91,   107,   161,   146,   366,    74,
     293,   366,    32,    74,   366,   179,    27,   182,   260,    88,
     160,   163,   154,   372,   210,    66,   151,   154,    68,   281,
     210,   281,   305,   310,   301,   355,    72,    14,   159,    74,
     179,   161,   206,   273,   154,   151,   154,   234,   232,   154,
      47,   151,    47,    72,     8,   366,   282,    86,   162,   210,
     274,   281,   210,   210,    85,   225,    87,   355,   160,   161,
     179,   151,   210,    47,   151,   151,   154,   281,   154,   161,
     162,   306,   163,   151,    85,    47,    47,   179,   207,   154,
      85,    87,   163,   103,   237,   238,   239,   154,   154,   159,
     239,   355,   240,    74,   160,   241,   162,   179,   163
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
#line 228 "Zend55/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 232 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 232 "Zend55/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 237 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 238 "Zend55/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 242 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 243 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 244 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 245 "Zend55/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 246 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 247 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 248 "Zend55/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 249 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 250 "Zend55/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 251 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 252 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 253 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 262 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL TSRMLS_CC); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 263 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 264 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 265 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 269 "Zend55/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 270 "Zend55/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 274 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 274 "Zend55/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 284 "Zend55/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 289 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 290 "Zend55/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 295 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 295 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 295 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 296 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 296 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 296 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 297 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 297 "Zend55/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 297 "Zend55/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 298 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 298 "Zend55/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 298 "Zend55/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 302 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 304 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 306 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 307 "Zend55/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 308 "Zend55/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 308 "Zend55/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 309 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 310 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 311 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 312 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 313 "Zend55/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 314 "Zend55/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 315 "Zend55/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 316 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 320 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 321 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 324 "Zend55/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 325 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 326 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 328 "Zend55/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 329 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 330 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 331 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 331 "Zend55/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 333 "Zend55/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 334 "Zend55/zend_language_parser.y"
    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 335 "Zend55/zend_language_parser.y"
    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 336 "Zend55/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 337 "Zend55/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 341 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 342 "Zend55/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 343 "Zend55/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 344 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 345 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 346 "Zend55/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 349 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 350 "Zend55/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 350 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 356 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 361 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 362 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 363 "Zend55/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 364 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 365 "Zend55/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 366 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 371 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 372 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 372 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 376 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 377 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 381 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 383 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 384 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 385 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 389 "Zend55/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 389 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 390 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 390 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 391 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 392 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 396 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 397 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 398 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 405 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 407 "Zend55/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 414 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 419 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 420 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 421 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 423 "Zend55/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 427 "Zend55/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 429 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 430 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 431 "Zend55/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 432 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 434 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 435 "Zend55/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 436 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 438 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 441 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 443 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 446 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 447 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 448 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 450 "Zend55/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 453 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 454 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 455 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 457 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 458 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 459 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 463 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 464 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 468 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 469 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 473 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 473 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 473 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 482 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 486 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 490 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 494 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 495 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 500 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 502 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 507 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 511 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 513 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 517 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 522 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 523 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 524 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 525 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 529 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 530 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 534 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 548 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 549 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 553 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 554 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 558 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 559 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 583 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 584 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 589 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 590 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 591 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 592 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 597 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 598 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 598 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 599 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 599 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 618 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 618 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 623 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 623 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 624 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 624 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 629 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 629 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 664 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 665 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 666 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 667 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 668 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 669 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 670 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 671 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 676 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 677 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 678 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 679 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 684 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 685 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 686 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 691 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 692 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 693 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 694 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 695 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 696 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 700 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 701 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 706 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 707 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 708 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 713 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 714 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 715 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 716 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 728 "Zend55/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 731 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 733 "Zend55/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 741 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 742 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 766 "Zend55/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 770 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 771 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 775 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 776 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 780 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 784 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 785 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 789 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 790 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 794 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 795 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 799 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 800 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 804 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 805 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 809 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 810 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 814 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 815 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 816 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 817 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 818 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 819 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 823 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 824 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 825 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 826 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 830 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 831 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 835 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 836 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 841 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 842 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 846 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 846 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 847 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 851 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 852 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 856 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 857 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 861 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 861 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 862 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 863 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 867 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 868 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 869 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 873 "Zend55/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 873 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 877 "Zend55/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 877 "Zend55/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 878 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 879 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 880 "Zend55/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 880 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 881 "Zend55/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 882 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 883 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 884 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 885 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 886 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 887 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 888 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 889 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 890 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 891 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 892 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 893 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 894 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 895 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 896 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 897 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 897 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 898 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 898 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 899 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 899 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 900 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 900 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 901 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 904 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 905 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 906 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 907 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 908 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 909 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 910 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 911 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 912 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 913 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 914 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 915 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 916 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 917 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 918 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 919 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 920 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 921 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 922 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 923 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 924 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 925 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 926 "Zend55/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 927 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 928 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 929 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 929 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 930 "Zend55/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 931 "Zend55/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 932 "Zend55/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 933 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 934 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 935 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 936 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 937 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 938 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 939 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 940 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 941 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 942 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 943 "Zend55/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 944 "Zend55/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 944 "Zend55/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 945 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 946 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 947 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 948 "Zend55/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 949 "Zend55/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 950 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 951 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 953 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 954 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 956 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 960 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 961 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 962 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 963 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 967 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 968 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 969 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 972 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 973 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 976 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 985 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 986 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 987 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 988 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 992 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 993 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 994 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 995 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 996 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 997 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 998 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 999 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1000 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1001 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1002 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1003 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1004 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1005 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1006 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1007 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1011 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1012 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1013 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1014 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1018 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1019 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1020 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1026 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1027 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1032 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1033 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1034 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1035 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1046 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1050 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1051 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1052 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1056 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1057 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1058 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1063 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1064 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1069 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1070 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1071 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1072 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1073 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1074 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1075 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1076 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1077 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1078 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1079 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1080 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1085 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1086 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1087 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1088 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1089 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1090 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1091 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1092 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1093 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1094 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1095 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1099 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1103 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1104 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1105 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1106 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1107 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1108 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1109 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1110 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1111 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1112 "Zend55/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1117 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1118 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1127 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1128 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1129 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1130 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1134 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1135 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1139 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1140 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1145 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1150 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1155 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1160 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1161 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1162 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1163 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1167 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1168 "Zend55/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1173 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1173 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1177 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1178 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1182 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1183 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1187 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1188 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1189 "Zend55/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1193 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1194 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1198 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1199 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1204 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1208 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1209 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1210 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1214 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1215 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1216 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1221 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1222 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1223 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1227 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1228 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1232 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1233 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1234 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1239 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1240 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1244 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1245 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1250 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1251 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1251 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1255 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1256 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1257 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1261 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1262 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1266 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1267 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1277 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1278 "Zend55/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1278 "Zend55/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1279 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1284 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1285 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1289 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1290 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1291 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1292 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1293 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1294 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1295 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1296 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1300 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1301 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1302 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1303 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1304 "Zend55/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1305 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1306 "Zend55/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1307 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_string(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1313 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1314 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 1314 "Zend55/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 1315 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 1316 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 1317 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 1318 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 597:
/* Line 1787 of yacc.c  */
#line 1319 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 598:
/* Line 1787 of yacc.c  */
#line 1323 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 599:
/* Line 1787 of yacc.c  */
#line 1327 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 600:
/* Line 1787 of yacc.c  */
#line 1328 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 601:
/* Line 1787 of yacc.c  */
#line 1329 "Zend55/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 602:
/* Line 1787 of yacc.c  */
#line 1334 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 1335 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 1336 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 1337 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 1338 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 1339 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 608:
/* Line 1787 of yacc.c  */
#line 1340 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 609:
/* Line 1787 of yacc.c  */
#line 1341 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 610:
/* Line 1787 of yacc.c  */
#line 1345 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 611:
/* Line 1787 of yacc.c  */
#line 1346 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 612:
/* Line 1787 of yacc.c  */
#line 1346 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 613:
/* Line 1787 of yacc.c  */
#line 1350 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 614:
/* Line 1787 of yacc.c  */
#line 1351 "Zend55/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 615:
/* Line 1787 of yacc.c  */
#line 1355 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 616:
/* Line 1787 of yacc.c  */
#line 1356 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 617:
/* Line 1787 of yacc.c  */
#line 1360 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 618:
/* Line 1787 of yacc.c  */
#line 1364 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7320 "Zend55/zend_language_parser.c"
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
#line 1367 "Zend55/zend_language_parser.y"


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
