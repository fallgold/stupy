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
#line 127 "Zend55/zend_language_parser.c"

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
#line 56 "Zend55/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 167 "Zend55/zend_language_parser.c"

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
#line 484 "Zend55/zend_language_parser.c"

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
#define YYLAST   6626

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  251
/* YYNRULES -- Number of rules.  */
#define YYNRULES  610
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1168

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
       2,     2,     2,    49,   167,     2,   164,    48,    32,     2,
     159,   160,    46,    43,     8,    44,    45,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,   161,
      37,    14,    38,    26,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   165,    31,     2,   166,     2,     2,     2,
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
     265,   266,   267,   276,   280,   284,   287,   290,   291,   293,
     296,   297,   303,   304,   310,   311,   312,   317,   319,   321,
     323,   325,   330,   331,   336,   337,   343,   345,   348,   350,
     352,   354,   358,   362,   367,   371,   375,   381,   385,   390,
     391,   392,   393,   412,   413,   414,   430,   431,   432,   444,
     445,   446,   447,   466,   467,   468,   486,   487,   488,   504,
     505,   506,   507,   508,   509,   523,   524,   525,   531,   533,
     534,   536,   539,   540,   541,   552,   554,   558,   560,   562,
     564,   565,   567,   568,   579,   580,   589,   590,   598,   600,
     603,   605,   608,   609,   612,   614,   615,   618,   619,   622,
     624,   628,   629,   632,   634,   637,   639,   644,   646,   651,
     653,   658,   662,   668,   672,   677,   682,   688,   689,   690,
     697,   698,   704,   706,   708,   710,   715,   716,   717,   723,
     724,   725,   733,   734,   743,   744,   745,   752,   753,   756,
     757,   762,   766,   767,   771,   772,   777,   779,   780,   783,
     787,   793,   798,   803,   809,   817,   824,   825,   827,   829,
     831,   834,   838,   842,   844,   846,   849,   853,   857,   862,
     866,   868,   870,   873,   878,   882,   888,   890,   894,   897,
     898,   899,   904,   907,   909,   910,   920,   924,   926,   930,
     932,   936,   937,   939,   941,   944,   947,   950,   954,   956,
     960,   962,   964,   968,   973,   977,   978,   980,   982,   986,
     988,   990,   991,   993,   995,   998,  1000,  1002,  1004,  1006,
    1008,  1010,  1014,  1020,  1022,  1026,  1032,  1037,  1041,  1043,
    1044,  1046,  1047,  1052,  1054,  1057,  1059,  1064,  1068,  1069,
    1073,  1075,  1077,  1078,  1079,  1082,  1083,  1088,  1089,  1097,
    1101,  1106,  1107,  1115,  1118,  1122,  1126,  1130,  1134,  1138,
    1142,  1146,  1150,  1154,  1158,  1162,  1165,  1168,  1171,  1174,
    1175,  1180,  1181,  1186,  1187,  1192,  1193,  1198,  1202,  1206,
    1210,  1214,  1218,  1222,  1226,  1230,  1234,  1238,  1242,  1245,
    1248,  1251,  1254,  1258,  1262,  1266,  1270,  1274,  1278,  1282,
    1286,  1290,  1292,  1294,  1295,  1301,  1302,  1303,  1311,  1312,
    1318,  1320,  1323,  1326,  1329,  1332,  1335,  1338,  1341,  1344,
    1345,  1349,  1351,  1353,  1355,  1359,  1362,  1364,  1365,  1376,
    1377,  1389,  1392,  1395,  1400,  1405,  1410,  1415,  1420,  1425,
    1429,  1431,  1432,  1437,  1441,  1446,  1448,  1451,  1452,  1456,
    1457,  1463,  1464,  1469,  1470,  1476,  1477,  1483,  1484,  1490,
    1491,  1497,  1498,  1502,  1504,  1506,  1510,  1513,  1515,  1519,
    1522,  1524,  1526,  1527,  1528,  1535,  1537,  1540,  1541,  1544,
    1545,  1548,  1550,  1551,  1553,  1555,  1556,  1558,  1560,  1562,
    1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,  1582,  1585,
    1587,  1589,  1591,  1595,  1598,  1601,  1604,  1609,  1613,  1615,
    1617,  1621,  1623,  1625,  1627,  1629,  1633,  1636,  1638,  1642,
    1646,  1648,  1649,  1652,  1653,  1655,  1661,  1665,  1669,  1671,
    1673,  1675,  1679,  1683,  1685,  1687,  1689,  1690,  1691,  1699,
    1701,  1704,  1705,  1706,  1711,  1716,  1721,  1722,  1725,  1727,
    1729,  1730,  1732,  1735,  1739,  1743,  1745,  1750,  1751,  1757,
    1759,  1761,  1763,  1765,  1768,  1770,  1772,  1775,  1780,  1785,
    1787,  1789,  1794,  1795,  1797,  1799,  1800,  1803,  1808,  1813,
    1815,  1817,  1821,  1823,  1826,  1830,  1832,  1834,  1835,  1841,
    1842,  1843,  1846,  1852,  1856,  1860,  1862,  1869,  1874,  1879,
    1882,  1885,  1888,  1890,  1893,  1895,  1896,  1902,  1906,  1910,
    1917,  1921,  1923,  1925,  1927,  1932,  1937,  1942,  1945,  1948,
    1953,  1956,  1959,  1961,  1962,  1967,  1969,  1971,  1975,  1979,
    1983
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     169,     0,    -1,   170,    -1,    -1,   170,   171,   173,    -1,
      -1,    72,    -1,   172,   150,    72,    -1,   182,    -1,   244,
      -1,   245,    -1,   119,   159,   160,   161,    -1,   147,   172,
     161,    -1,    -1,   147,   172,   162,   174,   170,   163,    -1,
      -1,   147,   162,   175,   170,   163,    -1,   106,   176,   161,
      -1,   178,   161,    -1,   215,    -1,   176,     8,   177,    -1,
     177,    -1,   172,    -1,   172,    91,    72,    -1,   150,   172,
      -1,   150,   172,    91,    72,    -1,   178,     8,    72,    14,
     366,    -1,   100,    72,    14,   366,    -1,    -1,   179,   180,
     181,    -1,    -1,   182,    -1,   215,    -1,   244,    -1,   245,
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
     179,   163,   230,   202,   235,    -1,   105,   372,   161,    -1,
      98,    72,   161,    -1,   203,   215,    -1,   203,    76,    -1,
      -1,   374,    -1,   374,   161,    -1,    -1,    80,    30,    72,
     205,   207,    -1,    -1,   204,    30,    72,   206,   207,    -1,
      -1,    -1,   207,    27,   208,   372,    -1,    72,    -1,    80,
      -1,   394,    -1,   365,    -1,   128,   159,   406,   160,    -1,
      -1,   209,    14,   212,   372,    -1,    -1,   211,   209,    14,
     213,   372,    -1,   210,    -1,   211,   210,    -1,    80,    -1,
      79,    -1,   408,    -1,   151,   204,   154,    -1,   151,   325,
     154,    -1,   151,   325,   161,   154,    -1,   153,   179,   154,
      -1,   158,   372,   154,    -1,   158,   155,    14,   372,   154,
      -1,   157,   214,   154,    -1,   151,    72,   211,   154,    -1,
      -1,    -1,    -1,   151,    87,   159,   372,    91,   216,   259,
     258,   160,   154,   217,   203,   151,   218,   281,    47,    87,
     154,    -1,    -1,    -1,   151,    87,   372,    91,   259,   258,
     154,   219,   203,   151,   220,   281,    47,    87,   154,    -1,
      -1,    -1,   151,    66,   372,   154,   221,   203,   151,   222,
     272,   278,   279,    -1,    -1,    -1,    -1,   151,    85,   159,
     314,   161,   223,   314,   161,   224,   314,   160,   154,   225,
     203,   151,    47,    85,   154,    -1,    -1,    -1,   151,    85,
     159,   259,   258,   156,   372,   160,   154,   226,   203,   151,
     227,   281,    47,    85,   154,    -1,    -1,    -1,   151,    85,
     259,   258,   156,   372,   154,   228,   203,   151,   229,   281,
      47,    85,   154,    -1,    -1,    -1,    -1,    -1,    -1,   103,
     159,   231,   355,   232,    74,   160,   233,   162,   179,   163,
     234,   237,    -1,    -1,    -1,   104,   236,   162,   179,   163,
      -1,   238,    -1,    -1,   239,    -1,   238,   239,    -1,    -1,
      -1,   103,   159,   355,   240,    74,   160,   241,   162,   179,
     163,    -1,   243,    -1,   242,     8,   243,    -1,   377,    -1,
     247,    -1,   249,    -1,    -1,    32,    -1,    -1,   342,   246,
      72,   248,   159,   282,   160,   162,   179,   163,    -1,    -1,
     252,    72,   253,   250,   256,   162,   290,   163,    -1,    -1,
     254,    72,   251,   255,   162,   290,   163,    -1,   120,    -1,
     113,   120,    -1,   121,    -1,   112,   120,    -1,    -1,   123,
     355,    -1,   122,    -1,    -1,   123,   257,    -1,    -1,   124,
     257,    -1,   355,    -1,   257,     8,   355,    -1,    -1,   126,
     259,    -1,   377,    -1,    32,   377,    -1,   182,    -1,    27,
     179,    86,   161,    -1,   182,    -1,    27,   179,    88,   161,
      -1,   182,    -1,    27,   179,    90,   161,    -1,    72,    14,
     366,    -1,   263,     8,    72,    14,   366,    -1,   162,   265,
     163,    -1,   162,   161,   265,   163,    -1,    27,   265,    93,
     161,    -1,    27,   161,   265,    93,   161,    -1,    -1,    -1,
     265,    94,   372,   268,   266,   179,    -1,    -1,   265,    95,
     268,   267,   179,    -1,    27,    -1,   161,    -1,   182,    -1,
      27,   179,    84,   161,    -1,    -1,    -1,   270,    67,   373,
     271,   182,    -1,    -1,    -1,   272,    67,   372,   154,   273,
     203,   151,    -1,    -1,   272,    68,    66,   372,   154,   274,
     203,   151,    -1,    -1,    -1,   275,    67,   373,    27,   276,
     179,    -1,    -1,    68,   182,    -1,    -1,    68,   154,   203,
     151,    -1,    47,    66,   154,    -1,    -1,    68,    27,   179,
      -1,    -1,    68,   154,   203,   151,    -1,   283,    -1,    -1,
     284,    74,    -1,   284,    32,    74,    -1,   284,    32,    74,
      14,   366,    -1,   284,    74,    14,   366,    -1,   283,     8,
     284,    74,    -1,   283,     8,   284,    32,    74,    -1,   283,
       8,   284,    32,    74,    14,   366,    -1,   283,     8,   284,
      74,    14,   366,    -1,    -1,   128,    -1,   129,    -1,   355,
      -1,   159,   160,    -1,   159,   286,   160,    -1,   159,   339,
     160,    -1,   325,    -1,   377,    -1,    32,   375,    -1,   286,
       8,   325,    -1,   286,     8,   377,    -1,   286,     8,    32,
     375,    -1,   287,     8,   288,    -1,   288,    -1,    74,    -1,
     164,   374,    -1,   164,   162,   372,   163,    -1,   289,     8,
      74,    -1,   289,     8,    74,    14,   366,    -1,    74,    -1,
      74,    14,   366,    -1,   290,   291,    -1,    -1,    -1,   307,
     292,   311,   161,    -1,   312,   161,    -1,   294,    -1,    -1,
     308,   342,   246,    72,   293,   159,   282,   160,   306,    -1,
     106,   295,   296,    -1,   355,    -1,   295,     8,   355,    -1,
     161,    -1,   162,   297,   163,    -1,    -1,   298,    -1,   299,
      -1,   298,   299,    -1,   300,   161,    -1,   304,   161,    -1,
     303,   107,   301,    -1,   355,    -1,   301,     8,   355,    -1,
      72,    -1,   303,    -1,   355,   146,    72,    -1,   302,    91,
     305,    72,    -1,   302,    91,   310,    -1,    -1,   310,    -1,
     161,    -1,   162,   179,   163,    -1,   309,    -1,   115,    -1,
      -1,   309,    -1,   310,    -1,   309,   310,    -1,   109,    -1,
     110,    -1,   111,    -1,   114,    -1,   113,    -1,   112,    -1,
     311,     8,    74,    -1,   311,     8,    74,    14,   366,    -1,
      74,    -1,    74,    14,   366,    -1,   312,     8,    72,    14,
     366,    -1,   100,    72,    14,   366,    -1,   313,     8,   372,
      -1,   372,    -1,    -1,   315,    -1,    -1,   315,     8,   316,
     372,    -1,   372,    -1,   317,   381,    -1,   381,    -1,   318,
      62,   397,   165,    -1,    62,   397,   165,    -1,    -1,   318,
     320,   317,    -1,   318,    -1,   317,    -1,    -1,    -1,   322,
     319,    -1,    -1,    64,   356,   324,   364,    -1,    -1,   127,
     159,   326,   403,   160,    14,   372,    -1,   377,    14,   372,
      -1,   377,    14,    32,   377,    -1,    -1,   377,    14,    32,
      64,   356,   327,   364,    -1,    63,   372,    -1,   377,    25,
     372,    -1,   377,    24,   372,    -1,   377,    23,   372,    -1,
     377,    22,   372,    -1,   377,    21,   372,    -1,   377,    20,
     372,    -1,   377,    19,   372,    -1,   377,    18,   372,    -1,
     377,    17,   372,    -1,   377,    16,   372,    -1,   377,    15,
     372,    -1,   376,    61,    -1,    61,   376,    -1,   376,    60,
      -1,    60,   376,    -1,    -1,   372,    28,   328,   372,    -1,
      -1,   372,    29,   329,   372,    -1,    -1,   372,     9,   330,
     372,    -1,    -1,   372,    11,   331,   372,    -1,   372,    10,
     372,    -1,   372,    32,   372,    -1,   372,    31,   372,    -1,
     372,    45,   372,    -1,   372,    43,   372,    -1,   372,    44,
     372,    -1,   372,    46,   372,    -1,   372,    47,   372,    -1,
     372,    48,   372,    -1,   372,    42,   372,    -1,   372,    41,
     372,    -1,    43,   372,    -1,    44,   372,    -1,    49,   372,
      -1,    51,   372,    -1,   372,    34,   372,    -1,   372,    33,
     372,    -1,   372,    36,   372,    -1,   372,    35,   372,    -1,
     372,    37,   372,    -1,   372,    40,   372,    -1,   372,    38,
     372,    -1,   372,    39,   372,    -1,   372,    50,   356,    -1,
     373,    -1,   323,    -1,    -1,   159,   323,   160,   332,   321,
      -1,    -1,    -1,   372,    26,   333,   372,    27,   334,   372,
      -1,    -1,   372,    26,    27,   335,   372,    -1,   412,    -1,
      59,   372,    -1,    58,   372,    -1,    57,   372,    -1,    56,
     372,    -1,    55,   372,    -1,    54,   372,    -1,    53,   372,
      -1,    65,   362,    -1,    -1,    52,   336,   372,    -1,   368,
      -1,   340,    -1,   341,    -1,   166,   363,   166,    -1,    12,
     372,    -1,    13,    -1,    -1,   342,   246,   337,   159,   282,
     160,   343,   162,   179,   163,    -1,    -1,   114,   342,   246,
     338,   159,   282,   160,   343,   162,   179,   163,    -1,    13,
     325,    -1,    13,   377,    -1,    13,   372,   126,   325,    -1,
      13,   372,   126,   377,    -1,   341,    62,   397,   165,    -1,
     340,    62,   397,   165,    -1,    80,    62,   397,   165,    -1,
     128,   159,   406,   160,    -1,    62,   406,   165,    -1,    99,
      -1,    -1,   106,   159,   344,   160,    -1,   344,     8,    74,
      -1,   344,     8,    32,    74,    -1,    74,    -1,    32,    74,
      -1,    -1,   172,   346,   285,    -1,    -1,   147,   150,   172,
     347,   285,    -1,    -1,   150,   172,   348,   285,    -1,    -1,
     354,   146,   401,   349,   285,    -1,    -1,   354,   146,   387,
     350,   285,    -1,    -1,   389,   146,   401,   351,   285,    -1,
      -1,   389,   146,   387,   352,   285,    -1,    -1,   387,   353,
     285,    -1,   114,    -1,   172,    -1,   147,   150,   172,    -1,
     150,   172,    -1,   172,    -1,   147,   150,   172,    -1,   150,
     172,    -1,   354,    -1,   357,    -1,    -1,    -1,   393,   125,
     358,   398,   359,   360,    -1,   393,    -1,   360,   361,    -1,
      -1,   125,   398,    -1,    -1,   159,   160,    -1,   373,    -1,
      -1,    79,    -1,   408,    -1,    -1,   285,    -1,    70,    -1,
      71,    -1,    80,    -1,   134,    -1,   135,    -1,   149,    -1,
     131,    -1,   132,    -1,   133,    -1,   148,    -1,   142,    79,
     143,    -1,   142,   143,    -1,   365,    -1,   417,    -1,   172,
      -1,   147,   150,   172,    -1,   150,   172,    -1,    43,   366,
      -1,    44,   366,    -1,   128,   159,   369,   160,    -1,    62,
     369,   165,    -1,   367,    -1,   130,    -1,   354,   146,    72,
      -1,    73,    -1,   418,    -1,   416,    -1,   172,    -1,   147,
     150,   172,    -1,   150,   172,    -1,   365,    -1,   167,   408,
     167,    -1,   142,   408,   143,    -1,   130,    -1,    -1,   371,
     370,    -1,    -1,     8,    -1,   371,     8,   366,   126,   366,
      -1,   371,     8,   366,    -1,   366,   126,   366,    -1,   366,
      -1,   374,    -1,   325,    -1,   159,   372,   160,    -1,   159,
     339,   160,    -1,   377,    -1,   377,    -1,   377,    -1,    -1,
      -1,   392,   125,   378,   398,   379,   386,   380,    -1,   392,
      -1,   380,   381,    -1,    -1,    -1,   125,   398,   382,   386,
      -1,   383,    62,   397,   165,    -1,   384,    62,   397,   165,
      -1,    -1,   385,   285,    -1,   384,    -1,   383,    -1,    -1,
     395,    -1,   402,   395,    -1,   354,   146,   387,    -1,   389,
     146,   387,    -1,   395,    -1,   390,    62,   397,   165,    -1,
      -1,   345,   391,    62,   397,   165,    -1,   393,    -1,   390,
      -1,   345,    -1,   395,    -1,   402,   395,    -1,   388,    -1,
     395,    -1,   402,   395,    -1,   395,    62,   397,   165,    -1,
     395,   162,   372,   163,    -1,   396,    -1,    74,    -1,   164,
     162,   372,   163,    -1,    -1,   372,    -1,   400,    -1,    -1,
     387,   399,    -1,   400,    62,   397,   165,    -1,   400,   162,
     372,   163,    -1,   401,    -1,    72,    -1,   162,   372,   163,
      -1,   164,    -1,   402,   164,    -1,   403,     8,   404,    -1,
     404,    -1,   377,    -1,    -1,   127,   159,   405,   403,   160,
      -1,    -1,    -1,   407,   370,    -1,   407,     8,   372,   126,
     372,    -1,   407,     8,   372,    -1,   372,   126,   372,    -1,
     372,    -1,   407,     8,   372,   126,    32,   375,    -1,   407,
       8,    32,   375,    -1,   372,   126,    32,   375,    -1,    32,
     375,    -1,   408,   409,    -1,   408,    79,    -1,   409,    -1,
      79,   409,    -1,    74,    -1,    -1,    74,    62,   410,   411,
     165,    -1,    74,   125,    72,    -1,   144,   372,   163,    -1,
     144,    73,    62,   372,   165,   163,    -1,   145,   377,   163,
      -1,    72,    -1,    75,    -1,    74,    -1,   117,   159,   413,
     160,    -1,   118,   159,   377,   160,    -1,   118,   159,   325,
     160,    -1,     7,   372,    -1,     6,   372,    -1,     5,   159,
     372,   160,    -1,     4,   372,    -1,     3,   372,    -1,   415,
      -1,    -1,   413,     8,   414,   415,    -1,   377,    -1,   325,
      -1,   354,   146,    72,    -1,   389,   146,    72,    -1,   354,
     146,   120,    -1,   354,   146,   120,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   233,   233,   237,   237,   238,   242,   243,   247,   248,
     249,   250,   251,   252,   252,   254,   254,   256,   257,   258,
     262,   263,   267,   268,   269,   270,   274,   275,   279,   279,
     280,   285,   286,   287,   288,   289,   294,   295,   299,   300,
     300,   300,   301,   301,   301,   302,   302,   302,   303,   303,
     303,   307,   309,   311,   304,   313,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   329,   330,   328,   333,   334,   332,   336,   336,   337,
     338,   339,   338,   341,   342,   346,   347,   348,   352,   353,
     354,   354,   356,   356,   362,   363,   363,   367,   368,   372,
     373,   374,   378,   378,   379,   379,   380,   381,   385,   386,
     387,   394,   396,   403,   408,   409,   410,   412,   416,   418,
     419,   420,   418,   423,   424,   422,   427,   430,   427,   435,
     436,   437,   434,   442,   443,   441,   446,   447,   445,   452,
     453,   454,   455,   456,   453,   460,   461,   461,   465,   466,
     470,   471,   475,   475,   475,   479,   480,   484,   488,   492,
     496,   497,   502,   502,   509,   508,   515,   514,   524,   525,
     526,   527,   531,   532,   536,   539,   541,   544,   546,   550,
     551,   555,   556,   560,   561,   567,   568,   573,   574,   579,
     580,   585,   586,   591,   592,   593,   594,   599,   600,   600,
     601,   601,   606,   607,   612,   613,   618,   620,   620,   623,
     625,   625,   626,   626,   629,   631,   631,   635,   637,   640,
     642,   646,   649,   651,   654,   656,   660,   661,   666,   667,
     668,   669,   670,   671,   672,   673,   678,   679,   680,   681,
     686,   687,   688,   693,   694,   695,   696,   697,   698,   702,
     703,   708,   709,   710,   715,   716,   717,   718,   724,   725,
     730,   730,   731,   732,   733,   733,   739,   743,   744,   748,
     749,   752,   754,   758,   759,   763,   764,   768,   772,   773,
     777,   778,   782,   786,   787,   791,   792,   796,   797,   801,
     802,   806,   807,   811,   812,   816,   817,   818,   819,   820,
     821,   825,   826,   827,   828,   832,   833,   837,   838,   843,
     844,   848,   848,   849,   853,   854,   858,   859,   863,   863,
     864,   865,   869,   870,   870,   875,   875,   879,   879,   880,
     881,   882,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     899,   900,   900,   901,   901,   902,   902,   903,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,   922,   923,   924,   925,   926,   927,
     928,   929,   930,   931,   931,   932,   933,   932,   935,   935,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     946,   947,   948,   949,   950,   951,   952,   953,   953,   956,
     956,   962,   963,   964,   965,   969,   970,   971,   974,   975,
     978,   981,   983,   987,   988,   989,   990,   994,   994,   996,
     996,   998,   998,  1000,  1000,  1002,  1002,  1004,  1004,  1006,
    1006,  1008,  1008,  1013,  1014,  1015,  1016,  1020,  1021,  1022,
    1028,  1029,  1034,  1035,  1034,  1037,  1042,  1043,  1048,  1052,
    1053,  1054,  1058,  1059,  1060,  1065,  1066,  1071,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1101,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,  1119,  1120,  1123,  1125,  1129,  1130,  1131,  1132,  1136,
    1137,  1141,  1142,  1147,  1152,  1157,  1162,  1163,  1162,  1165,
    1169,  1170,  1175,  1175,  1179,  1180,  1184,  1184,  1189,  1190,
    1191,  1195,  1196,  1200,  1201,  1206,  1210,  1211,  1211,  1216,
    1217,  1218,  1223,  1224,  1225,  1229,  1230,  1234,  1235,  1236,
    1241,  1242,  1246,  1247,  1252,  1253,  1253,  1257,  1258,  1259,
    1263,  1264,  1268,  1269,  1273,  1274,  1279,  1280,  1280,  1281,
    1286,  1287,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,
    1302,  1303,  1304,  1305,  1311,  1312,  1312,  1313,  1314,  1315,
    1316,  1321,  1322,  1323,  1328,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,  1339,  1340,  1340,  1344,  1345,  1349,  1350,  1354,
    1358
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
  "\"{include (T_TPL_INCLUDE)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "tpl_block", "tpl_modifier_list", "$@24", "$@25",
  "tpl_modifier_param_list", "$@26", "tpl_inner_tpl_attr_name",
  "tpl_inner_tpl_attr_anony", "tpl_inner_tpl_attr_list", "$@27", "$@28",
  "tpl_encaps_list", "tpl_statement", "@29", "$@30", "$@31", "@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "catch_statement", "$@43", "$@44", "$@45", "$@46", "finally_statement",
  "$@47", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@48", "$@49", "unset_variables", "unset_variable",
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
      41,    59,   123,   125,    36,    93,    96,    34
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
     201,   202,   183,   183,   183,   203,   203,   203,   204,   204,
     205,   204,   206,   204,   207,   208,   207,   209,   209,   210,
     210,   210,   212,   211,   213,   211,   211,   211,   214,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     217,   218,   215,   219,   220,   215,   221,   222,   215,   223,
     224,   225,   215,   226,   227,   215,   228,   229,   215,   230,
     231,   232,   233,   234,   230,   235,   236,   235,   237,   237,
     238,   238,   240,   241,   239,   242,   242,   243,   244,   245,
     246,   246,   248,   247,   250,   249,   251,   249,   252,   252,
     252,   252,   253,   253,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   264,   264,   264,   265,   266,   265,
     267,   265,   268,   268,   269,   269,   270,   271,   270,   272,
     273,   272,   274,   272,   275,   276,   275,   277,   277,   278,
     278,   279,   280,   280,   281,   281,   282,   282,   283,   283,
     283,   283,   283,   283,   283,   283,   284,   284,   284,   284,
     285,   285,   285,   286,   286,   286,   286,   286,   286,   287,
     287,   288,   288,   288,   289,   289,   289,   289,   290,   290,
     292,   291,   291,   291,   293,   291,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   301,   301,
     302,   302,   303,   304,   304,   305,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   310,   310,   310,
     310,   311,   311,   311,   311,   312,   312,   313,   313,   314,
     314,   316,   315,   315,   317,   317,   318,   318,   320,   319,
     319,   319,   321,   322,   321,   324,   323,   326,   325,   325,
     325,   327,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   328,
     325,   329,   325,   330,   325,   331,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   332,   325,   333,   334,   325,   335,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   336,
     325,   325,   325,   325,   325,   325,   325,   337,   325,   338,
     325,   339,   339,   339,   339,   340,   340,   340,   341,   341,
     342,   343,   343,   344,   344,   344,   344,   346,   345,   347,
     345,   348,   345,   349,   345,   350,   345,   351,   345,   352,
     345,   353,   345,   354,   354,   354,   354,   355,   355,   355,
     356,   356,   358,   359,   357,   357,   360,   360,   361,   362,
     362,   362,   363,   363,   363,   364,   364,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     367,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   369,   369,   370,   370,   371,   371,   371,   371,   372,
     372,   373,   373,   374,   375,   376,   378,   379,   377,   377,
     380,   380,   382,   381,   383,   383,   385,   384,   386,   386,
     386,   387,   387,   388,   388,   389,   390,   391,   390,   392,
     392,   392,   393,   393,   393,   394,   394,   395,   395,   395,
     396,   396,   397,   397,   398,   399,   398,   400,   400,   400,
     401,   401,   402,   402,   403,   403,   404,   405,   404,   404,
     406,   406,   407,   407,   407,   407,   407,   407,   407,   407,
     408,   408,   408,   408,   409,   410,   409,   409,   409,   409,
     409,   411,   411,   411,   412,   412,   412,   412,   412,   412,
     412,   412,   413,   414,   413,   415,   415,   416,   416,   417,
     418
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
       0,     0,     8,     3,     3,     2,     2,     0,     1,     2,
       0,     5,     0,     5,     0,     0,     4,     1,     1,     1,
       1,     4,     0,     4,     0,     5,     1,     2,     1,     1,
       1,     3,     3,     4,     3,     3,     5,     3,     4,     0,
       0,     0,    18,     0,     0,    15,     0,     0,    11,     0,
       0,     0,    18,     0,     0,    17,     0,     0,    15,     0,
       0,     0,     0,     0,    13,     0,     0,     5,     1,     0,
       1,     2,     0,     0,    10,     1,     3,     1,     1,     1,
       0,     1,     0,    10,     0,     8,     0,     7,     1,     2,
       1,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     1,     4,     1,     4,     1,
       4,     3,     5,     3,     4,     4,     5,     0,     0,     6,
       0,     5,     1,     1,     1,     4,     0,     0,     5,     0,
       0,     7,     0,     8,     0,     0,     6,     0,     2,     0,
       4,     3,     0,     3,     0,     4,     1,     0,     2,     3,
       5,     4,     4,     5,     7,     6,     0,     1,     1,     1,
       2,     3,     3,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       0,     4,     2,     1,     0,     9,     3,     1,     3,     1,
       3,     0,     1,     1,     2,     2,     2,     3,     1,     3,
       1,     1,     3,     4,     3,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     2,     1,     4,     3,     0,     3,
       1,     1,     0,     0,     2,     0,     4,     0,     7,     3,
       4,     0,     7,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     0,
       4,     0,     4,     0,     4,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     0,     5,     0,     0,     7,     0,     5,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       3,     1,     1,     1,     3,     2,     1,     0,    10,     0,
      11,     2,     2,     4,     4,     4,     4,     4,     4,     3,
       1,     0,     4,     3,     4,     1,     2,     0,     3,     0,
       5,     0,     4,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     3,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     0,     0,     6,     1,     2,     0,     2,     0,
       2,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     1,     3,     2,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     1,     3,     2,     1,     3,     3,
       1,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     3,     3,     1,     1,     1,     0,     0,     7,     1,
       2,     0,     0,     4,     4,     4,     0,     2,     1,     1,
       0,     1,     2,     3,     3,     1,     4,     0,     5,     1,
       1,     1,     1,     2,     1,     1,     2,     4,     4,     1,
       1,     4,     0,     1,     1,     0,     2,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     0,     5,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     0,     5,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     4,     2,     2,     4,
       2,     2,     1,     0,     4,     1,     1,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   406,     0,     0,     0,     0,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   570,     0,     0,   459,
       0,   467,   468,     6,   491,   550,    68,   469,     0,    48,
      45,     0,     0,    77,     0,     0,     0,     0,   420,     0,
       0,    80,     0,     0,     0,     0,     0,   443,     0,     0,
       0,     0,   168,   170,   174,     0,     0,   500,   473,   474,
     475,   470,   471,     0,     0,   476,   472,     0,     0,    30,
       0,     0,     0,    79,    30,   562,   462,     0,   494,     4,
       0,     8,    36,    19,     9,    10,   158,   159,     0,     0,
     382,   510,     0,   402,   403,   160,   541,     0,   497,   401,
       0,   381,   509,     0,   513,   441,   544,     0,   540,   519,
     539,   542,   549,     0,   390,   493,   492,   406,     6,   443,
       0,   160,   601,   600,     0,   598,   597,   405,   510,     0,
     513,   368,   369,   370,   371,     0,   397,   396,   395,   394,
     393,   392,   391,   443,     0,     0,   427,     0,   348,   515,
       0,   346,     0,   575,     0,   503,   333,     0,     0,   444,
     450,   325,   451,     0,   455,   542,     0,     0,   398,   461,
       0,    39,    37,   552,     0,   308,     0,     0,   309,     0,
       0,    55,    57,     0,    59,     0,     0,     0,    61,   510,
       0,   513,     0,     0,     0,    22,     0,    21,   251,     0,
       0,   250,   171,   169,   256,     0,   160,     0,     0,     0,
       0,   327,   570,   584,     0,   478,     0,     0,     0,   582,
       0,    15,     0,   496,     0,     6,   469,     0,     0,     0,
     510,   509,    28,   109,   108,     0,   110,     0,     0,   382,
       0,     0,    28,     0,   463,     0,   464,     0,     0,     0,
       0,     0,    18,   172,   166,    64,   552,   552,   161,   407,
       0,     0,   353,     0,   355,   385,   349,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,   347,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   552,   516,   552,     0,   563,   543,
     407,     0,     0,   400,     0,   431,     0,     0,   579,   514,
       0,   419,   504,   571,     0,   446,     0,   465,     0,   452,
     543,   460,    42,     0,   553,     0,     0,    67,     0,    46,
       0,   310,   313,   510,   513,     0,     0,    58,    60,    84,
       0,    62,    63,    30,    83,    24,     0,     0,    17,     0,
     252,   513,     0,    65,     0,     0,    66,   409,     0,   155,
     157,   510,   513,     0,   602,   510,   513,     0,   569,     0,
     585,     0,   477,   583,   491,     0,     0,   581,   499,   580,
     495,     5,    12,    13,     0,     0,    97,   469,     0,     0,
       0,   106,     0,   100,    99,   545,     0,     0,     0,   309,
     181,   183,     0,     0,     0,   111,   112,     0,    89,   114,
       0,   117,     0,   115,   383,   512,   511,    38,     0,   404,
     498,     7,     0,   428,     0,     0,   164,   175,     0,     0,
     162,     0,   552,   607,   610,     0,   533,   531,   433,     0,
       0,   357,     0,   388,     0,     0,     0,   359,   358,   373,
     372,   375,   374,   376,   378,   379,   377,   367,   366,   361,
     362,   360,   363,   364,   365,   380,     0,   329,   344,   343,
     342,   341,   340,   339,   338,   337,   336,   335,   334,   442,
     608,   534,   437,     0,     0,     0,     0,   599,   510,   513,
     429,   560,     0,   574,     0,   573,   445,   533,   466,   326,
     534,     0,    30,    40,   417,   307,    49,     0,    51,   311,
      74,    71,     0,     0,   197,   197,    56,     0,     0,   501,
     469,     0,   489,     0,     0,   481,     0,   479,    27,   488,
     480,    28,     0,    23,    20,     0,   249,   257,   254,     0,
       0,     0,   603,   594,   596,   595,    11,     0,   566,     0,
     565,   418,     0,   587,     0,   588,   590,     0,     3,     5,
     432,   126,   570,     0,   102,   118,     0,   107,   546,    90,
     184,   181,     0,   513,     0,     0,     0,     0,    92,   113,
       0,    29,    31,    32,    33,    34,     0,   322,   551,     0,
     240,     0,   510,     0,   513,     0,     0,     0,   447,   173,
     177,     0,     0,   416,   415,     0,   236,     0,     0,     0,
       0,   532,   354,   356,     0,     0,   350,   352,     0,   330,
       0,     0,   536,   555,   517,   554,   559,   547,   548,   578,
     577,     0,   453,    28,   206,     0,    30,   204,    47,   309,
       0,     0,     0,     0,     0,     0,   197,     0,   197,     0,
     484,   485,   508,     0,   503,   501,     0,   483,     0,   139,
      25,   253,     0,   236,   156,    70,     0,   567,   569,     0,
     591,   593,   592,     0,     0,   430,    16,     3,    87,     0,
       0,   104,    94,     0,   129,   182,     0,   119,   181,    94,
       0,   116,   384,     0,   245,     0,   241,   242,    26,     0,
     449,     0,     0,   176,   179,   259,   236,   237,   238,     0,
     226,     0,   239,   538,   561,   436,   434,   389,   386,   331,
     440,   438,   556,   530,   552,     0,     0,   572,   457,   214,
     217,     0,    28,     0,   312,   181,   181,   191,     0,    30,
     189,    78,     0,     0,     0,     0,     0,   193,     0,   487,
     504,   502,     0,   482,   490,   609,     0,    81,   255,     0,
     604,   569,   564,     0,   586,     0,    14,     0,   101,   103,
       0,    91,     0,   309,     0,     0,     0,    93,     0,   552,
       0,   321,   320,   324,   315,     0,   510,   513,   448,   178,
     259,     0,   291,     0,   421,   236,     0,   228,     0,   465,
     529,   528,     0,   521,     0,     0,   576,   454,   222,     0,
       0,    41,    50,     0,    52,     0,     0,     0,    28,     0,
     195,     0,   202,   203,   200,   194,   507,   506,   486,   140,
     145,   421,     0,   328,   589,    86,   127,    85,   105,    95,
       0,     0,   136,   181,   123,    35,     0,   522,   314,   552,
       0,   248,   291,   180,     0,     0,   295,   296,   297,   300,
     299,   298,   290,   167,   258,   263,   260,     0,   289,   293,
       0,     0,     0,     0,     0,   229,     0,   387,   332,   552,
     552,   527,   518,   557,   558,     0,   456,     0,     0,     0,
     207,   218,   205,   309,    75,    72,   192,     0,   196,   198,
      30,     0,     0,   146,    82,     0,   568,   209,     0,     0,
     130,    87,     0,    87,   317,   530,     0,   319,   165,     0,
       0,   267,     0,   160,   294,     0,   262,    30,     0,    30,
       0,   232,     0,   231,     0,     0,   520,   458,     0,    30,
       0,     0,     0,     0,     0,   190,    30,    28,   505,   141,
       0,    30,   219,    96,   133,   309,     0,     0,     0,   523,
     316,     0,     0,   269,   271,   266,   303,     0,     0,     0,
      28,     0,   425,     0,    28,   233,     0,   230,   524,   525,
     215,    28,    44,   208,    53,    30,   187,    76,    73,    28,
       0,    30,    28,     0,     0,     0,    87,     0,   137,   120,
     124,   306,   268,     6,     0,   272,   273,     0,     0,   281,
       0,     0,     0,     0,   261,   264,     0,   163,   426,     0,
     422,   408,     0,   235,    30,     0,    28,     0,    28,   410,
       0,     0,    87,     0,   128,     0,     0,   224,    87,   224,
     270,   274,   275,   285,     0,   276,     0,   304,   301,     0,
     305,     0,   423,   234,    28,    30,   185,    54,     0,   142,
     147,   210,     0,     0,     0,   134,   131,     0,     0,     0,
       0,     0,   284,   277,   278,   282,     0,   236,   424,    28,
     188,     0,    87,   212,   220,   221,   224,    87,    87,     0,
     121,     0,   283,     0,   302,     0,     0,    30,     0,    87,
       0,     0,     0,     0,   224,     0,   279,     0,   186,    28,
     211,     0,     0,     0,   225,   138,     0,   125,   287,    30,
     265,   143,   213,     0,     0,     0,    28,   149,   135,     0,
       0,   288,     0,   144,   148,   150,   132,   122,     0,   151,
     152,     0,     0,   153,     0,    30,    28,   154
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    88,    89,   579,   401,   206,   207,
      90,   242,   430,   601,  1006,    92,   343,   654,   522,   749,
     187,   527,   186,   655,   659,   913,  1045,   356,   662,   964,
     661,   963,   190,   202,   850,   787,   239,   702,   709,   791,
     928,   410,   411,   412,   700,   790,   245,   857,   795,  1058,
    1124,   933,  1059,   698,   927,   793,   975,  1107,  1016,  1106,
     931,  1057,   777,   922,  1010,  1101,  1147,   924,   970,  1153,
    1154,  1155,  1161,  1164,   378,   379,    94,    95,   269,    96,
     625,    97,   620,   447,    98,   446,    99,   622,   722,   723,
     595,   420,  1077,  1007,   761,   533,   536,   667,   966,   920,
     844,   658,   750,   961,   972,  1102,  1119,   828,  1044,   831,
    1015,  1054,   909,  1088,   729,   730,   731,   518,   611,   210,
     211,   215,   812,   884,   942,  1069,   885,   940,   985,  1024,
    1025,  1026,  1027,  1093,  1028,  1029,  1030,  1091,  1140,   886,
     887,   888,   889,   987,   890,   184,   350,   351,   660,   801,
     802,   803,   870,   712,   713,   100,   337,   101,   388,   819,
     465,   466,   460,   462,   607,   464,   818,   634,   145,   451,
     559,   102,   103,   104,   131,   893,   993,   106,   260,   577,
     404,   630,   629,   641,   640,   312,   107,   732,   171,   172,
     521,   748,   827,   906,   178,   255,   519,   108,   672,   549,
     109,   673,   333,   674,   200,   111,   112,   328,   113,   114,
     504,   743,   902,   804,   935,   820,   821,   822,   823,   115,
     116,   117,   118,   270,   119,   120,   414,   121,   122,   345,
     644,   742,   645,   646,   123,   569,   570,   781,   164,   165,
     228,   229,   572,   693,   124,   383,   686,   384,   125,   550,
     126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -967
