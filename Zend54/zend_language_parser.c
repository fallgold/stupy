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


/* Line 371 of yacc.c  */
#line 131 "Zend54/zend_language_parser.c"

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
#ifndef YY_ZEND_ZEND54_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_ZEND54_ZEND_LANGUAGE_PARSER_H_INCLUDED
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

#endif /* !YY_ZEND_ZEND54_ZEND_LANGUAGE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 472 "Zend54/zend_language_parser.c"

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
#define YYLAST   6737

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  240
/* YYNRULES -- Number of rules.  */
#define YYNRULES  583
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1154

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
     368,   370,   372,   374,   378,   382,   387,   391,   395,   401,
     405,   410,   411,   412,   413,   432,   433,   434,   450,   451,
     452,   464,   465,   466,   467,   486,   487,   488,   506,   507,
     508,   524,   526,   527,   529,   532,   533,   534,   545,   547,
     551,   553,   555,   557,   558,   560,   561,   572,   573,   582,
     583,   591,   593,   596,   598,   601,   602,   605,   607,   608,
     611,   612,   615,   617,   621,   622,   625,   627,   630,   632,
     637,   639,   644,   646,   651,   655,   661,   665,   670,   675,
     681,   682,   683,   690,   691,   697,   699,   701,   703,   708,
     709,   710,   718,   719,   720,   728,   729,   738,   739,   740,
     749,   750,   753,   754,   759,   763,   764,   768,   769,   774,
     776,   777,   780,   784,   790,   795,   800,   806,   814,   821,
     822,   824,   826,   828,   830,   831,   833,   835,   838,   842,
     846,   851,   855,   857,   859,   862,   867,   871,   877,   879,
     883,   886,   887,   888,   893,   896,   898,   899,   909,   913,
     915,   919,   921,   925,   926,   928,   930,   933,   936,   939,
     943,   945,   949,   951,   953,   957,   962,   966,   967,   969,
     971,   975,   977,   979,   980,   982,   984,   987,   989,   991,
     993,   995,   997,   999,  1003,  1009,  1011,  1015,  1021,  1026,
    1030,  1032,  1033,  1035,  1036,  1041,  1043,  1046,  1048,  1053,
    1057,  1058,  1062,  1064,  1066,  1067,  1068,  1071,  1072,  1077,
    1078,  1086,  1090,  1095,  1096,  1104,  1107,  1111,  1115,  1119,
    1123,  1127,  1131,  1135,  1139,  1143,  1147,  1151,  1154,  1157,
    1160,  1163,  1164,  1169,  1170,  1175,  1176,  1181,  1182,  1187,
    1191,  1195,  1199,  1203,  1207,  1211,  1215,  1219,  1223,  1227,
    1231,  1234,  1237,  1240,  1243,  1247,  1251,  1255,  1259,  1263,
    1267,  1271,  1275,  1279,  1283,  1285,  1286,  1292,  1293,  1294,
    1302,  1303,  1309,  1311,  1314,  1317,  1320,  1323,  1326,  1329,
    1332,  1335,  1336,  1340,  1342,  1347,  1351,  1355,  1358,  1359,
    1370,  1371,  1383,  1385,  1386,  1391,  1395,  1400,  1402,  1405,
    1406,  1412,  1413,  1421,  1422,  1429,  1430,  1438,  1439,  1447,
    1448,  1456,  1457,  1465,  1466,  1472,  1474,  1476,  1480,  1483,
    1485,  1489,  1492,  1494,  1496,  1497,  1498,  1505,  1507,  1510,
    1511,  1514,  1515,  1518,  1522,  1523,  1525,  1527,  1528,  1532,
    1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,  1550,  1552,
    1556,  1559,  1561,  1563,  1567,  1570,  1573,  1576,  1581,  1585,
    1587,  1589,  1593,  1595,  1597,  1599,  1603,  1606,  1608,  1612,
    1616,  1618,  1619,  1622,  1623,  1625,  1631,  1635,  1639,  1641,
    1643,  1645,  1647,  1649,  1651,  1652,  1653,  1661,  1663,  1666,
    1667,  1668,  1673,  1678,  1683,  1684,  1689,  1691,  1693,  1694,
    1696,  1699,  1703,  1707,  1709,  1714,  1715,  1721,  1723,  1725,
    1727,  1729,  1732,  1734,  1736,  1739,  1744,  1749,  1751,  1753,
    1758,  1759,  1761,  1763,  1764,  1767,  1772,  1777,  1779,  1781,
    1785,  1787,  1790,  1794,  1796,  1798,  1799,  1805,  1806,  1807,
    1810,  1816,  1820,  1824,  1826,  1833,  1838,  1843,  1846,  1849,
    1852,  1854,  1857,  1859,  1860,  1866,  1870,  1874,  1881,  1885,
    1887,  1889,  1891,  1896,  1901,  1904,  1907,  1912,  1915,  1918,
    1920,  1921,  1926,  1930
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     167,     0,    -1,   168,    -1,    -1,   168,   169,   171,    -1,
      -1,    71,    -1,   170,   148,    71,    -1,   180,    -1,   238,
      -1,   239,    -1,   117,   157,   158,   159,    -1,   145,   170,
     159,    -1,    -1,   145,   170,   160,   172,   168,   161,    -1,
      -1,   145,   160,   173,   168,   161,    -1,   104,   174,   159,
      -1,   176,   159,    -1,   216,    -1,   174,     8,   175,    -1,
     175,    -1,   170,    -1,   170,    90,    71,    -1,   148,   170,
      -1,   148,   170,    90,    71,    -1,   176,     8,    71,    13,
     357,    -1,    99,    71,    13,   357,    -1,    -1,   177,   178,
     179,    -1,    -1,   180,    -1,   216,    -1,   238,    -1,   239,
      -1,   117,   157,   158,   159,    -1,   181,    -1,    71,    26,
      -1,   160,   177,   161,    -1,    -1,    -1,    65,   157,   363,
     158,   182,   180,   183,   264,   271,    -1,    -1,    -1,    65,
     157,   363,   158,    26,   184,   177,   185,   269,   274,    68,
     159,    -1,    -1,    -1,    82,   157,   186,   363,   158,   187,
     263,    -1,    -1,    -1,    81,   188,   180,    82,   157,   189,
     363,   158,   159,    -1,    -1,    -1,    -1,    84,   157,   308,
     159,   190,   308,   159,   191,   308,   158,   192,   254,    -1,
      -1,    91,   157,   363,   158,   193,   258,    -1,    95,   159,
      -1,    95,   363,   159,    -1,    96,   159,    -1,    96,   363,
     159,    -1,   100,   159,    -1,   100,   319,   159,    -1,   100,
     367,   159,    -1,   106,   281,   159,    -1,   112,   283,   159,
      -1,    80,   307,   159,    -1,    75,    -1,   363,   159,    -1,
     114,   157,   236,   158,   159,    -1,    -1,    -1,    86,   157,
     367,    90,   194,   253,   252,   158,   195,   255,    -1,    -1,
      -1,    86,   157,   319,    90,   196,   367,   252,   158,   197,
     255,    -1,    -1,    88,   198,   157,   257,   158,   256,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,   101,   199,   160,
     177,   161,   102,   157,   200,   346,   201,    73,   158,   202,
     160,   177,   161,   203,   231,    -1,   103,   363,   159,    -1,
      97,    71,   159,    -1,   204,   216,    -1,   204,    75,    -1,
      -1,   364,    -1,   364,   159,    -1,    -1,    79,    29,    71,
     206,   208,    -1,    -1,   205,    29,    71,   207,   208,    -1,
      -1,    -1,   208,    26,   209,   363,    -1,    71,    -1,    79,
      -1,   384,    -1,   356,    -1,   126,   157,   396,   158,    -1,
      -1,   210,    13,   213,   363,    -1,    -1,   212,   210,    13,
     214,   363,    -1,   211,    -1,   212,   211,    -1,    79,    -1,
      78,    -1,   398,    -1,   149,   205,   152,    -1,   149,   319,
     152,    -1,   149,   319,   159,   152,    -1,   151,   177,   152,
      -1,   156,   363,   152,    -1,   156,   153,    13,   363,   152,
      -1,   155,   215,   152,    -1,   149,    71,   212,   152,    -1,
      -1,    -1,    -1,   149,    86,   157,   363,    90,   217,   253,
     252,   158,   152,   218,   204,   149,   219,   275,    46,    86,
     152,    -1,    -1,    -1,   149,    86,   363,    90,   253,   252,
     152,   220,   204,   149,   221,   275,    46,    86,   152,    -1,
      -1,    -1,   149,    65,   363,   152,   222,   204,   149,   223,
     266,   272,   273,    -1,    -1,    -1,    -1,   149,    84,   157,
     308,   159,   224,   308,   159,   225,   308,   158,   152,   226,
     204,   149,    46,    84,   152,    -1,    -1,    -1,   149,    84,
     157,   253,   252,   154,   363,   158,   152,   227,   204,   149,
     228,   275,    46,    84,   152,    -1,    -1,    -1,   149,    84,
     253,   252,   154,   363,   152,   229,   204,   149,   230,   275,
      46,    84,   152,    -1,   232,    -1,    -1,   233,    -1,   232,
     233,    -1,    -1,    -1,   102,   157,   346,   234,    73,   158,
     235,   160,   177,   161,    -1,   237,    -1,   236,     8,   237,
      -1,   367,    -1,   241,    -1,   243,    -1,    -1,    31,    -1,
      -1,   333,   240,    71,   242,   157,   276,   158,   160,   177,
     161,    -1,    -1,   246,    71,   247,   244,   250,   160,   284,
     161,    -1,    -1,   248,    71,   245,   249,   160,   284,   161,
      -1,   118,    -1,   111,   118,    -1,   119,    -1,   110,   118,
      -1,    -1,   121,   346,    -1,   120,    -1,    -1,   121,   251,
      -1,    -1,   122,   251,    -1,   346,    -1,   251,     8,   346,
      -1,    -1,   124,   253,    -1,   367,    -1,    31,   367,    -1,
     180,    -1,    26,   177,    85,   159,    -1,   180,    -1,    26,
     177,    87,   159,    -1,   180,    -1,    26,   177,    89,   159,
      -1,    71,    13,   357,    -1,   257,     8,    71,    13,   357,
      -1,   160,   259,   161,    -1,   160,   159,   259,   161,    -1,
      26,   259,    92,   159,    -1,    26,   159,   259,    92,   159,
      -1,    -1,    -1,   259,    93,   363,   262,   260,   177,    -1,
      -1,   259,    94,   262,   261,   177,    -1,    26,    -1,   159,
      -1,   180,    -1,    26,   177,    83,   159,    -1,    -1,    -1,
     264,    66,   157,   363,   158,   265,   180,    -1,    -1,    -1,
     266,    66,   363,   152,   267,   204,   149,    -1,    -1,   266,
      67,    65,   363,   152,   268,   204,   149,    -1,    -1,    -1,
     269,    66,   157,   363,   158,    26,   270,   177,    -1,    -1,
      67,   180,    -1,    -1,    67,   152,   204,   149,    -1,    46,
      65,   152,    -1,    -1,    67,    26,   177,    -1,    -1,    67,
     152,   204,   149,    -1,   277,    -1,    -1,   278,    73,    -1,
     278,    31,    73,    -1,   278,    31,    73,    13,   357,    -1,
     278,    73,    13,   357,    -1,   277,     8,   278,    73,    -1,
     277,     8,   278,    31,    73,    -1,   277,     8,   278,    31,
      73,    13,   357,    -1,   277,     8,   278,    73,    13,   357,
      -1,    -1,   126,    -1,   127,    -1,   346,    -1,   280,    -1,
      -1,   319,    -1,   367,    -1,    31,   365,    -1,   280,     8,
     319,    -1,   280,     8,   367,    -1,   280,     8,    31,   365,
      -1,   281,     8,   282,    -1,   282,    -1,    73,    -1,   162,
     364,    -1,   162,   160,   363,   161,    -1,   283,     8,    73,
      -1,   283,     8,    73,    13,   357,    -1,    73,    -1,    73,
      13,   357,    -1,   284,   285,    -1,    -1,    -1,   301,   286,
     305,   159,    -1,   306,   159,    -1,   288,    -1,    -1,   302,
     333,   240,    71,   287,   157,   276,   158,   300,    -1,   104,
     289,   290,    -1,   346,    -1,   289,     8,   346,    -1,   159,
      -1,   160,   291,   161,    -1,    -1,   292,    -1,   293,    -1,
     292,   293,    -1,   294,   159,    -1,   298,   159,    -1,   297,
     105,   295,    -1,   346,    -1,   295,     8,   346,    -1,    71,
      -1,   297,    -1,   346,   144,    71,    -1,   296,    90,   299,
      71,    -1,   296,    90,   304,    -1,    -1,   304,    -1,   159,
      -1,   160,   177,   161,    -1,   303,    -1,   113,    -1,    -1,
     303,    -1,   304,    -1,   303,   304,    -1,   107,    -1,   108,
      -1,   109,    -1,   112,    -1,   111,    -1,   110,    -1,   305,
       8,    73,    -1,   305,     8,    73,    13,   357,    -1,    73,
      -1,    73,    13,   357,    -1,   306,     8,    71,    13,   357,
      -1,    99,    71,    13,   357,    -1,   307,     8,   363,    -1,
     363,    -1,    -1,   309,    -1,    -1,   309,     8,   310,   363,
      -1,   363,    -1,   311,   371,    -1,   371,    -1,   312,    61,
     387,   163,    -1,    61,   387,   163,    -1,    -1,   312,   314,
     311,    -1,   312,    -1,   311,    -1,    -1,    -1,   316,   313,
      -1,    -1,    63,   347,   318,   355,    -1,    -1,   125,   157,
     320,   393,   158,    13,   363,    -1,   367,    13,   363,    -1,
     367,    13,    31,   367,    -1,    -1,   367,    13,    31,    63,
     347,   321,   355,    -1,    62,   363,    -1,   367,    24,   363,
      -1,   367,    23,   363,    -1,   367,    22,   363,    -1,   367,
      21,   363,    -1,   367,    20,   363,    -1,   367,    19,   363,
      -1,   367,    18,   363,    -1,   367,    17,   363,    -1,   367,
      16,   363,    -1,   367,    15,   363,    -1,   367,    14,   363,
      -1,   366,    60,    -1,    60,   366,    -1,   366,    59,    -1,
      59,   366,    -1,    -1,   363,    27,   322,   363,    -1,    -1,
     363,    28,   323,   363,    -1,    -1,   363,     9,   324,   363,
      -1,    -1,   363,    11,   325,   363,    -1,   363,    10,   363,
      -1,   363,    31,   363,    -1,   363,    30,   363,    -1,   363,
      44,   363,    -1,   363,    42,   363,    -1,   363,    43,   363,
      -1,   363,    45,   363,    -1,   363,    46,   363,    -1,   363,
      47,   363,    -1,   363,    41,   363,    -1,   363,    40,   363,
      -1,    42,   363,    -1,    43,   363,    -1,    48,   363,    -1,
      50,   363,    -1,   363,    33,   363,    -1,   363,    32,   363,
      -1,   363,    35,   363,    -1,   363,    34,   363,    -1,   363,
      36,   363,    -1,   363,    39,   363,    -1,   363,    37,   363,
      -1,   363,    38,   363,    -1,   363,    49,   347,    -1,   157,
     363,   158,    -1,   317,    -1,    -1,   157,   317,   158,   326,
     315,    -1,    -1,    -1,   363,    25,   327,   363,    26,   328,
     363,    -1,    -1,   363,    25,    26,   329,   363,    -1,   402,
      -1,    58,   363,    -1,    57,   363,    -1,    56,   363,    -1,
      55,   363,    -1,    54,   363,    -1,    53,   363,    -1,    52,
     363,    -1,    64,   353,    -1,    -1,    51,   330,   363,    -1,
     359,    -1,   126,   157,   396,   158,    -1,    61,   396,   163,
      -1,   164,   354,   164,    -1,    12,   363,    -1,    -1,   333,
     240,   157,   331,   276,   158,   334,   160,   177,   161,    -1,
      -1,   112,   333,   240,   157,   332,   276,   158,   334,   160,
     177,   161,    -1,    98,    -1,    -1,   104,   157,   335,   158,
      -1,   335,     8,    73,    -1,   335,     8,    31,    73,    -1,
      73,    -1,    31,    73,    -1,    -1,   170,   157,   337,   279,
     158,    -1,    -1,   145,   148,   170,   157,   338,   279,   158,
      -1,    -1,   148,   170,   157,   339,   279,   158,    -1,    -1,
     345,   144,   391,   157,   340,   279,   158,    -1,    -1,   345,
     144,   377,   157,   341,   279,   158,    -1,    -1,   379,   144,
     391,   157,   342,   279,   158,    -1,    -1,   379,   144,   377,
     157,   343,   279,   158,    -1,    -1,   377,   157,   344,   279,
     158,    -1,   112,    -1,   170,    -1,   145,   148,   170,    -1,
     148,   170,    -1,   170,    -1,   145,   148,   170,    -1,   148,
     170,    -1,   345,    -1,   348,    -1,    -1,    -1,   383,   123,
     349,   388,   350,   351,    -1,   383,    -1,   351,   352,    -1,
      -1,   123,   388,    -1,    -1,   157,   158,    -1,   157,   363,
     158,    -1,    -1,    78,    -1,   398,    -1,    -1,   157,   279,
     158,    -1,    69,    -1,    70,    -1,    79,    -1,   132,    -1,
     133,    -1,   147,    -1,   129,    -1,   130,    -1,   131,    -1,
     146,    -1,   140,    78,   141,    -1,   140,   141,    -1,   356,
      -1,   170,    -1,   145,   148,   170,    -1,   148,   170,    -1,
      42,   357,    -1,    43,   357,    -1,   126,   157,   360,   158,
      -1,    61,   360,   163,    -1,   358,    -1,   128,    -1,   345,
     144,    71,    -1,    72,    -1,   405,    -1,   170,    -1,   145,
     148,   170,    -1,   148,   170,    -1,   356,    -1,   165,   398,
     165,    -1,   140,   398,   141,    -1,   128,    -1,    -1,   362,
     361,    -1,    -1,     8,    -1,   362,     8,   357,   124,   357,
      -1,   362,     8,   357,    -1,   357,   124,   357,    -1,   357,
      -1,   364,    -1,   319,    -1,   367,    -1,   367,    -1,   367,
      -1,    -1,    -1,   382,   123,   368,   388,   369,   376,   370,
      -1,   382,    -1,   370,   371,    -1,    -1,    -1,   123,   388,
     372,   376,    -1,   373,    61,   387,   163,    -1,   374,    61,
     387,   163,    -1,    -1,   157,   375,   279,   158,    -1,   374,
      -1,   373,    -1,    -1,   385,    -1,   392,   385,    -1,   345,
     144,   377,    -1,   379,   144,   377,    -1,   385,    -1,   380,
      61,   387,   163,    -1,    -1,   336,   381,    61,   387,   163,
      -1,   383,    -1,   380,    -1,   336,    -1,   385,    -1,   392,
     385,    -1,   378,    -1,   385,    -1,   392,   385,    -1,   385,
      61,   387,   163,    -1,   385,   160,   363,   161,    -1,   386,
      -1,    73,    -1,   162,   160,   363,   161,    -1,    -1,   363,
      -1,   390,    -1,    -1,   377,   389,    -1,   390,    61,   387,
     163,    -1,   390,   160,   363,   161,    -1,   391,    -1,    71,
      -1,   160,   363,   161,    -1,   162,    -1,   392,   162,    -1,
     393,     8,   394,    -1,   394,    -1,   367,    -1,    -1,   125,
     157,   395,   393,   158,    -1,    -1,    -1,   397,   361,    -1,
     397,     8,   363,   124,   363,    -1,   397,     8,   363,    -1,
     363,   124,   363,    -1,   363,    -1,   397,     8,   363,   124,
      31,   365,    -1,   397,     8,    31,   365,    -1,   363,   124,
      31,   365,    -1,    31,   365,    -1,   398,   399,    -1,   398,
      78,    -1,   399,    -1,    78,   399,    -1,    73,    -1,    -1,
      73,    61,   400,   401,   163,    -1,    73,   123,    71,    -1,
     142,   363,   161,    -1,   142,    72,    61,   363,   163,   161,
      -1,   143,   367,   161,    -1,    71,    -1,    74,    -1,    73,
      -1,   115,   157,   403,   158,    -1,   116,   157,   367,   158,
      -1,     7,   363,    -1,     6,   363,    -1,     5,   157,   363,
     158,    -1,     4,   363,    -1,     3,   363,    -1,   367,    -1,
      -1,   403,     8,   404,   367,    -1,   345,   144,    71,    -1,
     379,   144,    71,    -1
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
     381,   382,   383,   390,   392,   399,   404,   405,   406,   408,
     412,   414,   415,   416,   414,   419,   420,   418,   423,   426,
     423,   431,   432,   433,   430,   438,   439,   437,   442,   443,
     441,   448,   449,   453,   454,   459,   459,   459,   464,   465,
     469,   473,   477,   482,   483,   488,   488,   494,   493,   500,
     499,   509,   510,   511,   512,   516,   517,   521,   524,   526,
     529,   531,   535,   536,   540,   541,   546,   547,   551,   552,
     557,   558,   563,   564,   569,   570,   575,   576,   577,   578,
     583,   584,   584,   585,   585,   590,   591,   596,   597,   602,
     604,   604,   607,   609,   609,   610,   610,   613,   615,   615,
     619,   621,   624,   626,   630,   633,   635,   638,   640,   644,
     645,   650,   651,   652,   653,   654,   655,   656,   657,   662,
     663,   664,   665,   670,   671,   676,   677,   678,   679,   680,
     681,   685,   686,   691,   692,   693,   698,   699,   700,   701,
     707,   708,   713,   713,   714,   715,   716,   716,   721,   725,
     726,   730,   731,   734,   736,   740,   741,   745,   746,   750,
     754,   755,   759,   760,   764,   768,   769,   773,   774,   778,
     779,   783,   784,   788,   789,   793,   794,   798,   799,   800,
     801,   802,   803,   807,   808,   809,   810,   814,   815,   819,
     820,   825,   826,   830,   830,   831,   835,   836,   840,   841,
     845,   845,   846,   847,   851,   852,   852,   857,   857,   861,
     861,   862,   863,   864,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   881,   882,   882,   883,   883,   884,   884,   885,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   913,   914,   915,   914,
     917,   917,   919,   920,   921,   922,   923,   924,   925,   926,
     927,   928,   928,   929,   930,   931,   932,   933,   934,   934,
     936,   936,   941,   944,   946,   950,   951,   952,   953,   957,
     957,   960,   960,   963,   963,   966,   966,   969,   969,   972,
     972,   975,   975,   978,   978,   984,   985,   986,   987,   991,
     992,   993,   999,  1000,  1005,  1006,  1005,  1008,  1013,  1014,
    1019,  1023,  1024,  1025,  1029,  1030,  1031,  1036,  1037,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1071,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,
    1083,  1088,  1089,  1092,  1094,  1098,  1099,  1100,  1101,  1105,
    1106,  1111,  1116,  1121,  1126,  1127,  1126,  1129,  1133,  1134,
    1139,  1139,  1143,  1144,  1148,  1148,  1154,  1155,  1156,  1160,
    1161,  1165,  1166,  1171,  1175,  1176,  1176,  1181,  1182,  1183,
    1188,  1189,  1190,  1194,  1195,  1199,  1200,  1201,  1206,  1207,
    1211,  1212,  1217,  1218,  1218,  1222,  1223,  1224,  1228,  1229,
    1233,  1234,  1238,  1239,  1244,  1245,  1245,  1246,  1251,  1252,
    1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,  1267,  1268,
    1269,  1270,  1276,  1277,  1277,  1278,  1279,  1280,  1281,  1286,
    1287,  1288,  1293,  1294,  1295,  1296,  1297,  1298,  1299,  1303,
    1304,  1304,  1308,  1309
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
     215,   215,   215,   216,   216,   216,   216,   216,   216,   216,
     216,   217,   218,   219,   216,   220,   221,   216,   222,   223,
     216,   224,   225,   226,   216,   227,   228,   216,   229,   230,
     216,   231,   231,   232,   232,   234,   235,   233,   236,   236,
     237,   238,   239,   240,   240,   242,   241,   244,   243,   245,
     243,   246,   246,   246,   246,   247,   247,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   258,   258,
     259,   260,   259,   261,   259,   262,   262,   263,   263,   264,
     265,   264,   266,   267,   266,   268,   266,   269,   270,   269,
     271,   271,   272,   272,   273,   274,   274,   275,   275,   276,
     276,   277,   277,   277,   277,   277,   277,   277,   277,   278,
     278,   278,   278,   279,   279,   280,   280,   280,   280,   280,
     280,   281,   281,   282,   282,   282,   283,   283,   283,   283,
     284,   284,   286,   285,   285,   285,   287,   285,   288,   289,
     289,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     295,   295,   296,   296,   297,   298,   298,   299,   299,   300,
     300,   301,   301,   302,   302,   303,   303,   304,   304,   304,
     304,   304,   304,   305,   305,   305,   305,   306,   306,   307,
     307,   308,   308,   310,   309,   309,   311,   311,   312,   312,
     314,   313,   313,   313,   315,   316,   315,   318,   317,   320,
     319,   319,   319,   321,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   322,   319,   323,   319,   324,   319,   325,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   326,   319,   327,   328,   319,
     329,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   330,   319,   319,   319,   319,   319,   319,   331,   319,
     332,   319,   333,   334,   334,   335,   335,   335,   335,   337,
     336,   338,   336,   339,   336,   340,   336,   341,   336,   342,
     336,   343,   336,   344,   336,   345,   345,   345,   345,   346,
     346,   346,   347,   347,   349,   350,   348,   348,   351,   351,
     352,   353,   353,   353,   354,   354,   354,   355,   355,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   358,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   360,   360,   361,   361,   362,   362,   362,   362,   363,
     363,   364,   365,   366,   368,   369,   367,   367,   370,   370,
     372,   371,   373,   373,   375,   374,   376,   376,   376,   377,
     377,   378,   378,   379,   380,   381,   380,   382,   382,   382,
     383,   383,   383,   384,   384,   385,   385,   385,   386,   386,
     387,   387,   388,   389,   388,   390,   390,   390,   391,   391,
     392,   392,   393,   393,   394,   395,   394,   394,   396,   396,
     397,   397,   397,   397,   397,   397,   397,   397,   398,   398,
     398,   398,   399,   400,   399,   399,   399,   399,   399,   401,
     401,   401,   402,   402,   402,   402,   402,   402,   402,   403,
     404,   403,   405,   405
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
       7,     1,     2,     1,     2,     0,     2,     1,     0,     2,
       0,     2,     1,     3,     0,     2,     1,     2,     1,     4,
       1,     4,     1,     4,     3,     5,     3,     4,     4,     5,
       0,     0,     6,     0,     5,     1,     1,     1,     4,     0,
       0,     7,     0,     0,     7,     0,     8,     0,     0,     8,
       0,     2,     0,     4,     3,     0,     3,     0,     4,     1,
       0,     2,     3,     5,     4,     4,     5,     7,     6,     0,
       1,     1,     1,     1,     0,     1,     1,     2,     3,     3,
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
       3,     3,     3,     3,     1,     0,     5,     0,     0,     7,
       0,     5,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     0,     3,     1,     4,     3,     3,     2,     0,    10,
       0,    11,     1,     0,     4,     3,     4,     1,     2,     0,
       5,     0,     7,     0,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     5,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     0,     0,     6,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     2,     2,     2,     4,     3,     1,
       1,     3,     1,     1,     1,     3,     2,     1,     3,     3,
       1,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     1,     2,     0,
       0,     4,     4,     4,     0,     4,     1,     1,     0,     1,
       2,     3,     3,     1,     4,     0,     5,     1,     1,     1,
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
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   548,     0,     0,   441,     0,
     449,   450,     6,   472,   528,    67,   451,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   402,     0,     0,
      79,     0,     0,     0,     0,     0,   425,     0,     0,     0,
       0,   161,   163,   167,     0,     0,   480,   455,   456,   457,
     452,   453,     0,     0,   458,   454,     0,     0,    30,     0,
       0,     0,    78,    30,   540,   444,     0,   474,     4,     0,
       8,    36,    19,     9,    10,   151,   152,     0,     0,   374,
     490,   153,   519,     0,   477,   393,     0,   489,     0,   491,
       0,   522,     0,   518,   497,   517,   520,   527,     0,   382,
     473,     6,   425,     0,   153,   578,   577,     0,   575,   574,
     397,   360,   361,   362,   363,     0,   389,   388,   387,   386,
     385,   384,   383,   425,     0,     0,   426,     0,   340,   493,
       0,   338,     0,   553,     0,   483,   325,     0,     0,   426,
     432,   317,   433,     0,   437,   520,     0,     0,   390,     0,
      37,     0,   300,     0,    45,   301,     0,     0,     0,    57,
       0,    59,     0,     0,     0,    61,   490,     0,   491,     0,
       0,     0,    22,     0,    21,   243,     0,     0,   242,   164,
     162,   248,     0,   153,     0,     0,     0,     0,   319,   548,
     562,     0,   460,     0,     0,     0,   560,     0,    15,     0,
     476,     0,     6,   451,     0,     0,     0,   490,   489,    28,
     111,   110,     0,   112,     0,     0,   374,     0,    28,     0,
     445,     0,   446,     0,     0,     0,   409,     0,    18,   165,
     159,   154,     0,     0,     0,   345,     0,   347,   377,   341,
     343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,   339,   337,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   423,     0,   530,   494,   530,
       0,   541,   521,     0,     0,   392,     0,   428,     0,     0,
     557,   492,     0,   395,   484,   549,     0,   428,     0,   447,
       0,   434,   521,   442,     0,     0,     0,    66,     0,     0,
       0,   302,   305,   490,   491,     0,     0,    58,    60,    86,
       0,    62,    63,    30,    85,    24,     0,     0,    17,     0,
     244,   491,     0,    64,     0,     0,    65,     0,     0,   148,
     150,   579,     0,     0,     0,   547,     0,   563,     0,   459,
     561,   472,     0,     0,   559,   479,   558,   475,     5,    12,
      13,   413,     0,    99,   451,     0,     0,     0,   108,     0,
     102,   101,   523,     0,     0,     0,   301,   174,   176,     0,
       0,     0,   113,   114,     0,    91,   116,     0,   119,     0,
     117,   375,   373,    38,     0,   396,   478,     7,   234,     0,
       0,   157,   168,   155,   398,   530,   582,     0,   511,   509,
       0,     0,     0,   349,     0,   380,     0,     0,     0,   351,
     350,   365,   364,   367,   366,   368,   370,   371,   369,   359,
     358,   353,   354,   352,   355,   356,   357,   372,     0,   321,
     336,   335,   334,   333,   332,   331,   330,   329,   328,   327,
     326,   234,   583,   512,     0,   531,     0,     0,     0,     0,
     576,   427,   538,     0,   552,     0,   551,   427,   511,   234,
     318,   512,     0,   443,    39,   299,     0,     0,    51,   303,
      73,    70,     0,     0,    55,     0,     0,   481,     0,   470,
       0,     0,   462,     0,   461,    27,   469,    28,     0,    23,
      20,     0,   241,   249,   246,   400,     0,     0,   580,   572,
     573,    11,     0,   544,     0,   543,   394,     0,   565,     0,
     566,   568,   411,     3,     5,   234,   128,   548,     0,   104,
     120,     0,   109,   524,    92,   177,   174,     0,   491,     0,
       0,     0,     0,    94,   115,     0,    29,    31,    32,    33,
      34,     0,   314,   529,     0,     0,   233,   490,   491,     0,
       0,     0,   429,   166,   170,     0,     0,     0,   229,     0,
       0,   417,   415,   510,   346,   348,     0,     0,   342,   344,
       0,   322,     0,   421,   419,   514,   533,   495,   532,   537,
     525,   526,   556,   555,     0,     0,   435,    42,     0,    49,
      46,   301,     0,     0,     0,     0,     0,     0,     0,   465,
     466,   488,     0,   483,   481,     0,   464,     0,     0,    25,
     245,     0,   229,   149,    69,     0,   545,   547,     0,   569,
     571,   570,     0,     0,   234,    16,     3,     0,    89,     0,
       0,   106,    96,     0,   131,   175,     0,   121,   174,    96,
       0,   118,   376,     0,   237,   410,     0,    26,     0,   431,
       0,     0,   169,   172,   251,   229,   230,   231,     0,   219,
       0,   232,   516,   539,   234,   234,   381,   378,   323,   424,
     234,   234,   534,   508,   530,     0,     0,   550,   448,   439,
      30,    40,     0,     0,     0,   304,   174,   174,   184,     0,
      30,   182,    77,   190,   190,    56,     0,   468,   484,   482,
       0,   463,   471,     0,   247,     0,   581,   547,   542,     0,
     564,     0,     0,    14,   414,     0,   103,   105,     0,    93,
       0,   301,     0,     0,     0,    95,     0,   530,     0,   313,
     312,   316,   307,     0,   490,   491,   430,   171,   251,     0,
     283,     0,   403,   229,     0,   221,     0,     0,     0,   447,
       0,     0,   504,   507,   506,   499,     0,     0,   554,   436,
      28,   199,     0,    30,   197,    47,    52,     0,     0,     0,
      28,   190,     0,   190,     0,   487,   486,   467,    80,   403,
       0,   320,   567,   412,    88,   129,    87,   107,    97,     0,
       0,   138,   174,   125,    35,     0,   500,   306,   530,     0,
     240,   283,   173,     0,     0,   287,   288,   289,   292,   291,
     290,   282,   160,   250,   255,   252,     0,   281,   285,     0,
       0,     0,     0,     0,   222,     0,   418,   416,   379,   324,
     422,   420,   234,   530,   530,   496,   535,   536,     0,   438,
     207,   210,     0,    28,   301,    74,    71,   185,     0,     0,
       0,     0,     0,     0,   186,     0,     0,     0,   546,   202,
       0,     0,   132,    89,     0,    89,   309,   508,     0,   311,
     158,     0,     0,   259,     0,   153,   286,     0,   254,    30,
       0,    30,     0,   225,     0,   224,     0,     0,     0,   498,
     440,   215,     0,     0,    41,    50,     0,     0,     0,     0,
     183,     0,   188,     0,   195,   196,   193,   187,   485,    81,
      30,   212,    98,   135,   301,     0,     0,     0,   501,   308,
       0,     0,   261,   263,   258,   295,     0,     0,     0,    28,
       0,   407,     0,    28,   226,     0,   223,   505,   502,   503,
       0,     0,     0,     0,   211,   198,    53,    30,   180,    75,
      72,   189,   191,    30,     0,    28,     0,     0,     0,    89,
       0,   139,   122,   126,   298,   260,     6,     0,   264,   265,
       0,     0,   273,     0,     0,     0,     0,   253,   256,     0,
     156,   408,     0,   404,   399,     0,   228,     0,    30,     0,
       0,     0,    28,    30,    28,     0,   401,     0,     0,    89,
       0,   130,     0,     0,   217,    89,   217,   262,   266,   267,
     277,     0,   268,     0,   296,   293,     0,   297,     0,   405,
     227,     0,    28,    44,   200,    30,   178,    54,     0,    28,
      82,   203,     0,     0,     0,   136,   133,     0,     0,     0,
       0,     0,   276,   269,   270,   274,     0,   229,   406,     0,
       0,    28,   181,     0,    89,   205,   213,   214,   217,    89,
      89,     0,   123,     0,   275,     0,   294,     0,   208,   201,
       0,    30,     0,    89,     0,     0,     0,     0,   217,     0,
     271,     0,    30,   179,    28,   204,     0,     0,     0,   218,
     140,     0,   127,   279,    30,   257,    28,    83,   206,     0,
       0,     0,    28,   142,   137,     0,     0,   280,     0,    84,
     141,   143,   134,   124,     0,   144,   145,     0,     0,   146,
       0,    30,    28,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    87,    88,   544,   378,   193,   194,
      89,   229,   407,   566,   978,    91,   618,   791,   710,   870,
     329,   713,   173,   712,   621,   874,  1021,   628,   624,   929,
     623,   928,   177,   189,   886,   984,  1083,  1133,   745,   226,
     662,   669,   749,   890,   387,   388,   389,   660,   748,   232,
     816,   753,  1035,  1108,   895,  1036,   658,   889,   751,   944,
    1089,   989,  1088,   893,  1034,  1139,  1140,  1141,  1147,  1150,
     358,   359,    93,    94,   252,    95,   587,    96,   584,   422,
      97,   421,    98,   586,   681,   682,   560,   397,  1057,   979,
     722,   503,   725,   802,  1023,   983,   936,   795,   871,  1080,
     941,  1084,  1103,   921,  1112,   924,   988,  1031,   972,  1068,
     688,   689,   690,   575,   576,   197,   198,   202,   770,   843,
     904,  1046,   844,   902,   954,   997,   998,   999,  1000,  1073,
    1001,  1002,  1003,  1071,  1125,   845,   846,   847,   848,   956,
     849,   171,   330,   331,   622,   759,   760,   761,   829,   672,
     673,    99,   319,   100,   365,   779,   437,   438,   432,   434,
     572,   436,   778,   596,   135,   588,   642,   124,   852,   962,
     102,   418,   654,   545,   695,   694,   701,   700,   471,   103,
     691,   161,   162,   492,   709,   789,   869,   168,   241,   490,
     104,   631,   516,   105,   632,   315,   633,   187,   107,   310,
     108,   109,   477,   703,   865,   762,   897,   783,   784,   862,
     785,   110,   111,   112,   113,   253,   114,   115,   391,   116,
     117,   476,   607,   702,   608,   609,   118,   534,   535,   737,
     154,   155,   215,   216,   537,   652,   119,   362,   645,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -866
