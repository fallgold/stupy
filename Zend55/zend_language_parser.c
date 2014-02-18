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
#define YYLAST   6677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  168
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  607
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1165

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
     323,   325,   330,   331,   336,   337,   343,   345,   348,   352,
     356,   361,   365,   369,   375,   379,   384,   385,   386,   387,
     406,   407,   408,   424,   425,   426,   438,   439,   440,   441,
     460,   461,   462,   480,   481,   482,   498,   499,   500,   501,
     502,   503,   517,   518,   519,   525,   527,   528,   530,   533,
     534,   535,   546,   548,   552,   554,   556,   558,   559,   561,
     562,   573,   574,   583,   584,   592,   594,   597,   599,   602,
     603,   606,   608,   609,   612,   613,   616,   618,   622,   623,
     626,   628,   631,   633,   638,   640,   645,   647,   652,   656,
     662,   666,   671,   676,   682,   683,   684,   691,   692,   698,
     700,   702,   704,   709,   710,   711,   717,   718,   719,   727,
     728,   737,   738,   739,   746,   747,   750,   751,   756,   760,
     761,   765,   766,   771,   773,   774,   777,   781,   787,   792,
     797,   803,   811,   818,   819,   821,   823,   825,   828,   832,
     836,   838,   840,   843,   847,   851,   856,   860,   862,   864,
     867,   872,   876,   882,   884,   888,   891,   892,   893,   898,
     901,   903,   904,   914,   918,   920,   924,   926,   930,   931,
     933,   935,   938,   941,   944,   948,   950,   954,   956,   958,
     962,   967,   971,   972,   974,   976,   980,   982,   984,   985,
     987,   989,   992,   994,   996,   998,  1000,  1002,  1004,  1008,
    1014,  1016,  1020,  1026,  1031,  1035,  1037,  1038,  1040,  1041,
    1046,  1048,  1051,  1053,  1058,  1062,  1063,  1067,  1069,  1071,
    1072,  1073,  1076,  1077,  1082,  1083,  1091,  1095,  1100,  1101,
    1109,  1112,  1116,  1120,  1124,  1128,  1132,  1136,  1140,  1144,
    1148,  1152,  1156,  1159,  1162,  1165,  1168,  1169,  1174,  1175,
    1180,  1181,  1186,  1187,  1192,  1196,  1200,  1204,  1208,  1212,
    1216,  1220,  1224,  1228,  1232,  1236,  1239,  1242,  1245,  1248,
    1252,  1256,  1260,  1264,  1268,  1272,  1276,  1280,  1284,  1286,
    1288,  1289,  1295,  1296,  1297,  1305,  1306,  1312,  1314,  1317,
    1320,  1323,  1326,  1329,  1332,  1335,  1338,  1339,  1343,  1345,
    1347,  1349,  1353,  1356,  1358,  1359,  1370,  1371,  1383,  1386,
    1389,  1394,  1399,  1404,  1409,  1414,  1419,  1423,  1425,  1426,
    1431,  1435,  1440,  1442,  1445,  1446,  1450,  1451,  1457,  1458,
    1463,  1464,  1470,  1471,  1477,  1478,  1484,  1485,  1491,  1492,
    1496,  1498,  1500,  1504,  1507,  1509,  1513,  1516,  1518,  1520,
    1521,  1522,  1529,  1531,  1534,  1535,  1538,  1539,  1542,  1544,
    1545,  1547,  1549,  1550,  1552,  1554,  1556,  1558,  1560,  1562,
    1564,  1566,  1568,  1570,  1572,  1576,  1579,  1581,  1583,  1585,
    1589,  1592,  1595,  1598,  1603,  1607,  1609,  1611,  1615,  1617,
    1619,  1621,  1623,  1627,  1630,  1632,  1636,  1640,  1642,  1643,
    1646,  1647,  1649,  1655,  1659,  1663,  1665,  1667,  1669,  1673,
    1677,  1679,  1681,  1683,  1684,  1685,  1693,  1695,  1698,  1699,
    1700,  1705,  1710,  1715,  1716,  1719,  1721,  1723,  1724,  1726,
    1729,  1733,  1737,  1739,  1744,  1745,  1751,  1753,  1755,  1757,
    1759,  1762,  1764,  1766,  1769,  1774,  1779,  1781,  1783,  1788,
    1789,  1791,  1793,  1794,  1797,  1802,  1807,  1809,  1811,  1815,
    1817,  1820,  1824,  1826,  1828,  1829,  1835,  1836,  1837,  1840,
    1846,  1850,  1854,  1856,  1863,  1868,  1873,  1876,  1879,  1882,
    1884,  1887,  1889,  1890,  1896,  1900,  1904,  1911,  1915,  1917,
    1919,  1921,  1926,  1931,  1936,  1939,  1942,  1947,  1950,  1953,
    1955,  1956,  1961,  1963,  1965,  1969,  1973,  1977
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     169,     0,    -1,   170,    -1,    -1,   170,   171,   173,    -1,
      -1,    72,    -1,   172,   150,    72,    -1,   182,    -1,   243,
      -1,   244,    -1,   119,   159,   160,   161,    -1,   147,   172,
     161,    -1,    -1,   147,   172,   162,   174,   170,   163,    -1,
      -1,   147,   162,   175,   170,   163,    -1,   106,   176,   161,
      -1,   178,   161,    -1,   214,    -1,   176,     8,   177,    -1,
     177,    -1,   172,    -1,   172,    91,    72,    -1,   150,   172,
      -1,   150,   172,    91,    72,    -1,   178,     8,    72,    14,
     365,    -1,   100,    72,    14,   365,    -1,    -1,   179,   180,
     181,    -1,    -1,   182,    -1,   214,    -1,   243,    -1,   244,
      -1,   119,   159,   160,   161,    -1,   183,    -1,    72,    27,
      -1,   162,   179,   163,    -1,    -1,    -1,    66,   372,   184,
     182,   185,   269,   276,    -1,    -1,    -1,    66,   372,    27,
     186,   179,   187,   274,   279,    69,   161,    -1,    -1,    -1,
      83,   188,   372,   189,   268,    -1,    -1,    -1,    82,   190,
     182,    83,   191,   372,   161,    -1,    -1,    -1,    -1,    85,
     159,   313,   161,   192,   313,   161,   193,   313,   160,   194,
     259,    -1,    -1,    92,   372,   195,   263,    -1,    96,   161,
      -1,    96,   371,   161,    -1,    97,   161,    -1,    97,   371,
     161,    -1,   101,   161,    -1,   101,   324,   161,    -1,   101,
     376,   161,    -1,   338,   161,    -1,   108,   286,   161,    -1,
     114,   288,   161,    -1,    81,   312,   161,    -1,    76,    -1,
     371,   161,    -1,   116,   159,   241,   160,   161,    -1,    -1,
      -1,    87,   159,   376,    91,   196,   258,   257,   160,   197,
     260,    -1,    -1,    -1,    87,   159,   324,    91,   198,   258,
     257,   160,   199,   260,    -1,    -1,    89,   200,   159,   262,
     160,   261,    -1,   161,    -1,    -1,    -1,   102,   201,   162,
     179,   163,   229,   202,   234,    -1,   105,   371,   161,    -1,
      98,    72,   161,    -1,   203,   214,    -1,   203,    76,    -1,
      -1,   373,    -1,   373,   161,    -1,    -1,    80,    30,    72,
     205,   207,    -1,    -1,   204,    30,    72,   206,   207,    -1,
      -1,    -1,   207,    27,   208,   371,    -1,    72,    -1,    80,
      -1,   393,    -1,   364,    -1,   128,   159,   405,   160,    -1,
      -1,   209,    14,   212,   371,    -1,    -1,   211,   209,    14,
     213,   371,    -1,   210,    -1,   211,   210,    -1,   151,   204,
     154,    -1,   151,   324,   154,    -1,   151,   324,   161,   154,
      -1,   153,   179,   154,    -1,   158,   371,   154,    -1,   158,
     155,    14,   371,   154,    -1,   157,    80,   154,    -1,   151,
      72,   211,   154,    -1,    -1,    -1,    -1,   151,    87,   159,
     371,    91,   215,   258,   257,   160,   154,   216,   203,   151,
     217,   280,    47,    87,   154,    -1,    -1,    -1,   151,    87,
     371,    91,   258,   257,   154,   218,   203,   151,   219,   280,
      47,    87,   154,    -1,    -1,    -1,   151,    66,   371,   154,
     220,   203,   151,   221,   271,   277,   278,    -1,    -1,    -1,
      -1,   151,    85,   159,   313,   161,   222,   313,   161,   223,
     313,   160,   154,   224,   203,   151,    47,    85,   154,    -1,
      -1,    -1,   151,    85,   159,   258,   257,   156,   371,   160,
     154,   225,   203,   151,   226,   280,    47,    85,   154,    -1,
      -1,    -1,   151,    85,   258,   257,   156,   371,   154,   227,
     203,   151,   228,   280,    47,    85,   154,    -1,    -1,    -1,
      -1,    -1,    -1,   103,   159,   230,   354,   231,    74,   160,
     232,   162,   179,   163,   233,   236,    -1,    -1,    -1,   104,
     235,   162,   179,   163,    -1,   237,    -1,    -1,   238,    -1,
     237,   238,    -1,    -1,    -1,   103,   159,   354,   239,    74,
     160,   240,   162,   179,   163,    -1,   242,    -1,   241,     8,
     242,    -1,   376,    -1,   246,    -1,   248,    -1,    -1,    32,
      -1,    -1,   341,   245,    72,   247,   159,   281,   160,   162,
     179,   163,    -1,    -1,   251,    72,   252,   249,   255,   162,
     289,   163,    -1,    -1,   253,    72,   250,   254,   162,   289,
     163,    -1,   120,    -1,   113,   120,    -1,   121,    -1,   112,
     120,    -1,    -1,   123,   354,    -1,   122,    -1,    -1,   123,
     256,    -1,    -1,   124,   256,    -1,   354,    -1,   256,     8,
     354,    -1,    -1,   126,   258,    -1,   376,    -1,    32,   376,
      -1,   182,    -1,    27,   179,    86,   161,    -1,   182,    -1,
      27,   179,    88,   161,    -1,   182,    -1,    27,   179,    90,
     161,    -1,    72,    14,   365,    -1,   262,     8,    72,    14,
     365,    -1,   162,   264,   163,    -1,   162,   161,   264,   163,
      -1,    27,   264,    93,   161,    -1,    27,   161,   264,    93,
     161,    -1,    -1,    -1,   264,    94,   371,   267,   265,   179,
      -1,    -1,   264,    95,   267,   266,   179,    -1,    27,    -1,
     161,    -1,   182,    -1,    27,   179,    84,   161,    -1,    -1,
      -1,   269,    67,   372,   270,   182,    -1,    -1,    -1,   271,
      67,   371,   154,   272,   203,   151,    -1,    -1,   271,    68,
      66,   371,   154,   273,   203,   151,    -1,    -1,    -1,   274,
      67,   372,    27,   275,   179,    -1,    -1,    68,   182,    -1,
      -1,    68,   154,   203,   151,    -1,    47,    66,   154,    -1,
      -1,    68,    27,   179,    -1,    -1,    68,   154,   203,   151,
      -1,   282,    -1,    -1,   283,    74,    -1,   283,    32,    74,
      -1,   283,    32,    74,    14,   365,    -1,   283,    74,    14,
     365,    -1,   282,     8,   283,    74,    -1,   282,     8,   283,
      32,    74,    -1,   282,     8,   283,    32,    74,    14,   365,
      -1,   282,     8,   283,    74,    14,   365,    -1,    -1,   128,
      -1,   129,    -1,   354,    -1,   159,   160,    -1,   159,   285,
     160,    -1,   159,   338,   160,    -1,   324,    -1,   376,    -1,
      32,   374,    -1,   285,     8,   324,    -1,   285,     8,   376,
      -1,   285,     8,    32,   374,    -1,   286,     8,   287,    -1,
     287,    -1,    74,    -1,   164,   373,    -1,   164,   162,   371,
     163,    -1,   288,     8,    74,    -1,   288,     8,    74,    14,
     365,    -1,    74,    -1,    74,    14,   365,    -1,   289,   290,
      -1,    -1,    -1,   306,   291,   310,   161,    -1,   311,   161,
      -1,   293,    -1,    -1,   307,   341,   245,    72,   292,   159,
     281,   160,   305,    -1,   106,   294,   295,    -1,   354,    -1,
     294,     8,   354,    -1,   161,    -1,   162,   296,   163,    -1,
      -1,   297,    -1,   298,    -1,   297,   298,    -1,   299,   161,
      -1,   303,   161,    -1,   302,   107,   300,    -1,   354,    -1,
     300,     8,   354,    -1,    72,    -1,   302,    -1,   354,   146,
      72,    -1,   301,    91,   304,    72,    -1,   301,    91,   309,
      -1,    -1,   309,    -1,   161,    -1,   162,   179,   163,    -1,
     308,    -1,   115,    -1,    -1,   308,    -1,   309,    -1,   308,
     309,    -1,   109,    -1,   110,    -1,   111,    -1,   114,    -1,
     113,    -1,   112,    -1,   310,     8,    74,    -1,   310,     8,
      74,    14,   365,    -1,    74,    -1,    74,    14,   365,    -1,
     311,     8,    72,    14,   365,    -1,   100,    72,    14,   365,
      -1,   312,     8,   371,    -1,   371,    -1,    -1,   314,    -1,
      -1,   314,     8,   315,   371,    -1,   371,    -1,   316,   380,
      -1,   380,    -1,   317,    62,   396,   165,    -1,    62,   396,
     165,    -1,    -1,   317,   319,   316,    -1,   317,    -1,   316,
      -1,    -1,    -1,   321,   318,    -1,    -1,    64,   355,   323,
     363,    -1,    -1,   127,   159,   325,   402,   160,    14,   371,
      -1,   376,    14,   371,    -1,   376,    14,    32,   376,    -1,
      -1,   376,    14,    32,    64,   355,   326,   363,    -1,    63,
     371,    -1,   376,    25,   371,    -1,   376,    24,   371,    -1,
     376,    23,   371,    -1,   376,    22,   371,    -1,   376,    21,
     371,    -1,   376,    20,   371,    -1,   376,    19,   371,    -1,
     376,    18,   371,    -1,   376,    17,   371,    -1,   376,    16,
     371,    -1,   376,    15,   371,    -1,   375,    61,    -1,    61,
     375,    -1,   375,    60,    -1,    60,   375,    -1,    -1,   371,
      28,   327,   371,    -1,    -1,   371,    29,   328,   371,    -1,
      -1,   371,     9,   329,   371,    -1,    -1,   371,    11,   330,
     371,    -1,   371,    10,   371,    -1,   371,    32,   371,    -1,
     371,    31,   371,    -1,   371,    45,   371,    -1,   371,    43,
     371,    -1,   371,    44,   371,    -1,   371,    46,   371,    -1,
     371,    47,   371,    -1,   371,    48,   371,    -1,   371,    42,
     371,    -1,   371,    41,   371,    -1,    43,   371,    -1,    44,
     371,    -1,    49,   371,    -1,    51,   371,    -1,   371,    34,
     371,    -1,   371,    33,   371,    -1,   371,    36,   371,    -1,
     371,    35,   371,    -1,   371,    37,   371,    -1,   371,    40,
     371,    -1,   371,    38,   371,    -1,   371,    39,   371,    -1,
     371,    50,   355,    -1,   372,    -1,   322,    -1,    -1,   159,
     322,   160,   331,   320,    -1,    -1,    -1,   371,    26,   332,
     371,    27,   333,   371,    -1,    -1,   371,    26,    27,   334,
     371,    -1,   411,    -1,    59,   371,    -1,    58,   371,    -1,
      57,   371,    -1,    56,   371,    -1,    55,   371,    -1,    54,
     371,    -1,    53,   371,    -1,    65,   361,    -1,    -1,    52,
     335,   371,    -1,   367,    -1,   339,    -1,   340,    -1,   166,
     362,   166,    -1,    12,   371,    -1,    13,    -1,    -1,   341,
     245,   336,   159,   281,   160,   342,   162,   179,   163,    -1,
      -1,   114,   341,   245,   337,   159,   281,   160,   342,   162,
     179,   163,    -1,    13,   324,    -1,    13,   376,    -1,    13,
     371,   126,   324,    -1,    13,   371,   126,   376,    -1,   340,
      62,   396,   165,    -1,   339,    62,   396,   165,    -1,    80,
      62,   396,   165,    -1,   128,   159,   405,   160,    -1,    62,
     405,   165,    -1,    99,    -1,    -1,   106,   159,   343,   160,
      -1,   343,     8,    74,    -1,   343,     8,    32,    74,    -1,
      74,    -1,    32,    74,    -1,    -1,   172,   345,   284,    -1,
      -1,   147,   150,   172,   346,   284,    -1,    -1,   150,   172,
     347,   284,    -1,    -1,   353,   146,   400,   348,   284,    -1,
      -1,   353,   146,   386,   349,   284,    -1,    -1,   388,   146,
     400,   350,   284,    -1,    -1,   388,   146,   386,   351,   284,
      -1,    -1,   386,   352,   284,    -1,   114,    -1,   172,    -1,
     147,   150,   172,    -1,   150,   172,    -1,   172,    -1,   147,
     150,   172,    -1,   150,   172,    -1,   353,    -1,   356,    -1,
      -1,    -1,   392,   125,   357,   397,   358,   359,    -1,   392,
      -1,   359,   360,    -1,    -1,   125,   397,    -1,    -1,   159,
     160,    -1,   372,    -1,    -1,    79,    -1,   407,    -1,    -1,
     284,    -1,    70,    -1,    71,    -1,    80,    -1,   134,    -1,
     135,    -1,   149,    -1,   131,    -1,   132,    -1,   133,    -1,
     148,    -1,   142,    79,   143,    -1,   142,   143,    -1,   364,
      -1,   416,    -1,   172,    -1,   147,   150,   172,    -1,   150,
     172,    -1,    43,   365,    -1,    44,   365,    -1,   128,   159,
     368,   160,    -1,    62,   368,   165,    -1,   366,    -1,   130,
      -1,   353,   146,    72,    -1,    73,    -1,   417,    -1,   415,
      -1,   172,    -1,   147,   150,   172,    -1,   150,   172,    -1,
     364,    -1,   167,   407,   167,    -1,   142,   407,   143,    -1,
     130,    -1,    -1,   370,   369,    -1,    -1,     8,    -1,   370,
       8,   365,   126,   365,    -1,   370,     8,   365,    -1,   365,
     126,   365,    -1,   365,    -1,   373,    -1,   324,    -1,   159,
     371,   160,    -1,   159,   338,   160,    -1,   376,    -1,   376,
      -1,   376,    -1,    -1,    -1,   391,   125,   377,   397,   378,
     385,   379,    -1,   391,    -1,   379,   380,    -1,    -1,    -1,
     125,   397,   381,   385,    -1,   382,    62,   396,   165,    -1,
     383,    62,   396,   165,    -1,    -1,   384,   284,    -1,   383,
      -1,   382,    -1,    -1,   394,    -1,   401,   394,    -1,   353,
     146,   386,    -1,   388,   146,   386,    -1,   394,    -1,   389,
      62,   396,   165,    -1,    -1,   344,   390,    62,   396,   165,
      -1,   392,    -1,   389,    -1,   344,    -1,   394,    -1,   401,
     394,    -1,   387,    -1,   394,    -1,   401,   394,    -1,   394,
      62,   396,   165,    -1,   394,   162,   371,   163,    -1,   395,
      -1,    74,    -1,   164,   162,   371,   163,    -1,    -1,   371,
      -1,   399,    -1,    -1,   386,   398,    -1,   399,    62,   396,
     165,    -1,   399,   162,   371,   163,    -1,   400,    -1,    72,
      -1,   162,   371,   163,    -1,   164,    -1,   401,   164,    -1,
     402,     8,   403,    -1,   403,    -1,   376,    -1,    -1,   127,
     159,   404,   402,   160,    -1,    -1,    -1,   406,   369,    -1,
     406,     8,   371,   126,   371,    -1,   406,     8,   371,    -1,
     371,   126,   371,    -1,   371,    -1,   406,     8,   371,   126,
      32,   374,    -1,   406,     8,    32,   374,    -1,   371,   126,
      32,   374,    -1,    32,   374,    -1,   407,   408,    -1,   407,
      79,    -1,   408,    -1,    79,   408,    -1,    74,    -1,    -1,
      74,    62,   409,   410,   165,    -1,    74,   125,    72,    -1,
     144,   371,   163,    -1,   144,    73,    62,   371,   165,   163,
      -1,   145,   376,   163,    -1,    72,    -1,    75,    -1,    74,
      -1,   117,   159,   412,   160,    -1,   118,   159,   376,   160,
      -1,   118,   159,   324,   160,    -1,     7,   371,    -1,     6,
     371,    -1,     5,   159,   371,   160,    -1,     4,   371,    -1,
       3,   371,    -1,   414,    -1,    -1,   412,     8,   413,   414,
      -1,   376,    -1,   324,    -1,   353,   146,    72,    -1,   388,
     146,    72,    -1,   353,   146,   120,    -1,   353,   146,   120,
      -1
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
     373,   374,   378,   378,   379,   379,   380,   381,   388,   390,
     397,   402,   403,   404,   406,   410,   412,   413,   414,   412,
     417,   418,   416,   421,   424,   421,   429,   430,   431,   428,
     436,   437,   435,   440,   441,   439,   446,   447,   448,   449,
     450,   447,   454,   455,   455,   459,   460,   464,   465,   469,
     469,   469,   473,   474,   478,   482,   486,   490,   491,   496,
     496,   503,   502,   509,   508,   518,   519,   520,   521,   525,
     526,   530,   533,   535,   538,   540,   544,   545,   549,   550,
     554,   555,   561,   562,   567,   568,   573,   574,   579,   580,
     585,   586,   587,   588,   593,   594,   594,   595,   595,   600,
     601,   606,   607,   612,   614,   614,   617,   619,   619,   620,
     620,   623,   625,   625,   629,   631,   634,   636,   640,   643,
     645,   648,   650,   654,   655,   660,   661,   662,   663,   664,
     665,   666,   667,   672,   673,   674,   675,   680,   681,   682,
     687,   688,   689,   690,   691,   692,   696,   697,   702,   703,
     704,   709,   710,   711,   712,   718,   719,   724,   724,   725,
     726,   727,   727,   733,   737,   738,   742,   743,   746,   748,
     752,   753,   757,   758,   762,   766,   767,   771,   772,   776,
     780,   781,   785,   786,   790,   791,   795,   796,   800,   801,
     805,   806,   810,   811,   812,   813,   814,   815,   819,   820,
     821,   822,   826,   827,   831,   832,   837,   838,   842,   842,
     843,   847,   848,   852,   853,   857,   857,   858,   859,   863,
     864,   864,   869,   869,   873,   873,   874,   875,   876,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   893,   894,   894,
     895,   895,   896,   896,   897,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   925,   926,   927,   926,   929,   929,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   940,   941,   942,
     943,   944,   945,   946,   947,   947,   950,   950,   956,   957,
     958,   959,   963,   964,   965,   968,   969,   972,   975,   977,
     981,   982,   983,   984,   988,   988,   990,   990,   992,   992,
     994,   994,   996,   996,   998,   998,  1000,  1000,  1002,  1002,
    1007,  1008,  1009,  1010,  1014,  1015,  1016,  1022,  1023,  1028,
    1029,  1028,  1031,  1036,  1037,  1042,  1046,  1047,  1048,  1052,
    1053,  1054,  1059,  1060,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1075,  1076,  1081,  1082,  1083,  1084,
    1085,  1086,  1087,  1088,  1089,  1090,  1091,  1095,  1099,  1100,
    1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1113,  1114,
    1117,  1119,  1123,  1124,  1125,  1126,  1130,  1131,  1135,  1136,
    1141,  1146,  1151,  1156,  1157,  1156,  1159,  1163,  1164,  1169,
    1169,  1173,  1174,  1178,  1178,  1183,  1184,  1185,  1189,  1190,
    1194,  1195,  1200,  1204,  1205,  1205,  1210,  1211,  1212,  1217,
    1218,  1219,  1223,  1224,  1228,  1229,  1230,  1235,  1236,  1240,
    1241,  1246,  1247,  1247,  1251,  1252,  1253,  1257,  1258,  1262,
    1263,  1267,  1268,  1273,  1274,  1274,  1275,  1280,  1281,  1285,
    1286,  1287,  1288,  1289,  1290,  1291,  1292,  1296,  1297,  1298,
    1299,  1305,  1306,  1306,  1307,  1308,  1309,  1310,  1315,  1316,
    1317,  1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1333,
    1334,  1334,  1338,  1339,  1343,  1344,  1348,  1352
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
  "tpl_statement", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
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
     214,   214,   214,   214,   214,   214,   215,   216,   217,   214,
     218,   219,   214,   220,   221,   214,   222,   223,   224,   214,
     225,   226,   214,   227,   228,   214,   229,   230,   231,   232,
     233,   229,   234,   235,   234,   236,   236,   237,   237,   239,
     240,   238,   241,   241,   242,   243,   244,   245,   245,   247,
     246,   249,   248,   250,   248,   251,   251,   251,   251,   252,
     252,   253,   254,   254,   255,   255,   256,   256,   257,   257,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   263,   263,   264,   265,   264,   266,   264,   267,
     267,   268,   268,   269,   270,   269,   271,   272,   271,   273,
     271,   274,   275,   274,   276,   276,   277,   277,   278,   279,
     279,   280,   280,   281,   281,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   283,   283,   283,   284,   284,   284,
     285,   285,   285,   285,   285,   285,   286,   286,   287,   287,
     287,   288,   288,   288,   288,   289,   289,   291,   290,   290,
     290,   292,   290,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   298,   298,   299,   300,   300,   301,   301,   302,
     303,   303,   304,   304,   305,   305,   306,   306,   307,   307,
     308,   308,   309,   309,   309,   309,   309,   309,   310,   310,
     310,   310,   311,   311,   312,   312,   313,   313,   315,   314,
     314,   316,   316,   317,   317,   319,   318,   318,   318,   320,
     321,   320,   323,   322,   325,   324,   324,   324,   326,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   327,   324,   328,   324,
     329,   324,   330,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     331,   324,   332,   333,   324,   334,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   335,   324,   324,   324,
     324,   324,   324,   324,   336,   324,   337,   324,   338,   338,
     338,   338,   339,   339,   339,   340,   340,   341,   342,   342,
     343,   343,   343,   343,   345,   344,   346,   344,   347,   344,
     348,   344,   349,   344,   350,   344,   351,   344,   352,   344,
     353,   353,   353,   353,   354,   354,   354,   355,   355,   357,
     358,   356,   356,   359,   359,   360,   361,   361,   361,   362,
     362,   362,   363,   363,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   368,   368,
     369,   369,   370,   370,   370,   370,   371,   371,   372,   372,
     373,   374,   375,   377,   378,   376,   376,   379,   379,   381,
     380,   382,   382,   384,   383,   385,   385,   385,   386,   386,
     387,   387,   388,   389,   390,   389,   391,   391,   391,   392,
     392,   392,   393,   393,   394,   394,   394,   395,   395,   396,
     396,   397,   398,   397,   399,   399,   399,   400,   400,   401,
     401,   402,   402,   403,   404,   403,   403,   405,   405,   406,
     406,   406,   406,   406,   406,   406,   406,   407,   407,   407,
     407,   408,   409,   408,   408,   408,   408,   408,   410,   410,
     410,   411,   411,   411,   411,   411,   411,   411,   411,   412,
     413,   412,   414,   414,   415,   415,   416,   417
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
       1,     4,     0,     4,     0,     5,     1,     2,     3,     3,
       4,     3,     3,     5,     3,     4,     0,     0,     0,    18,
       0,     0,    15,     0,     0,    11,     0,     0,     0,    18,
       0,     0,    17,     0,     0,    15,     0,     0,     0,     0,
       0,    13,     0,     0,     5,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     5,     0,     0,     7,     0,
       8,     0,     0,     6,     0,     2,     0,     4,     3,     0,
       3,     0,     4,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     2,     3,     3,
       1,     1,     2,     3,     3,     4,     3,     1,     1,     2,
       4,     3,     5,     1,     3,     2,     0,     0,     4,     2,
       1,     0,     9,     3,     1,     3,     1,     3,     0,     1,
       1,     2,     2,     2,     3,     1,     3,     1,     1,     3,
       4,     3,     0,     1,     1,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     3,     5,     4,     3,     1,     0,     1,     0,     4,
       1,     2,     1,     4,     3,     0,     3,     1,     1,     0,
       0,     2,     0,     4,     0,     7,     3,     4,     0,     7,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       0,     5,     0,     0,     7,     0,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     3,     1,     1,
       1,     3,     2,     1,     0,    10,     0,    11,     2,     2,
       4,     4,     4,     4,     4,     4,     3,     1,     0,     4,
       3,     4,     1,     2,     0,     3,     0,     5,     0,     4,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     3,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     1,     3,
       2,     2,     2,     4,     3,     1,     1,     3,     1,     1,
       1,     1,     3,     2,     1,     3,     3,     1,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     3,     3,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     0,
       4,     4,     4,     0,     2,     1,     1,     0,     1,     2,
       3,     3,     1,     4,     0,     5,     1,     1,     1,     1,
       2,     1,     1,     2,     4,     4,     1,     1,     4,     0,
       1,     1,     0,     2,     4,     4,     1,     1,     3,     1,
       2,     3,     1,     1,     0,     5,     0,     0,     2,     5,
       3,     3,     1,     6,     4,     4,     2,     2,     2,     1,
       2,     1,     0,     5,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     4,     2,     2,     4,     2,     2,     1,
       0,     4,     1,     1,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   403,     0,     0,     0,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   567,     0,     0,   456,
       0,   464,   465,     6,   488,   547,    68,   466,     0,    48,
      45,     0,     0,    77,     0,     0,     0,     0,   417,     0,
       0,    80,     0,     0,     0,     0,     0,   440,     0,     0,
       0,     0,   165,   167,   171,     0,     0,   497,   470,   471,
     472,   467,   468,     0,     0,   473,   469,     0,     0,    30,
       0,     0,     0,    79,    30,   559,   459,     0,   491,     4,
       0,     8,    36,    19,     9,    10,   155,   156,     0,     0,
     379,   507,     0,   399,   400,   157,   538,     0,   494,   398,
       0,   378,   506,     0,   510,   438,   541,     0,   537,   516,
     536,   539,   546,     0,   387,   490,   489,   403,     6,   440,
       0,   157,   598,   597,     0,   595,   594,   402,   507,     0,
     510,   365,   366,   367,   368,     0,   394,   393,   392,   391,
     390,   389,   388,   440,     0,     0,   424,     0,   345,   512,
       0,   343,     0,   572,     0,   500,   330,     0,     0,   441,
     447,   322,   448,     0,   452,   539,     0,     0,   395,   458,
       0,    39,    37,   549,     0,   305,     0,     0,   306,     0,
       0,    55,    57,     0,    59,     0,     0,     0,    61,   507,
       0,   510,     0,     0,     0,    22,     0,    21,   248,     0,
       0,   247,   168,   166,   253,     0,   157,     0,     0,     0,
       0,   324,   567,   581,     0,   475,     0,     0,     0,   579,
       0,    15,     0,   493,     0,     6,   466,     0,     0,     0,
     507,   506,    28,     0,     0,     0,   379,     0,     0,    28,
       0,   460,     0,   461,     0,     0,     0,     0,     0,    18,
     169,   163,    64,   549,   549,   158,   404,     0,     0,   350,
       0,   352,   382,   346,   348,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,   344,   342,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,   513,   549,     0,   560,   540,   404,     0,     0,
     397,     0,   428,     0,     0,   576,   511,     0,   416,   501,
     568,     0,   443,     0,   462,     0,   449,   540,   457,    42,
       0,   550,     0,     0,    67,     0,    46,     0,   307,   310,
     507,   510,     0,     0,    58,    60,    84,     0,    62,    63,
      30,    83,    24,     0,     0,    17,     0,   249,   510,     0,
      65,     0,     0,    66,   406,     0,   152,   154,   507,   510,
       0,   599,   507,   510,     0,   566,     0,   582,     0,   474,
     580,   488,     0,     0,   578,   496,   577,   492,     5,    12,
      13,     0,     0,    97,   466,     0,     0,     0,   106,     0,
     100,    99,   542,     0,     0,     0,   306,   178,   180,     0,
       0,     0,   108,   109,     0,    89,   111,     0,   114,     0,
     112,   380,   509,   508,    38,     0,   401,   495,     7,     0,
     425,     0,     0,   161,   172,     0,     0,   159,     0,   549,
     604,   607,     0,   530,   528,   430,     0,     0,   354,     0,
     385,     0,     0,     0,   356,   355,   370,   369,   372,   371,
     373,   375,   376,   374,   364,   363,   358,   359,   357,   360,
     361,   362,   377,     0,   326,   341,   340,   339,   338,   337,
     336,   335,   334,   333,   332,   331,   439,   605,   531,   434,
       0,     0,     0,     0,   596,   507,   510,   426,   557,     0,
     571,     0,   570,   442,   530,   463,   323,   531,     0,    30,
      40,   414,   304,    49,     0,    51,   308,    74,    71,     0,
       0,   194,   194,    56,     0,     0,   498,   466,     0,   486,
       0,     0,   478,     0,   476,    27,   485,   477,    28,     0,
      23,    20,     0,   246,   254,   251,     0,     0,     0,   600,
     591,   593,   592,    11,     0,   563,     0,   562,   415,     0,
     584,     0,   585,   587,     0,     3,     5,   429,   123,   567,
       0,   102,   115,     0,   107,   543,    90,   181,   178,     0,
     510,     0,     0,     0,     0,    92,   110,     0,    29,    31,
      32,    33,    34,     0,   319,   548,     0,   237,     0,   507,
       0,   510,     0,     0,     0,   444,   170,   174,     0,     0,
     413,   412,     0,   233,     0,     0,     0,     0,   529,   351,
     353,     0,     0,   347,   349,     0,   327,     0,     0,   533,
     552,   514,   551,   556,   544,   545,   575,   574,     0,   450,
      28,   203,     0,    30,   201,    47,   306,     0,     0,     0,
       0,     0,     0,   194,     0,   194,     0,   481,   482,   505,
       0,   500,   498,     0,   480,     0,   136,    25,   250,     0,
     233,   153,    70,     0,   564,   566,     0,   588,   590,   589,
       0,     0,   427,    16,     3,    87,     0,     0,   104,    94,
       0,   126,   179,     0,   116,   178,    94,     0,   113,   381,
       0,   242,     0,   238,   239,    26,     0,   446,     0,     0,
     173,   176,   256,   233,   234,   235,     0,   223,     0,   236,
     535,   558,   433,   431,   386,   383,   328,   437,   435,   553,
     527,   549,     0,     0,   569,   454,   211,   214,     0,    28,
       0,   309,   178,   178,   188,     0,    30,   186,    78,     0,
       0,     0,     0,     0,   190,     0,   484,   501,   499,     0,
     479,   487,   606,     0,    81,   252,     0,   601,   566,   561,
       0,   583,     0,    14,     0,   101,   103,     0,    91,     0,
     306,     0,     0,     0,    93,     0,   549,     0,   318,   317,
     321,   312,     0,   507,   510,   445,   175,   256,     0,   288,
       0,   418,   233,     0,   225,     0,   462,   526,   525,     0,
     518,     0,     0,   573,   451,   219,     0,     0,    41,    50,
       0,    52,     0,     0,     0,    28,     0,   192,     0,   199,
     200,   197,   191,   504,   503,   483,   137,   142,   418,     0,
     325,   586,    86,   124,    85,   105,    95,     0,     0,   133,
     178,   120,    35,     0,   519,   311,   549,     0,   245,   288,
     177,     0,     0,   292,   293,   294,   297,   296,   295,   287,
     164,   255,   260,   257,     0,   286,   290,     0,     0,     0,
       0,     0,   226,     0,   384,   329,   549,   549,   524,   515,
     554,   555,     0,   453,     0,     0,     0,   204,   215,   202,
     306,    75,    72,   189,     0,   193,   195,    30,     0,     0,
     143,    82,     0,   565,   206,     0,     0,   127,    87,     0,
      87,   314,   527,     0,   316,   162,     0,     0,   264,     0,
     157,   291,     0,   259,    30,     0,    30,     0,   229,     0,
     228,     0,     0,   517,   455,     0,    30,     0,     0,     0,
       0,     0,   187,    30,    28,   502,   138,     0,    30,   216,
      96,   130,   306,     0,     0,     0,   520,   313,     0,     0,
     266,   268,   263,   300,     0,     0,     0,    28,     0,   422,
       0,    28,   230,     0,   227,   521,   522,   212,    28,    44,
     205,    53,    30,   184,    76,    73,    28,     0,    30,    28,
       0,     0,     0,    87,     0,   134,   117,   121,   303,   265,
       6,     0,   269,   270,     0,     0,   278,     0,     0,     0,
       0,   258,   261,     0,   160,   423,     0,   419,   405,     0,
     232,    30,     0,    28,     0,    28,   407,     0,     0,    87,
       0,   125,     0,     0,   221,    87,   221,   267,   271,   272,
     282,     0,   273,     0,   301,   298,     0,   302,     0,   420,
     231,    28,    30,   182,    54,     0,   139,   144,   207,     0,
       0,     0,   131,   128,     0,     0,     0,     0,     0,   281,
     274,   275,   279,     0,   233,   421,    28,   185,     0,    87,
     209,   217,   218,   221,    87,    87,     0,   118,     0,   280,
       0,   299,     0,     0,    30,     0,    87,     0,     0,     0,
       0,   221,     0,   276,     0,   183,    28,   208,     0,     0,
       0,   222,   135,     0,   122,   284,    30,   262,   140,   210,
       0,     0,     0,    28,   146,   132,     0,     0,   285,     0,
     141,   145,   147,   129,   119,     0,   148,   149,     0,     0,
     150,     0,    30,    28,   151
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    88,    89,   576,   398,   206,   207,
      90,   242,   427,   598,  1003,    92,   340,   651,   519,   746,
     187,   524,   186,   652,   656,   910,  1042,   353,   659,   961,
     658,   960,   190,   202,   847,   784,   239,   699,   706,   788,
     925,   407,   408,   409,   697,   787,   854,   792,  1055,  1121,
     930,  1056,   695,   924,   790,   972,  1104,  1013,  1103,   928,
    1054,   774,   919,  1007,  1098,  1144,   921,   967,  1150,  1151,
    1152,  1158,  1161,   375,   376,    94,    95,   266,    96,   622,
      97,   617,   444,    98,   443,    99,   619,   719,   720,   592,
     417,  1074,  1004,   758,   530,   533,   664,   963,   917,   841,
     655,   747,   958,   969,  1099,  1116,   825,  1041,   828,  1012,
    1051,   906,  1085,   726,   727,   728,   515,   608,   210,   211,
     215,   809,   881,   939,  1066,   882,   937,   982,  1021,  1022,
    1023,  1024,  1090,  1025,  1026,  1027,  1088,  1137,   883,   884,
     885,   886,   984,   887,   184,   347,   348,   657,   798,   799,
     800,   867,   709,   710,   100,   334,   101,   385,   816,   462,
     463,   457,   459,   604,   461,   815,   631,   145,   448,   556,
     102,   103,   104,   131,   890,   990,   106,   257,   574,   401,
     627,   626,   638,   637,   309,   107,   729,   171,   172,   518,
     745,   824,   903,   178,   252,   516,   108,   669,   546,   109,
     670,   330,   671,   200,   111,   112,   325,   113,   114,   501,
     740,   899,   801,   932,   817,   818,   819,   820,   115,   116,
     117,   118,   267,   119,   120,   411,   121,   122,   342,   641,
     739,   642,   643,   123,   566,   567,   778,   164,   165,   228,
     229,   569,   690,   124,   380,   683,   381,   125,   547,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -992