static const yytype_int16 yypact[] =
{
    -967,    52,    90,  -967,  2095,  4755,  4755,   -63,  4755,  4755,
    4755,  4755,  4755,  4755,  4755,  4755,  -967,  4755,  4755,  4755,
    4755,  4755,  4755,  4755,   425,   425,  1873,  4755,   437,   -47,
     -33,  -967,  -967,    72,  -967,  -967,  -967,    74,  4755,  -967,
    -967,   -30,   -16,  -967,   -33,  3292,  3425,    69,  -967,    84,
    3558,  -967,  4755,    17,   -17,   114,   124,   285,    92,    97,
     107,   121,  -967,  -967,  -967,   123,   128,  -967,  -967,  -967,
    -967,  -967,  -967,   163,   147,  -967,  -967,   222,  3159,  -967,
     325,  3691,  4888,  -967,  -967,   149,   483,   555,   264,  -967,
      18,  -967,  -967,  -967,  -967,  -967,  -967,  -967,   229,   246,
    -967,  -967,   161,   282,   295,   305,   309,   231,  -967,  -967,
    1659,  -967,  -967,   381,  5336,  -967,  -967,   235,   338,   258,
    -967,   -13,  -967,     7,  -967,  -967,  -967,  -967,  -967,   286,
     269,   305,  6497,  6497,  4755,  6497,  6497,  3342,   323,  6178,
    1578,  -967,  -967,   372,  -967,  4755,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,   280,   222,   115,   288,  -967,  -967,
     299,  -967,   425,  6220,   298,   439,  -967,   322,   222,   336,
     329,  -967,  -967,   343,   383,   -11,     7,  3824,  -967,  -967,
    4888,   490,  -967,  4755,    22,  6497,  2893,   -33,  4755,  4755,
     367,  -967,  -967,  5604,  -967,  5646,   358,   517,  -967,   377,
    6497,  1294,   391,  5693,   222,    79,    28,  -967,  -967,   402,
      31,  -967,  -967,  -967,   531,    35,   305,   425,  4755,  4755,
     396,  -967,  1873,   195,   629,  -967,  5021,   425,   463,  -967,
     222,  -967,   -52,   287,  4755,   821,   344,   261,  5154,    15,
     -27,    67,   407,   251,  -967,   415,   617,   553,  5910,   411,
     416,  5777,   420,  4755,   251,   424,   617,   251,    87,   514,
     457,   527,  -967,   512,  -967,  -967,  4755,  4755,  -967,   568,
     580,   214,  -967,  4755,  -967,   633,  -967,  -967,  4755,  4755,
    4755,  4755,  4755,  4755,  4755,  4755,  4755,  4755,  4755,  4755,
    4755,  4755,  4755,  4755,  4755,  4755,   437,  -967,  -967,  -967,
    3957,  4755,  4755,  4755,  4755,  4755,  4755,  4755,  4755,  4755,
    4755,  4755,   457,    91,  4755,  -967,  4755,  4755,   149,   -14,
    -967,  5824,  4755,  -967,   222,   117,   178,   178,  -967,  -967,
    4090,  -967,  4223,  -967,   222,   336,    56,   457,    56,  -967,
      16,  -967,  -967,  2893,  6497,   479,  4755,  -967,   585,  -967,
     505,   667,  6497,   589,  6419,   620,     0,  -967,  -967,  -967,
    6282,  -967,  -967,  -967,  -967,    93,   626,    17,  -967,  4755,
    -967,  -967,   -17,  -967,  6282,   630,  -967,  -967,    30,  -967,
    -967,    47,    99,    50,  -967,   546,   435,   515,   413,   550,
    -967,   641,  -967,  -967,   657,  5296,   557,  -967,  -967,  -967,
     321,  -967,  -967,  -967,   457,  5954,  -967,   707,   564,   -18,
     712,  -967,   583,  -967,  -967,    16,     7,   655,   425,  4356,
     603,  -967,  4888,  6332,   656,  -967,  -967,   579,  -967,  -967,
    2228,  -967,  4755,  -967,  -967,  -967,  -967,  -967,  5338,  -967,
    -967,  -967,  1708,  -967,   720,    83,  -967,   613,   570,   573,
    -967,   581,  4755,   584,  -967,  4755,   593,    16,  -967,     7,
    4755,  6576,  4755,  -967,  4755,  4755,  4755,  3741,  3872,  4005,
    4005,  4005,  4005,  1758,  1758,  1758,  1758,   859,   859,   454,
     454,   454,   372,   372,   372,  -967,   318,  3342,  3342,  3342,
    3342,  3342,  3342,  3342,  3342,  3342,  3342,  3342,  3342,  -967,
     584,   595,  -967,   574,   178,   577,  5380,  -967,   333,  2028,
     139,  -967,   425,  6497,   425,  6274,   336,  -967,  -967,  -967,
    -967,   178,  -967,  -967,  -967,  6497,  -967,  2361,  -967,  -967,
    -967,  -967,   734,    57,   597,   605,  -967,  6282,  6282,  6282,
    -967,   609,  -967,   606,   222,   115,   632,  -967,  -967,  -967,
    -967,   625,   703,  -967,  -967,  5429,  -967,  -967,   762,   624,
     425,   628,  -967,  -967,  -967,  -967,  -967,   631,  -967,    58,
    -967,  -967,   352,  -967,  4755,  -967,  -967,   457,   635,  -967,
    -967,  -967,  1873,   649,  -967,  -967,   782,  -967,    16,  -967,
    -967,   603,   638,  6082,   314,   644,  5735,   314,  -967,  -967,
     643,  -967,  -967,  -967,  -967,  -967,  5998,   198,  -967,   425,
    -967,    62,    63,   646,  1199,  6282,   661,   222,   336,  -967,
     683,    83,   658,  -967,  -967,   659,   453,   652,  5471,   457,
     457,    16,  6538,  3342,  4755,  6455,  1611,  3608,   437,  -967,
     457,   457,  -967,  -967,  -967,    25,  -967,  -967,  -967,  -967,
    -967,  4489,  -967,   349,  -967,   -33,  -967,  -967,  -967,  4755,
    4755,   314,   314,  6282,   749,  2494,  -967,   440,  -967,    -9,
    -967,  -967,   696,   660,   815,  6282,   222,   117,    19,   723,
    -967,  -967,  6282,   453,  -967,  -967,  4755,  -967,   413,   813,
    -967,  -967,  -967,   663,  1498,  -967,  -967,   671,  -967,   670,
    4755,  -967,  -967,   680,  -967,  -967,  4755,  -967,   603,  -967,
     677,  -967,  -967,   206,  -967,  4622,  -967,  -967,  -967,   222,
     336,    83,   684,   839,  -967,  -967,   453,  -967,  -967,   688,
     841,    27,  -967,  -967,  -967,  -967,  -967,  3475,  -967,  -967,
    -967,  -967,  -967,   691,  4755,  4755,   425,  6497,  -967,  -967,
     438,   693,   771,   695,  6497,   603,   603,  -967,   843,  -967,
    -967,  -967,   538,   698,  4755,    53,    11,  -967,  6282,  -967,
    6282,  -967,   701,   139,  -967,  -967,   704,  -967,  -967,   702,
    -967,   413,  -967,  4755,  -967,   705,  -967,   194,  -967,  6497,
    4755,   842,  4755,  4755,  6040,   314,   717,   842,   713,  4755,
     178,   741,   230,  -967,  -967,   425,    64,  1228,   336,   839,
    -967,    83,   914,   715,   767,   167,   802,   864,  4755,   457,
     817,   818,   457,  -967,   716,  5513,  -967,   758,   461,   -33,
    2893,  -967,  -967,   724,  -967,   727,   736,  6282,   800,   733,
    -967,  5562,  -967,  -967,  -967,  -967,  -967,   773,  -967,  -967,
     796,   767,    65,  3342,  -967,  -967,  3159,  -967,  6497,  -967,
    5868,   756,  -967,   603,  -967,  -967,   753,  -967,  -967,  4755,
     741,  -967,   933,  -967,   847,    83,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,   286,   730,  -967,
      36,   759,   761,   760,   204,   911,  6282,  3475,  -967,  4755,
    4755,  -967,   741,  -967,  -967,   178,  -967,   -33,   899,   858,
    -967,  -967,  -967,  4755,  -967,  -967,  -967,   772,  -967,  -967,
    -967,  6282,    83,  -967,  -967,   768,  -967,  -967,  4755,   778,
    -967,  -967,   774,  -967,  -967,   691,   770,   741,  -967,   922,
      20,  -967,   863,   305,  -967,   867,  -967,  -967,   209,  -967,
     868,   927,  6282,  -967,   779,   780,  -967,  -967,   916,  -967,
     786,  2893,   790,  2627,  2627,  -967,  -967,     9,  -967,  -967,
     797,  -967,   604,  6497,  -967,  4755,   203,   807,   397,  -967,
    -967,  6282,    83,  -967,   155,  -967,   950,    38,   895,   954,
     808,   900,  -967,    66,   810,   962,  6282,  -967,  -967,  -967,
    -967,   908,  -967,  -967,  -967,  -967,  -967,  -967,  -967,   275,
     905,  -967,   819,  4755,    10,   934,  -967,   820,  3159,  -967,
    3159,  -967,  -967,   892,   824,   155,  -967,   823,   897,   882,
     829,   845,  6282,   918,  -967,  -967,  6282,  -967,  -967,   217,
    -967,  -967,  6282,  -967,  -967,  2760,   906,   835,   834,  -967,
    6083,  4755,  -967,   932,  -967,   467,   846,   931,  -967,   931,
    -967,  -967,  -967,   801,    83,  -967,   930,  -967,   989,   850,
    -967,   936,  -967,  -967,   542,  -967,  -967,  -967,   844,  -967,
    -967,  -967,  6125,   492,   857,  3159,  -967,   862,   957,   516,
     972,   949,   958,  1014,  -967,  -967,  6282,   453,  -967,   945,
    -967,   872,  -967,  -967,  3159,  -967,   931,  -967,  -967,   951,
    3159,   964,  -967,    83,  -967,   877,   880,  -967,   528,  -967,
    1002,   536,   602,   898,   931,   901,  -967,   360,  -967,   890,
    3159,   612,   969,  3026,  3159,  -967,  1009,  -967,  -967,  -967,
    -967,  -967,  3159,   909,   974,   973,   904,   961,  -967,   915,
     917,  -967,   919,  -967,   961,  -967,  -967,  -967,    83,  -967,
    -967,   994,   920,  -967,   912,  -967,   913,  -967
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -967,  -967,  -378,  -967,   -24,  -967,  -967,  -967,  -967,   708,
    -967,   -82,  -967,  -967,     5,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -781,  -967,  -967,  -967,   375,
    -967,   669,   673,  -967,  -967,  -967,  -967,    14,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   -68,  -967,  -967,  -967,   530,   664,   665,  -124,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,   366,
    -551,  -386,  -967,   133,  -967,  -967,  -967,  -493,  -967,  -967,
     247,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -966,  -666,  -967,   283,  -228,  -967,  -967,
     728,  -967,   289,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,    77,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,  -967,  -854,  -967,  -967,  -967,  -395,  -967,  -967,   233,
    -967,  -967,  -967,  -967,  -967,   -60,  -967,    -3,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,  -967,
    -967,   -69,  -967,  -967,    -1,   253,  -967,  -967,  -967,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,   170,  -363,  -275,  -967,
    -967,  -967,  -967,  -967,  -967,  -967,   290,  -172,  -291,  -967,
    -967,   430,   432,  -967,  1159,   -19,   -72,  -477,   598,  1068,
    -967,  -967,  -967,  -760,  -967,  -967,  -967,  -967,   173,  -259,
    -967,   769,  -967,  -967,  -967,   -12,  -967,   -23,  -967,  -252,
    -502,  -967,  -967,   252,     3,   330,   422,  -967,  -202,  -967,
       8,   558,  -967,  -967,  -967,  -967,  -967,   426,  -967,  -967,
    -967
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -607
static const yytype_int16 yytable[] =
{
     156,   156,   252,   105,   169,   175,   241,   320,   138,    91,
     179,   181,   456,   250,   448,   449,   174,   779,    93,   652,
     389,   485,   249,   578,   592,   191,   261,   534,   982,   205,
     346,   176,   443,   591,   944,   649,   367,   650,   560,   372,
     703,   868,   669,   375,   945,   424,  1033,   199,   316,   316,
     232,   316,     3,   233,   501,  -606,   216,   208,   562,   816,
     813,   583,   503,   413,   505,   664,   688,   456,   501,   548,
     715,  -243,  -246,   688,  1039,   240,  1051,   517,   316,   520,
     842,    35,   619,   557,   499,   764,   765,   744,   246,   128,
      -2,   774,   377,  1090,   256,   258,   134,   -88,   259,   182,
     319,   817,  -201,  -201,  -201,   764,   765,  -605,   250,   402,
     403,   250,   177,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   225,   180,   426,   216,   188,
      35,   325,   714,  -535,   427,  -535,   183,   370,   156,   775,
    1120,   196,   956,   189,   335,  -532,  -531,   209,   317,   317,
     976,   317,   978,   340,   767,   128,   197,   796,  1136,  -515,
    -515,   223,   535,   500,  1052,    35,   397,   204,   349,   425,
     366,   318,  -201,   762,   845,   766,   580,   868,   317,   262,
     365,   983,   984,   347,   552,   156,   353,   745,   547,   368,
     561,   348,   373,   156,   157,   157,   376,   946,   170,  1034,
     627,   697,   547,   156,   835,   836,   400,  -606,   705,  1092,
     563,   708,   415,   156,   843,   381,   385,   665,   689,   128,
      85,   -88,   716,  -243,  -246,   926,  1040,  1023,   428,   259,
     616,   226,   227,   617,   212,  1055,   950,   223,   416,   128,
     413,   991,   224,   259,   213,   643,   670,   671,   457,  1071,
     511,   217,    35,   455,   440,    85,   218,   390,   724,  -605,
    -323,  -444,   643,  -446,   753,   259,   219,   259,   799,   826,
     855,  1083,   169,   175,   459,   755,   756,  1089,   951,   855,
     220,   551,   221,   992,   174,  -445,   453,   222,    35,   259,
     457,  1072,   869,   418,   128,   727,   728,   230,   867,   176,
     510,   263,   616,   457,   457,   617,   225,   226,   227,   231,
     516,   253,   932,   457,   616,   457,   459,   617,   264,   508,
     391,  1118,   265,  -323,   718,   223,  1121,  1122,   871,   459,
     459,   800,   157,   128,   454,    35,   545,   268,  1131,   459,
     455,   459,    85,   205,   266,   856,   418,    79,   523,   695,
     545,    80,    81,   250,  1018,  -318,    79,   267,   724,   214,
      80,    81,   249,   739,   156,   547,   547,   547,  -199,  -199,
    -199,  -537,   757,   613,   417,   153,   455,   271,    85,   157,
     699,   313,   638,   315,    48,    48,   128,   157,    35,   415,
     128,   778,    35,   588,   156,   226,   227,   157,   861,   223,
     314,   735,   736,   957,   243,   244,   183,   157,   154,   863,
    -444,   155,   740,   741,   259,   416,   -43,   -43,   -43,   230,
     419,   618,   296,  -427,   690,    85,   691,   692,   153,   105,
     324,  1115,   153,  -446,   326,   602,   631,   259,  -199,   612,
     653,   298,   299,   547,   603,   327,  -431,   332,   873,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   154,   156,   331,   155,   154,   170,  -445,   155,   226,
     227,   259,   334,   855,   128,   336,    35,   846,    85,   847,
    -429,   457,    85,  -411,  -411,   128,   259,    35,   156,   338,
     156,   547,   824,  -413,  -413,  -515,  -515,   128,   457,    35,
     293,   294,   295,   547,   296,   829,   830,   459,   339,   128,
     547,    35,   941,   545,   545,   545,   153,   342,   962,   359,
     677,  1138,  1139,   458,   459,   128,   355,   153,   907,   908,
     546,   360,   657,   763,   764,   765,   156,   223,   361,   153,
     567,   643,   397,   855,   546,   374,   916,   866,  1020,   154,
      79,   153,   155,   363,    80,    81,   387,   223,   157,   969,
     154,   429,   254,   155,   369,   502,    85,   432,   855,   431,
     156,   434,   154,   156,   752,   155,   435,    85,   458,   502,
    1017,   727,   728,   437,   167,   156,   441,   168,   157,    85,
     439,   545,   855,   720,   901,   565,   547,   618,   547,   444,
     616,    85,   618,   617,   855,   953,   398,   226,   227,  -216,
    -216,  -216,   855,  -227,   169,   175,   442,   936,  1085,  1022,
      79,  1031,   158,   161,    80,    81,   174,   226,   227,   223,
     968,   839,   764,   765,   257,   445,   751,   156,   156,   545,
     450,   176,   452,  1104,   524,    79,   643,   954,   955,    80,
      81,   545,   773,    31,    32,   406,   157,    35,   545,   618,
     463,   997,  1031,   407,   156,   547,   528,  1110,   526,    79,
     760,  1013,  1014,    80,    81,   529,   566,   838,   855,  1130,
     530,    79,   157,   381,   157,    80,    81,  1133,   855,    79,
    1021,   223,   532,    80,    81,   808,   397,   618,   553,   226,
     227,  1094,   618,   223,   558,  1043,   564,   546,   546,   546,
     571,   408,   806,   573,    68,    69,    70,    71,    72,   574,
     576,   -98,   156,   582,   547,   409,   584,   589,   598,   594,
     157,    75,    76,   599,   615,   623,   621,   585,   624,   642,
     626,  1067,   647,  -560,   545,  1070,   545,    85,   663,   547,
    1126,  1073,  -435,  1134,  -439,    79,   676,   156,   666,    80,
      81,   226,   227,  1142,   157,    79,   668,   157,   675,    80,
      81,   156,   392,   226,   227,   680,   682,   457,   678,   157,
     547,   156,   393,   683,   241,   546,   399,   618,   679,   685,
     687,   618,   392,   160,   160,  1160,   701,   173,   696,   704,
     706,   393,   710,   459,   399,  1114,   717,   721,   170,   547,
     910,   719,   393,   545,   399,   393,   399,   733,   726,   988,
     725,   758,   768,   770,   547,   769,   776,   783,   784,  -292,
     788,   157,   157,   546,   786,   911,   792,   798,   967,   876,
     877,   878,   879,   880,   881,   546,   810,   811,   814,   815,
    -526,   618,   546,   240,   832,   833,   834,   837,   157,   840,
     547,   848,   851,   849,   547,   990,   800,   994,   854,   859,
     547,   864,   545,   892,   865,   891,   895,  1001,   896,   899,
     900,   903,   457,   905,  1009,   912,   943,   914,   958,  1012,
     917,    31,    32,   406,   918,    35,   915,   545,   618,   921,
     923,   407,   290,   291,   292,   293,   294,   295,   459,   296,
     876,   877,   878,   879,   880,   881,   157,   930,   934,   939,
     948,   947,   949,  1046,   547,   952,   959,   960,   545,  1048,
     971,   160,   974,   965,   977,   980,   981,   986,   546,   989,
     546,   996,   995,  1000,   998,   999,   241,  1002,   241,   408,
    1004,   157,    68,    69,    70,    71,    72,   545,   618,  1011,
     618,  1019,  1074,   409,  1032,   157,  1003,  1035,  1036,    75,
      76,  1037,   545,  1041,  1038,   157,  1042,  -223,   160,  1047,
    1056,  1053,  1049,  -280,  1062,    85,   160,  1060,  1063,  1064,
    1065,  1066,  1068,  1099,  1078,  1079,   160,  1080,  1084,  1087,
    1086,   618,  1095,  1096,  1109,  1100,   160,   546,   545,  1097,
    1098,  1105,   545,   241,   874,   240,  1108,   240,   545,  1111,
     875,  1112,  1113,   876,   877,   878,   879,   880,   881,   882,
    -286,  1116,   241,   874,  1117,  1129,  1123,  1127,   241,   875,
     618,  1128,   876,   877,   878,   879,   880,   881,   882,  1132,
    1076,  1125,  1135,  1141,  1143,  1137,  1145,  1146,   241,  1149,
    1150,   241,   241,  1148,  1152,   173,   546,  1151,  1162,  1156,
     241,  1157,   545,   618,  1165,   554,  1167,   883,  1158,   140,
    1163,   586,   240,  1166,   797,   587,  1159,   809,   919,   618,
     684,   546,   159,   159,   604,   605,   938,  1008,   894,   872,
     556,   240,  1061,   937,   925,   772,   771,   240,   979,   898,
     782,   852,   780,     0,     0,     0,     0,     0,   201,     0,
       0,     0,   546,     0,     0,     0,     0,   240,     0,     0,
     240,   240,     0,     0,   618,     0,     0,     0,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   546,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,   110,   132,   133,   546,   135,   136,   137,
     139,   141,   142,   143,   144,     0,   146,   147,   148,   149,
     150,   151,   152,     0,     0,   163,   166,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,   546,     0,   193,   195,   546,  -244,     0,     0,
       0,   203,   546,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,  -247,     0,     0,     0,
     248,   251,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,   160,     0,   354,     0,  -515,
    -515,     0,     0,     0,     0,     0,   546,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   371,     0,     0,
       0,   160,     0,   160,     0,   380,   382,   386,  -515,  -515,
       0,     0,     0,   321,     0,   396,     0,     0,     0,     0,
       0,     0,     0,     0,   323,   421,     0,     0,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
       0,     0,     0,     0,     0,     0,   251,     0,     0,   251,
       0,     0,   344,     0,     0,   110,     0,   352,     0,     0,
       0,     0,     0,     0,  -515,  -515,     0,     0,     0,  -244,
       0,     0,     0,   160,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   160,     0,
       0,   163,     0,     0,     0,   395,     0,     0,  -247,     0,
     509,     0,     0,   405,     0,     0,     0,   423,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,   438,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   344,   344,     0,     0,     0,
     160,   160,   461,     0,     0,     0,     0,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   362,   568,   160,     0,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,     0,     0,   344,     0,   344,   506,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   590,   593,     0,   513,
       0,   515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   525,     0,   272,   273,   274,
     614,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,   555,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,   296,     0,
     160,     0,     0,     0,   639,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,     0,     0,     0,   352,     0,
     329,   596,   329,     0,     0,     0,     0,     0,     0,   110,
       0,   606,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,     0,
       0,   344,     0,     0,   628,     0,     0,     0,     0,   632,
       0,   633,     0,   635,   636,   637,     0,     0,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -515,  -515,
     277,     0,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
       0,   296,   421,   785,     0,   421,     0,     0,   272,   273,
     274,     0,     0,     0,     0,     0,     0,   329,     0,     0,
       0,     0,     0,     0,     0,   275,   110,   276,   277,     0,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,     0,   296,
       0,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,     0,     0,     0,   421,
     421,     0,     0,   694,     0,     0,     0,     0,  -412,  -412,
     609,   163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,   382,     0,   568,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,    34,    35,   807,     0,     0,     0,     0,    37,     0,
       0,     0,     0,   737,     0,  -607,  -607,  -607,  -607,   288,
     289,   290,   291,   292,   293,   294,   295,    48,   296,     0,
     747,     0,     0,     0,   329,     0,     0,     0,   352,   754,
     297,     0,   129,     0,   110,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,   568,
      73,     0,     0,     0,     0,   130,    75,    76,    77,   789,
       0,     0,     0,   421,     0,   794,     0,    82,   610,     0,
       0,     0,    85,   329,    86,    87,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   344,   825,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,   841,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,   853,    31,    32,   128,    34,    35,     0,   858,
       0,   860,   352,    37,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,   897,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,   110,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     130,    75,    76,    77,     0,     0,     0,     0,   344,     0,
       0,     0,    82,     0,     0,     0,     0,    85,     0,    86,
      87,     0,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,   344,   344,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,  -515,  -515,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,   110,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,  1050,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,  -414,  -414,
       0,    45,    46,    47,    48,    49,    50,    51,     0,     0,
      52,    53,     0,    54,   110,     0,     0,    55,    56,    57,
    1082,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,    74,    75,    76,    77,    78,     0,    79,     0,
       0,     0,    80,    81,    82,     0,    83,    84,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,     0,    52,     0,     0,    54,     0,     0,     0,
      55,    56,    57,     0,    58,    59,    60,   600,    62,    63,
      64,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   130,    75,    76,    77,    78,
       0,    79,     0,     0,     0,    80,    81,    82,   656,    83,
      84,     0,    85,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   130,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      82,   759,    83,    84,     0,    85,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,     0,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,    37,    38,    39,    40,     0,    41,
       0,    42,     0,    43,     0,     0,    44,     0,     0,     0,
      45,    46,    47,    48,     0,    50,    51,     0,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
      11,   130,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,    82,  1005,    83,    84,     0,    85,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,     0,    36,     0,     0,     0,    37,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,     0,    50,    51,
       0,     0,    52,     0,     0,    54,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,    11,   130,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    82,  1075,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   130,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,     0,    85,     0,    86,    87,     0,     0,
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
       6,     7,     8,     9,     0,    73,     0,     0,    10,   127,
     130,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,    83,    84,     0,    85,     0,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,  1144,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   234,     0,     0,     0,    31,    32,   235,    34,
      35,     0,     0,     0,     0,     0,   236,     0,     0,     0,
       0,   237,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   127,   130,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      85,     0,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   234,     0,     0,     0,    31,
      32,   235,    34,    35,     0,     0,     0,     0,     0,   236,
       0,     0,     0,     0,   237,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   127,   130,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   128,    34,    35,     0,   275,     0,
     276,   277,    37,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    48,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   127,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   192,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   128,    34,    35,
       0,     0,     0,   276,   277,    37,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,    48,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   127,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,   194,     0,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,    34,    35,     0,     0,     0,     0,     0,    37,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,    48,   296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   127,   130,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,   198,
       0,     0,    85,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   128,    34,    35,     0,     0,     0,     0,
       0,    37,     0,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
      48,   296,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   130,    75,
      76,    77,     0,     0,     0,     0,   247,     0,     0,     0,
      82,     0,     0,     0,     0,    85,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   128,    34,    35,     0,
       0,     0,     0,     0,    37,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,     0,   296,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     127,   130,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   341,     0,     0,     0,    85,   486,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   128,
      34,    35,     0,     0,     0,     0,     0,    37,  -607,  -607,
    -607,  -607,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,     0,   296,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,   127,   130,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   512,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   128,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   127,   130,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   514,    86,    87,     0,     0,
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
       0,     0,    82,     0,     0,     0,     0,    85,   418,    86,
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
       0,    10,   127,   130,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      85,   746,    86,    87,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    85,   805,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   128,    34,    35,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   127,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,     0,    86,    87,
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
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   127,   130,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    85,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   128,   394,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   127,   130,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    85,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   128,    34,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    73,     0,     0,     0,
       0,   130,    75,    76,    77,   272,   273,   274,     0,     0,
       0,     0,     0,   422,     0,     0,     0,     0,    85,     0,
      86,    87,   275,     0,   276,   277,     0,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,     0,   296,   272,   273,   274,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,   275,     0,   276,   277,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,   296,   272,
     273,   274,     0,     0,     0,     0,  -515,  -515,     0,     0,
       0,     0,     0,     0,     0,     0,   275,     0,   276,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,     0,
     296,     0,     0,     0,     0,     0,     0,     0,   272,   273,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   275,     0,   276,   277,   575,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,     0,   296,
     272,   273,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   275,     0,   276,
     277,   608,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
       0,   296,   272,   273,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
       0,   276,   277,   648,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,     0,   296,     0,     0,     0,     0,     0,     0,
       0,   272,   273,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   275,   842,
     276,   277,   681,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,     0,   296,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   276,   277,   734,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,     0,   296,   272,   273,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   275,     0,   276,   277,   904,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,     0,   296,     0,     0,     0,
       0,     0,   272,   273,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
       0,   276,   277,   843,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,     0,   296,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   275,     0,   276,   277,   357,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,     0,   296,   272,   273,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   275,     0,   276,   277,   358,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   707,   296,     0,     0,
       0,     0,     0,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   276,   277,   364,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,     0,   296,     0,     0,   272,   273,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,   436,   276,   277,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,   296,   272,
     273,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   275,   436,   276,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,     0,
     296,     0,     0,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   276,   277,   507,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,     0,   296,     0,     0,   272,   273,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,   929,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,   296,   272,
     273,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   433,     0,   275,     0,   276,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,     0,
     296,     0,   272,   273,   274,     0,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   581,   275,
       0,   276,   277,     0,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,     0,   296,   272,   273,   274,     0,     0,     0,
       0,     0,  -515,  -515,     0,     0,     0,     0,     0,     0,
       0,   275,   711,   276,   277,     0,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,     0,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   272,   273,   274,
       0,     0,     0,     0,   862,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,  -183,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,     0,   296,   272,
     273,   274,     0,     0,     0,     0,     0,  1081,  -183,     0,
       0,     0,     0,     0,     0,     0,   275,     0,   276,   277,
       0,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,     0,
     296,     0,     0,     0,     0,     0,     0,     0,     0,  1103,
       0,     0,     0,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   276,   277,   322,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,     0,   296,   537,   538,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,   273,   274,   539,     0,   330,     0,     0,     0,
       0,     0,    31,    32,   128,     0,     0,     0,   275,     0,
     276,   277,   540,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,     0,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
     651,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     541,     0,   542,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,   597,   409,     0,     0,     0,     0,   543,
      75,    76,   544,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -515,
    -515,   275,   738,   276,   277,     0,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,     0,   296,   272,   273,   274,     0,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   275,     0,   276,   277,     0,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,     0,   296,   273,   274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,     0,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   274,   296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   275,     0,   276,   277,     0,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,     0,   296
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-967)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-607)))