static const yytype_int16 yypact[] =
{
    -866,    85,    95,  -866,  1949,  4843,  4843,  -108,  4843,  4843,
    4843,  4843,  4843,  4843,  4843,  -866,  4843,  4843,  4843,  4843,
    4843,  4843,  4843,   207,   207,  3133,  4843,   223,   -32,     0,
    -866,  -866,    97,  -866,  -866,  -866,  -866,  4843,  -866,    61,
     107,   109,  -866,   114,  3264,  3395,   215,  -866,   217,  3526,
    -866,  4843,    19,    44,   182,   257,   -25,   153,   159,   173,
     220,  -866,  -866,  -866,   224,   226,  -866,  -866,  -866,  -866,
    -866,  -866,   288,    91,  -866,  -866,   322,  3001,  -866,   325,
    3657,  4843,  -866,  -866,   -28,   402,   417,   -61,  -866,    34,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,   328,   336,  -866,
    -866,   103,   348,   267,  -866,  -866,  5510,  -866,   381,  1349,
     261,  -866,   270,   364,   324,  -866,   -24,  -866,    45,  -866,
    -866,  -866,   351,   303,   103,  6611,  6611,  4843,  6611,  6611,
    3183,  -866,  -866,   410,  -866,  4843,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,   316,   322,   -29,   342,  -866,  -866,
     347,  -866,   207,  6409,   331,   501,  -866,   372,   322,   394,
     408,  -866,  -866,   413,   431,    14,    45,  3788,  -866,  4843,
    -866,    36,  6611,  2739,  -866,  4843,  4843,   415,  4843,  -866,
    5551,  -866,  5593,   434,   577,  -866,   439,  6611,    90,   455,
    5640,   322,   165,    37,  -866,  -866,   163,    43,  -866,  -866,
    -866,   600,    46,   103,   207,   207,   207,   459,  -866,  3133,
      31,   259,  -866,  4974,   207,   355,  -866,   322,  -866,   432,
     317,  4843,   375,   592,    15,  5105,    52,   -80,   102,   471,
     300,  -866,   474,   496,   617,  6157,   477,  5723,   480,  4843,
     300,   481,   496,   300,   184,   573,  -866,   579,  -866,   527,
    -866,  -866,   -31,   591,    68,  -866,  4843,  -866,   630,  -866,
    -866,  4843,  4843,  4843,  4843,  4843,  4843,  4843,  4843,  4843,
    4843,  4843,  4843,  4843,  4843,  4843,  4843,  4843,  4843,   223,
    -866,  -866,  -866,  3920,  4843,  4843,  4843,  4843,  4843,  4843,
    4843,  4843,  4843,  4843,  4843,  -866,    82,  4843,  -866,  4843,
    4843,   -28,    69,   507,  5770,  -866,   322,   134,   160,   160,
    -866,  -866,  4052,  -866,  4184,  -866,   322,   394,    83,   529,
      83,  -866,   -20,  -866,  5813,  5855,  4843,  -866,   586,  4843,
     500,   681,  6611,   602,  1218,   626,  5899,  -866,  -866,  -866,
     694,  -866,  -866,  -866,  -866,   248,   628,    19,  -866,  4843,
    -866,  -866,    44,  -866,   694,   631,  -866,   544,    26,  -866,
    -866,  -866,    54,   549,   551,   203,   554,  -866,   642,  -866,
    -866,   665,  1736,   574,  -866,  -866,  -866,   345,  -866,  -866,
    -866,  -866,  6200,  -866,   725,   584,    11,   732,  -866,  1118,
    -866,  -866,   -20,    45,   677,   207,  4316,   625,  -866,  4843,
    6504,   680,  -866,  -866,   601,  -866,  -866,  2080,  -866,  4843,
    -866,  -866,  -866,  -866,  5246,  -866,  -866,  -866,  4448,   741,
     139,  -866,   645,  -866,  -866,  4843,   610,  4843,   611,   -20,
     613,    45,  4843,  6688,  4843,  -866,  4843,  4843,  4843,  1642,
    1463,  3443,  3443,  3443,  3443,  1477,  1477,  1477,  1477,   755,
     755,   675,   675,   675,   410,   410,   410,  -866,     3,  3183,
    3183,  3183,  3183,  3183,  3183,  3183,  3183,  3183,  3183,  3183,
    3183,  4448,   610,   614,   615,  6611,   612,   160,   616,  5287,
    -866,   155,  -866,   207,  6611,   207,  6452,   394,  -866,  4448,
    -866,  -866,   160,  -866,   748,  6611,   620,  5942,  -866,  -866,
    -866,  -866,   765,    55,  -866,   694,   694,   694,   623,  -866,
     635,   322,   -51,   640,  -866,  -866,  -866,   624,   718,  -866,
    -866,  5328,  -866,  -866,   792,  -866,   207,   648,  -866,  -866,
    -866,  -866,   651,  -866,    56,  -866,  -866,    27,  -866,  4843,
    -866,  -866,  -866,   652,  -866,  4448,  -866,  3133,   668,  -866,
    -866,   797,  -866,   -20,  -866,  -866,   625,   653,   947,   192,
     660,  5681,   192,  -866,  -866,   659,  -866,  -866,  -866,  -866,
    -866,  6242,   198,  -866,   207,   661,   809,    57,   511,   694,
     670,   322,   394,  -866,   699,   139,   669,   673,   265,   685,
    5378,  -866,  -866,   -20,  6651,  3183,  4843,  6570,  1868,  1518,
     223,  -866,   678,  -866,  -866,  -866,  -866,  -866,    16,  -866,
    -866,  -866,  -866,  -866,  4580,   688,  -866,  -866,  2739,  -866,
    -866,  4843,  4843,   207,   192,   694,   760,  2212,     6,  -866,
    -866,   709,   687,   830,   694,   322,   212,   780,   750,  -866,
    -866,   694,   265,  -866,  -866,   207,  -866,   203,   841,  -866,
    -866,  -866,   692,  1307,  4448,  -866,   695,   700,  -866,   701,
    4843,  -866,  -866,   706,  -866,  -866,  4843,  -866,   625,  -866,
     703,  -866,  -866,   206,  -866,  -866,  4712,  -866,   322,   394,
     139,   704,   857,  -866,  -866,   265,  -866,  -866,   710,   859,
      21,  -866,  -866,  -866,  4448,  4448,  3314,  -866,  -866,  -866,
    4448,  4448,  -866,   712,  4843,  4843,   207,  6611,  -866,  -866,
    -866,  -866,  4843,  2344,   711,  6611,   625,   625,  -866,   861,
    -866,  -866,  -866,   723,   731,  -866,   694,  -866,   694,  -866,
     736,   219,  -866,   738,  -866,   739,  -866,   203,  -866,  4843,
    -866,   735,   740,  -866,  -866,   231,  -866,  6611,  4843,   873,
    4843,  4843,  6283,   192,   749,   873,   743,  4843,   160,   777,
     241,  -866,  -866,   207,    59,   657,   394,   857,  -866,   139,
     683,   747,   802,   561,   834,   895,   752,   757,  4843,   529,
     758,   759,  -866,   852,   858,  -866,   761,  5419,  -866,   800,
     519,  -866,  5984,  -866,  -866,  -866,  -866,   762,   767,   694,
     837,  -866,   516,  -866,   377,  -866,   805,  -866,  -866,   802,
      62,  3183,  -866,  -866,  -866,  3001,  -866,  6611,  -866,  6028,
     778,  -866,   625,  -866,  -866,   776,  -866,  -866,  4843,   777,
    -866,  1004,  -866,   870,   139,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,   351,   824,  -866,    49,
     783,   788,   786,    71,   937,   694,  -866,  -866,  3314,  -866,
    -866,  -866,  4448,  4843,  4843,   777,  -866,  -866,   160,  -866,
    -866,   411,   793,   868,  4843,  -866,  -866,  -866,   794,   639,
     795,  4843,    10,   453,  -866,   694,   139,   796,  -866,  -866,
    4843,   803,  -866,  -866,   814,  -866,  -866,   712,   810,   777,
    -866,   945,    30,  -866,   901,   103,  -866,   905,  -866,  -866,
     149,  -866,   904,   965,   694,  -866,   821,   817,   820,  -866,
    -866,   433,   827,  2739,  -866,  -866,   826,   829,  2476,  2476,
    -866,   832,  -866,  5460,  -866,  -866,  -866,  -866,  -866,  -866,
    -866,   447,  6611,  -866,  4843,   239,   836,   271,  -866,  -866,
     694,   139,  -866,   202,  -866,   982,    50,   925,   984,   838,
     927,  -866,    63,   840,   985,   694,  -866,  -866,  -866,  -866,
     846,   978,   940,  4843,  -866,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,   932,   848,  4843,    -6,   964,  -866,
     853,  3001,  -866,  3001,  -866,  -866,   923,   854,   202,  -866,
     855,   926,   912,   862,   876,   694,   949,  -866,  -866,   694,
    -866,  -866,   222,  -866,  -866,   694,  -866,  4843,  -866,   864,
    6071,  2608,   938,  -866,   490,   866,  -866,  6326,  4843,  -866,
     961,  -866,   283,   877,   963,  -866,   963,  -866,  -866,  -866,
     649,   139,  -866,   957,  -866,  1019,   878,  -866,   968,  -866,
    -866,  6113,   969,  -866,  -866,  -866,  -866,  -866,   884,   502,
    -866,  -866,  6368,   301,   892,  3001,  -866,   894,  1001,   361,
    1002,   980,   986,  1041,  -866,  -866,   694,   265,  -866,  1029,
    2739,   971,  -866,   899,  -866,  -866,  3001,  -866,   963,  -866,
    -866,   976,  3001,   975,  -866,   139,  -866,   906,  -866,  -866,
     908,  -866,   412,  -866,  1017,   448,   478,   916,   963,   917,
    -866,   390,  -866,  -866,   909,  3001,   498,   989,  2870,  3001,
    -866,  1028,  -866,  -866,  -866,  -866,   676,  -866,  3001,   930,
     995,   997,   928,   988,  -866,   934,   935,  -866,   936,  -866,
     988,  -866,  -866,  -866,   139,  -866,  -866,  1018,   939,  -866,
     942,  -866,   943,  -866
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -866,  -866,  -347,  -866,   -23,  -866,  -866,  -866,  -866,   751,
    -866,   -74,  -866,  -866,    -2,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -865,  -866,
    -866,  -866,   426,  -866,   707,   716,  -866,  -866,  -866,  -866,
       8,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,   -41,  -866,  -866,
    -866,   581,   693,   702,  -119,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,   430,  -530,  -374,  -866,   190,
    -866,  -866,  -866,  -642,  -866,  -866,   187,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -755,
    -624,  -866,   349,  -454,  -866,  -866,   772,  -866,   357,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,   128,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -824,  -866,
    -866,  -866,  -389,  -866,  -866,   298,  -866,  -866,  -866,  -866,
    -866,   -60,  -866,   -34,  -866,  -866,  -866,  -866,  -866,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,    -1,   337,  -866,
    -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,  -866,   966,
    -410,  -259,  -866,  -866,  -866,  -866,  -866,  -866,  -866,   368,
    -162,  -307,  -866,  -866,   514,   530,  -866,   867,   -53,  -458,
     582,  1181,  -866,  -866,  -866,  -720,  -866,  -866,  -866,  -866,
     252,  -240,  -866,  1232,  -866,  -866,  -866,   -21,  -866,   -19,
    -866,  -288,  -479,  -866,  -866,   386,   -11,   436,   521,  -866,
    -190,  -866,   605,   485,  -866,  -866,  -866,  -866,  -866,  -866
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -539
static const yytype_int16 yytable[] =
{
     146,   146,    90,   101,   159,   303,   164,   557,   165,   238,
     583,   478,    92,   616,   428,   186,   166,   602,   735,   366,
     457,   236,   556,   906,   228,   612,   663,   613,   945,   192,
     947,   543,   723,   515,   526,   615,   934,   299,   951,   827,
     423,   299,   247,   227,   326,   347,   395,   523,   201,   127,
     219,   352,   774,   220,   355,   203,   473,   907,  1006,  1028,
     390,   771,   528,   626,   647,  -235,   600,  -238,   428,   473,
     647,  1012,   403,    47,   121,   299,    34,   704,   488,   404,
     491,   401,   804,  -426,   357,     3,   121,   245,    34,   548,
     121,   657,   367,  -426,   775,    -2,   246,   245,   649,   302,
     650,   651,   912,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   143,   674,   195,    34,   245,
    -513,   203,   307,   170,  1032,   167,   424,   143,   246,   146,
     299,   -90,   239,  -509,   251,   317,   300,   589,   754,   426,
     300,    34,   333,   350,   913,   919,  1029,   322,   144,  -493,
    -493,   145,   212,   472,   368,    34,    34,   169,  -513,   879,
     144,   883,   121,   145,  1063,    84,   724,   191,   345,   935,
    1069,   328,   396,   146,   300,   683,   705,    84,   514,   827,
     960,   146,   146,   146,   527,   665,   797,   798,   668,   952,
     953,   146,   514,   248,   377,   327,   348,   656,   629,   630,
     742,   146,   353,   392,   402,   356,   196,   301,   908,  1007,
     121,   393,   529,   627,   648,  -235,  1072,  -238,   174,  1102,
     888,  1013,   961,   395,  1105,  1106,  -510,   390,   427,   300,
      84,   482,   714,    34,   121,   429,    34,   606,  1116,   217,
     776,   777,   427,   431,    84,    84,   780,   781,   788,   342,
     717,   218,   606,  1048,   -90,   346,   159,   210,   164,  -315,
     165,   405,   374,   121,   175,    34,   176,   757,   166,   517,
     683,   178,   677,   996,   121,   143,    34,   429,   121,   826,
      34,  1070,   245,   481,   580,   431,   183,   581,   184,   429,
     429,   381,   894,   487,   121,  1049,    34,   431,   431,   429,
     199,   429,   828,   245,   143,   830,   814,   431,   144,   431,
     204,   145,   542,   245,   814,   143,   205,   512,   718,   143,
     427,  -315,    84,   349,   192,    84,   213,   214,   532,   758,
     206,   512,   210,  1104,   734,   143,   121,   144,   518,   236,
     145,   698,   146,   514,   514,   514,   814,   580,   144,   416,
     581,   145,   144,  1121,    84,   145,  -428,   659,   814,   832,
     245,   210,   820,  -427,  -310,    84,   211,   245,   157,    84,
     392,   158,   146,   210,   553,   200,   814,   207,   393,   822,
     815,   208,    78,   209,   577,    84,    79,    80,   991,   920,
      78,   686,   687,   121,    79,    80,   245,   582,   210,   249,
     369,   213,   214,   230,   231,   567,   101,   250,   916,  -515,
     580,   254,   593,   581,   296,   568,   786,   514,   295,   805,
     993,   806,    78,  -220,   903,   297,    79,    80,   210,   212,
     213,   214,  1065,   374,    78,   146,   814,   577,    79,    80,
     281,   282,   213,   214,    30,    31,   383,   298,    34,    47,
    1086,   217,    78,  1097,   384,   577,    79,    80,   429,   279,
     146,  -428,   146,   514,   306,   245,   431,   213,   214,   825,
     881,   882,   514,   429,   381,   210,   939,   922,   923,   514,
     240,   431,   512,   512,   512,   927,   308,   814,   636,  -427,
     210,   309,   877,   245,   313,   243,   375,   213,   214,   970,
     971,   385,   542,   146,    67,    68,    69,    70,    71,   314,
    1092,   577,    78,   986,   987,   386,    79,    80,   606,  -236,
     316,    74,    75,   814,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   146,    84,   884,   146,
     898,   995,   245,  1004,   213,   214,   881,   882,   915,  1123,
    1124,   146,   318,   814,   321,   990,   512,   320,   679,   213,
     214,  1115,   582,    78,   514,   582,   514,    79,    80,   210,
    -493,  -493,   335,   814,   374,   917,   918,   159,   938,   164,
     245,   165,  -194,  -194,  -194,   -43,   -43,   -43,  1004,   166,
     340,   379,   380,   339,  -192,  -192,  -192,  1118,   341,    78,
     146,   146,   512,    79,    80,   148,   151,   966,   880,   881,
     882,   512,   731,   354,   937,   343,   711,   364,   512,   582,
     577,   394,   146,   406,   146,   721,   408,  1119,   606,    78,
     409,  1074,   121,    79,    80,   411,   790,   514,   213,   214,
     430,   413,   764,   994,   417,   415,   800,  1128,   420,    78,
     419,  -194,   425,    79,    80,   766,   435,   582,  1016,   498,
     577,   577,   582,  -192,   424,  -239,   577,   577,   496,  -236,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   474,   146,   233,  1110,   489,   686,   687,   499,
     242,   244,   500,   514,   430,   474,   370,   502,  1044,   519,
     376,   525,  1047,   512,   524,   512,   580,   530,  1050,   581,
     531,   794,   536,   538,   146,   370,  -493,  -493,   376,   873,
     276,   277,   278,   514,   279,   370,   539,   376,   370,   376,
     146,   931,   881,   882,  1146,   541,   505,   506,  -100,   429,
     146,   547,  -209,  -209,  -209,   549,   582,   431,   554,   559,
     582,   563,   514,   564,   579,   507,   835,   836,   837,   838,
     839,   840,   228,    30,    31,   121,   585,  -538,   591,  1096,
     592,   603,   604,    36,   617,   605,   512,   619,   625,   610,
     634,   227,   833,   635,   637,   638,   957,   834,   514,   639,
     835,   836,   837,   838,   839,   840,   841,   273,   274,   275,
     276,   277,   278,   514,   279,   641,   143,   644,   646,   369,
     661,   582,   664,   655,   666,  -239,   670,   676,   678,   675,
     508,   680,   509,    67,    68,    69,    70,    71,   577,   684,
     685,   719,   512,   726,   386,   959,   699,   963,   728,   510,
      74,    75,   511,   514,   842,   905,   708,   514,   692,   429,
     727,   732,   733,   514,   739,   740,   743,   431,   744,   746,
     750,   756,   512,   582,   768,   769,   985,   773,   772,   782,
     796,   106,   125,   126,   799,   128,   129,   130,   131,   132,
     133,   134,   801,   136,   137,   138,   139,   140,   141,   142,
     803,   512,   153,   156,   807,   808,   812,   809,   813,   818,
     758,   823,   824,  1022,   172,   850,   851,   854,   855,  1024,
     856,   180,   182,   863,   514,   857,   860,   861,   190,   864,
     875,   974,  -284,   868,   866,   876,   878,   512,   582,   885,
     582,   835,   836,   837,   838,   839,   840,   892,   228,   896,
     228,   901,   512,   909,  1052,   910,   911,   235,   237,  1059,
     914,   926,   925,   930,   932,   943,   940,   227,   950,   227,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   946,   949,   955,   582,   958,   964,   965,   967,
     968,  1081,   512,   969,   973,   975,   512,   976,   992,   147,
     147,   981,   512,   160,   304,  1005,  1008,  1009,  1015,  1010,
    1011,  1014,   305,  1017,  1018,  1025,  -493,  -493,  1019,  1026,
    1030,  1033,   228,  -272,  1039,  1037,  1040,  1041,   582,  1056,
    1043,  1042,  1045,  1053,  1060,  1058,  1064,  1114,  1075,  1066,
    1067,   227,  1076,   228,   324,  1077,   325,  -216,  1126,   228,
     106,  1078,   332,  1082,  1087,   336,  1090,  1091,  1093,  1095,
    1132,  1094,   227,   512,   582,  1098,  1100,  -278,   227,  1101,
    1107,  1109,   228,  1117,  1111,   228,   228,  1113,  1120,  1122,
    1127,  -176,   582,  1129,  1131,   228,   153,  1152,  1099,  1135,
     372,   227,  1134,  1136,   227,   227,  1142,  1143,   382,  1137,
    1138,  1148,   400,  1144,   227,   755,   551,  1149,   520,  1145,
     569,  -176,  1151,   833,  1153,   552,   414,   643,   834,   570,
     767,   835,   836,   837,   838,   839,   840,   841,   147,   980,
     982,   582,   853,   433,   522,   831,  1038,   899,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   887,   859,   730,   948,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   147,   729,   475,   900,   475,   479,   738,     0,
     147,   147,   147,   810,     0,     0,     0,     0,     0,   484,
     147,   486,     0,     0,     0,     0,     0,    30,    31,   383,
     147,    34,     0,   495,     0,     0,   497,   384,     0,     0,
       0,     0,     0,     0,   149,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   521,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     188,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,     0,   385,   160,     0,    67,    68,    69,
      70,    71,     0,     0,     0,   150,   150,     0,   386,   163,
       0,     0,     0,   332,    74,    75,   561,     0,     0,     0,
     550,     0,     0,     0,   106,     0,   571,  -493,  -493,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,     0,   590,     0,     0,     0,     0,   594,
       0,   595,     0,   597,   598,   599,   513,     0,   501,     0,
       0,     0,     0,     0,     0,     0,   255,   256,   257,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   258,   311,   259,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   334,     0,     0,
       0,   147,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,   150,   360,   361,   363,     0,     0,
       0,     0,     0,     0,     0,   373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   653,     0,  -493,  -493,
       0,     0,     0,     0,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,     0,   150,   150,   150,     0,
       0,     0,     0,     0,     0,     0,   150,     0,     0,   147,
       0,   147,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,     0,   696,     0,     0,     0,     0,     0,     0,
     741,   513,   513,   513,     0,     0,     0,     0,     0,     0,
       0,   707,     0,     0,     0,   106,     0,     0,   332,   715,
       0,     0,   147,     0,   106,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   163,   279,  -539,  -539,  -539,  -539,   271,   272,   273,
     274,   275,   276,   277,   278,   147,   279,   747,   147,     0,
       0,     0,     0,   752,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,   513,   533,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   160,   279,     0,     0,
       0,   475,   787,     0,     0,     0,   555,   558,     0,   792,
     106,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     147,   513,     0,     0,     0,     0,     0,   150,     0,   578,
     513,     0,     0,     0,     0,     0,   811,   513,     0,     0,
       0,   147,     0,   147,     0,   817,     0,   819,   332,     0,
       0,     0,     0,     0,   475,     0,     0,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   601,
       0,     0,     0,     0,     0,   858,     0,     0,     0,     0,
       0,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     0,   311,     0,     0,     0,
     578,     0,   147,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     150,   279,   513,     0,   513,   475,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,   360,     0,     0,
       0,     0,     0,     0,     0,   150,     0,   150,     0,   147,
       0,     0,     0,     0,     0,     0,   578,     0,     0,   147,
     475,   475,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   332,     0,   398,     0,   255,   256,   257,   933,     0,
       0,     0,     0,     0,     0,   311,     0,   942,   150,     0,
       0,   258,     0,   259,   260,   513,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,     0,     0,     0,
     106,   150,     0,     0,   150,   106,   106,     0,     0,     0,
       0,     0,     0,     0,   716,   398,   150,     0,     0,     0,
       0,   332,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,     0,     0,     0,   736,     0,   533,     0,
       0,     0,   163,     0,     0,   578,     0,     0,     0,     0,
    1020,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,  1027,     0,   150,   150,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   578,   578,   150,     0,   150,
     513,   578,   578,     0,  1051,     0,     0,   311,   106,     0,
       0,     0,     0,     0,     0,  1062,   260,   540,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   513,   279,   533,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,     0,   398,     0,     0,     0,   150,     0,
       0,     0,     0,     0,   311,     0,     0,   106,     0,     0,
       0,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,   150,
       0,   513,     0,     0,     0,   513,     0,     0,     0,     0,
       0,   513,     0,     0,     0,   150,     0,     0,     0,     0,
       0,    11,    12,     0,     0,   150,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,   513,   578,    44,    45,    46,    47,    48,    49,
      50,     0,    51,    52,     0,    53,     0,     0,     0,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,    73,    74,    75,    76,    77,     0,
      78,     0,     0,     0,    79,    80,    81,     0,    82,    83,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,    51,     0,     0,    53,     0,     0,     0,
      54,    55,    56,     0,    57,    58,    59,   565,    61,    62,
      63,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   123,    74,    75,    76,    77,
       0,    78,     0,     0,     0,    79,    80,    81,   720,    82,
      83,     0,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,    33,    34,     0,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,    51,     0,     0,    53,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     0,     5,     6,     7,
       8,     9,    72,     0,     0,     0,    10,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
     793,    82,    83,     0,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,    30,    31,    32,    33,    34,     0,    35,
       0,     0,     0,    36,    37,    38,    39,     0,    40,     0,
      41,     0,    42,     0,     0,    43,     0,     0,     0,    44,
      45,    46,    47,     0,    49,    50,     0,    51,     0,     0,
      53,     0,     0,     0,     0,     0,    56,     0,    57,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     5,
       6,     7,     8,     9,    72,     0,     0,     0,    10,   123,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    81,   977,    82,    83,     0,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       0,    35,     0,     0,     0,    36,    37,    38,    39,     0,
      40,     0,    41,     0,    42,     0,     0,    43,     0,     0,
       0,    44,    45,    46,    47,     0,    49,    50,     0,    51,
       0,     0,    53,     0,     0,     0,     0,     0,    56,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     5,     6,     7,     8,     9,    72,     0,     0,     0,
      10,   123,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    81,  1055,    82,    83,     0,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,    83,
       0,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,  1130,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   221,     0,     0,     0,    30,
      31,   222,    33,    34,     0,     0,     0,     0,     0,   223,
       0,     0,     0,     0,   224,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   123,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   221,     0,     0,     0,
      30,    31,   222,    33,    34,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,     0,   225,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     5,     6,     7,     8,
       9,    72,     0,     0,     0,    10,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    84,   152,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,    33,    34,     0,   258,     0,
     259,   260,    36,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    47,   279,     0,     0,     0,     0,     0,     0,     0,
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
       0,   259,   260,    36,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    47,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   123,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,   179,     0,     0,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   121,    33,    34,     0,
       0,     0,     0,     0,    36,  -539,  -539,  -539,  -539,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     123,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,   181,     0,     0,    84,     0,    85,
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
       0,   123,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,   185,     0,     0,    84,     0,
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
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   123,    74,    75,    76,     0,     0,     0,     0,
     234,     0,     0,     0,    81,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   121,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     0,     5,     6,     7,     8,     9,    72,     0,
       0,     0,    10,   123,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    81,   323,     0,     0,     0,
      84,   458,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   121,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   123,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    84,   483,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   121,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     0,     5,     6,     7,
       8,     9,    72,     0,     0,     0,    10,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,    84,   485,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   121,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     5,
       6,     7,     8,     9,    72,     0,     0,     0,    10,   123,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    84,   395,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   121,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       0,     5,     6,     7,     8,     9,    72,     0,     0,     0,
      10,   123,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,    84,   574,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   121,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     0,     5,     6,     7,     8,     9,    72,     0,
       0,     0,    10,   123,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
      84,   706,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   121,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     5,     6,     7,     8,     9,
      72,     0,     0,     0,    10,   123,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,    84,   763,    85,    86,     0,     0,     0,     0,
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
       0,     0,    30,    31,   121,    33,    34,     0,     0,     0,
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
       0,     0,     0,    30,    31,   121,   371,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   123,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,    84,     0,    85,    86,
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
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
     123,    74,    75,    76,     0,   255,   256,   257,     0,     0,
       0,     0,   399,     0,     0,     0,     0,    84,     0,    85,
      86,   258,     0,   259,   260,     0,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   255,   256,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     0,   259,   260,     0,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   255,   256,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,     0,   259,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   256,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,     0,   259,   260,   573,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   255,   256,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,     0,   259,   260,   611,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,   934,   259,   260,   640,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,   259,   260,   693,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     255,   256,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   260,
     867,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,   255,   256,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   935,
     259,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,     0,     0,     0,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,   259,   260,   280,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     255,   256,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   260,
     337,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,   255,   256,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     0,
     259,   260,   338,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   667,   279,     0,     0,     0,     0,     0,     0,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,   259,   260,   344,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,   255,   256,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   412,
     259,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,   255,   256,   257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     258,   412,   259,   260,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,     0,     0,     0,   255,   256,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,     0,   259,   260,   480,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,   255,   256,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   258,     0,   259,
     260,   493,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,   255,   256,   257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   258,
       0,   259,   260,   494,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,     0,     0,     0,   255,   256,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,     0,   259,   260,   504,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
     255,   256,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   260,
     620,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,   255,   256,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     0,
     259,   260,   872,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,   255,   256,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,     0,   259,   260,   891,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,   259,   260,  1054,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,   255,   256,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   258,     0,   259,
     260,  1079,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   255,   256,   257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   410,
     259,   260,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,   255,   256,   257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   546,   259,   260,     0,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,   255,   256,   257,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   671,   259,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   255,   256,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   821,   259,   260,     0,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,   255,   256,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   258,  1061,   259,
     260,     0,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   256,   257,     0,     0,     0,     0,
    1085,     0,     0,     0,     0,     0,     0,     0,     0,   258,
       0,   259,   260,   312,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   614,     0,     0,   255,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   562,   258,   697,   259,   260,     0,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     255,   256,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   260,
       0,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   256,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,   259,   260,
       0,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   257,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,     0,   259,   260,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-866)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-539)))