static const yytype_int16 yypact[] =
{
    -992,    86,   129,  -992,  2089,  4882,  4882,   -83,  4882,  4882,
    4882,  4882,  4882,  4882,  4882,  4882,  -992,  4882,  4882,  4882,
    4882,  4882,  4882,  4882,   270,   270,  3286,  4882,   302,   -12,
      80,  -992,  -992,   229,  -992,  -992,  -992,   179,  4882,  -992,
    -992,   100,   102,  -992,    80,  3419,  3552,   196,  -992,   202,
    3685,  -992,  4882,    15,    68,   162,   174,   232,   126,   140,
     143,   164,  -992,  -992,  -992,   180,   203,  -992,  -992,  -992,
    -992,  -992,  -992,   278,   -27,  -992,  -992,   257,  3153,  -992,
     288,  3818,  5015,  -992,  -992,   216,    39,   210,   246,  -992,
      27,  -992,  -992,  -992,  -992,  -992,  -992,  -992,   317,   321,
    -992,  -992,   253,   333,   357,   393,   373,   294,  -992,  -992,
    5689,  -992,  -992,    55,  5463,  -992,  -992,   304,   403,   355,
    -992,   -13,  -992,    82,  -992,  -992,  -992,  -992,  -992,   395,
     332,   393,  6548,  6548,  4882,  6548,  6548,  3336,   -34,  6307,
    1250,  -992,  -992,   439,  -992,  4882,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,   366,   257,   130,   382,  -992,  -992,
     385,  -992,   270,  6349,   361,   526,  -992,   392,   257,   397,
     404,  -992,  -992,   416,   411,   -10,    82,  3951,  -992,  -992,
    5015,   539,  -992,  4882,    31,  6548,  2887,    80,  4882,  4882,
     424,  -992,  -992,  5731,  -992,  5774,   423,   577,  -992,   431,
    6548,  1683,   434,  5820,   257,   -36,    35,  -992,  -992,   401,
      38,  -992,  -992,  -992,   584,    43,   393,   270,  4882,  4882,
     444,  -992,  3286,    26,    -4,  -992,  5148,   270,   301,  -992,
     257,  -992,   -52,   457,  4882,   390,   217,   177,  5281,    18,
      64,    12,   456,   475,   592,  6053,   460,   471,  5923,   469,
    4882,   -20,   476,   412,   -20,   264,   565,   493,   571,  -992,
     524,  -992,  -992,  4882,  4882,  -992,   587,   600,   279,  -992,
    4882,  -992,   638,  -992,  -992,  4882,  4882,  4882,  4882,  4882,
    4882,  4882,  4882,  4882,  4882,  4882,  4882,  4882,  4882,  4882,
    4882,  4882,  4882,   302,  -992,  -992,  -992,  4084,  4882,  4882,
    4882,  4882,  4882,  4882,  4882,  4882,  4882,  4882,  4882,   493,
      25,  4882,  -992,  4882,  4882,   216,    -2,  -992,  5965,  4882,
    -992,   257,   146,    76,    76,  -992,  -992,  4217,  -992,  4350,
    -992,   257,   397,    84,   493,    84,  -992,     0,  -992,  -992,
    2887,  6548,   503,  4882,  -992,   586,  -992,   512,   677,  6548,
     597,  1774,   617,    14,  -992,  -992,  -992,  1907,  -992,  -992,
    -992,  -992,   136,   621,    15,  -992,  4882,  -992,  -992,    68,
    -992,  1907,   626,  -992,  -992,    19,  -992,  -992,    30,   484,
      59,  -992,   548,   886,   549,   199,   551,  -992,   640,  -992,
    -992,   651,  1504,   553,  -992,  -992,  -992,   504,  -992,  -992,
    -992,   493,  6095,  -992,   700,   559,    99,   706,  -992,  1149,
    -992,  -992,     0,    82,   659,   270,  4483,   609,  -992,  5015,
    6445,   664,  -992,  -992,   569,  -992,  -992,  2222,  -992,  4882,
    -992,  -992,  -992,  -992,  -992,  5423,  -992,  -992,  -992,  1867,
    -992,   723,    17,  -992,   622,   574,   575,  -992,   585,  4882,
     588,  -992,  4882,   590,     0,  -992,    82,  4882,  6627,  4882,
    -992,  4882,  4882,  4882,  3868,  3999,  4132,  4132,  4132,  4132,
    1917,  1917,  1917,  1917,   793,   793,   335,   335,   335,   439,
     439,   439,  -992,   292,  3336,  3336,  3336,  3336,  3336,  3336,
    3336,  3336,  3336,  3336,  3336,  3336,  -992,   588,   594,  -992,
     581,    76,   593,  5465,  -992,   269,  1608,   165,  -992,   270,
    6548,   270,  6403,   397,  -992,  -992,  -992,  -992,    76,  -992,
    -992,  -992,  6548,  -992,  2355,  -992,  -992,  -992,  -992,   741,
      60,   598,   601,  -992,  1907,  1907,  1907,  -992,   604,  -992,
     610,   257,   130,   619,  -992,  -992,  -992,  -992,   603,   695,
    -992,  -992,  5507,  -992,  -992,   755,   611,   270,   612,  -992,
    -992,  -992,  -992,  -992,   613,  -992,    61,  -992,  -992,   383,
    -992,  4882,  -992,  -992,   493,   614,  -992,  -992,  -992,  3286,
     632,  -992,  -992,   765,  -992,     0,  -992,  -992,   609,   624,
    1696,   263,   630,  5862,   263,  -992,  -992,   631,  -992,  -992,
    -992,  -992,  -992,  6137,    45,  -992,   270,  -992,    63,    69,
     620,   960,  1907,   637,   257,   397,  -992,   665,    17,   629,
    -992,  -992,   641,   458,   634,  5556,   493,   493,     0,  6589,
    3336,  4882,  6506,  3602,  3735,   302,  -992,   493,   493,  -992,
    -992,  -992,     1,  -992,  -992,  -992,  -992,  -992,  4616,  -992,
      37,  -992,    80,  -992,  -992,  -992,  4882,  4882,   263,   263,
    1907,   729,  2488,  -992,   466,  -992,   141,  -992,  -992,   678,
     646,   795,  1907,   257,   146,     2,   703,  -992,  -992,  1907,
     458,  -992,  -992,  4882,  -992,   199,   798,  -992,  -992,  -992,
     648,  1319,  -992,  -992,   652,  -992,   666,  4882,  -992,  -992,
     668,  -992,  -992,  4882,  -992,   609,  -992,   667,  -992,  -992,
     195,  -992,  4749,  -992,  -992,  -992,   257,   397,    17,   663,
     823,  -992,  -992,   458,  -992,  -992,   673,   826,    46,  -992,
    -992,  -992,  -992,  -992,  3469,  -992,  -992,  -992,  -992,  -992,
     686,  4882,  4882,   270,  6548,  -992,  -992,   380,   685,   763,
     691,  6548,   609,   609,  -992,   839,  -992,  -992,  -992,   531,
     693,  4882,    13,   159,  -992,  1907,  -992,  1907,  -992,   696,
     165,  -992,  -992,   698,  -992,  -992,   699,  -992,   199,  -992,
    4882,  -992,   697,  -992,   214,  -992,  6548,  4882,   834,  4882,
    4882,  6180,   263,   709,   834,   704,  4882,    76,   742,   200,
    -992,  -992,   270,    71,  1225,   397,   823,  -992,    17,   708,
     710,   760,   343,   799,   858,  4882,   493,   813,   814,   493,
    -992,   712,  5598,  -992,   757,   386,    80,  2887,  -992,  -992,
     719,  -992,   736,   738,  1907,   809,   751,  -992,  5640,  -992,
    -992,  -992,  -992,  -992,   796,  -992,  -992,   817,   760,    73,
    3336,  -992,  -992,  3153,  -992,  6548,  -992,  6007,   762,  -992,
     609,  -992,  -992,   759,  -992,  -992,  4882,   742,  -992,   778,
    -992,   855,    17,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,   395,   684,  -992,    53,   766,   770,
     768,    85,   917,  1907,  3469,  -992,  4882,  4882,  -992,   742,
    -992,  -992,    76,  -992,    80,   905,   864,  -992,  -992,  -992,
    4882,  -992,  -992,  -992,   773,  -992,  -992,  -992,  1907,    17,
    -992,  -992,   774,  -992,  -992,  4882,   784,  -992,  -992,   779,
    -992,  -992,   686,   775,   742,  -992,   928,    20,  -992,   870,
     393,  -992,   877,  -992,  -992,   234,  -992,   876,   937,  1907,
    -992,   787,   788,  -992,  -992,   929,  -992,   797,  2887,   800,
    2621,  2621,  -992,  -992,     8,  -992,  -992,   802,  -992,   452,
    6548,  -992,  4882,   326,   807,   421,  -992,  -992,  1907,    17,
    -992,   105,  -992,   951,    56,   894,   953,   808,   896,  -992,
      77,   825,   972,  1907,  -992,  -992,  -992,  -992,   920,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,   374,   918,  -992,   828,
    4882,   -22,   946,  -992,   835,  3153,  -992,  3153,  -992,  -992,
     903,   833,   105,  -992,   836,   908,   893,   840,   856,  1907,
     932,  -992,  -992,  1907,  -992,  -992,   240,  -992,  -992,  1907,
    -992,  -992,  2754,   915,   847,   845,  -992,  6222,  4882,  -992,
     945,  -992,   464,   859,   948,  -992,   948,  -992,  -992,  -992,
     805,    17,  -992,   947,  -992,  1003,   863,  -992,   944,  -992,
    -992,   628,  -992,  -992,  -992,   862,  -992,  -992,  -992,  6264,
     488,   872,  3153,  -992,   873,   977,   513,   981,   958,   959,
    1025,  -992,  -992,  1907,   458,  -992,   950,  -992,   878,  -992,
    -992,  3153,  -992,   948,  -992,  -992,   949,  3153,   952,  -992,
      17,  -992,   881,   882,  -992,   525,  -992,   991,   533,   564,
     888,   948,   890,  -992,   391,  -992,   885,  3153,   599,   964,
    3020,  3153,  -992,   998,  -992,  -992,  -992,  -992,  -992,  3153,
     897,   965,   966,   889,   954,  -992,   902,   906,  -992,   907,
    -992,   954,  -992,  -992,  -992,    17,  -992,  -992,   987,   904,
    -992,   900,  -992,   909,  -992
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -992,  -992,  -368,  -992,   -24,  -992,  -992,  -992,  -992,   701,
    -992,   -82,  -992,  -992,     5,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -894,  -992,  -992,  -992,   362,
    -992,   662,   669,  -992,  -992,  -992,    11,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
     -78,  -992,  -992,  -992,   517,   649,   650,  -124,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,   363,  -551,
    -394,  -992,   114,  -992,  -992,  -992,  -439,  -992,  -992,   244,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -991,  -666,  -992,   271,  -226,  -992,  -992,   715,
    -992,   280,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
      67,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
    -992,  -853,  -992,  -992,  -992,  -396,  -992,  -992,   218,  -992,
    -992,  -992,  -992,  -992,   -61,  -992,    -3,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,  -992,
     -69,  -992,  -992,    -1,   242,  -992,  -992,  -992,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,   170,  -384,  -275,  -992,  -992,
    -992,  -992,  -992,  -992,  -992,   275,   616,  -291,  -992,  -992,
     420,   422,  -992,  1156,   -19,   -72,  -485,   544,  1090,  -992,
    -992,  -992,  -765,  -992,  -992,  -992,  -992,   163,  -251,  -992,
      66,  -992,  -992,  -992,   -16,  -992,   -23,  -992,  -168,  -499,
    -992,  -992,   290,    -5,   316,   414,  -992,  -206,  -992,   494,
     479,  -992,  -992,  -992,  -992,  -992,   413,  -992,  -992,  -992
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -604
static const yytype_int16 yytable[] =
{
     156,   156,   249,   105,   169,   175,   241,   317,   138,    91,
     179,   181,   174,   247,   776,    93,   386,   453,   482,   649,
     589,   246,   588,   176,   646,   191,   647,   557,   979,   205,
     575,   440,   941,   865,   973,   258,   975,   700,  -603,   343,
     839,   531,   -88,   364,  1048,   128,   369,   199,   421,   313,
     232,   372,   313,   233,   223,   363,   216,   810,   616,   498,
     313,   942,   313,   741,  1030,  1087,   545,   559,   661,   685,
     223,   712,   453,   498,   771,   240,   134,  -240,   813,  -243,
     554,   685,   514,   496,   517,  1036,     3,   128,   387,   128,
     160,   160,   374,   666,   173,   445,   446,   497,   256,    35,
     316,  -198,  -198,  -198,   -43,   -43,   -43,  -320,   247,   399,
     400,   247,  1117,   223,   256,   295,   296,   947,   251,  1052,
     814,   711,   772,   230,   226,   227,  -408,  -408,   216,    -2,
    1133,   322,  1049,  -532,   953,   231,  -532,   367,   156,   389,
     226,   227,   208,   500,   332,   502,  -528,   177,   508,   314,
      35,   388,   314,   337,   793,  1080,    35,  -529,    35,   948,
     314,  1086,   314,   742,   613,   204,   -88,   614,   346,   865,
    -320,  -198,   422,   425,   840,   577,   532,  1020,   580,   558,
     362,   980,   981,   226,   227,   156,   350,   452,   259,    85,
    -603,   345,   344,   156,   157,   157,   365,   702,   170,   370,
     705,   832,   833,   156,   373,  1115,   397,  1089,   694,   415,
    1118,  1119,   412,   156,   943,   378,   382,  1031,   423,   560,
     662,   686,  1128,   713,   759,   424,   763,   549,   160,  -240,
     413,  -243,   209,   923,   721,   761,   762,  1037,   452,   180,
      85,   183,   225,   667,   668,   454,   315,   414,    85,   128,
     640,    35,   613,   761,   762,   614,   182,   796,   823,   188,
     750,   189,   866,   456,   752,   753,   988,   640,   196,   169,
     175,   128,  1068,    35,   197,   160,  -441,   174,   548,   183,
     256,   624,   212,   160,   223,   217,   256,   454,   176,   254,
     852,   153,  -443,   160,   213,   415,   256,   507,   864,   218,
     454,   454,   219,   160,   764,   456,   214,   513,   989,   929,
     454,  -442,   454,   153,  1069,   256,   505,   868,   456,   456,
     797,   715,   842,   220,   154,  -315,   564,   155,   456,   128,
     456,    48,   157,   542,   721,   128,   416,    35,   223,   221,
     205,    85,   128,   394,    35,   520,   154,   542,   692,   155,
     247,   450,   223,    35,   226,   227,   635,   224,   246,   173,
     736,   156,   222,    85,   128,   853,    35,    79,   243,   754,
     610,    80,    81,   696,   128,   223,    35,   153,   250,   157,
     394,   290,   291,   292,   153,   293,   412,   157,   775,   260,
     585,   156,  -441,   261,   858,   263,   256,   157,   860,   451,
     732,   733,   852,   954,   413,  -424,   153,   157,   226,   227,
     154,   737,   738,   155,   262,   128,   153,   154,   615,   264,
     155,   225,   226,   227,   870,   265,   105,    85,  1112,  -410,
    -410,   437,   599,   628,    85,  -534,   609,   650,   600,   154,
     268,   452,   155,    85,   395,   226,   227,   826,   827,   167,
     310,   160,   168,   904,   905,   687,    85,   688,   689,   156,
      31,    32,   403,   170,    35,   311,    85,  -196,  -196,  -196,
     404,   724,   725,   128,   843,    35,   844,  1015,   454,    79,
     312,   160,   230,    80,    81,   156,   223,   156,   938,   293,
     613,   394,  -602,   614,    48,   454,   456,   852,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     542,   542,   542,   456,   959,   153,   321,   674,   405,  1010,
    1011,    68,    69,    70,    71,    72,   328,   543,   323,   654,
     128,   324,   406,   156,   329,   966,   336,  -196,    75,    76,
     852,   543,   331,   913,  -512,  -512,   640,   256,   154,   160,
     333,   155,  1135,  1136,    85,   157,   226,   227,   455,   760,
     761,   762,   335,   366,   852,    85,   339,   156,   158,   161,
     156,   749,  1017,   821,    79,   160,  1014,   160,    80,    81,
     253,   255,   156,   352,   356,   157,   724,   725,   542,   852,
     717,   357,   358,   898,   615,  1019,   360,  1028,   371,   615,
     499,   852,   950,  -443,   384,   613,   429,   256,   614,   852,
     426,   169,   175,   455,   499,  1082,  -428,    79,  -224,   174,
     431,    80,    81,   160,   836,   761,   762,   965,   863,   428,
     176,   432,   434,   748,   156,   156,   542,   438,  1028,  1101,
     852,    79,   436,   441,  -602,    80,    81,   442,   542,   770,
    -442,   640,   439,   157,   256,   542,   615,   160,   994,   447,
     160,   156,   449,  -426,  1107,   460,    79,   757,   521,   523,
      80,    81,   160,   525,   835,   852,  1127,  1091,    79,   157,
     378,   157,    80,    81,  1130,   526,    79,  1018,   527,   529,
      80,    81,   805,   550,   615,  -213,  -213,  -213,   933,   615,
     555,   173,  1040,   390,   543,   543,   543,   396,   561,   803,
     563,   568,   570,   571,   -98,  1131,   573,    79,   579,   156,
     581,    80,    81,   596,   160,   160,  1123,   157,   951,   952,
     390,   586,   396,   390,   396,   591,   595,   612,  1064,   620,
     621,   542,  1067,   542,   623,   618,   639,  -557,  1070,  -432,
    1139,   160,    79,  -436,   156,   660,    80,    81,   644,   663,
     673,   157,   665,   672,   157,   675,   676,   677,   156,   679,
     680,  1157,   684,   682,   454,   389,   157,   693,   156,   698,
     714,   241,   543,  -289,   615,   701,   703,   716,   615,   718,
     707,   722,   456,   873,   874,   875,   876,   877,   878,   730,
     723,   755,  1111,   767,   765,   170,   773,   907,   871,   160,
     542,   766,   780,   781,   872,   783,   985,   873,   874,   875,
     876,   877,   878,   879,   789,   807,   785,   795,   157,   157,
     543,   808,   908,   811,   812,   964,   287,   288,   289,   290,
     291,   292,   543,   293,   160,  -523,   829,   830,   615,   543,
     240,   410,   831,   834,   837,   157,   845,   846,   160,   848,
     851,   856,   987,   861,   991,   862,   889,   797,   160,   542,
     888,   880,   893,   892,   998,   896,   897,   900,   871,   454,
     909,  1006,   902,   940,   872,   955,  1009,   873,   874,   875,
     876,   877,   878,   879,   542,   615,   911,   456,   912,   914,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   915,   157,   873,   874,   875,   876,   877,   878,
    1043,   920,   918,   927,   931,   542,  1045,   936,   944,   945,
     946,   949,   956,   957,   962,   543,   968,   543,   971,   974,
     977,   935,   978,   241,   983,   241,  -512,  -512,   157,   986,
     992,   993,   995,   996,   542,   615,   997,   615,   999,  1071,
    1001,  1016,   157,  1000,  1008,  1029,  1032,  1033,  -241,   542,
    1035,  1034,   157,   544,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,  1039,   544,  1038,  -220,
    1096,  1046,  1044,  1050,  -277,  1053,  1057,  1059,   615,  1060,
    1061,  1062,  1063,  1075,   543,   542,  1065,  1076,  1077,   542,
     241,  1081,   240,  1083,   240,   542,  1084,  1093,  1095,  1092,
    -512,  -512,  1094,  1097,  1106,   410,  1102,  1105,  1108,   241,
    1109,  -283,  1126,  1110,  1120,   241,  1113,   615,  1129,  1122,
    1114,  1124,  1132,  1125,  1134,  1142,   562,  1073,  1138,  1140,
    1146,  1145,  1148,  1147,  1143,   241,  1153,  1149,   241,   241,
    1154,  1159,  1162,   543,  1160,   551,  1155,   241,   794,   542,
     615,   583,  1164,  1156,   681,  1005,   601,   602,   584,   240,
    1163,   806,   916,   891,   553,   934,   615,   869,   543,  1058,
     922,   895,   769,   768,   849,   976,   777,     0,   240,   779,
       0,   140,     0,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,   159,     0,     0,     0,   543,
    -241,     0,     0,     0,   240,     0,     0,   240,   240,     0,
       0,   615,     0,     0,     0,     0,   240,     0,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,   543,     0,
     544,   544,   544,     0,     0,     0,     0,     0,     0,     0,
     110,   132,   133,   543,   135,   136,   137,   139,   141,   142,
     143,   144,     0,   146,   147,   148,   149,   150,   151,   152,
       0,     0,   163,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,   543,
       0,   193,   195,   543,     0,     0,     0,     0,   203,   543,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,   403,     0,    35,     0,     0,     0,     0,   544,   404,
       0,     0,     0,  -244,     0,     0,     0,   245,   248,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     0,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   543,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   544,   405,     0,   351,
      68,    69,    70,    71,    72,  -512,  -512,     0,   544,     0,
     318,   406,     0,     0,     0,   544,     0,    75,    76,   368,
       0,   320,     0,   582,     0,     0,     0,   377,   379,   383,
    -512,  -512,     0,    85,     0,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   418,   269,   270,
     271,     0,     0,   248,     0,     0,   248,     0,     0,   341,
       0,     0,   110,     0,   349,   272,     0,   273,   274,     0,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,   163,     0,
       0,   544,   392,   544,     0,  -244,     0,     0,     0,     0,
     402,     0,     0,     0,   420,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,     0,     0,   506,
    -409,  -409,     0,     0,     0,     0,     0,     0,     0,   341,
     341,     0,     0,     0,     0,     0,   458,     0,     0,     0,
       0,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,     0,
     544,     0,     0,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,     0,     0,   341,     0,   341,
     503,     0,     0,     0,     0,   565,     0,     0,     0,     0,
       0,     0,     0,   510,   782,   512,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,   522,
       0,     0,     0,     0,     0,   587,   590,     0,     0,   544,
       0,     0,     0,   269,   270,   271,     0,     0,     0,     0,
       0,     0,   552,     0,     0,     0,     0,     0,     0,   611,
     272,     0,   273,   274,   544,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,   349,   636,     0,   593,     0,     0,     0,     0,
       0,     0,     0,   110,     0,   603,     0,     0,     0,     0,
       0,     0,     0,     0,   544,     0,     0,     0,     0,   326,
       0,   326,     0,     0,     0,   341,     0,     0,   625,   544,
       0,     0,     0,   629,     0,   630,     0,   632,   633,   634,
       0,     0,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   544,     0,   377,     0,   544,
       0,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   572,  -512,  -512,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   418,     0,     0,   418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   326,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   544,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,     0,     0,     0,     0,     0,   691,     0,     0,
       0,     0,     0,     0,     0,   163,     0,     0,     0,     0,
       0,     0,     0,  -512,  -512,     0,     0,     0,   418,   418,
       0,     0,     0,     0,     0,     0,  -512,  -512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -411,  -411,
       0,     0,     0,   379,     0,   565,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   734,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
       0,     0,   804,     0,   744,     0,     0,     0,     0,     0,
       0,     0,   349,   751,     0,     0,     0,     0,   110,     0,
       0,     0,  -180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,  -512,  -512,     0,     0,     0,     0,
       0,     0,     0,     0,   359,     0,     0,     0,     0,     0,
       0,     0,  -180,   786,     0,     0,     0,     0,     0,   791,
       0,     0,     0,     0,     0,   528,     0,     0,   565,     0,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      11,     0,   418,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   341,   822,   606,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,   838,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,   850,    31,    32,   128,
      34,    35,     0,   855,     0,   857,   349,    37,     0,     0,
     534,   535,   341,     0,  -604,  -604,  -604,  -604,   285,   286,
     287,   288,   289,   290,   291,   292,    48,   293,     0,   536,
       0,   894,     0,     0,     0,     0,     0,    31,    32,   128,
       0,   129,     0,   110,    59,    60,     0,   537,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,   130,    75,    76,    77,     0,     0,
       0,   153,   341,     0,     0,     0,    82,   607,     0,     0,
       0,    85,     0,    86,    87,   538,     0,   539,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,   406,
       0,     0,   341,   341,   540,    75,    76,   541,     0,     0,
       0,     0,     0,     0,     0,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   970,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,   110,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   349,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,  1047,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,     0,     0,    52,    53,     0,    54,   110,     0,
       0,    55,    56,    57,  1079,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,    74,    75,    76,    77,
      78,     0,    79,     0,     0,     0,    80,    81,    82,     0,
      83,    84,     0,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,     0,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,     0,    50,    51,     0,     0,    52,     0,     0,
      54,     0,     0,     0,    55,    56,    57,     0,    58,    59,
      60,   597,    62,    63,    64,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,    11,   130,
      75,    76,    77,    78,     0,    79,     0,     0,     0,    80,
      81,    82,   653,    83,    84,     0,    85,     0,    86,    87,
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
      10,    11,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,   756,    83,    84,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,     0,    52,     0,     0,    54,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   130,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    82,  1002,    83,
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
      82,  1072,    83,    84,     0,    85,     0,    86,    87,     0,
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
       0,     0,     0,    82,     0,    83,    84,     0,    85,     0,
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
       0,     0,    10,   127,   130,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    83,    84,
       0,    85,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,  1141,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   234,     0,     0,     0,
      31,    32,   235,    34,    35,     0,     0,     0,     0,     0,
     236,     0,     0,     0,     0,   237,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   127,   130,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   234,
       0,     0,     0,    31,    32,   235,    34,    35,     0,     0,
       0,     0,     0,   236,     0,     0,     0,     0,   237,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   127,
     130,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   162,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   128,    34,
      35,     0,   272,     0,   273,   274,    37,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,    48,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   127,   130,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      85,     0,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   128,    34,    35,     0,     0,     0,   273,   274,    37,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    48,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   127,   130,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
     192,     0,     0,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   128,    34,    35,     0,     0,     0,
       0,   274,    37,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,    48,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   127,   130,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   194,     0,     0,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   128,    34,    35,
       0,     0,     0,     0,     0,    37,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,    48,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   127,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,   198,     0,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,    34,    35,     0,     0,     0,     0,     0,    37,     0,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,    48,   293,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   130,    75,    76,    77,     0,
       0,     0,     0,   244,     0,     0,     0,    82,     0,     0,
       0,     0,    85,     0,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   128,    34,    35,     0,     0,     0,     0,
       0,    37,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   127,   130,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      82,   338,     0,     0,     0,    85,   483,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   128,    34,    35,     0,
       0,     0,     0,     0,    37,  -604,  -604,  -604,  -604,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     127,   130,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   509,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   128,
      34,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,   127,   130,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   511,    86,    87,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    85,   415,    86,    87,     0,     0,
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
       0,     0,    82,     0,     0,     0,     0,    85,   743,    86,
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
      85,   802,    86,    87,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    85,     0,    86,    87,     0,     0,     0,
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
       7,     8,     9,     0,    73,     0,     0,    10,    11,   130,
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
      10,   127,   130,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     128,   391,    35,     0,     0,     0,     0,     0,    37,     0,
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
       0,    31,    32,   128,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   130,    75,
      76,    77,   269,   270,   271,     0,     0,     0,     0,     0,
     419,     0,     0,     0,     0,    85,     0,    86,    87,   272,
       0,   273,   274,     0,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   269,   270,   271,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     0,
       0,   272,     0,   273,   274,     0,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   269,   270,   271,     0,
       0,     0,     0,  -512,  -512,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   273,   274,     0,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,     0,     0,
       0,     0,     0,     0,     0,   269,   270,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,     0,   273,   274,   605,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,   293,   269,   270,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,     0,   273,   274,   645,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,   293,   269,
     270,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,   839,   273,   274,
     678,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,     0,     0,     0,     0,     0,     0,     0,   269,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,   273,   274,   731,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     269,   270,   271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   272,     0,   273,
     274,   901,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,     0,   269,   270,   271,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     272,   840,   273,   274,     0,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,   293,     0,     0,     0,     0,   269,
     270,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,     0,   273,   274,
     294,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   269,   270,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,     0,
     273,   274,   354,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   270,   271,   355,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
       0,   273,   274,   704,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   269,   270,   271,     0,     0,     0,
       0,   361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,   273,   274,     0,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   269,   270,   271,     0,
       0,     0,   433,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   273,   274,     0,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,     0,     0,
       0,     0,   269,   270,   271,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
       0,   273,   274,   433,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   269,   270,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,   273,   274,   504,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   269,   270,   271,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   273,   274,   926,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,     0,   269,
     270,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,   430,   273,   274,
       0,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   269,   270,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,   578,
     273,   274,     0,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,   269,   270,   271,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     272,   708,   273,   274,     0,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,   293,     0,   269,   270,   271,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,   859,   273,   274,     0,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   269,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,  1078,   273,   274,     0,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   270,   271,     0,     0,     0,  1100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   272,
       0,   273,   274,   319,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   269,   270,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,   273,   274,   327,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,   270,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   648,
       0,     0,   272,   735,   273,   274,   594,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,   293,   269,   270,   271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,     0,   273,   274,     0,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,   293,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,   273,   274,     0,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   271,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   273,   274,     0,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-992)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-604)))