static const yytype_int16 yycheck[] =
{
      24,    25,    84,     4,    28,    28,    78,   131,    11,     4,
      29,    30,   271,    82,   266,   267,    28,   683,     4,   521,
     222,   296,    82,   401,   419,    44,     8,    27,     8,    53,
       8,    28,   260,   419,   888,   512,     8,   514,     8,     8,
     591,   801,   535,     8,     8,    30,     8,    50,    62,    62,
      74,    62,     0,    77,   313,     8,    57,    74,     8,    32,
     726,    79,   314,   235,   316,     8,     8,   326,   327,   360,
       8,     8,     8,     8,     8,    78,    66,   336,    62,   338,
      27,    74,   445,   374,   312,    94,    95,    62,    80,    72,
       0,    72,   216,  1059,    86,    87,   159,    30,   150,    27,
     123,    74,    93,    94,    95,    94,    95,     8,   177,   161,
     162,   180,   159,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   143,   159,   154,   129,   159,
      74,   155,   609,   146,   161,   146,    62,   209,   162,   120,
    1106,    72,   902,   159,   168,   159,   159,   164,   162,   162,
     931,   162,   933,   176,   163,    72,    72,   708,  1124,    60,
      61,    74,   162,    72,   154,    74,    79,   150,   187,   154,
      91,   164,   163,   666,   163,   668,   404,   937,   162,   161,
     204,   161,   162,   161,    91,   209,   189,   162,   360,   161,
     160,   186,   161,   217,    24,    25,   161,   161,    28,   161,
     452,   579,   374,   227,   755,   756,   230,   160,   594,  1063,
     160,   597,   235,   237,   161,   218,   219,   160,   160,    72,
     164,   154,   160,   160,   160,   160,   160,    72,   161,   150,
     147,   144,   145,   150,   120,  1016,    32,    74,   235,    72,
     412,    32,    79,   150,   120,   504,   537,   538,   271,    32,
      72,   159,    74,   162,   167,   164,   159,    62,   621,   160,
      62,   146,   521,   146,   659,   150,   159,   150,    62,   746,
      76,  1052,   296,   296,   271,   661,   662,  1058,    74,    76,
     159,   363,   159,    74,   296,   146,    72,   159,    74,   150,
     313,    74,    62,    32,    72,   128,   129,   150,   800,   296,
     324,    72,   147,   326,   327,   150,   143,   144,   145,   162,
     334,   162,   863,   336,   147,   338,   313,   150,    72,   322,
     125,  1102,   161,   125,   615,    74,  1107,  1108,   805,   326,
     327,   125,   162,    72,   120,    74,   360,    32,  1119,   336,
     162,   338,   164,   367,    62,   151,    32,   153,   343,   577,
     374,   157,   158,   422,   151,   125,   153,    62,   721,    74,
     157,   158,   422,   638,   388,   537,   538,   539,    93,    94,
      95,    62,   663,   442,    30,   114,   162,   146,   164,   209,
     582,   146,    64,   125,    99,    99,    72,   217,    74,   412,
      72,   682,    74,   416,   418,   144,   145,   227,   793,    74,
      62,   629,   630,   905,    79,    80,    62,   237,   147,   795,
     146,   150,   640,   641,   150,   412,    67,    68,    69,   150,
     159,   445,    50,   159,    72,   164,    74,    75,   114,   430,
     150,  1097,   114,   146,   146,   430,   459,   150,   163,   442,
     522,    60,    61,   615,   430,   146,   159,     8,   811,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   147,   486,   165,   150,   147,   296,   146,   150,   144,
     145,   150,   150,    76,    72,   146,    74,   768,   164,   770,
     159,   504,   164,   160,   161,    72,   150,    74,   512,   146,
     514,   663,   744,   160,   161,    60,    61,    72,   521,    74,
      46,    47,    48,   675,    50,    67,    68,   504,   125,    72,
     682,    74,   875,   537,   538,   539,   114,    27,   913,   161,
     544,   161,   162,   271,   521,    72,   159,   114,    67,    68,
     360,    14,   527,    93,    94,    95,   560,    74,   161,   114,
     127,   800,    79,    76,   374,    14,   837,   799,   151,   147,
     153,   114,   150,   162,   157,   158,   160,    74,   388,   922,
     147,   154,    79,   150,   162,   313,   164,    14,    76,   154,
     594,   160,   147,   597,   656,   150,   160,   164,   326,   327,
     975,   128,   129,   163,   147,   609,    72,   150,   418,   164,
     166,   615,    76,   617,   822,   160,   768,   621,   770,    72,
     147,   164,   626,   150,    76,   896,   143,   144,   145,    67,
      68,    69,    76,   160,   638,   638,   159,   869,   151,   982,
     153,   984,    24,    25,   157,   158,   638,   144,   145,    74,
     921,    93,    94,    95,    79,   123,   655,   661,   662,   663,
      72,   638,    62,   151,   165,   153,   905,   899,   900,   157,
     158,   675,   676,    70,    71,    72,   486,    74,   682,   683,
      27,   952,  1025,    80,   688,   837,   161,   151,    83,   153,
     665,    67,    68,   157,   158,     8,   161,   759,    76,   151,
      91,   153,   512,   686,   514,   157,   158,   151,    76,   153,
     981,    74,    72,   157,   158,   719,    79,   721,    72,   144,
     145,  1064,   726,    74,    74,   996,   160,   537,   538,   539,
     160,   128,   715,    72,   131,   132,   133,   134,   135,    62,
     163,    14,   746,   159,   896,   142,    14,    72,    72,   126,
     560,   148,   149,   154,    14,   165,   123,   154,   165,   165,
     159,  1032,   165,   159,   768,  1036,   770,   164,    14,   921,
    1113,  1042,   159,   151,   159,   153,   150,   781,   161,   157,
     158,   144,   145,   151,   594,   153,   161,   597,   159,   157,
     158,   795,   143,   144,   145,    72,    14,   800,   146,   609,
     952,   805,   224,   159,   856,   615,   228,   811,   163,   161,
     159,   815,   143,    24,    25,  1158,    14,    28,   163,   161,
     156,   243,   159,   800,   246,  1096,   160,   124,   638,   981,
     829,   150,   254,   837,   256,   257,   258,   165,   159,   943,
     162,    72,   126,     8,   996,   165,   103,    14,   165,    99,
     160,   661,   662,   663,   163,   830,   156,   160,   920,   109,
     110,   111,   112,   113,   114,   675,   162,     8,   160,     8,
     159,   875,   682,   856,   161,    84,   161,    14,   688,   161,
    1032,   160,   160,   159,  1036,   947,   125,   949,   163,    27,
    1042,   154,   896,   106,   161,   160,    74,   959,    14,    62,
      62,   165,   905,   125,   966,   161,   887,   160,   907,   971,
      90,    70,    71,    72,   161,    74,   160,   921,   922,   126,
     104,    80,    43,    44,    45,    46,    47,    48,   905,    50,
     109,   110,   111,   112,   113,   114,   746,   161,   165,    72,
     159,   162,   162,  1005,  1096,    14,    27,    69,   952,  1011,
     162,   162,   154,   161,   160,   165,    14,    74,   768,    72,
     770,    14,    74,    27,   165,   165,  1018,   161,  1020,   128,
     160,   781,   131,   132,   133,   134,   135,   981,   982,   162,
     984,   154,  1044,   142,    14,   795,   961,    72,    14,   148,
     149,   163,   996,   163,    74,   805,    14,    69,   209,    74,
     160,    47,   163,    91,   161,   164,   217,   163,    91,   107,
     161,   146,    74,  1075,    88,   160,   227,   163,    66,    68,
     154,  1025,    72,    14,    47,   161,   237,   837,  1032,   159,
      74,   154,  1036,  1085,   100,  1018,   154,  1020,  1042,    47,
     106,    72,     8,   109,   110,   111,   112,   113,   114,   115,
      72,    86,  1104,   100,   162,  1117,    85,   160,  1110,   106,
    1064,   161,   109,   110,   111,   112,   113,   114,   115,    47,
    1045,    87,   154,   163,    85,   154,    47,  1139,  1130,    85,
      87,  1133,  1134,   154,   103,   296,   896,   163,    74,   154,
    1142,   154,  1096,  1097,   162,   367,   163,   163,   159,    11,
     160,   412,  1085,  1165,   709,   412,  1154,   721,   841,  1113,
     560,   921,    24,    25,   430,   430,   163,   964,   815,   810,
     372,  1104,  1025,   870,   851,   675,   674,  1110,   935,   819,
     688,   781,   686,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,   952,    -1,    -1,    -1,    -1,  1130,    -1,    -1,
    1133,  1134,    -1,    -1,  1158,    -1,    -1,    -1,    -1,  1142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   981,    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,   996,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,   418,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,  1032,    -1,    45,    46,  1036,     8,    -1,    -1,
      -1,    52,  1042,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      81,    82,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,   486,    -1,   189,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,  1096,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,   512,    -1,   514,    -1,   217,   218,   219,    60,    61,
      -1,    -1,    -1,   134,    -1,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   237,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   560,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,   180,
      -1,    -1,   183,    -1,    -1,   186,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,   160,
      -1,    -1,    -1,   594,    -1,    -1,   597,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   609,    -1,
      -1,   222,    -1,    -1,    -1,   226,    -1,    -1,   160,    -1,
     322,    -1,    -1,   234,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   638,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   266,   267,    -1,    -1,    -1,
     661,   662,   273,    -1,    -1,    -1,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   161,   388,   688,    -1,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    -1,    -1,   314,    -1,   316,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   418,   419,    -1,   330,
      -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,   346,    -1,     9,    10,    11,
     442,    -1,    -1,    -1,    -1,   746,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   369,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
     781,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   795,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   805,    -1,    -1,    -1,   419,    -1,
     512,   422,   514,    -1,    -1,    -1,    -1,    -1,    -1,   430,
      -1,   432,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   452,    -1,    -1,   455,    -1,    -1,    -1,    -1,   460,
      -1,   462,    -1,   464,   465,   466,    -1,    -1,   560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,   594,   165,    -1,   597,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,   609,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,   527,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   661,
     662,    -1,    -1,   574,    -1,    -1,    -1,    -1,   160,   161,
      32,   582,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,   686,    -1,   688,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,   715,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,   634,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    99,    50,    -1,
     651,    -1,    -1,    -1,   746,    -1,    -1,    -1,   659,   660,
     161,    -1,   114,    -1,   665,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   781,
     142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,   700,
      -1,    -1,    -1,   795,    -1,   706,    -1,   159,   160,    -1,
      -1,    -1,   164,   805,   166,   167,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   744,   745,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,   764,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,   783,    70,    71,    72,    73,    74,    -1,   790,
      -1,   792,   793,    80,    -1,    -1,    -1,    -1,   799,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   818,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   830,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,   869,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,   164,    -1,   166,
     167,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,   899,   900,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   928,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     961,    -1,   963,   964,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   975,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,  1013,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    92,   160,   161,
      -1,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
     105,   106,    -1,   108,  1045,    -1,    -1,   112,   113,   114,
    1051,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,   151,    -1,   153,    -1,
      -1,    -1,   157,   158,   159,    -1,   161,   162,    -1,   164,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    76,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,   151,
      -1,   153,    -1,    -1,    -1,   157,   158,   159,    27,   161,
     162,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    27,   161,   162,    -1,   164,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,
      -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,
      96,    97,    98,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,    -1,   142,    -1,    -1,    12,
      13,   147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    27,   161,   162,    -1,   164,    -1,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    27,   161,   162,
      -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,    -1,   164,    -1,   166,   167,    -1,    -1,
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
      -1,    -1,   159,    -1,   161,   162,    -1,   164,    -1,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    85,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
     164,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,
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
      -1,   159,    -1,   161,    -1,    -1,   164,    -1,   166,   167,
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
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    99,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
      -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      99,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,    -1,   142,    -1,    -1,    12,
      13,   147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   160,    -1,    -1,    -1,   164,    32,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,   164,    32,   166,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,   164,    32,   166,   167,    -1,    -1,
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
      -1,    -1,   159,    -1,    -1,    -1,    -1,   164,    32,   166,
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
     164,    32,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   164,    32,   166,   167,    -1,    -1,    -1,
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
      -1,   159,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,
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
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,    -1,
     166,   167,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,   163,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,   163,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   163,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,   163,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,   163,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,   163,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   161,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,   161,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,   161,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    91,    50,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,   161,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,   160,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,   160,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,   160,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   160,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,     9,    10,    11,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   154,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,   154,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   126,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   154,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    28,    29,   126,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    62,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    -1,    26,    -1,
      28,    29,    80,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,   130,   131,   132,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,    91,   142,    -1,    -1,    -1,    -1,   147,
     148,   149,   150,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    11,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50
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
     157,   158,   159,   161,   162,   164,   166,   167,   172,   173,
     178,   182,   183,   215,   244,   245,   247,   249,   252,   254,
     323,   325,   339,   340,   341,   342,   345,   354,   365,   368,
     372,   373,   374,   376,   377,   387,   388,   389,   390,   392,
     393,   395,   396,   402,   412,   416,   418,    13,    72,   114,
     147,   342,   372,   372,   159,   372,   372,   372,   325,   372,
     377,   372,   372,   372,   372,   336,   372,   372,   372,   372,
     372,   372,   372,   114,   147,   150,   172,   354,   376,   377,
     389,   376,    32,   372,   406,   407,   372,   147,   150,   172,
     354,   356,   357,   389,   393,   395,   402,   159,   362,   373,
     159,   373,    27,    62,   313,   372,   190,   188,   159,   159,
     200,   373,   161,   372,   161,   372,    72,    72,   161,   325,
     372,   377,   201,   372,   150,   172,   176,   177,    74,   164,
     287,   288,   120,   120,    74,   289,   342,   159,   159,   159,
     159,   159,   159,    74,    79,   143,   144,   145,   408,   409,
     150,   162,   172,   172,    66,    72,    80,    85,    87,   204,
     325,   374,   179,    79,    80,   214,   408,   155,   372,   323,
     339,   372,   179,   162,    79,   363,   408,    79,   408,   150,
     346,     8,   161,    72,    72,   161,    62,    62,    32,   246,
     391,   146,     9,    10,    11,    26,    28,    29,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    50,   161,    60,    61,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   353,   146,    62,   125,    62,   162,   164,   395,
     246,   372,   126,   372,   150,   172,   146,   146,   375,   377,
     126,   165,     8,   370,   150,   172,   146,   324,   146,   125,
     395,   160,    27,   184,   372,   397,     8,   161,   182,   373,
     314,   315,   372,   325,   377,   159,   195,   161,   161,   161,
      14,   161,   161,   162,   161,   172,    91,     8,   161,   162,
     374,   377,     8,   161,    14,     8,   161,   246,   242,   243,
     377,   325,   377,   413,   415,   325,   377,   160,   326,   406,
      62,   125,   143,   409,    73,   372,   377,    79,   143,   409,
     172,   175,   161,   162,   348,   372,    72,    80,   128,   142,
     209,   210,   211,   365,   394,   395,   402,    30,    32,   159,
     259,   377,   159,   372,    30,   154,   154,   161,   161,   154,
     180,   154,    14,   154,   160,   160,   160,   163,   372,   166,
     167,    72,   159,   285,    72,   123,   253,   251,   397,   397,
      72,   337,    62,    72,   120,   162,   387,   395,   401,   402,
     330,   372,   331,    27,   333,   328,   329,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   356,    32,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   285,
      72,   387,   401,   397,   378,   397,   372,   160,   325,   377,
     172,    72,    32,   372,    32,   372,   172,   387,   285,   364,
     387,   358,   186,   182,   165,   372,    83,   189,   161,     8,
      91,    91,    72,   263,    27,   162,   264,    43,    44,    62,
      80,   128,   130,   147,   150,   172,   354,   365,   366,   367,
     417,   179,    91,    72,   177,   372,   288,   366,    74,   338,
       8,   160,     8,   160,   160,   160,   161,   127,   377,   403,
     404,   160,   410,    72,    62,   163,   163,   347,   170,   174,
     285,   154,   159,    79,    14,   154,   209,   210,   395,    72,
     377,   259,   314,   377,   126,   258,   372,    91,    72,   154,
     119,   181,   182,   215,   244,   245,   372,   332,   163,    32,
     160,   286,   325,   339,   377,    14,   147,   150,   172,   355,
     250,   123,   255,   165,   165,   248,   159,   397,   372,   350,
     349,   395,   372,   372,   335,   372,   372,   372,    64,   377,
     352,   351,   165,   387,   398,   400,   401,   165,   163,   375,
     375,   126,   398,   179,   185,   191,    27,   182,   269,   192,
     316,   198,   196,    14,     8,   160,   161,   265,   161,   265,
     366,   366,   366,   369,   371,   159,   150,   172,   146,   163,
      72,   163,    14,   159,   243,   161,   414,   159,     8,   160,
      72,    74,    75,   411,   372,   285,   163,   170,   221,   406,
     212,    14,   205,   258,   161,   259,   156,    91,   259,   206,
     159,   154,   321,   322,   375,     8,   160,   160,   366,   150,
     172,   124,   256,   257,   355,   162,   159,   128,   129,   282,
     283,   284,   355,   165,   163,   285,   285,   372,    27,   356,
     285,   285,   399,   379,    62,   162,    32,   372,   359,   187,
     270,   373,   179,   314,   372,   259,   259,   366,    72,    27,
     182,   262,   265,    93,    94,    95,   265,   163,   126,   165,
       8,   370,   369,   172,    72,   120,   103,   230,   366,   282,
     415,   405,   404,    14,   165,   165,   163,   203,   160,   372,
     213,   207,   156,   223,   372,   216,   258,   207,   160,    62,
     125,   317,   318,   319,   381,    32,   325,   377,   172,   257,
     162,     8,   290,   282,   160,     8,    32,    74,   334,   327,
     383,   384,   385,   386,   397,   372,   375,   360,   275,    67,
      68,   277,   161,    84,   161,   258,   258,    14,   179,    93,
     161,   372,    27,   161,   268,   163,   366,   366,   160,   159,
     202,   160,   403,   372,   163,    76,   151,   215,   372,    27,
     372,   314,   154,   259,   154,   161,   397,   398,   381,    62,
     320,   375,   290,   355,   100,   106,   109,   110,   111,   112,
     113,   114,   115,   163,   291,   294,   307,   308,   309,   310,
     312,   160,   106,   343,   284,    74,    14,   372,   364,    62,
      62,   285,   380,   165,   163,   125,   361,    67,    68,   280,
     373,   182,   161,   193,   160,   160,   366,    90,   161,   268,
     267,   126,   231,   104,   235,   343,   160,   222,   208,   160,
     161,   228,   258,   219,   165,   382,   397,   317,   163,    72,
     295,   355,   292,   342,   310,     8,   161,   162,   159,   162,
      32,    74,    14,   366,   397,   397,   381,   398,   373,    27,
      69,   271,   314,   199,   197,   161,   266,   179,   366,   355,
     236,   162,   272,   372,   154,   224,   203,   160,   203,   386,
     165,    14,     8,   161,   162,   296,    74,   311,   246,    72,
     179,    32,    74,   344,   179,    74,    14,   366,   165,   165,
      27,   179,   161,   182,   160,    27,   182,   261,   261,   179,
     232,   162,   179,    67,    68,   278,   226,   314,   151,   154,
     151,   366,   355,    72,   297,   298,   299,   300,   302,   303,
     304,   355,    14,     8,   161,    72,    14,   163,    74,     8,
     160,   163,    14,   366,   276,   194,   179,    74,   179,   163,
     372,    66,   154,    47,   279,   203,   160,   229,   217,   220,
     163,   299,   161,    91,   107,   161,   146,   366,    74,   293,
     366,    32,    74,   366,   179,    27,   182,   260,    88,   160,
     163,   154,   372,   203,    66,   151,   154,    68,   281,   203,
     281,   305,   310,   301,   355,    72,    14,   159,    74,   179,
     161,   233,   273,   154,   151,   154,   227,   225,   154,    47,
     151,    47,    72,     8,   366,   282,    86,   162,   203,   274,
     281,   203,   203,    85,   218,    87,   355,   160,   161,   179,
     151,   203,    47,   151,   151,   154,   281,   154,   161,   162,
     306,   163,   151,    85,    47,    47,   179,   234,   154,    85,
      87,   163,   103,   237,   238,   239,   154,   154,   159,   239,
     355,   240,    74,   160,   241,   162,   179,   163
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
#line 233 "Zend55/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 237 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 237 "Zend55/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 242 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 243 "Zend55/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 247 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 248 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 249 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 250 "Zend55/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 251 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 252 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 253 "Zend55/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 254 "Zend55/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 255 "Zend55/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 256 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 257 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 258 "Zend55/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 267 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 268 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 269 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 270 "Zend55/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 274 "Zend55/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 275 "Zend55/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 279 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 279 "Zend55/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 289 "Zend55/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 294 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 295 "Zend55/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 300 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 300 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 300 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 301 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 301 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 301 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 302 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 302 "Zend55/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 302 "Zend55/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 303 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 303 "Zend55/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 303 "Zend55/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 307 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 309 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 311 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 312 "Zend55/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 313 "Zend55/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 313 "Zend55/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 314 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 315 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 316 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 317 "Zend55/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 318 "Zend55/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 319 "Zend55/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 320 "Zend55/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 321 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 325 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 326 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 329 "Zend55/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 330 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 331 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 333 "Zend55/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 334 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 335 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 336 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 336 "Zend55/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 338 "Zend55/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 339 "Zend55/zend_language_parser.y"
    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 340 "Zend55/zend_language_parser.y"
    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 341 "Zend55/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 342 "Zend55/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 347 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 352 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 353 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 354 "Zend55/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 355 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 356 "Zend55/zend_language_parser.y"
    { (yyvsp[(2) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 357 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 362 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 363 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 363 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 367 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 368 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 372 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 374 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 378 "Zend55/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 378 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 379 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 379 "Zend55/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 380 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 381 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 385 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 386 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 387 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 394 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 396 "Zend55/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 403 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 408 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 409 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 410 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 412 "Zend55/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 416 "Zend55/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 418 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 419 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 420 "Zend55/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 421 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 423 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 424 "Zend55/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 425 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 427 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 430 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 432 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 435 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 436 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 437 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 439 "Zend55/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 442 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 443 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 444 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 446 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 447 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 448 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 452 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 453 "Zend55/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 454 "Zend55/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 455 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 456 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 457 "Zend55/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 460 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 461 "Zend55/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 461 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 465 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 466 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 470 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 471 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 475 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 475 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 475 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 484 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 488 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 492 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 496 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 497 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 502 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 504 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 509 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 513 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 515 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 519 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 524 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 525 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 526 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 527 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 531 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 532 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 536 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 550 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 551 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 555 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 556 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 560 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 561 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 585 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 586 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 591 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 592 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 593 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 594 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 599 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 600 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 600 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 601 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 601 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 620 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 620 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 625 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 625 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 626 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 626 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 631 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 631 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 666 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 667 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 668 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 669 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 670 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 671 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 672 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 673 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 678 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 679 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 680 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 681 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 686 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 687 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 688 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 693 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 694 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 695 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 696 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 697 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 698 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 702 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 703 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 708 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 709 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 710 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 715 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 716 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 717 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 718 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 730 "Zend55/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 733 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 735 "Zend55/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 743 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 744 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 768 "Zend55/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 772 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 773 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 777 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 778 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 782 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 786 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 787 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 791 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 792 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 796 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 797 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 801 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 802 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 806 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 807 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 811 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 812 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 816 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 817 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 818 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 819 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 820 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 821 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 825 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 826 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 827 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 828 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 832 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 833 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 837 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 838 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 843 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 844 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 848 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 848 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 849 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 853 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 854 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 858 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 859 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 863 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 863 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 864 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 865 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 869 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 870 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 871 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 875 "Zend55/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 875 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 879 "Zend55/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 879 "Zend55/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 880 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 881 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 882 "Zend55/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 882 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 883 "Zend55/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 884 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 885 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 886 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 887 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 888 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 889 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 890 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 891 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 892 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 893 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 894 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 895 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 896 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 897 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 898 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 899 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 899 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 900 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 900 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 901 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 901 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 902 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 902 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 903 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 906 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 907 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 908 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 909 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 910 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 911 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 912 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 913 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 914 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 915 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 916 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 917 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 918 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 919 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 920 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 921 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 922 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 923 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 924 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 925 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 926 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 927 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 928 "Zend55/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 929 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 930 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 931 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 931 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 932 "Zend55/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 933 "Zend55/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 934 "Zend55/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 935 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 936 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 937 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 938 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 939 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 940 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 941 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 942 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 943 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 944 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 945 "Zend55/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 946 "Zend55/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 946 "Zend55/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 947 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 948 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 949 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 950 "Zend55/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 951 "Zend55/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 952 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 953 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 955 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 956 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 958 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 962 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 963 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 964 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 965 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 969 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 970 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 971 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 974 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 975 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 978 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 987 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 988 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 989 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 990 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 994 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 995 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 996 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 997 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 998 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 999 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1000 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1001 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1002 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1003 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1004 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1005 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1006 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1007 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1008 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1009 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1013 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1014 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1015 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1016 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1020 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1021 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1022 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1028 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1029 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1034 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1035 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1036 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1037 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1048 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1052 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1053 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1054 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1058 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1059 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1060 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1065 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1066 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1071 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1072 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1073 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1074 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1075 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1076 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1077 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1078 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1079 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1080 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1081 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1082 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1087 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1088 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1089 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1090 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1091 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1092 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1093 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1094 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1095 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1096 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1097 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1101 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1105 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1106 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1107 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1108 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1109 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1110 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1111 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1112 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1113 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1114 "Zend55/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1119 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1120 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1129 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1130 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1131 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1132 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1136 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1137 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1141 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1142 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1147 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1152 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1157 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1162 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1163 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1164 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1165 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1169 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1170 "Zend55/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1175 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1175 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1179 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1180 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1184 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1185 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1189 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1190 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1191 "Zend55/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1195 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1196 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1200 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1201 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1206 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1210 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1211 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1212 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1216 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1217 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1218 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1223 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1224 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1225 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1229 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1230 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1234 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1235 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1236 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1241 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1242 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1246 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1247 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1252 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1253 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1253 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1257 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1258 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1259 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1263 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1264 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1268 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1269 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1279 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1280 "Zend55/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1280 "Zend55/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1281 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1286 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1287 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1291 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1292 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1293 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1294 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1295 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1296 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1297 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1298 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1302 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1303 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1304 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1305 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1311 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1312 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1312 "Zend55/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1313 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1314 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1315 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1316 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1321 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 1322 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 1323 "Zend55/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 1328 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 1329 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 1330 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 597:
/* Line 1787 of yacc.c  */
#line 1331 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 598:
/* Line 1787 of yacc.c  */
#line 1332 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 599:
/* Line 1787 of yacc.c  */
#line 1333 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 600:
/* Line 1787 of yacc.c  */
#line 1334 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 601:
/* Line 1787 of yacc.c  */
#line 1335 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 602:
/* Line 1787 of yacc.c  */
#line 1339 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 1340 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 1340 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 1344 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 1345 "Zend55/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 1349 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 608:
/* Line 1787 of yacc.c  */
#line 1350 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 609:
/* Line 1787 of yacc.c  */
#line 1354 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 610:
/* Line 1787 of yacc.c  */
#line 1358 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7246 "Zend55/zend_language_parser.c"
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
#line 1361 "Zend55/zend_language_parser.y"


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