static const yytype_int16 yycheck[] =
{
      23,    24,     4,     4,    27,   124,    27,   396,    27,    83,
     420,   299,     4,   492,   254,    49,    27,   471,   642,   209,
     279,    81,   396,   847,    77,   483,   556,   485,   893,    52,
     895,   378,    26,   340,     8,   489,    26,    61,     8,   759,
      71,    61,     8,    77,     8,     8,    31,   354,    73,   157,
      73,     8,    31,    76,     8,    56,   296,     8,     8,    65,
     222,   685,     8,     8,     8,     8,    63,     8,   308,   309,
       8,     8,   152,    98,    71,    61,    73,    61,   318,   159,
     320,    29,   724,   144,   203,     0,    71,   148,    73,    78,
      71,   545,    61,   144,    73,     0,   157,   148,    71,   118,
      73,    74,    31,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   112,   574,    73,    73,   148,
     144,   122,   145,    26,   989,   157,   157,   112,   157,   152,
      61,    29,   160,   157,    31,   158,   160,   425,   668,    71,
     160,    73,   176,   196,    73,   865,   152,   166,   145,    59,
      60,   148,   141,    71,   123,    73,    73,   157,   144,   801,
     145,   803,    71,   148,  1029,   162,   160,   148,   191,   159,
    1035,   173,   157,   196,   160,   585,   160,   162,   340,   899,
      31,   204,   205,   206,   158,   559,   716,   717,   562,   159,
     160,   214,   354,   159,   217,   159,   159,   544,   505,   506,
     654,   224,   159,   222,   152,   159,   162,   162,   159,   159,
      71,   222,   158,   158,   158,   158,  1040,   158,   157,  1084,
     158,   158,    73,    31,  1089,  1090,   157,   389,   160,   160,
     162,    71,   621,    73,    71,   254,    73,   477,  1103,   148,
     694,   695,   160,   254,   162,   162,   700,   701,   706,   159,
     624,   160,   492,    31,   152,    90,   279,    73,   279,    61,
     279,   159,    78,    71,   157,    73,   157,    61,   279,   343,
     680,   157,   579,    71,    71,   112,    73,   296,    71,   758,
      73,  1036,   148,   306,   145,   296,    71,   148,    71,   308,
     309,   157,   822,   316,    71,    73,    73,   308,   309,   318,
     118,   320,    61,   148,   112,   763,    75,   318,   145,   320,
     157,   148,   157,   148,    75,   112,   157,   340,   625,   112,
     160,   123,   162,   160,   347,   162,   142,   143,   125,   123,
     157,   354,    73,  1088,   641,   112,    71,   145,    90,   399,
     148,   600,   365,   505,   506,   507,    75,   145,   145,   165,
     148,   148,   145,  1108,   162,   148,   144,   547,    75,   769,
     148,    73,   751,   144,   123,   162,    78,   148,   145,   162,
     389,   148,   395,    73,   393,   118,    75,   157,   389,   753,
     149,   157,   151,   157,   418,   162,   155,   156,   149,   868,
     151,   126,   127,    71,   155,   156,   148,   420,    73,    71,
     141,   142,   143,    78,    79,   407,   407,    71,   862,    61,
     145,   144,   431,   148,   144,   407,   704,   579,   157,   726,
     149,   728,   151,   158,   834,    61,   155,   156,    73,   141,
     142,   143,   149,    78,   151,   458,    75,   471,   155,   156,
      59,    60,   142,   143,    69,    70,    71,   123,    73,    98,
     149,   148,   151,  1077,    79,   489,   155,   156,   477,    49,
     483,   144,   485,   625,   148,   148,   477,   142,   143,   757,
      93,    94,   634,   492,   157,    73,   886,    66,    67,   641,
      78,   492,   505,   506,   507,   874,   144,    75,   511,   144,
      73,   144,   799,   148,   163,    78,   141,   142,   143,    66,
      67,   126,   157,   526,   129,   130,   131,   132,   133,     8,
     149,   545,   151,    66,    67,   140,   155,   156,   758,     8,
     148,   146,   147,    75,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   559,   162,   161,   562,
     828,   951,   148,   953,   142,   143,    93,    94,   855,   159,
     160,   574,   144,    75,   123,   944,   579,   144,   581,   142,
     143,   149,   585,   151,   726,   588,   728,   155,   156,    73,
      59,    60,   157,    75,    78,   863,   864,   600,   885,   600,
     148,   600,    92,    93,    94,    66,    67,    68,   998,   600,
      13,   159,   160,   159,    92,    93,    94,   149,   159,   151,
     623,   624,   625,   155,   156,    23,    24,   914,    92,    93,
      94,   634,   635,    13,   161,   160,   618,   158,   641,   642,
     654,    29,   645,   152,   647,   627,   152,   149,   868,   151,
      13,  1041,    71,   155,   156,   158,   710,   799,   142,   143,
     254,   161,   676,   950,    71,   164,   720,   149,   121,   151,
      71,   161,    61,   155,   156,   678,    26,   680,   965,   159,
     694,   695,   685,   161,   157,     8,   700,   701,    82,   158,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   296,   706,    79,  1095,   157,   126,   127,     8,
      85,    86,    90,   855,   308,   309,   211,    71,  1005,    71,
     215,   157,  1009,   726,    73,   728,   145,   158,  1015,   148,
     159,   713,   158,    71,   737,   230,    59,    60,   233,   793,
      45,    46,    47,   885,    49,   240,    61,   242,   243,   244,
     753,    92,    93,    94,  1144,   161,    42,    43,    13,   758,
     763,   157,    66,    67,    68,    13,   769,   758,    71,   124,
     773,    71,   914,   152,    13,    61,   107,   108,   109,   110,
     111,   112,   815,    69,    70,    71,   121,   157,   157,  1076,
     157,   157,   157,    79,    26,   163,   799,   157,    13,   163,
     157,   815,    99,   148,   144,   161,   905,   104,   950,    71,
     107,   108,   109,   110,   111,   112,   113,    42,    43,    44,
      45,    46,    47,   965,    49,    13,   112,   159,   157,   141,
      13,   834,   159,   161,   154,   158,   157,     8,   148,   158,
     126,   122,   128,   129,   130,   131,   132,   133,   862,   160,
     157,    71,   855,   124,   140,   909,   158,   911,     8,   145,
     146,   147,   148,  1005,   161,   846,   158,  1009,   163,   868,
     163,    71,   102,  1015,    13,   163,   161,   868,   158,   158,
     154,   158,   885,   886,   160,     8,   940,     8,   158,   157,
     159,     4,     5,     6,    13,     8,     9,    10,    11,    12,
      13,    14,   159,    16,    17,    18,    19,    20,    21,    22,
     159,   914,    25,    26,   158,   157,   161,   158,   158,    26,
     123,   152,   159,   977,    37,   158,   104,    73,    13,   983,
     158,    44,    45,    61,  1076,   158,   158,   158,    51,    61,
     158,   923,    98,   123,   163,   158,    89,   950,   951,   124,
     953,   107,   108,   109,   110,   111,   112,   159,   991,   163,
     993,    71,   965,   160,  1018,   157,   160,    80,    81,  1023,
      13,    83,   159,   159,   159,   152,   160,   991,    13,   993,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   158,   163,    73,   998,    71,    73,    13,   158,
     163,  1055,  1005,   163,   157,   159,  1009,   158,   152,    23,
      24,   159,  1015,    27,   127,    13,    71,    13,    13,   161,
      73,   161,   135,   157,    26,    73,    59,    60,    68,   161,
      46,   158,  1065,    90,   159,   161,    90,   105,  1041,  1021,
     144,   159,    73,   159,   158,    87,    65,  1101,    71,   152,
      67,  1065,    13,  1086,   167,   157,   169,    68,  1112,  1092,
     173,    73,   175,   159,   152,   178,   152,    46,    46,     8,
    1124,    71,  1086,  1076,  1077,    26,    85,    71,  1092,   160,
      84,    86,  1115,    46,   158,  1118,  1119,   159,   152,   152,
     161,   124,  1095,    84,    46,  1128,   209,  1151,  1080,    84,
     213,  1115,   152,    86,  1118,  1119,   152,   152,   221,   161,
     102,    73,   225,   157,  1128,   669,   389,   158,   347,  1140,
     407,   154,   160,    99,   161,   389,   239,   526,   104,   407,
     680,   107,   108,   109,   110,   111,   112,   113,   152,   929,
     933,  1144,   773,   256,   352,   768,   998,   829,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   809,   779,   634,   897,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   196,   633,   297,   161,   299,   300,   647,    -1,
     204,   205,   206,   737,    -1,    -1,    -1,    -1,    -1,   312,
     214,   314,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
     224,    73,    -1,   326,    -1,    -1,   329,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,   126,   279,    -1,   129,   130,   131,
     132,   133,    -1,    -1,    -1,    23,    24,    -1,   140,    27,
      -1,    -1,    -1,   396,   146,   147,   399,    -1,    -1,    -1,
     152,    -1,    -1,    -1,   407,    -1,   409,    59,    60,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   425,    -1,   427,    -1,    -1,    -1,    -1,   432,
      -1,   434,    -1,   436,   437,   438,   340,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
     354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   365,    25,   152,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,   176,    -1,    -1,
      -1,   395,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   152,   204,   205,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   224,   539,    -1,    59,    60,
      -1,    -1,    -1,    -1,   547,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   205,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   483,
      -1,   485,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,   596,    -1,    -1,    -1,    -1,    -1,    -1,
     163,   505,   506,   507,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   614,    -1,    -1,    -1,   618,    -1,    -1,   621,   622,
      -1,    -1,   526,    -1,   627,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   279,    49,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   559,    49,   660,   562,    -1,
      -1,    -1,    -1,   666,    -1,    -1,    -1,    -1,    -1,    -1,
     574,    -1,    -1,    -1,    -1,   579,   365,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   600,    49,    -1,    -1,
      -1,   704,   705,    -1,    -1,    -1,   395,   396,    -1,   712,
     713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   623,
     624,   625,    -1,    -1,    -1,    -1,    -1,   365,    -1,   418,
     634,    -1,    -1,    -1,    -1,    -1,   739,   641,    -1,    -1,
      -1,   645,    -1,   647,    -1,   748,    -1,   750,   751,    -1,
      -1,    -1,    -1,    -1,   757,    -1,    -1,   395,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,    -1,   778,    -1,    -1,    -1,    -1,
      -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   483,    -1,   485,    -1,    -1,    -1,
     489,    -1,   706,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     458,    49,   726,    -1,   728,   828,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   737,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   483,    -1,   485,    -1,   753,
      -1,    -1,    -1,    -1,    -1,    -1,   545,    -1,    -1,   763,
     863,   864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     559,   874,    -1,   562,    -1,     9,    10,    11,   881,    -1,
      -1,    -1,    -1,    -1,    -1,   574,    -1,   890,   526,    -1,
      -1,    25,    -1,    27,    28,   799,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
     923,   559,    -1,    -1,   562,   928,   929,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   623,   624,   574,    -1,    -1,    -1,
      -1,   944,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   855,    -1,    -1,    -1,    -1,   645,    -1,   647,    -1,
      -1,    -1,   600,    -1,    -1,   654,    -1,    -1,    -1,    -1,
     973,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   885,    -1,   986,    -1,   623,   624,   676,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   694,   695,   645,    -1,   647,
     914,   700,   701,    -1,  1017,    -1,    -1,   706,  1021,    -1,
      -1,    -1,    -1,    -1,    -1,  1028,    28,   161,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   950,    49,   737,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   965,    -1,    -1,   753,    -1,    -1,    -1,   706,    -1,
      -1,    -1,    -1,    -1,   763,    -1,    -1,  1080,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   737,
      -1,  1005,    -1,    -1,    -1,  1009,    -1,    -1,    -1,    -1,
      -1,  1015,    -1,    -1,    -1,   753,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,   763,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,  1076,   862,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,    -1,   106,    -1,    -1,    -1,   110,
     111,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,   159,   160,
      -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
     110,   111,   112,    -1,   114,   115,   116,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,     3,     4,     5,     6,     7,
     140,    -1,    -1,    -1,    12,   145,   146,   147,   148,   149,
      -1,   151,    -1,    -1,    -1,   155,   156,   157,    26,   159,
     160,    -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,    -1,     3,     4,     5,
       6,     7,   140,    -1,    -1,    -1,    12,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      26,   159,   160,    -1,   162,    -1,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,     3,
       4,     5,     6,     7,   140,    -1,    -1,    -1,    12,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    26,   159,   160,    -1,   162,    -1,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
      -1,     3,     4,     5,     6,     7,   140,    -1,    -1,    -1,
      12,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    26,   159,   160,    -1,   162,    -1,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
      -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,   162,    -1,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
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
      -1,    -1,    69,    70,    71,    72,    73,    -1,    25,    -1,
      27,    28,    79,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    27,    28,    79,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    79,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    98,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,   159,    -1,    -1,   162,    -1,
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
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,
      -1,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,    -1,     3,     4,     5,     6,     7,   140,    -1,
      -1,    -1,    12,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,
     162,    31,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,    -1,     3,     4,     5,
       6,     7,   140,    -1,    -1,    -1,    12,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,   162,    31,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,     3,
       4,     5,     6,     7,   140,    -1,    -1,    -1,    12,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,   162,    31,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
      -1,     3,     4,     5,     6,     7,   140,    -1,    -1,    -1,
      12,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,    31,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,    -1,     3,     4,     5,     6,     7,   140,    -1,
      -1,    -1,    12,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     162,    31,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     126,    -1,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,   162,    -1,   164,   165,
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
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
     145,   146,   147,   148,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,   162,    -1,   164,
     165,    25,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   161,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   161,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,   161,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   161,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     161,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   159,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     159,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   159,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    90,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   158,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   158,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   158,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   158,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   158,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,   158,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     158,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   158,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   158,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,   158,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,   158,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   124,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    11,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49
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
     180,   181,   216,   238,   239,   241,   243,   246,   248,   317,
     319,   333,   336,   345,   356,   359,   363,   364,   366,   367,
     377,   378,   379,   380,   382,   383,   385,   386,   392,   402,
     405,    71,   112,   145,   333,   363,   363,   157,   363,   363,
     363,   363,   363,   363,   363,   330,   363,   363,   363,   363,
     363,   363,   363,   112,   145,   148,   170,   345,   366,   367,
     379,   366,    31,   363,   396,   397,   363,   145,   148,   170,
     345,   347,   348,   379,   383,   385,   392,   157,   353,   157,
      26,   307,   363,   188,   157,   157,   157,   198,   157,   159,
     363,   159,   363,    71,    71,   159,   319,   363,   367,   199,
     363,   148,   170,   174,   175,    73,   162,   281,   282,   118,
     118,    73,   283,   333,   157,   157,   157,   157,   157,   157,
      73,    78,   141,   142,   143,   398,   399,   148,   160,   170,
     170,    65,    71,    79,    84,    86,   205,   319,   364,   177,
      78,    79,   215,   398,   153,   363,   317,   363,   177,   160,
      78,   354,   398,    78,   398,   148,   157,     8,   159,    71,
      71,    31,   240,   381,   144,     9,    10,    11,    25,    27,
      28,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     159,    59,    60,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   157,   144,    61,   123,    61,
     160,   162,   385,   240,   363,   363,   148,   170,   144,   144,
     365,   367,   124,   163,     8,   361,   148,   170,   144,   318,
     144,   123,   385,   158,   363,   363,     8,   159,   180,   186,
     308,   309,   363,   319,   367,   157,   363,   159,   159,   159,
      13,   159,   159,   160,   159,   170,    90,     8,   159,   160,
     364,   367,     8,   159,    13,     8,   159,   240,   236,   237,
     367,   367,   403,   367,   158,   320,   396,    61,   123,   141,
     399,    72,   363,   367,    78,   141,   399,   170,   173,   159,
     160,   157,   363,    71,    79,   126,   140,   210,   211,   212,
     356,   384,   385,   392,    29,    31,   157,   253,   367,   157,
     363,    29,   152,   152,   159,   159,   152,   178,   152,    13,
     152,   158,   158,   161,   363,   164,   165,    71,   337,    71,
     121,   247,   245,    71,   157,    61,    71,   160,   377,   385,
     391,   392,   324,   363,   325,    26,   327,   322,   323,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   347,    31,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   344,    71,   377,   391,   363,   387,   368,   387,   363,
     158,   170,    71,    31,   363,    31,   363,   170,   377,   157,
     355,   377,   349,   158,   158,   363,    82,   363,   159,     8,
      90,    90,    71,   257,   158,    42,    43,    61,   126,   128,
     145,   148,   170,   345,   356,   357,   358,   177,    90,    71,
     175,   363,   282,   357,    73,   157,     8,   158,     8,   158,
     158,   159,   125,   367,   393,   394,   158,   400,    71,    61,
     161,   161,   157,   168,   172,   339,   152,   157,    78,    13,
     152,   210,   211,   385,    71,   367,   253,   308,   367,   124,
     252,   363,    90,    71,   152,   117,   179,   180,   216,   238,
     239,   363,   326,   161,    31,   279,   280,   319,   367,    13,
     145,   148,   170,   346,   244,   121,   249,   242,   331,   387,
     363,   157,   157,   385,   363,   363,   329,   363,   363,   363,
      63,   367,   279,   157,   157,   163,   377,   388,   390,   391,
     163,   161,   365,   365,   124,   279,   388,    26,   182,   157,
     158,   190,   310,   196,   194,    13,     8,   158,   193,   357,
     357,   357,   360,   362,   157,   148,   170,   144,   161,    71,
     161,    13,   332,   237,   159,   404,   157,     8,   158,    71,
      73,    74,   401,   363,   338,   161,   168,   279,   222,   396,
     213,    13,   206,   252,   159,   253,   154,    90,   253,   207,
     157,   152,   315,   316,   365,   158,     8,   357,   148,   170,
     122,   250,   251,   346,   160,   157,   126,   127,   276,   277,
     278,   346,   163,   161,   341,   340,   363,    26,   347,   158,
     343,   342,   389,   369,    61,   160,    31,   363,   158,   350,
     184,   180,   189,   187,   308,   363,   367,   253,   357,    71,
      26,   180,   256,    26,   160,   258,   124,   163,     8,   361,
     360,   170,    71,   102,   357,   276,   367,   395,   394,    13,
     163,   163,   279,   161,   158,   204,   158,   363,   214,   208,
     154,   224,   363,   217,   252,   208,   158,    61,   123,   311,
     312,   313,   371,    31,   319,   367,   170,   251,   160,     8,
     284,   276,   158,     8,    31,    73,   279,   279,   328,   321,
     279,   279,   157,   373,   374,   376,   387,   363,   365,   351,
     177,   183,   363,    26,   180,   263,   159,   252,   252,    13,
     177,   159,   259,   159,   259,   357,   357,   158,   157,   158,
     393,   363,   161,   158,    75,   149,   216,   363,    26,   363,
     308,   152,   253,   152,   159,   387,   388,   371,    61,   314,
     365,   284,   346,    99,   104,   107,   108,   109,   110,   111,
     112,   113,   161,   285,   288,   301,   302,   303,   304,   306,
     158,   104,   334,   278,    73,    13,   158,   158,   363,   355,
     158,   158,   375,    61,    61,   370,   163,   161,   123,   352,
     185,   264,   158,   177,   191,   158,   158,   357,    89,   259,
      92,    93,    94,   259,   161,   124,   200,   334,   158,   223,
     209,   158,   159,   229,   252,   220,   163,   372,   387,   311,
     161,    71,   289,   346,   286,   333,   304,     8,   159,   160,
     157,   160,    31,    73,    13,   357,   279,   387,   387,   371,
     388,   269,    66,    67,   271,   159,    83,   308,   197,   195,
     159,    92,   159,   363,    26,   159,   262,   161,   357,   346,
     160,   266,   363,   152,   225,   204,   158,   204,   376,   163,
      13,     8,   159,   160,   290,    73,   305,   240,    71,   177,
      31,    73,   335,   177,    73,    13,   357,   158,   163,   163,
      66,    67,   274,   157,   180,   159,   158,    26,   180,   255,
     255,   159,   262,   261,   201,   177,    66,    67,   272,   227,
     308,   149,   152,   149,   357,   346,    71,   291,   292,   293,
     294,   296,   297,   298,   346,    13,     8,   159,    71,    13,
     161,    73,     8,   158,   161,    13,   357,   157,    26,    68,
     363,   192,   177,   260,   177,    73,   161,   363,    65,   152,
      46,   273,   204,   158,   230,   218,   221,   161,   293,   159,
      90,   105,   159,   144,   357,    73,   287,   357,    31,    73,
     357,   363,   177,   159,   158,    26,   180,   254,    87,   177,
     158,   152,   363,   204,    65,   149,   152,    67,   275,   204,
     275,   299,   304,   295,   346,    71,    13,   157,    73,   158,
     265,   177,   159,   202,   267,   152,   149,   152,   228,   226,
     152,    46,   149,    46,    71,     8,   357,   276,    26,   180,
      85,   160,   204,   268,   275,   204,   204,    84,   219,    86,
     346,   158,   270,   159,   177,   149,   204,    46,   149,   149,
     152,   275,   152,   159,   160,   300,   177,   161,   149,    84,
      46,    46,   177,   203,   152,    84,    86,   161,   102,   231,
     232,   233,   152,   152,   157,   233,   346,   234,    73,   158,
     235,   160,   177,   161
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
#line 227 "Zend54/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 231 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 231 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 236 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 237 "Zend54/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 241 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 242 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 243 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 244 "Zend54/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 245 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 246 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 247 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 248 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 249 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 250 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 251 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 252 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 261 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 262 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 263 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 264 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 268 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 269 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 273 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 273 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 283 "Zend54/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 288 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 289 "Zend54/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 294 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 295 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (2)])) = get_next_op_number(CG(active_op_array));  }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 301 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 303 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 305 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 306 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 307 "Zend54/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 307 "Zend54/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 308 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 309 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 310 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 311 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 312 "Zend54/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 313 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 314 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 318 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 319 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 322 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 323 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 324 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 326 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 327 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 328 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 329 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 329 "Zend54/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 331 "Zend54/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 332 "Zend54/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 333 "Zend54/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 334 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 335 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 336 "Zend54/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 337 "Zend54/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 338 "Zend54/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 343 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 348 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 349 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 350 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 351 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 352 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 353 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 358 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 359 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 359 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 363 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 364 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 368 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 370 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 374 "Zend54/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 374 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 375 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 375 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 376 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 377 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 381 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 382 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 383 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 390 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 392 "Zend54/zend_language_parser.y"
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
#line 399 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 404 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 405 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 406 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 408 "Zend54/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 412 "Zend54/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 414 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 415 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 416 "Zend54/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 417 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 419 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 420 "Zend54/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 421 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 423 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 426 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 428 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 431 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 432 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 433 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 435 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 438 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 439 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 440 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 442 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 443 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 444 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 448 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 449 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 453 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 454 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 459 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 459 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 459 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 150:
/* Line 1787 of yacc.c  */
#line 469 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 473 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 477 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 482 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 483 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 488 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 489 "Zend54/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 494 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 498 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 500 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 504 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 509 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 510 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 511 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 512 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 516 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 517 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 521 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 535 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 536 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 540 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 541 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 546 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 547 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 569 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 570 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 575 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 576 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 577 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 578 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 583 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 584 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 584 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 585 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 585 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 604 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 604 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 609 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 609 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 610 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 610 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 615 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 615 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 650 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 651 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 652 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 653 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 654 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 655 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 656 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 657 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 662 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 663 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 664 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 665 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 670 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 671 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 676 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 677 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 678 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 679 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 680 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 681 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 685 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 686 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 691 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 692 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 693 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 698 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 699 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 700 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 701 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 713 "Zend54/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 716 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 717 "Zend54/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 725 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 726 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 750 "Zend54/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 270:
/* Line 1787 of yacc.c  */
#line 754 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 755 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 759 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 760 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 764 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 768 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 769 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 773 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 774 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 778 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 779 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 783 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 784 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 788 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 789 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 793 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 794 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 798 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 799 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 800 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 801 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 802 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 803 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 807 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 808 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 809 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 810 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 814 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 815 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 819 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 820 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 825 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 826 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 830 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 830 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 831 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 835 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 836 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 840 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 841 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 845 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 845 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 846 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 847 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 851 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 852 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 853 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 857 "Zend54/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 857 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 861 "Zend54/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 861 "Zend54/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 862 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 863 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 864 "Zend54/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 864 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 865 "Zend54/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 866 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 867 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 868 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 869 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 870 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 871 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 872 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 873 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 874 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 875 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 876 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 877 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 878 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 879 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 880 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 881 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 881 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 882 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 882 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 883 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 883 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 884 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 884 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 885 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 888 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 889 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 890 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 891 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 892 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 893 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 894 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 895 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 896 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 897 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 898 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 899 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 900 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 901 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 902 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 903 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 904 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 905 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 906 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 907 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 908 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 909 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 910 "Zend54/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 911 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 912 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 913 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 913 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 914 "Zend54/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 915 "Zend54/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 916 "Zend54/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 917 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 918 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 919 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 920 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 921 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 922 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 923 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 924 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 925 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 926 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 927 "Zend54/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 928 "Zend54/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 928 "Zend54/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 929 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 930 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 931 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 932 "Zend54/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 933 "Zend54/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 934 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 935 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 936 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 937 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 941 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 950 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 406:
/* Line 1787 of yacc.c  */
#line 951 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 952 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 953 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 957 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 959 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 960 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 962 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 963 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 965 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 966 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 968 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 969 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 971 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 972 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 974 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 975 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 977 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 978 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 980 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 984 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 985 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 986 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 987 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 991 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 992 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 993 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 999 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1000 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1005 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1006 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1007 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1008 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 1019 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 1023 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1024 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1025 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1029 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1030 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1031 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1036 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1037 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1042 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1043 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1044 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1045 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1046 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1047 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1048 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1049 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1050 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1051 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1052 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1053 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1058 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1059 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1060 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1061 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1062 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1063 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1064 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1065 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1066 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1067 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1071 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1075 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1076 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1077 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1078 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1079 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1080 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1081 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1082 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1083 "Zend54/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1088 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1089 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 485:
/* Line 1787 of yacc.c  */
#line 1098 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 486:
/* Line 1787 of yacc.c  */
#line 1099 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1100 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1101 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1105 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1106 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1111 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1116 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1121 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1126 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1127 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1128 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1129 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1133 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1134 "Zend54/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1139 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1139 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1143 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1144 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1148 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1150 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1154 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1155 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1156 "Zend54/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1160 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1161 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1165 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1166 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1171 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1175 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1176 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1177 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1181 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1182 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1183 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1188 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1189 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1190 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1194 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1195 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1199 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1200 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1201 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1206 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1207 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1211 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1212 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1217 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1218 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1218 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1222 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1223 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1224 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1228 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1229 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1233 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1234 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 1244 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 545:
/* Line 1787 of yacc.c  */
#line 1245 "Zend54/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1245 "Zend54/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1246 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1251 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1252 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1256 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1257 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1258 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1259 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1260 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1261 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1262 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1263 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1267 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1268 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1269 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1270 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1276 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1277 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1277 "Zend54/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1278 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1279 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1280 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1281 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1286 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1287 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1288 "Zend54/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1293 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1294 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1295 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1296 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1297 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1298 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1299 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1303 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1304 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1304 "Zend54/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1308 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1309 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7067 "Zend54/zend_language_parser.c"
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
#line 1312 "Zend54/zend_language_parser.y"


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