static const yytype_int16 yycheck[] =
{
      24,    25,    84,     4,    28,    28,    78,   131,    11,     4,
      29,    30,    28,    82,   680,     4,   222,   268,   293,   518,
     416,    82,   416,    28,   509,    44,   511,     8,     8,    53,
     398,   257,   885,   798,   928,     8,   930,   588,     8,     8,
      27,    27,    30,     8,    66,    72,     8,    50,    30,    62,
      74,     8,    62,    77,    74,    91,    57,   723,   442,   310,
      62,     8,    62,    62,     8,  1056,   357,     8,     8,     8,
      74,     8,   323,   324,    72,    78,   159,     8,    32,     8,
     371,     8,   333,   309,   335,     8,     0,    72,    62,    72,
      24,    25,   216,   532,    28,   263,   264,    72,   150,    74,
     123,    93,    94,    95,    67,    68,    69,    62,   177,   161,
     162,   180,  1103,    74,   150,    60,    61,    32,    79,  1013,
      74,   606,   120,   150,   144,   145,   160,   161,   129,     0,
    1121,   155,   154,   146,   899,   162,   146,   209,   162,   143,
     144,   145,    74,   311,   168,   313,   159,   159,    72,   162,
      74,   125,   162,   176,   705,  1049,    74,   159,    74,    74,
     162,  1055,   162,   162,   147,   150,   154,   150,   187,   934,
     125,   163,   154,   161,   161,   401,   162,    72,    79,   160,
     204,   161,   162,   144,   145,   209,   189,   162,   161,   164,
     160,   186,   161,   217,    24,    25,   161,   591,    28,   161,
     594,   752,   753,   227,   161,  1099,   230,  1060,   576,    32,
    1104,  1105,   235,   237,   161,   218,   219,   161,   154,   160,
     160,   160,  1116,   160,   663,   161,   665,    91,   162,   160,
     235,   160,   164,   160,   618,    94,    95,   160,   162,   159,
     164,    62,   143,   534,   535,   268,   164,    30,   164,    72,
     501,    74,   147,    94,    95,   150,    27,    62,   743,   159,
     656,   159,    62,   268,   658,   659,    32,   518,    72,   293,
     293,    72,    32,    74,    72,   209,   146,   293,   360,    62,
     150,   449,   120,   217,    74,   159,   150,   310,   293,    79,
      76,   114,   146,   227,   120,    32,   150,   321,   797,   159,
     323,   324,   159,   237,   163,   310,    74,   331,    74,   860,
     333,   146,   335,   114,    74,   150,   319,   802,   323,   324,
     125,   612,   163,   159,   147,   125,   127,   150,   333,    72,
     335,    99,   162,   357,   718,    72,   159,    74,    74,   159,
     364,   164,    72,    79,    74,   340,   147,   371,   574,   150,
     419,    72,    74,    74,   144,   145,    64,    79,   419,   293,
     635,   385,   159,   164,    72,   151,    74,   153,    80,   660,
     439,   157,   158,   579,    72,    74,    74,   114,   162,   209,
      79,    46,    47,    48,   114,    50,   409,   217,   679,    72,
     413,   415,   146,    72,   790,    62,   150,   227,   792,   120,
     626,   627,    76,   902,   409,   159,   114,   237,   144,   145,
     147,   637,   638,   150,   161,    72,   114,   147,   442,    62,
     150,   143,   144,   145,   808,    32,   427,   164,  1094,   160,
     161,   167,   427,   456,   164,    62,   439,   519,   427,   147,
     146,   162,   150,   164,   143,   144,   145,    67,    68,   147,
     146,   385,   150,    67,    68,    72,   164,    74,    75,   483,
      70,    71,    72,   293,    74,    62,   164,    93,    94,    95,
      80,   128,   129,    72,   765,    74,   767,   151,   501,   153,
     125,   415,   150,   157,   158,   509,    74,   511,   872,    50,
     147,    79,     8,   150,    99,   518,   501,    76,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     534,   535,   536,   518,   910,   114,   150,   541,   128,    67,
      68,   131,   132,   133,   134,   135,   165,   357,   146,   524,
      72,   146,   142,   557,     8,   919,   125,   163,   148,   149,
      76,   371,   150,   834,    60,    61,   797,   150,   147,   483,
     146,   150,   161,   162,   164,   385,   144,   145,   268,    93,
      94,    95,   146,   162,    76,   164,    27,   591,    24,    25,
     594,   653,   151,   741,   153,   509,   972,   511,   157,   158,
      86,    87,   606,   159,   161,   415,   128,   129,   612,    76,
     614,    14,   161,   819,   618,   979,   162,   981,    14,   623,
     310,    76,   893,   146,   160,   147,    14,   150,   150,    76,
     154,   635,   635,   323,   324,   151,   159,   153,   160,   635,
     160,   157,   158,   557,    93,    94,    95,   918,   796,   154,
     635,   160,   163,   652,   658,   659,   660,    72,  1022,   151,
      76,   153,   166,    72,   160,   157,   158,   123,   672,   673,
     146,   902,   159,   483,   150,   679,   680,   591,   949,    72,
     594,   685,    62,   159,   151,    27,   153,   662,   165,    83,
     157,   158,   606,   161,   756,    76,   151,  1061,   153,   509,
     683,   511,   157,   158,   151,     8,   153,   978,    91,    72,
     157,   158,   716,    72,   718,    67,    68,    69,   866,   723,
      74,   635,   993,   224,   534,   535,   536,   228,   160,   712,
     161,   160,    72,    62,    14,   151,   163,   153,   159,   743,
      14,   157,   158,   154,   658,   659,  1110,   557,   896,   897,
     251,    72,   253,   254,   255,   126,    72,    14,  1029,   165,
     165,   765,  1033,   767,   159,   123,   165,   159,  1039,   159,
     151,   685,   153,   159,   778,    14,   157,   158,   165,   161,
     150,   591,   161,   159,   594,   146,   163,    72,   792,    14,
     159,  1155,   159,   161,   797,   143,   606,   163,   802,    14,
     160,   853,   612,    99,   808,   161,   156,   150,   812,   124,
     159,   162,   797,   109,   110,   111,   112,   113,   114,   165,
     159,    72,  1093,     8,   126,   635,   103,   826,   100,   743,
     834,   165,    14,   165,   106,   163,   940,   109,   110,   111,
     112,   113,   114,   115,   156,   162,   160,   160,   658,   659,
     660,     8,   827,   160,     8,   917,    43,    44,    45,    46,
      47,    48,   672,    50,   778,   159,   161,    84,   872,   679,
     853,   235,   161,    14,   161,   685,   160,   159,   792,   160,
     163,    27,   944,   154,   946,   161,   106,   125,   802,   893,
     160,   163,    14,    74,   956,    62,    62,   165,   100,   902,
     161,   963,   125,   884,   106,   904,   968,   109,   110,   111,
     112,   113,   114,   115,   918,   919,   160,   902,   160,    90,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   161,   743,   109,   110,   111,   112,   113,   114,
    1002,   104,   126,   161,   165,   949,  1008,    72,   162,   159,
     162,    14,    27,    69,   161,   765,   162,   767,   154,   160,
     165,   163,    14,  1015,    74,  1017,    60,    61,   778,    72,
      74,    14,   165,   165,   978,   979,    27,   981,   161,  1041,
     160,   154,   792,   958,   162,    14,    72,    14,     8,   993,
      74,   163,   802,   357,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    14,   371,   163,    69,
    1072,   163,    74,    47,    91,   160,   163,   161,  1022,    91,
     107,   161,   146,    88,   834,  1029,    74,   160,   163,  1033,
    1082,    66,  1015,   154,  1017,  1039,    68,    14,    74,    72,
      60,    61,   159,   161,    47,   409,   154,   154,    47,  1101,
      72,    72,  1114,     8,    85,  1107,    86,  1061,    47,    87,
     162,   160,   154,   161,   154,    47,   160,  1042,   163,    85,
      85,   154,   163,    87,  1136,  1127,   154,   103,  1130,  1131,
     154,    74,   162,   893,   160,   364,   159,  1139,   706,  1093,
    1094,   409,   163,  1151,   557,   961,   427,   427,   409,  1082,
    1162,   718,   838,   812,   369,   867,  1110,   807,   918,  1022,
     848,   816,   672,   671,   778,   932,   683,    -1,  1101,   685,
      -1,    11,    -1,    -1,  1107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,   949,
     160,    -1,    -1,    -1,  1127,    -1,    -1,  1130,  1131,    -1,
      -1,  1155,    -1,    -1,    -1,    -1,  1139,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   978,    -1,
     534,   535,   536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,   993,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,  1029,
      -1,    45,    46,  1033,    -1,    -1,    -1,    -1,    52,  1039,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    74,    -1,    -1,    -1,    -1,   612,    80,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    81,    82,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1093,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   660,   128,    -1,   189,
     131,   132,   133,   134,   135,    60,    61,    -1,   672,    -1,
     134,   142,    -1,    -1,    -1,   679,    -1,   148,   149,   209,
      -1,   145,    -1,   154,    -1,    -1,    -1,   217,   218,   219,
      60,    61,    -1,   164,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,     9,    10,
      11,    -1,    -1,   177,    -1,    -1,   180,    -1,    -1,   183,
      -1,    -1,   186,    -1,   188,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,   765,   226,   767,    -1,   160,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,   319,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
     264,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,
      -1,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,    -1,
     834,    -1,    -1,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,    -1,    -1,   311,    -1,   313,
     314,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   165,   329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,   415,   416,    -1,    -1,   893,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,    -1,   439,
      26,    -1,    28,    29,   918,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   949,    -1,    -1,    -1,    -1,
      -1,    -1,   416,   483,    -1,   419,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   427,    -1,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   978,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,   449,    -1,    -1,   452,   993,
      -1,    -1,    -1,   457,    -1,   459,    -1,   461,   462,   463,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1029,    -1,   557,    -1,  1033,
      -1,    -1,    -1,    -1,    -1,  1039,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     524,   591,    -1,    -1,   594,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   606,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,  1093,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,   571,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,   658,   659,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   161,
      -1,    -1,    -1,   683,    -1,   685,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   631,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,   712,    -1,   648,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   656,   657,    -1,    -1,    -1,    -1,   662,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   743,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,   697,    -1,    -1,    -1,    -1,    -1,   703,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,   778,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,   792,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   802,    -1,    -1,    -1,    -1,   741,   742,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,   761,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,   780,    70,    71,    72,
      73,    74,    -1,   787,    -1,   789,   790,    80,    -1,    -1,
      43,    44,   796,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    99,    50,    -1,    62,
      -1,   815,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,   114,    -1,   827,   117,   118,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,    -1,    -1,
      -1,   114,   866,    -1,    -1,    -1,   159,   160,    -1,    -1,
      -1,   164,    -1,   166,   167,   128,    -1,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,   896,   897,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   910,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   958,    -1,   960,   961,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   972,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    76,  1010,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,   105,   106,    -1,   108,  1042,    -1,
      -1,   112,   113,   114,  1048,   116,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
     151,    -1,   153,    -1,    -1,    -1,   157,   158,   159,    -1,
     161,   162,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,   151,    -1,   153,    -1,    -1,    -1,   157,
     158,   159,    27,   161,   162,    -1,   164,    -1,   166,   167,
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
      -1,    -1,    -1,    -1,   159,    27,   161,   162,    -1,   164,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    76,    -1,    -1,    -1,    80,    81,
      82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    27,   161,
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
      -1,    -1,    -1,   159,    -1,   161,   162,    -1,   164,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
      -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    85,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,   164,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    -1,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      74,    -1,    26,    -1,    28,    29,    80,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    99,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
     164,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    28,    29,    80,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    99,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,    -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    29,    80,    31,    32,    33,    34,    35,    36,    37,
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
      -1,    -1,    -1,    -1,    -1,    80,    31,    32,    33,    34,
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
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    99,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,   160,    -1,    -1,    -1,   164,    32,   166,   167,    -1,
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
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,   164,    32,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
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
      -1,    -1,    -1,   164,    -1,   166,   167,    -1,    -1,    -1,
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
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,   163,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,   163,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
     163,    31,    32,    33,    34,    35,    36,    37,    38,    39,
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
      -1,    50,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   161,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
     161,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,   161,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    91,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   160,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,   160,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,   160,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,   154,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,   154,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   154,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   154,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,   154,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,   126,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,   126,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    26,    27,    28,    29,    91,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    11,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50
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
     178,   182,   183,   214,   243,   244,   246,   248,   251,   253,
     322,   324,   338,   339,   340,   341,   344,   353,   364,   367,
     371,   372,   373,   375,   376,   386,   387,   388,   389,   391,
     392,   394,   395,   401,   411,   415,   417,    13,    72,   114,
     147,   341,   371,   371,   159,   371,   371,   371,   324,   371,
     376,   371,   371,   371,   371,   335,   371,   371,   371,   371,
     371,   371,   371,   114,   147,   150,   172,   353,   375,   376,
     388,   375,    32,   371,   405,   406,   371,   147,   150,   172,
     353,   355,   356,   388,   392,   394,   401,   159,   361,   372,
     159,   372,    27,    62,   312,   371,   190,   188,   159,   159,
     200,   372,   161,   371,   161,   371,    72,    72,   161,   324,
     371,   376,   201,   371,   150,   172,   176,   177,    74,   164,
     286,   287,   120,   120,    74,   288,   341,   159,   159,   159,
     159,   159,   159,    74,    79,   143,   144,   145,   407,   408,
     150,   162,   172,   172,    66,    72,    80,    85,    87,   204,
     324,   373,   179,    80,   155,   371,   322,   338,   371,   179,
     162,    79,   362,   407,    79,   407,   150,   345,     8,   161,
      72,    72,   161,    62,    62,    32,   245,   390,   146,     9,
      10,    11,    26,    28,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    50,   161,    60,    61,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   352,
     146,    62,   125,    62,   162,   164,   394,   245,   371,   126,
     371,   150,   172,   146,   146,   374,   376,   126,   165,     8,
     369,   150,   172,   146,   323,   146,   125,   394,   160,    27,
     184,   371,   396,     8,   161,   182,   372,   313,   314,   371,
     324,   376,   159,   195,   161,   161,   161,    14,   161,   161,
     162,   161,   172,    91,     8,   161,   162,   373,   376,     8,
     161,    14,     8,   161,   245,   241,   242,   376,   324,   376,
     412,   414,   324,   376,   160,   325,   405,    62,   125,   143,
     408,    73,   371,   376,    79,   143,   408,   172,   175,   161,
     162,   347,   371,    72,    80,   128,   142,   209,   210,   211,
     364,   393,   394,   401,    30,    32,   159,   258,   376,   159,
     371,    30,   154,   154,   161,   161,   154,   180,   154,    14,
     154,   160,   160,   160,   163,   371,   166,   167,    72,   159,
     284,    72,   123,   252,   250,   396,   396,    72,   336,    62,
      72,   120,   162,   386,   394,   400,   401,   329,   371,   330,
      27,   332,   327,   328,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   355,    32,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   284,    72,   386,   400,
     396,   377,   396,   371,   160,   324,   376,   172,    72,    32,
     371,    32,   371,   172,   386,   284,   363,   386,   357,   186,
     182,   165,   371,    83,   189,   161,     8,    91,    91,    72,
     262,    27,   162,   263,    43,    44,    62,    80,   128,   130,
     147,   150,   172,   353,   364,   365,   366,   416,   179,    91,
      72,   177,   371,   287,   365,    74,   337,     8,   160,     8,
     160,   160,   160,   161,   127,   376,   402,   403,   160,   409,
      72,    62,   163,   163,   346,   170,   174,   284,   154,   159,
      79,    14,   154,   209,   210,   394,    72,   376,   258,   313,
     376,   126,   257,   371,    91,    72,   154,   119,   181,   182,
     214,   243,   244,   371,   331,   163,    32,   160,   285,   324,
     338,   376,    14,   147,   150,   172,   354,   249,   123,   254,
     165,   165,   247,   159,   396,   371,   349,   348,   394,   371,
     371,   334,   371,   371,   371,    64,   376,   351,   350,   165,
     386,   397,   399,   400,   165,   163,   374,   374,   126,   397,
     179,   185,   191,    27,   182,   268,   192,   315,   198,   196,
      14,     8,   160,   161,   264,   161,   264,   365,   365,   365,
     368,   370,   159,   150,   172,   146,   163,    72,   163,    14,
     159,   242,   161,   413,   159,     8,   160,    72,    74,    75,
     410,   371,   284,   163,   170,   220,   405,   212,    14,   205,
     257,   161,   258,   156,    91,   258,   206,   159,   154,   320,
     321,   374,     8,   160,   160,   365,   150,   172,   124,   255,
     256,   354,   162,   159,   128,   129,   281,   282,   283,   354,
     165,   163,   284,   284,   371,    27,   355,   284,   284,   398,
     378,    62,   162,    32,   371,   358,   187,   269,   372,   179,
     313,   371,   258,   258,   365,    72,    27,   182,   261,   264,
      93,    94,    95,   264,   163,   126,   165,     8,   369,   368,
     172,    72,   120,   103,   229,   365,   281,   414,   404,   403,
      14,   165,   165,   163,   203,   160,   371,   213,   207,   156,
     222,   371,   215,   257,   207,   160,    62,   125,   316,   317,
     318,   380,    32,   324,   376,   172,   256,   162,     8,   289,
     281,   160,     8,    32,    74,   333,   326,   382,   383,   384,
     385,   396,   371,   374,   359,   274,    67,    68,   276,   161,
      84,   161,   257,   257,    14,   179,    93,   161,   371,    27,
     161,   267,   163,   365,   365,   160,   159,   202,   160,   402,
     371,   163,    76,   151,   214,   371,    27,   371,   313,   154,
     258,   154,   161,   396,   397,   380,    62,   319,   374,   289,
     354,   100,   106,   109,   110,   111,   112,   113,   114,   115,
     163,   290,   293,   306,   307,   308,   309,   311,   160,   106,
     342,   283,    74,    14,   371,   363,    62,    62,   284,   379,
     165,   163,   125,   360,    67,    68,   279,   372,   182,   161,
     193,   160,   160,   365,    90,   161,   267,   266,   126,   230,
     104,   234,   342,   160,   221,   208,   160,   161,   227,   257,
     218,   165,   381,   396,   316,   163,    72,   294,   354,   291,
     341,   309,     8,   161,   162,   159,   162,    32,    74,    14,
     365,   396,   396,   380,   397,   372,    27,    69,   270,   313,
     199,   197,   161,   265,   179,   365,   354,   235,   162,   271,
     371,   154,   223,   203,   160,   203,   385,   165,    14,     8,
     161,   162,   295,    74,   310,   245,    72,   179,    32,    74,
     343,   179,    74,    14,   365,   165,   165,    27,   179,   161,
     182,   160,    27,   182,   260,   260,   179,   231,   162,   179,
      67,    68,   277,   225,   313,   151,   154,   151,   365,   354,
      72,   296,   297,   298,   299,   301,   302,   303,   354,    14,
       8,   161,    72,    14,   163,    74,     8,   160,   163,    14,
     365,   275,   194,   179,    74,   179,   163,   371,    66,   154,
      47,   278,   203,   160,   228,   216,   219,   163,   298,   161,
      91,   107,   161,   146,   365,    74,   292,   365,    32,    74,
     365,   179,    27,   182,   259,    88,   160,   163,   154,   371,
     203,    66,   151,   154,    68,   280,   203,   280,   304,   309,
     300,   354,    72,    14,   159,    74,   179,   161,   232,   272,
     154,   151,   154,   226,   224,   154,    47,   151,    47,    72,
       8,   365,   281,    86,   162,   203,   273,   280,   203,   203,
      85,   217,    87,   354,   160,   161,   179,   151,   203,    47,
     151,   151,   154,   280,   154,   161,   162,   305,   163,   151,
      85,    47,    47,   179,   233,   154,    85,    87,   163,   103,
     236,   237,   238,   154,   154,   159,   238,   354,   239,    74,
     160,   240,   162,   179,   163
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
#line 388 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 390 "Zend55/zend_language_parser.y"
    { 
			if (CG(active_op_array)->last > 0 &&
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].opcode == ZEND_FETCH_CONSTANT) {
				CG(active_op_array)->opcodes[CG(active_op_array)->last-1].extended_value &= ~IS_CONSTANT_UNQUALIFIED;
			}
			zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); 
		}
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 397 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 402 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 403 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 404 "Zend55/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 406 "Zend55/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC); 
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 410 "Zend55/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 412 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 413 "Zend55/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 414 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 415 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 417 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 418 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 419 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 421 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 424 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 426 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 429 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 430 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 431 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 433 "Zend55/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 436 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 437 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 438 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 440 "Zend55/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 441 "Zend55/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 442 "Zend55/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 446 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 447 "Zend55/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 448 "Zend55/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 449 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 450 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 451 "Zend55/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 454 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 455 "Zend55/zend_language_parser.y"
    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 455 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 459 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 460 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 464 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 465 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 469 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 469 "Zend55/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 469 "Zend55/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 478 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 482 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 486 "Zend55/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 490 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 491 "Zend55/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 496 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 498 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 503 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 507 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 509 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 513 "Zend55/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 518 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 519 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 520 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 521 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 525 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 526 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 530 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 544 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 545 "Zend55/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 549 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 550 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 554 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 555 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 579 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 580 "Zend55/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 585 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 586 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 587 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 588 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 593 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 594 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 594 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 595 "Zend55/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 595 "Zend55/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 614 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 614 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 619 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 619 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 620 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 620 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 625 "Zend55/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 625 "Zend55/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 660 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 661 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 662 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 663 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 664 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 665 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 666 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 667 "Zend55/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 672 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 673 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 674 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 675 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 680 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 681 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 682 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 687 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 688 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 689 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 690 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 691 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 692 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 696 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 697 "Zend55/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 702 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 703 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 704 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 709 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 710 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 711 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 712 "Zend55/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 724 "Zend55/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 727 "Zend55/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 729 "Zend55/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 737 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 738 "Zend55/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 762 "Zend55/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 766 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 767 "Zend55/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 771 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 772 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 776 "Zend55/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 780 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 781 "Zend55/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 785 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 786 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 790 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 791 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 795 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 796 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 800 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 801 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 805 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 806 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 810 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 811 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 812 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 813 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 814 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 815 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 819 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 820 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 821 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 822 "Zend55/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 826 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 827 "Zend55/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 831 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 832 "Zend55/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 837 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 838 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 842 "Zend55/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 842 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 843 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 847 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 848 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 852 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 853 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 857 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 857 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 858 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 859 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 863 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 864 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 865 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 869 "Zend55/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 869 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 873 "Zend55/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 873 "Zend55/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 874 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 875 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 876 "Zend55/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 876 "Zend55/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 877 "Zend55/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 878 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 879 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 880 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 881 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 882 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 883 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 884 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 885 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 886 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 887 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 888 "Zend55/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 889 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 890 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 891 "Zend55/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 892 "Zend55/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 893 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 893 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 894 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 894 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 895 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 895 "Zend55/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 896 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 896 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 897 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 900 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 901 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 902 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 903 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 904 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 905 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 906 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 907 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 908 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 909 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 910 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 911 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 912 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 913 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 914 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 915 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 916 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 917 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 918 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 919 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 920 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 921 "Zend55/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 922 "Zend55/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 923 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 924 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 925 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 925 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 926 "Zend55/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 927 "Zend55/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 928 "Zend55/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 929 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 930 "Zend55/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 931 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 932 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 933 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 934 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 935 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 936 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 937 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 938 "Zend55/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 939 "Zend55/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 940 "Zend55/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 940 "Zend55/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 941 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 942 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 943 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 944 "Zend55/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 945 "Zend55/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 946 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 947 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 949 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 950 "Zend55/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 952 "Zend55/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 956 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 957 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 958 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 959 "Zend55/zend_language_parser.y"
    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 963 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 964 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 965 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 968 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 969 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 972 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 981 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 982 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 983 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 984 "Zend55/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 988 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 989 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 990 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 991 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 992 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 993 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 994 "Zend55/zend_language_parser.y"
    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 995 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 996 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 997 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 998 "Zend55/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 999 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1000 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1001 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1002 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1003 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1007 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1008 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1009 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1010 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
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
#line 1022 "Zend55/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1023 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1028 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1029 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1030 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1031 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1042 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1046 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1047 "Zend55/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1048 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1052 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1053 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1054 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1059 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1060 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1065 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1066 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1067 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1068 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1069 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1070 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1071 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1072 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1073 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1074 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1075 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1076 "Zend55/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1081 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1082 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1083 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1084 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1085 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1086 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1087 "Zend55/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1088 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1089 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1090 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1091 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1095 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1099 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1100 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1101 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1102 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1103 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1104 "Zend55/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1105 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1106 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1107 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1108 "Zend55/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1113 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1114 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1123 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1124 "Zend55/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1125 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1126 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1130 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1131 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1135 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1136 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1141 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1146 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1151 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1156 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1157 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1158 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1159 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1163 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1164 "Zend55/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1169 "Zend55/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1169 "Zend55/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1173 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1174 "Zend55/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1178 "Zend55/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1179 "Zend55/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1183 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1184 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1185 "Zend55/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1189 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1190 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1194 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1195 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1200 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1204 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1205 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1206 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1210 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1211 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1212 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1217 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1218 "Zend55/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1219 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
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
#line 1228 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1229 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1230 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1235 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1236 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1240 "Zend55/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1241 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1246 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1247 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1247 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1251 "Zend55/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1252 "Zend55/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1253 "Zend55/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1257 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1258 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1262 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1263 "Zend55/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1273 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1274 "Zend55/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1274 "Zend55/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1275 "Zend55/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1280 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1281 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1285 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1286 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1287 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1288 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1289 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1290 "Zend55/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1291 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1292 "Zend55/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1296 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1297 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1298 "Zend55/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1299 "Zend55/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1305 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1306 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1306 "Zend55/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1307 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1308 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1309 "Zend55/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1310 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1315 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1316 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1317 "Zend55/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1322 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 1323 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 1324 "Zend55/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 1325 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 1326 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 1327 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 597:
/* Line 1787 of yacc.c  */
#line 1328 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 598:
/* Line 1787 of yacc.c  */
#line 1329 "Zend55/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 599:
/* Line 1787 of yacc.c  */
#line 1333 "Zend55/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 600:
/* Line 1787 of yacc.c  */
#line 1334 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 601:
/* Line 1787 of yacc.c  */
#line 1334 "Zend55/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 602:
/* Line 1787 of yacc.c  */
#line 1338 "Zend55/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 603:
/* Line 1787 of yacc.c  */
#line 1339 "Zend55/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 604:
/* Line 1787 of yacc.c  */
#line 1343 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 605:
/* Line 1787 of yacc.c  */
#line 1344 "Zend55/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 606:
/* Line 1787 of yacc.c  */
#line 1348 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 607:
/* Line 1787 of yacc.c  */
#line 1352 "Zend55/zend_language_parser.y"
    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7232 "Zend55/zend_language_parser.c"
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
#line 1355 "Zend55/zend_language_parser.y"


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
