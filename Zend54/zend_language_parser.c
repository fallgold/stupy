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
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 60 "Zend54/zend_language_parser.y"

#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif


/* Line 387 of yacc.c  */
#line 171 "Zend54/zend_language_parser.c"

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
#line 484 "Zend54/zend_language_parser.c"

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
#define YYLAST   6734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  241
/* YYNRULES -- Number of rules.  */
#define YYNRULES  591
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1175

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
       2,     2,     2,    48,   162,     2,   163,    47,    31,     2,
     157,   158,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   159,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   164,    30,     2,   165,     2,     2,     2,
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
     339,   341,   343,   345,   347,   351,   356,   357,   362,   363,
     369,   371,   374,   376,   378,   380,   384,   388,   393,   397,
     401,   407,   411,   416,   417,   418,   419,   438,   439,   440,
     456,   457,   458,   470,   471,   472,   473,   492,   493,   494,
     512,   513,   514,   530,   532,   533,   535,   538,   539,   540,
     551,   553,   557,   559,   561,   563,   564,   566,   567,   578,
     579,   588,   589,   597,   599,   602,   604,   607,   608,   611,
     613,   614,   617,   618,   621,   623,   627,   628,   631,   633,
     636,   638,   643,   645,   650,   652,   657,   661,   667,   671,
     676,   681,   687,   688,   689,   696,   697,   703,   705,   707,
     709,   714,   715,   716,   724,   725,   726,   734,   735,   744,
     745,   746,   755,   756,   759,   760,   765,   769,   770,   774,
     775,   780,   782,   783,   786,   790,   796,   801,   806,   812,
     820,   827,   828,   830,   832,   834,   836,   837,   839,   841,
     844,   848,   852,   857,   861,   863,   865,   868,   873,   877,
     883,   885,   889,   892,   893,   894,   899,   902,   904,   905,
     915,   919,   921,   925,   927,   931,   932,   934,   936,   939,
     942,   945,   949,   951,   955,   957,   959,   963,   968,   972,
     973,   975,   977,   981,   983,   985,   986,   988,   990,   993,
     995,   997,   999,  1001,  1003,  1005,  1009,  1015,  1017,  1021,
    1027,  1032,  1036,  1038,  1039,  1041,  1042,  1047,  1049,  1052,
    1054,  1059,  1063,  1064,  1068,  1070,  1072,  1073,  1074,  1077,
    1078,  1083,  1084,  1092,  1096,  1101,  1102,  1110,  1113,  1117,
    1121,  1125,  1129,  1133,  1137,  1141,  1145,  1149,  1153,  1157,
    1160,  1163,  1166,  1169,  1170,  1175,  1176,  1181,  1182,  1187,
    1188,  1193,  1197,  1201,  1205,  1209,  1213,  1217,  1221,  1225,
    1229,  1233,  1237,  1240,  1243,  1246,  1249,  1253,  1257,  1261,
    1265,  1269,  1273,  1277,  1281,  1285,  1289,  1291,  1292,  1298,
    1299,  1300,  1308,  1309,  1315,  1317,  1320,  1323,  1326,  1329,
    1332,  1335,  1338,  1341,  1342,  1346,  1348,  1353,  1357,  1361,
    1364,  1365,  1376,  1377,  1389,  1391,  1392,  1397,  1401,  1406,
    1408,  1411,  1412,  1418,  1419,  1427,  1428,  1435,  1436,  1444,
    1445,  1453,  1454,  1462,  1463,  1471,  1472,  1478,  1480,  1482,
    1486,  1489,  1491,  1495,  1498,  1500,  1502,  1503,  1504,  1511,
    1513,  1516,  1517,  1520,  1521,  1524,  1528,  1529,  1531,  1533,
    1534,  1538,  1540,  1542,  1544,  1546,  1548,  1550,  1552,  1554,
    1556,  1558,  1562,  1565,  1567,  1569,  1573,  1576,  1579,  1582,
    1587,  1591,  1593,  1595,  1599,  1601,  1603,  1605,  1609,  1612,
    1614,  1618,  1622,  1624,  1625,  1628,  1629,  1631,  1637,  1641,
    1645,  1647,  1649,  1651,  1653,  1655,  1657,  1658,  1659,  1667,
    1669,  1672,  1673,  1674,  1679,  1684,  1689,  1690,  1695,  1697,
    1699,  1700,  1702,  1705,  1709,  1713,  1715,  1720,  1721,  1727,
    1729,  1731,  1733,  1735,  1738,  1740,  1742,  1745,  1750,  1755,
    1757,  1759,  1764,  1765,  1767,  1769,  1770,  1773,  1778,  1783,
    1785,  1787,  1791,  1793,  1796,  1800,  1802,  1804,  1805,  1811,
    1812,  1813,  1816,  1822,  1826,  1830,  1832,  1839,  1844,  1849,
    1852,  1855,  1858,  1860,  1863,  1865,  1868,  1871,  1874,  1876,
    1877,  1883,  1887,  1891,  1898,  1902,  1906,  1910,  1912,  1914,
    1916,  1921,  1926,  1929,  1932,  1937,  1940,  1943,  1945,  1946,
    1951,  1955
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
      -1,   384,    -1,   356,    -1,    78,    -1,   162,   398,   162,
      -1,   126,   157,   396,   158,    -1,    -1,   210,    13,   213,
     363,    -1,    -1,   212,   210,    13,   214,   363,    -1,   211,
      -1,   212,   211,    -1,    79,    -1,    78,    -1,   398,    -1,
     149,   205,   152,    -1,   149,   319,   152,    -1,   149,   319,
     159,   152,    -1,   151,   177,   152,    -1,   156,   363,   152,
      -1,   156,   153,    13,   363,   152,    -1,   155,   215,   152,
      -1,   149,    71,   212,   152,    -1,    -1,    -1,    -1,   149,
      86,   157,   363,    90,   217,   253,   252,   158,   152,   218,
     204,   149,   219,   275,    46,    86,   152,    -1,    -1,    -1,
     149,    86,   363,    90,   253,   252,   152,   220,   204,   149,
     221,   275,    46,    86,   152,    -1,    -1,    -1,   149,    65,
     363,   152,   222,   204,   149,   223,   266,   272,   273,    -1,
      -1,    -1,    -1,   149,    84,   157,   308,   159,   224,   308,
     159,   225,   308,   158,   152,   226,   204,   149,    46,    84,
     152,    -1,    -1,    -1,   149,    84,   157,   253,   252,   154,
     363,   158,   152,   227,   204,   149,   228,   275,    46,    84,
     152,    -1,    -1,    -1,   149,    84,   253,   252,   154,   363,
     152,   229,   204,   149,   230,   275,    46,    84,   152,    -1,
     232,    -1,    -1,   233,    -1,   232,   233,    -1,    -1,    -1,
     102,   157,   346,   234,    73,   158,   235,   160,   177,   161,
      -1,   237,    -1,   236,     8,   237,    -1,   367,    -1,   241,
      -1,   243,    -1,    -1,    31,    -1,    -1,   333,   240,    71,
     242,   157,   276,   158,   160,   177,   161,    -1,    -1,   246,
      71,   247,   244,   250,   160,   284,   161,    -1,    -1,   248,
      71,   245,   249,   160,   284,   161,    -1,   118,    -1,   111,
     118,    -1,   119,    -1,   110,   118,    -1,    -1,   121,   346,
      -1,   120,    -1,    -1,   121,   251,    -1,    -1,   122,   251,
      -1,   346,    -1,   251,     8,   346,    -1,    -1,   124,   253,
      -1,   367,    -1,    31,   367,    -1,   180,    -1,    26,   177,
      85,   159,    -1,   180,    -1,    26,   177,    87,   159,    -1,
     180,    -1,    26,   177,    89,   159,    -1,    71,    13,   357,
      -1,   257,     8,    71,    13,   357,    -1,   160,   259,   161,
      -1,   160,   159,   259,   161,    -1,    26,   259,    92,   159,
      -1,    26,   159,   259,    92,   159,    -1,    -1,    -1,   259,
      93,   363,   262,   260,   177,    -1,    -1,   259,    94,   262,
     261,   177,    -1,    26,    -1,   159,    -1,   180,    -1,    26,
     177,    83,   159,    -1,    -1,    -1,   264,    66,   157,   363,
     158,   265,   180,    -1,    -1,    -1,   266,    66,   363,   152,
     267,   204,   149,    -1,    -1,   266,    67,    65,   363,   152,
     268,   204,   149,    -1,    -1,    -1,   269,    66,   157,   363,
     158,    26,   270,   177,    -1,    -1,    67,   180,    -1,    -1,
      67,   152,   204,   149,    -1,    46,    65,   152,    -1,    -1,
      67,    26,   177,    -1,    -1,    67,   152,   204,   149,    -1,
     277,    -1,    -1,   278,    73,    -1,   278,    31,    73,    -1,
     278,    31,    73,    13,   357,    -1,   278,    73,    13,   357,
      -1,   277,     8,   278,    73,    -1,   277,     8,   278,    31,
      73,    -1,   277,     8,   278,    31,    73,    13,   357,    -1,
     277,     8,   278,    73,    13,   357,    -1,    -1,   126,    -1,
     127,    -1,   346,    -1,   280,    -1,    -1,   319,    -1,   367,
      -1,    31,   365,    -1,   280,     8,   319,    -1,   280,     8,
     367,    -1,   280,     8,    31,   365,    -1,   281,     8,   282,
      -1,   282,    -1,    73,    -1,   163,   364,    -1,   163,   160,
     363,   161,    -1,   283,     8,    73,    -1,   283,     8,    73,
      13,   357,    -1,    73,    -1,    73,    13,   357,    -1,   284,
     285,    -1,    -1,    -1,   301,   286,   305,   159,    -1,   306,
     159,    -1,   288,    -1,    -1,   302,   333,   240,    71,   287,
     157,   276,   158,   300,    -1,   104,   289,   290,    -1,   346,
      -1,   289,     8,   346,    -1,   159,    -1,   160,   291,   161,
      -1,    -1,   292,    -1,   293,    -1,   292,   293,    -1,   294,
     159,    -1,   298,   159,    -1,   297,   105,   295,    -1,   346,
      -1,   295,     8,   346,    -1,    71,    -1,   297,    -1,   346,
     144,    71,    -1,   296,    90,   299,    71,    -1,   296,    90,
     304,    -1,    -1,   304,    -1,   159,    -1,   160,   177,   161,
      -1,   303,    -1,   113,    -1,    -1,   303,    -1,   304,    -1,
     303,   304,    -1,   107,    -1,   108,    -1,   109,    -1,   112,
      -1,   111,    -1,   110,    -1,   305,     8,    73,    -1,   305,
       8,    73,    13,   357,    -1,    73,    -1,    73,    13,   357,
      -1,   306,     8,    71,    13,   357,    -1,    99,    71,    13,
     357,    -1,   307,     8,   363,    -1,   363,    -1,    -1,   309,
      -1,    -1,   309,     8,   310,   363,    -1,   363,    -1,   311,
     371,    -1,   371,    -1,   312,    61,   387,   164,    -1,    61,
     387,   164,    -1,    -1,   312,   314,   311,    -1,   312,    -1,
     311,    -1,    -1,    -1,   316,   313,    -1,    -1,    63,   347,
     318,   355,    -1,    -1,   125,   157,   320,   393,   158,    13,
     363,    -1,   367,    13,   363,    -1,   367,    13,    31,   367,
      -1,    -1,   367,    13,    31,    63,   347,   321,   355,    -1,
      62,   363,    -1,   367,    24,   363,    -1,   367,    23,   363,
      -1,   367,    22,   363,    -1,   367,    21,   363,    -1,   367,
      20,   363,    -1,   367,    19,   363,    -1,   367,    18,   363,
      -1,   367,    17,   363,    -1,   367,    16,   363,    -1,   367,
      15,   363,    -1,   367,    14,   363,    -1,   366,    60,    -1,
      60,   366,    -1,   366,    59,    -1,    59,   366,    -1,    -1,
     363,    27,   322,   363,    -1,    -1,   363,    28,   323,   363,
      -1,    -1,   363,     9,   324,   363,    -1,    -1,   363,    11,
     325,   363,    -1,   363,    10,   363,    -1,   363,    31,   363,
      -1,   363,    30,   363,    -1,   363,    44,   363,    -1,   363,
      42,   363,    -1,   363,    43,   363,    -1,   363,    45,   363,
      -1,   363,    46,   363,    -1,   363,    47,   363,    -1,   363,
      41,   363,    -1,   363,    40,   363,    -1,    42,   363,    -1,
      43,   363,    -1,    48,   363,    -1,    50,   363,    -1,   363,
      33,   363,    -1,   363,    32,   363,    -1,   363,    35,   363,
      -1,   363,    34,   363,    -1,   363,    36,   363,    -1,   363,
      39,   363,    -1,   363,    37,   363,    -1,   363,    38,   363,
      -1,   363,    49,   347,    -1,   157,   363,   158,    -1,   317,
      -1,    -1,   157,   317,   158,   326,   315,    -1,    -1,    -1,
     363,    25,   327,   363,    26,   328,   363,    -1,    -1,   363,
      25,    26,   329,   363,    -1,   403,    -1,    58,   363,    -1,
      57,   363,    -1,    56,   363,    -1,    55,   363,    -1,    54,
     363,    -1,    53,   363,    -1,    52,   363,    -1,    64,   353,
      -1,    -1,    51,   330,   363,    -1,   359,    -1,   126,   157,
     396,   158,    -1,    61,   396,   164,    -1,   165,   354,   165,
      -1,    12,   363,    -1,    -1,   333,   240,   157,   331,   276,
     158,   334,   160,   177,   161,    -1,    -1,   112,   333,   240,
     157,   332,   276,   158,   334,   160,   177,   161,    -1,    98,
      -1,    -1,   104,   157,   335,   158,    -1,   335,     8,    73,
      -1,   335,     8,    31,    73,    -1,    73,    -1,    31,    73,
      -1,    -1,   170,   157,   337,   279,   158,    -1,    -1,   145,
     148,   170,   157,   338,   279,   158,    -1,    -1,   148,   170,
     157,   339,   279,   158,    -1,    -1,   345,   144,    71,   157,
     340,   279,   158,    -1,    -1,   345,   144,   377,   157,   341,
     279,   158,    -1,    -1,   379,   144,   391,   157,   342,   279,
     158,    -1,    -1,   379,   144,   377,   157,   343,   279,   158,
      -1,    -1,   377,   157,   344,   279,   158,    -1,   112,    -1,
     170,    -1,   145,   148,   170,    -1,   148,   170,    -1,   170,
      -1,   145,   148,   170,    -1,   148,   170,    -1,   345,    -1,
     348,    -1,    -1,    -1,   383,   123,   349,   388,   350,   351,
      -1,   383,    -1,   351,   352,    -1,    -1,   123,   388,    -1,
      -1,   157,   158,    -1,   157,   363,   158,    -1,    -1,    78,
      -1,   398,    -1,    -1,   157,   279,   158,    -1,    69,    -1,
      70,    -1,    79,    -1,   132,    -1,   133,    -1,   147,    -1,
     129,    -1,   130,    -1,   131,    -1,   146,    -1,   140,    78,
     141,    -1,   140,   141,    -1,   356,    -1,   170,    -1,   145,
     148,   170,    -1,   148,   170,    -1,    42,   357,    -1,    43,
     357,    -1,   126,   157,   360,   158,    -1,    61,   360,   164,
      -1,   358,    -1,   128,    -1,   345,   144,    71,    -1,    72,
      -1,   406,    -1,   170,    -1,   145,   148,   170,    -1,   148,
     170,    -1,   356,    -1,   162,   398,   162,    -1,   140,   398,
     141,    -1,   128,    -1,    -1,   362,   361,    -1,    -1,     8,
      -1,   362,     8,   357,   124,   357,    -1,   362,     8,   357,
      -1,   357,   124,   357,    -1,   357,    -1,   364,    -1,   319,
      -1,   367,    -1,   367,    -1,   367,    -1,    -1,    -1,   382,
     123,   368,   388,   369,   376,   370,    -1,   382,    -1,   370,
     371,    -1,    -1,    -1,   123,   388,   372,   376,    -1,   373,
      61,   387,   164,    -1,   374,    61,   387,   164,    -1,    -1,
     157,   375,   279,   158,    -1,   374,    -1,   373,    -1,    -1,
     385,    -1,   392,   385,    -1,   345,   144,   377,    -1,   379,
     144,   377,    -1,   385,    -1,   380,    61,   387,   164,    -1,
      -1,   336,   381,    61,   387,   164,    -1,   383,    -1,   380,
      -1,   336,    -1,   385,    -1,   392,   385,    -1,   378,    -1,
     385,    -1,   392,   385,    -1,   385,    61,   387,   164,    -1,
     385,   160,   363,   161,    -1,   386,    -1,    73,    -1,   163,
     160,   363,   161,    -1,    -1,   363,    -1,   390,    -1,    -1,
     377,   389,    -1,   390,    61,   387,   164,    -1,   390,   160,
     363,   161,    -1,   391,    -1,    71,    -1,   160,   363,   161,
      -1,   163,    -1,   392,   163,    -1,   393,     8,   394,    -1,
     394,    -1,   367,    -1,    -1,   125,   157,   395,   393,   158,
      -1,    -1,    -1,   397,   361,    -1,   397,     8,   363,   124,
     363,    -1,   397,     8,   363,    -1,   363,   124,   363,    -1,
     363,    -1,   397,     8,   363,   124,    31,   365,    -1,   397,
       8,    31,   365,    -1,   363,   124,    31,   365,    -1,    31,
     365,    -1,   398,   399,    -1,   398,    78,    -1,   399,    -1,
      78,   399,    -1,   401,    -1,    78,   401,    -1,   398,   401,
      -1,    78,    78,    -1,    73,    -1,    -1,    73,    61,   400,
     402,   164,    -1,    73,   123,    71,    -1,   142,   363,   161,
      -1,   142,    72,    61,   363,   164,   161,    -1,   143,   367,
     161,    -1,   160,   378,   161,    -1,   160,   406,   161,    -1,
      71,    -1,    74,    -1,    73,    -1,   115,   157,   404,   158,
      -1,   116,   157,   367,   158,    -1,     7,   363,    -1,     6,
     363,    -1,     5,   157,   363,   158,    -1,     4,   363,    -1,
       3,   363,    -1,   367,    -1,    -1,   404,     8,   405,   367,
      -1,   345,   144,    71,    -1,   379,   144,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   235,   235,   239,   239,   240,   244,   245,   249,   250,
     251,   252,   253,   254,   254,   256,   256,   258,   259,   260,
     264,   265,   269,   270,   271,   272,   276,   277,   281,   281,
     282,   287,   288,   289,   290,   291,   296,   297,   301,   302,
     302,   302,   303,   303,   303,   304,   304,   304,   305,   305,
     305,   309,   311,   313,   306,   315,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     330,   331,   329,   334,   335,   333,   337,   337,   338,   339,
     340,   341,   342,   343,   339,   345,   346,   350,   351,   352,
     356,   357,   358,   358,   360,   360,   366,   367,   367,   371,
     372,   376,   377,   378,   379,   380,   384,   384,   385,   385,
     386,   387,   391,   392,   393,   400,   402,   409,   414,   415,
     416,   418,   422,   424,   425,   426,   424,   429,   430,   428,
     433,   436,   433,   441,   442,   443,   440,   448,   449,   447,
     452,   453,   451,   458,   459,   463,   464,   469,   469,   469,
     474,   475,   479,   483,   487,   492,   493,   498,   498,   504,
     503,   510,   509,   519,   520,   521,   522,   526,   527,   531,
     534,   536,   539,   541,   545,   546,   550,   551,   556,   557,
     561,   562,   567,   568,   573,   574,   579,   580,   585,   586,
     587,   588,   593,   594,   594,   595,   595,   600,   601,   606,
     607,   612,   614,   614,   617,   619,   619,   620,   620,   623,
     625,   625,   629,   631,   634,   636,   640,   643,   645,   648,
     650,   654,   655,   660,   661,   662,   663,   664,   665,   666,
     667,   672,   673,   674,   675,   680,   681,   686,   687,   688,
     689,   690,   691,   695,   696,   701,   702,   703,   708,   709,
     710,   711,   717,   718,   723,   723,   724,   725,   726,   726,
     731,   735,   736,   740,   741,   744,   746,   750,   751,   755,
     756,   760,   764,   765,   769,   770,   774,   778,   779,   783,
     784,   788,   789,   793,   794,   798,   799,   803,   804,   808,
     809,   810,   811,   812,   813,   817,   818,   819,   820,   824,
     825,   829,   830,   835,   836,   840,   840,   841,   845,   846,
     850,   851,   855,   855,   856,   857,   861,   862,   862,   867,
     867,   871,   871,   872,   873,   874,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,   890,   891,   891,   892,   892,   893,   893,   894,
     894,   895,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   923,   924,
     925,   924,   927,   927,   929,   930,   931,   932,   933,   934,
     935,   936,   937,   938,   938,   939,   940,   941,   942,   943,
     944,   944,   946,   946,   951,   954,   956,   960,   961,   962,
     963,   967,   967,   970,   970,   973,   973,   976,   976,   979,
     979,   982,   982,   985,   985,   988,   988,   994,   995,   996,
     997,  1001,  1002,  1003,  1009,  1010,  1015,  1016,  1015,  1018,
    1023,  1024,  1029,  1033,  1034,  1035,  1039,  1040,  1041,  1046,
    1047,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1063,  1068,  1069,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1081,  1085,  1086,  1087,  1088,  1089,  1090,
    1091,  1092,  1093,  1098,  1099,  1102,  1104,  1108,  1109,  1110,
    1111,  1115,  1116,  1121,  1126,  1131,  1136,  1137,  1136,  1139,
    1143,  1144,  1149,  1149,  1153,  1154,  1158,  1158,  1164,  1165,
    1166,  1170,  1171,  1175,  1176,  1181,  1185,  1186,  1186,  1191,
    1192,  1193,  1198,  1199,  1200,  1204,  1205,  1209,  1210,  1211,
    1216,  1217,  1221,  1222,  1227,  1228,  1228,  1232,  1233,  1234,
    1238,  1239,  1243,  1244,  1248,  1249,  1254,  1255,  1255,  1256,
    1261,  1262,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,
    1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1290,  1291,
    1291,  1292,  1293,  1294,  1295,  1296,  1300,  1304,  1305,  1306,
    1311,  1312,  1313,  1314,  1315,  1316,  1317,  1321,  1322,  1322,
    1326,  1327
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
  "tpl_encaps_var", "encaps_var_offset", "internal_functions_in_yacc",
  "isset_variables", "$@94", "class_constant", YY_NULL
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
     123,   125,    34,    36,    93,    96
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
     210,   211,   211,   211,   211,   211,   213,   212,   214,   212,
     212,   212,   215,   215,   215,   216,   216,   216,   216,   216,
     216,   216,   216,   217,   218,   219,   216,   220,   221,   216,
     222,   223,   216,   224,   225,   226,   216,   227,   228,   216,
     229,   230,   216,   231,   231,   232,   232,   234,   235,   233,
     236,   236,   237,   238,   239,   240,   240,   242,   241,   244,
     243,   245,   243,   246,   246,   246,   246,   247,   247,   248,
     249,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     258,   258,   259,   260,   259,   261,   259,   262,   262,   263,
     263,   264,   265,   264,   266,   267,   266,   268,   266,   269,
     270,   269,   271,   271,   272,   272,   273,   274,   274,   275,
     275,   276,   276,   277,   277,   277,   277,   277,   277,   277,
     277,   278,   278,   278,   278,   279,   279,   280,   280,   280,
     280,   280,   280,   281,   281,   282,   282,   282,   283,   283,
     283,   283,   284,   284,   286,   285,   285,   285,   287,   285,
     288,   289,   289,   290,   290,   291,   291,   292,   292,   293,
     293,   294,   295,   295,   296,   296,   297,   298,   298,   299,
     299,   300,   300,   301,   301,   302,   302,   303,   303,   304,
     304,   304,   304,   304,   304,   305,   305,   305,   305,   306,
     306,   307,   307,   308,   308,   310,   309,   309,   311,   311,
     312,   312,   314,   313,   313,   313,   315,   316,   315,   318,
     317,   320,   319,   319,   319,   321,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   322,   319,   323,   319,   324,   319,   325,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   326,   319,   327,
     328,   319,   329,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   330,   319,   319,   319,   319,   319,   319,
     331,   319,   332,   319,   333,   334,   334,   335,   335,   335,
     335,   337,   336,   338,   336,   339,   336,   340,   336,   341,
     336,   342,   336,   343,   336,   344,   336,   345,   345,   345,
     345,   346,   346,   346,   347,   347,   349,   350,   348,   348,
     351,   351,   352,   353,   353,   353,   354,   354,   354,   355,
     355,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   358,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   360,   360,   361,   361,   362,   362,   362,
     362,   363,   363,   364,   365,   366,   368,   369,   367,   367,
     370,   370,   372,   371,   373,   373,   375,   374,   376,   376,
     376,   377,   377,   378,   378,   379,   380,   381,   380,   382,
     382,   382,   383,   383,   383,   384,   384,   385,   385,   385,
     386,   386,   387,   387,   388,   389,   388,   390,   390,   390,
     391,   391,   392,   392,   393,   393,   394,   395,   394,   394,
     396,   396,   397,   397,   397,   397,   397,   397,   397,   397,
     398,   398,   398,   398,   398,   398,   398,   398,   399,   400,
     399,   399,   399,   399,   399,   399,   401,   402,   402,   402,
     403,   403,   403,   403,   403,   403,   403,   404,   405,   404,
     406,   406
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
       8,     0,     7,     1,     2,     1,     2,     0,     2,     1,
       0,     2,     0,     2,     1,     3,     0,     2,     1,     2,
       1,     4,     1,     4,     1,     4,     3,     5,     3,     4,
       4,     5,     0,     0,     6,     0,     5,     1,     1,     1,
       4,     0,     0,     7,     0,     0,     7,     0,     8,     0,
       0,     8,     0,     2,     0,     4,     3,     0,     3,     0,
       4,     1,     0,     2,     3,     5,     4,     4,     5,     7,
       6,     0,     1,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     2,     1,     0,     9,
       3,     1,     3,     1,     3,     0,     1,     1,     2,     2,
       2,     3,     1,     3,     1,     1,     3,     4,     3,     0,
       1,     1,     3,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     1,     3,     5,
       4,     3,     1,     0,     1,     0,     4,     1,     2,     1,
       4,     3,     0,     3,     1,     1,     0,     0,     2,     0,
       4,     0,     7,     3,     4,     0,     7,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     0,     5,     0,
       0,     7,     0,     5,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     4,     3,     3,     2,
       0,    10,     0,    11,     1,     0,     4,     3,     4,     1,
       2,     0,     5,     0,     7,     0,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     5,     1,     1,     3,
       2,     1,     3,     2,     1,     1,     0,     0,     6,     1,
       2,     0,     2,     0,     2,     3,     0,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     1,     3,     2,     2,     2,     4,
       3,     1,     1,     3,     1,     1,     1,     3,     2,     1,
       3,     3,     1,     0,     2,     0,     1,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     0,     0,     7,     1,
       2,     0,     0,     4,     4,     4,     0,     4,     1,     1,
       0,     1,     2,     3,     3,     1,     4,     0,     5,     1,
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
       0,     0,     0,     0,     0,   393,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   550,     0,     0,   443,     0,
     451,   452,     6,   474,   530,    67,   453,     0,    48,     0,
       0,     0,    76,     0,     0,     0,     0,   404,     0,     0,
      79,     0,     0,     0,     0,     0,   427,     0,     0,     0,
       0,   163,   165,   169,     0,     0,   482,   457,   458,   459,
     454,   455,     0,     0,   460,   456,     0,     0,    30,     0,
       0,     0,    78,    30,     0,   542,   446,   476,     4,     0,
       8,    36,    19,     9,    10,   153,   154,     0,     0,   376,
     492,   155,   521,     0,   479,   395,     0,   491,     0,   493,
       0,   524,     0,   520,   499,   519,   522,   529,     0,   384,
     475,     6,   427,     0,   155,   586,   585,     0,   583,   582,
     399,   362,   363,   364,   365,     0,   391,   390,   389,   388,
     387,   386,   385,   427,     0,     0,   428,     0,   342,   495,
       0,   340,     0,   555,     0,   485,   327,     0,     0,   428,
     434,   319,   435,     0,   439,   522,     0,     0,   392,     0,
      37,     0,   302,     0,    45,   303,     0,     0,     0,    57,
       0,    59,     0,     0,     0,    61,   492,     0,   493,     0,
       0,     0,    22,     0,    21,   245,     0,     0,   244,   166,
     164,   250,     0,   155,     0,     0,     0,     0,   321,   550,
     568,     0,   462,     0,     0,     0,     0,   562,   564,     0,
      15,     0,   478,     0,     6,   453,     0,     0,     0,   492,
     491,    28,   113,   112,     0,   114,     0,     0,   376,     0,
      28,     0,     0,     0,   447,     0,   448,     0,   411,     0,
      18,   167,   161,   156,     0,     0,     0,   347,     0,   349,
     379,   343,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,   341,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   425,     0,   532,
     496,   532,     0,   543,   523,     0,     0,   394,     0,   430,
       0,     0,   559,   494,     0,   397,   486,   551,     0,   430,
       0,   449,     0,   436,   523,   444,     0,     0,     0,    66,
       0,     0,     0,   304,   307,   492,   493,     0,     0,    58,
      60,    86,     0,    62,    63,    30,    85,    24,     0,     0,
      17,     0,   246,   493,     0,    64,     0,     0,    65,     0,
       0,   150,   152,   587,     0,     0,     0,   549,     0,   569,
       0,   567,   461,   563,   565,   474,     0,     0,     0,     0,
       0,     0,   515,     0,   561,   481,   560,   566,   477,     5,
      12,    13,   415,     0,    99,   103,   453,     0,     0,     0,
       0,   110,     0,   102,   101,   525,     0,     0,     0,   303,
     176,   178,     0,     0,     0,   115,   116,     0,    91,   118,
       0,   121,     0,   119,   377,   375,    38,   480,     0,   398,
       7,   236,     0,     0,   159,   170,   157,   400,   532,   590,
     513,   511,     0,     0,   351,     0,   382,     0,     0,     0,
     353,   352,   367,   366,   369,   368,   370,   372,   373,   371,
     361,   360,   355,   356,   354,   357,   358,   359,   374,     0,
     323,   338,   337,   336,   335,   334,   333,   332,   331,   330,
     329,   328,   236,   591,     0,   514,     0,   533,     0,     0,
       0,     0,   584,   429,     0,   540,     0,   554,     0,   553,
     429,   513,   236,   320,   514,     0,   445,    39,   301,     0,
       0,    51,   305,    73,    70,     0,     0,    55,     0,     0,
     483,     0,   472,     0,     0,   464,     0,   463,    27,   471,
      28,     0,    23,    20,     0,   243,   251,   248,   402,     0,
       0,   588,   580,   581,    11,     0,   546,     0,   545,   396,
       0,   571,     0,   572,   574,     0,   575,     0,   576,   413,
       3,     5,   236,   130,   550,     0,     0,   106,   122,     0,
     111,   526,    92,   179,   176,     0,   493,     0,     0,     0,
       0,    94,   117,     0,    29,    31,    32,    33,    34,     0,
     316,   531,     0,     0,   235,   492,   493,     0,     0,     0,
     431,   168,   172,     0,     0,     0,   231,     0,   417,   419,
     512,   348,   350,     0,     0,   344,   346,     0,   324,     0,
       0,   423,   421,   516,   535,   497,   534,   539,   527,   528,
     558,   557,     0,     0,   437,    42,     0,    49,    46,   303,
       0,     0,     0,     0,     0,     0,     0,   467,   468,   490,
       0,   485,   483,     0,   466,     0,     0,    25,   247,     0,
     231,   151,    69,     0,   547,   549,     0,   577,   579,   578,
       0,     0,   590,   591,   236,    16,     3,     0,    89,     0,
     104,     0,   108,    96,     0,   133,   177,     0,   123,   176,
      96,     0,   120,   378,     0,   239,   412,     0,    26,     0,
     433,     0,     0,   171,   174,   253,   231,   232,   233,     0,
     221,     0,   234,   518,   236,   236,   383,   380,   325,   426,
     541,   236,   236,   536,   510,   532,     0,     0,   552,   450,
     441,    30,    40,     0,     0,     0,   306,   176,   176,   186,
       0,    30,   184,    77,   192,   192,    56,     0,   470,   486,
     484,     0,   465,   473,     0,   249,     0,   589,   549,   544,
       0,   570,     0,     0,    14,   416,     0,   105,   107,     0,
      93,     0,   303,     0,     0,     0,    95,     0,   532,     0,
     315,   314,   318,   309,     0,   492,   493,   432,   173,   253,
       0,   285,     0,   405,   231,     0,   223,     0,     0,     0,
     449,     0,     0,   506,   509,   508,   501,     0,     0,   556,
     438,    28,   201,     0,    30,   199,    47,    52,     0,     0,
       0,    28,   192,     0,   192,     0,   489,   488,   469,    80,
     405,     0,   322,   573,   414,    88,   131,    87,   109,    97,
       0,     0,   140,   176,   127,    35,     0,   502,   308,   532,
       0,   242,   285,   175,     0,     0,   289,   290,   291,   294,
     293,   292,   284,   162,   252,   257,   254,     0,   283,   287,
       0,     0,     0,     0,     0,   224,     0,   418,   420,   381,
     326,   424,   422,   236,   532,   532,   498,   537,   538,     0,
     440,   209,   212,     0,    28,   303,    74,    71,   187,     0,
       0,     0,     0,     0,     0,   188,     0,     0,     0,   548,
     204,     0,     0,   134,    89,     0,    89,   311,   510,     0,
     313,   160,     0,     0,   261,     0,   155,   288,     0,   256,
      30,     0,    30,     0,   227,     0,   226,     0,     0,     0,
     500,   442,   217,     0,     0,    41,    50,     0,     0,     0,
       0,   185,     0,   190,     0,   197,   198,   195,   189,   487,
      81,    30,   214,    98,   137,   303,     0,     0,     0,   503,
     310,     0,     0,   263,   265,   260,   297,     0,     0,     0,
      28,     0,   409,     0,    28,   228,     0,   225,   507,   504,
     505,     0,     0,     0,     0,   213,   200,    53,    30,   182,
      75,    72,   191,   193,    30,     0,    28,     0,     0,     0,
      89,     0,   141,   124,   128,   300,   262,     6,     0,   266,
     267,     0,     0,   275,     0,     0,     0,     0,   255,   258,
       0,   158,   410,     0,   406,   401,     0,   230,     0,    30,
       0,     0,     0,    28,    30,    28,     0,   403,     0,     0,
      89,     0,   132,     0,     0,   219,    89,   219,   264,   268,
     269,   279,     0,   270,     0,   298,   295,     0,   299,     0,
     407,   229,     0,    28,    44,   202,    30,   180,    54,     0,
      28,    82,   205,     0,     0,     0,   138,   135,     0,     0,
       0,     0,     0,   278,   271,   272,   276,     0,   231,   408,
       0,     0,    28,   183,     0,    89,   207,   215,   216,   219,
      89,    89,     0,   125,     0,   277,     0,   296,     0,   210,
     203,     0,    30,     0,    89,     0,     0,     0,     0,   219,
       0,   273,     0,    30,   181,    28,   206,     0,     0,     0,
     220,   142,     0,   129,   281,    30,   259,    28,    83,   208,
       0,     0,     0,    28,   144,   139,     0,     0,   282,     0,
      84,   143,   145,   136,   126,     0,   146,   147,     0,     0,
     148,     0,    30,    28,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    87,    88,   561,   389,   193,   194,
      89,   231,   420,   584,   999,    91,   636,   812,   731,   891,
     331,   734,   173,   733,   639,   895,  1042,   646,   642,   950,
     641,   949,   177,   189,   907,  1005,  1104,  1154,   766,   228,
     683,   690,   770,   911,   400,   401,   402,   681,   769,   234,
     837,   774,  1056,  1129,   916,  1057,   678,   910,   772,   965,
    1110,  1010,  1109,   914,  1055,  1160,  1161,  1162,  1168,  1171,
     360,   361,    93,    94,   254,    95,   605,    96,   602,   435,
      97,   434,    98,   604,   702,   703,   578,   410,  1078,  1000,
     743,   516,   746,   823,  1044,  1004,   957,   816,   892,  1101,
     962,  1105,  1124,   942,  1133,   945,  1009,  1052,   993,  1089,
     709,   710,   711,   593,   594,   197,   198,   202,   791,   864,
     925,  1067,   865,   923,   975,  1018,  1019,  1020,  1021,  1094,
    1022,  1023,  1024,  1092,  1146,   866,   867,   868,   869,   977,
     870,   171,   332,   333,   640,   780,   781,   782,   850,   693,
     694,    99,   321,   100,   367,   800,   448,   449,   443,   445,
     590,   447,   799,   613,   135,   606,   660,   124,   873,   983,
     102,   431,   674,   562,   714,   715,   722,   721,   482,   103,
     712,   161,   162,   505,   730,   810,   890,   168,   245,   503,
     104,   649,   529,   105,   650,   317,   651,   187,   107,   312,
     108,   109,   489,   724,   886,   783,   918,   804,   805,   883,
     806,   110,   111,   112,   113,   255,   114,   115,   404,   116,
     117,   488,   625,   723,   626,   627,   118,   547,   548,   758,
     154,   155,   216,   217,   550,   218,   670,   119,   364,   663,
     120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -961
static const yytype_int16 yypact[] =
{
    -961,   107,   133,  -961,  2042,  4918,  4918,    75,  4918,  4918,
    4918,  4918,  4918,  4918,  4918,  -961,  4918,  4918,  4918,  4918,
    4918,  4918,  4918,   294,   294,  3109,  4918,   344,    99,   105,
    -961,  -961,   113,  -961,  -961,  -961,  -961,  4918,  -961,   120,
     136,   139,  -961,   153,  3240,  3371,   241,  -961,   258,  3502,
    -961,  4918,    12,    21,   200,   213,    25,   189,   202,   207,
     212,  -961,  -961,  -961,   240,   245,  -961,  -961,  -961,  -961,
    -961,  -961,   214,    19,  -961,  -961,   334,  2963,  -961,   524,
    3633,  4918,  -961,  -961,   270,   256,   527,   -44,  -961,    13,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,   370,   373,  -961,
    -961,   422,   398,   317,  -961,  -961,  5494,  -961,    66,  1587,
     309,  -961,   324,   421,   361,  -961,    97,  -961,    73,  -961,
    -961,  -961,   401,   364,   422,  6608,  6608,  4918,  6608,  6608,
    3159,  -961,  -961,   460,  -961,  4918,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,   379,   334,   -49,   381,  -961,  -961,
     387,  -961,   294,  6406,   383,   528,  -961,   395,   334,   417,
     440,  -961,  -961,   442,   466,   -12,    73,  3764,  -961,  4918,
    -961,    31,  6608,  2832,  -961,  4918,  4918,   433,  4918,  -961,
    5535,  -961,  5583,   434,   591,  -961,   447,  6608,  1270,   451,
    5624,   334,    51,    35,  -961,  -961,   259,    36,  -961,  -961,
    -961,   600,    49,   422,   294,   294,   294,   456,  -961,  3109,
     119,   321,  -961,  5049,   294,   378,   467,  -961,  -961,   334,
    -961,   -39,   -38,  4918,  1268,   592,   238,  5180,    23,   108,
      74,   464,   553,  -961,   483,   555,   625,  6154,   486,  5726,
     480,   553,   372,  4918,   553,   481,   555,   581,  -961,   583,
    -961,   535,  -961,  -961,   -26,   596,    67,  -961,  4918,  -961,
     633,  -961,  -961,  4918,  4918,  4918,  4918,  4918,  4918,  4918,
    4918,  4918,  4918,  4918,  4918,  4918,  4918,  4918,  4918,  4918,
    4918,   344,  -961,  -961,  -961,  3911,  4918,  4918,  4918,  4918,
    4918,  4918,  4918,  4918,  4918,  4918,  4918,  -961,     3,  4918,
    -961,  4918,  4918,   256,   -10,   504,  5767,  -961,   334,   -30,
      84,    44,  -961,  -961,  4057,  -961,  4203,  -961,   334,   417,
      80,   506,    80,  -961,    -6,  -961,  5808,  5855,  4918,  -961,
     582,  4918,   532,   682,  6608,   604,  1002,   628,  5896,  -961,
    -961,  -961,  1792,  -961,  -961,  -961,  -961,   138,   629,    12,
    -961,  4918,  -961,  -961,    21,  -961,  1792,   630,  -961,   545,
      29,  -961,  -961,  -961,    54,   556,   561,   263,   559,  -961,
     645,  -961,  -961,  -961,  -961,   661,  1493,   564,   256,   585,
     573,   593,    -6,   578,  -961,  -961,  -961,  -961,   224,  -961,
    -961,  -961,  -961,  6195,  -961,  -961,   727,   584,     2,   270,
     731,  -961,  1545,  -961,  -961,    -6,    73,   674,   294,  4349,
     622,  -961,  4918,  6501,   676,  -961,  -961,   597,  -961,  -961,
    2173,  -961,  4918,  -961,  -961,  -961,  -961,  -961,  1959,  -961,
    -961,  4495,   739,   190,  -961,   635,  -961,  -961,  4918,   601,
     602,    -6,    73,  4918,  6685,  4918,  -961,  4918,  4918,  4918,
    1843,  3681,  3812,  3812,  3812,  3812,  1444,  1444,  1444,  1444,
     801,   801,   459,   459,   459,   460,   460,   460,  -961,   228,
    3159,  3159,  3159,  3159,  3159,  3159,  3159,  3159,  3159,  3159,
    3159,  3159,  4495,   603,  4918,   605,   607,  6608,   608,    44,
     609,  2031,  -961,   239,   601,  -961,   294,  6608,   294,  6447,
     417,  -961,  4495,  -961,  -961,    44,  -961,   748,  6608,   618,
    5937,  -961,  -961,  -961,  -961,   764,    57,  -961,  1792,  1792,
    1792,   621,  -961,   632,   334,   218,   640,  -961,  -961,  -961,
     627,   712,  -961,  -961,  5321,  -961,  -961,   776,  -961,   294,
     631,  -961,  -961,  -961,  -961,   641,  -961,    58,  -961,  -961,
     448,  -961,  4918,  -961,  -961,    88,  -961,   164,  -961,  -961,
     638,  -961,  4495,  -961,  3109,   652,   425,  -961,  -961,   783,
    -961,    -6,  -961,  -961,   622,   642,  1539,   158,   646,  5665,
     158,  -961,  -961,   647,  -961,  -961,  -961,  -961,  -961,  6242,
     157,  -961,   294,   644,   798,    59,   795,  1792,   659,   334,
     417,  -961,   700,   190,   663,   667,   307,   664,  -961,  -961,
      -6,  6648,  3159,  4918,  6567,  3421,  3552,   344,  -961,   672,
    5362,  -961,  -961,  -961,  -961,  -961,    18,  -961,  -961,  -961,
    -961,  -961,  4641,   691,  -961,  -961,  2832,  -961,  -961,  4918,
    4918,   294,   158,  1792,   780,  2305,     5,  -961,  -961,   732,
     693,   850,  1792,   334,   277,   789,   759,  -961,  -961,  1792,
     307,  -961,  -961,   294,  -961,   263,   849,  -961,  -961,  -961,
     699,  1188,  -961,  -961,  4495,  -961,   726,   730,  -961,   733,
    -961,  4918,  -961,  -961,   735,  -961,  -961,  4918,  -961,   622,
    -961,   736,  -961,  -961,   161,  -961,  -961,  4787,  -961,   334,
     417,   190,   738,   882,  -961,  -961,   307,  -961,  -961,   737,
     885,   235,  -961,  -961,  4495,  4495,  3290,  -961,  -961,  -961,
    -961,  4495,  4495,  -961,   742,  4918,  4918,   294,  6608,  -961,
    -961,  -961,  -961,  4918,  2437,   741,  6608,   622,   622,  -961,
     883,  -961,  -961,  -961,   743,   744,  -961,  1792,  -961,  1792,
    -961,   749,   380,  -961,   751,  -961,   755,  -961,   263,  -961,
    4918,  -961,   740,   756,  -961,  -961,   323,  -961,  6608,  4918,
     880,  4918,  4918,  6283,   158,   757,   880,   768,  4918,    44,
     805,   179,  -961,  -961,   294,    63,   902,   417,   882,  -961,
     190,   881,   771,   827,   197,   859,   920,   777,   778,  4918,
     506,   779,   781,  -961,   873,   877,  -961,   782,  5403,  -961,
     820,   505,  -961,  5984,  -961,  -961,  -961,  -961,   786,   787,
    1792,   858,  -961,   531,  -961,   330,  -961,   826,  -961,  -961,
     827,    65,  3159,  -961,  -961,  -961,  2963,  -961,  6608,  -961,
    6025,   793,  -961,   622,  -961,  -961,   790,  -961,  -961,  4918,
     805,  -961,  1143,  -961,   884,   190,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,   401,   441,  -961,
      50,   796,   800,   799,   244,   951,  1792,  -961,  -961,  3290,
    -961,  -961,  -961,  4495,  4918,  4918,   805,  -961,  -961,    44,
    -961,  -961,   182,   806,   886,  4918,  -961,  -961,  -961,   807,
     557,   808,  4918,    15,   400,  -961,  1792,   190,   811,  -961,
    -961,  4918,   816,  -961,  -961,   815,  -961,  -961,   742,   810,
     805,  -961,   963,    17,  -961,   905,   422,  -961,   908,  -961,
    -961,   247,  -961,   909,   968,  1792,  -961,   825,   822,   833,
    -961,  -961,   493,   841,  2832,  -961,  -961,   840,   842,  2569,
    2569,  -961,   843,  -961,  5453,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,   496,  6608,  -961,  4918,   362,   832,   526,  -961,
    -961,  1792,   190,  -961,   332,  -961,   988,    55,   933,   992,
     847,   936,  -961,    69,   851,   997,  1792,  -961,  -961,  -961,
    -961,   854,  1004,   946,  4918,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,   955,   870,  4918,     4,   990,
    -961,   876,  2963,  -961,  2963,  -961,  -961,   947,   887,   332,
    -961,   888,   956,   940,   891,   897,  1792,   978,  -961,  -961,
    1792,  -961,  -961,   306,  -961,  -961,  1792,  -961,  4918,  -961,
     893,  6066,  2701,   967,  -961,   377,   898,  -961,  6324,  4918,
    -961,   993,  -961,   537,   903,   996,  -961,   996,  -961,  -961,
    -961,   728,   190,  -961,   986,  -961,  1051,   910,  -961,   995,
    -961,  -961,  6113,   998,  -961,  -961,  -961,  -961,  -961,   911,
     394,  -961,  -961,  6365,   572,   926,  2963,  -961,   927,  1026,
     587,  1035,  1017,  1019,  1083,  -961,  -961,  1792,   307,  -961,
    1070,  2832,  1015,  -961,   941,  -961,  -961,  2963,  -961,   996,
    -961,  -961,  1018,  2963,  1020,  -961,   190,  -961,   950,  -961,
    -961,   945,  -961,   599,  -961,  1059,   614,   636,   957,   996,
     958,  -961,   419,  -961,  -961,   952,  2963,   678,  1027,  1307,
    2963,  -961,  1066,  -961,  -961,  -961,  -961,   639,  -961,  2963,
     962,  1031,  1030,   959,  1039,  -961,   965,   970,  -961,   987,
    -961,  1039,  -961,  -961,  -961,   190,  -961,  -961,  1046,   985,
    -961,  1000,  -961,  1003,  -961
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -961,  -961,  -363,  -961,   -23,  -961,  -961,  -961,  -961,   809,
    -961,    45,  -961,  -961,    -2,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -886,  -961,
    -961,  -961,   473,  -961,   763,   766,  -961,  -961,  -961,  -961,
       7,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,    -4,  -961,  -961,
    -961,   634,   746,   750,  -121,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,   468,  -527,  -392,  -961,   221,
    -961,  -961,  -961,  -464,  -961,  -961,   223,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -960,
    -650,  -961,   385,  -469,  -961,  -961,   818,  -961,   386,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,   162,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -848,  -961,
    -961,  -961,  -395,  -961,  -961,   333,  -961,  -961,  -961,  -961,
    -961,   -59,  -961,   -42,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,     8,   350,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  1053,
    -397,  -263,  -961,  -961,  -961,  -961,  -961,  -961,  -961,   382,
    -205,  -318,  -961,  -961,   533,   536,  -961,   860,   -54,  -456,
     558,  1252,  -961,  -961,  -961,  -734,  -961,  -961,  -961,  -961,
     266,  -250,   971,    68,  -961,  -961,  -961,   -18,  -961,   -22,
    -961,  -293,  -489,  -961,  -961,  -210,    41,   431,   529,  -961,
    -194,  -961,   -52,  -157,  -961,  -130,  -961,  -961,  -961,  -961,
     977
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -541
static const yytype_int16 yytable[] =
{
     146,   146,    90,   305,   159,   165,   440,   186,   490,   164,
     756,    92,   101,   619,   575,   368,   634,   574,   468,   403,
     927,   249,   238,   230,   528,   972,   560,   235,   966,   192,
     968,   744,   242,   633,   246,   229,   601,   539,   536,   328,
     630,   955,   631,   349,   354,   436,   848,   684,   485,   301,
     221,   301,   414,   222,   373,   301,   792,   357,   928,   386,
     440,   485,   541,  1027,   203,   644,   665,  -237,   166,  1049,
     501,  -240,   504,   665,   483,   373,    34,  1033,   386,   725,
     565,   374,   359,   121,   373,   386,   387,   373,   486,   386,
     121,   150,   150,   677,   195,   163,   304,  1091,   201,   247,
    -428,   486,   374,   -90,   247,   387,  -430,     3,   248,   247,
     247,   374,   387,   248,   374,   495,   387,    34,   247,   392,
     390,   391,   309,    47,  1053,   283,   284,   392,   240,   146,
     203,   437,  -515,    -2,   335,   319,   695,   527,   439,   170,
      34,   348,   352,   212,   324,   607,    34,  -512,   302,  1125,
     302,   527,   940,    34,   302,   494,  1050,    34,   301,   672,
     191,    34,   775,   484,  1084,   745,    85,   219,   347,  1142,
    1090,   330,   250,   146,   956,   415,   973,   974,   726,   220,
     369,   146,   146,   146,   196,   686,   848,   540,   689,   408,
     329,   146,   159,   382,   350,   355,   388,   403,   676,   247,
     647,   648,   405,   146,   484,   763,   704,    85,   358,   929,
     818,   819,   542,  1093,  1028,   645,   666,  -237,  -317,  1123,
     150,  -240,   778,   909,  1126,  1127,   -90,  1034,   531,   121,
      85,    34,   127,   418,   441,   673,   303,    34,  1137,   624,
     849,  -515,   370,    85,   735,   797,   798,    85,   943,   944,
     738,    85,   801,   802,  -511,   624,   167,   302,   159,   165,
     416,   121,   169,   164,   150,   406,   795,   417,   121,   408,
     143,   809,   150,   150,   150,   933,   441,   174,   981,   698,
    -317,   825,   150,   381,   779,   493,   247,   210,   441,   441,
     847,   617,   211,   175,   150,   500,   176,   442,   441,   121,
     441,    34,  -312,   144,   704,   501,   145,   504,   796,   121,
     178,    34,   183,   527,   527,   527,   915,   934,   199,   525,
     982,    85,   166,   707,   708,   739,   192,    85,   851,   184,
     121,   200,    34,   525,   121,   598,    34,  1069,   599,   442,
     143,   755,   598,   210,   146,   599,   204,   566,   241,   163,
     143,   442,   442,   238,   718,   212,   213,   214,   900,   205,
     904,   442,  -428,   442,   206,   121,   247,    34,  -429,   207,
     679,   143,   247,   144,   215,   143,   145,   841,   121,  1070,
     405,   559,   843,   144,   571,   146,   145,   247,   545,   595,
     530,    85,   527,   853,   210,   409,   559,   208,   835,   371,
     941,    85,   209,  1017,   144,   121,   143,   145,   144,   386,
     600,   145,   213,   214,   937,   121,   243,    34,   585,   351,
     610,  -430,    85,   902,   903,   247,    85,   586,   101,   826,
     215,   827,   807,   707,   708,   150,   387,   835,   527,   144,
     595,   251,   145,   406,   252,   210,   146,   527,  1118,   121,
     384,    34,   598,   253,   527,   599,   143,    85,   924,  -517,
     595,   256,   372,   213,   214,  -222,   297,   441,   298,  -196,
    -196,  -196,   836,   146,    78,   146,   150,   598,    79,    80,
     599,   215,   299,   441,   300,   846,  -194,  -194,  -194,   157,
     143,   905,   158,   902,   903,   525,   525,   525,   210,    47,
     948,   654,   898,   384,   278,   279,   280,    85,   281,   281,
     960,  1012,   219,    78,   213,   214,   146,    79,    80,   667,
     595,   668,   669,   157,  -429,   310,   158,   308,   247,   624,
     442,   311,   215,   441,   427,   441,   316,   150,  -196,  -286,
     210,   378,   527,   318,   527,   384,   442,   315,   856,   857,
     858,   859,   860,   861,   146,  -194,   919,   146,   936,   991,
     992,   958,  1007,  1008,   150,   247,   150,   213,   214,   146,
    1011,   -43,   -43,   -43,   525,  1016,   700,  1025,  1144,  1145,
     600,   148,   151,   600,   320,   215,   322,   680,   959,   323,
     337,   938,   939,   341,   159,   165,   442,   210,   442,   164,
     210,   835,   232,   233,   342,   244,   343,   150,   385,   213,
     214,   345,   835,   356,   366,   527,   419,   987,   146,   146,
     525,   407,  1025,   901,   902,   903,   210,   215,   210,   525,
     752,   371,   595,   384,   732,   421,   525,   600,   422,   624,
     146,   426,   146,   742,   424,   150,   429,   835,   150,   952,
     902,   903,   430,  1015,   432,   785,   433,   438,   166,   446,
     150,   437,   835,   502,   509,  1095,   213,   214,  1037,   213,
     214,   527,   595,   595,   835,  1014,   787,    78,   600,   595,
     595,    79,    80,   600,   215,   163,  1086,   215,    78,   835,
     512,   511,    79,    80,   513,   213,   214,   213,   214,   515,
     532,   527,   538,   537,   146,  -211,  -211,  -211,  1065,   150,
     150,   835,  1068,   215,   543,   215,   551,   549,  1071,  1131,
     544,  1107,   552,    78,   525,   554,   525,    79,    80,   555,
     527,   150,   815,   150,   556,   146,  1113,   557,    78,   558,
    -100,   564,    79,    80,   567,   572,   577,   581,  1136,   582,
      78,   146,   597,   835,    79,    80,   603,   441,   608,   609,
    -540,   146,   621,  1139,   622,    78,   527,   600,  1167,    79,
      80,   600,   623,   628,   635,   637,   811,   643,   652,  1117,
     653,   527,   230,   657,   655,  1140,   821,    78,   656,   659,
     662,    79,    80,   372,   229,   150,   682,   525,   664,   675,
     687,   685,   696,  -238,   691,   978,   697,   699,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     442,   527,   701,   705,   706,   527,   150,  1149,   713,    78,
     719,   527,   600,    79,    80,   856,   857,   858,   859,   860,
     861,   595,   150,   275,   276,   277,   278,   279,   280,   729,
     281,   740,   150,   525,  -495,  -495,   747,   748,   749,   894,
     753,   754,   760,   761,   106,   125,   126,   441,   128,   129,
     130,   131,   132,   133,   134,   926,   136,   137,   138,   139,
     140,   141,   142,   525,   600,   153,   156,   764,   765,   771,
     790,   767,   527,   794,   777,   793,   820,   172,   789,   803,
     817,   833,   822,   824,   180,   182,   839,   828,   829,   844,
    -241,   190,   525,   830,   834,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   845,   779,   871,
     442,   872,   875,   876,   884,   877,   878,   881,   885,   882,
     237,   239,   995,   889,   896,   897,   887,   899,   525,   600,
     906,   600,   913,  -238,   917,   922,   930,   931,   230,   932,
     230,  -495,  -495,   525,   935,   946,   951,   953,   964,   947,
     229,   961,   229,   967,   970,   980,   971,   984,   976,   979,
     854,   986,   985,   988,  1013,   855,   989,   306,   856,   857,
     858,   859,   860,   861,   862,   307,   600,   990,   994,   996,
     997,  1026,  1002,   525,  1029,  1030,  1006,   525,  1031,  1032,
    1036,  1038,  1035,   525,  1040,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   326,  1046,   327,
    1039,  1047,   230,   106,  1054,   334,  1051,  -274,   338,   600,
    1077,  1064,   863,  1043,   229,  1062,  1061,  1060,  1058,  1045,
    1063,  1066,  1074,   230,  1079,  1087,  1081,  1096,  1085,   230,
    -241,  -495,  -495,  1088,  1097,   229,  -218,  1098,  1099,   153,
    1103,   229,  1112,   376,   525,   600,   147,   147,  1108,  1111,
     160,  1114,   230,   393,  1073,   230,   230,   413,  1115,  1080,
    -280,  1116,   514,   600,   229,   230,  1119,   229,   229,  1120,
    1121,  1122,  1128,   428,  1134,  1138,  1130,   229,  1132,  1141,
    1143,  1150,  1152,  1148,  1155,  1156,  1157,  1163,   444,  1169,
    1158,  1102,  1164,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,  1159,   600,  1170,  1165,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,  1166,   533,   487,
    1172,   487,   491,   776,  1174,   569,   587,  1135,   570,   788,
     588,  1001,   535,   661,   497,   852,   499,  1003,  1147,   874,
     908,  1059,   880,   920,   969,   751,   380,   750,   508,   831,
    1153,   510,   383,     0,   759,     0,     0,   257,   258,   259,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,   534,     0,   260,     0,   261,   262,  1173,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     0,   281,     0,     0,
       0,     0,   854,     0,     0,     0,     0,   855,     0,   147,
     856,   857,   858,   859,   860,   861,   862,   147,   147,   147,
       0,     0,     0,     0,     0,     0,     0,   147,   379,   334,
       0,     0,   579,     0,     0,   149,   149,     0,     0,   147,
     106,     0,   589,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,     0,     0,     0,   487,     0,
       0,   188,     0,   611,   921,   612,     0,   614,   615,   616,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -495,
    -495,     0,     0,     0,   160,     0,     0,    30,    31,   394,
       0,    34,     0,     0,   620,     0,   395,   396,     0,    11,
      12,     0,   762,  1151,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   223,     0,     0,     0,    30,    31,   224,    33,
      34,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,   226,     0,   227,   397,   526,     0,    67,    68,    69,
      70,    71,     0,     0,   313,    47,     0,     0,   398,   526,
       0,     0,   671,     0,    74,    75,     0,     0,     0,   122,
     147,     0,    58,    59,   153,     0,     0,     0,   336,   344,
     399,    85,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,   353,     0,
       0,     0,   123,    74,    75,    76,   362,   363,   365,     0,
       0,   147,     0,     0,    81,     0,   377,     0,     0,    84,
      85,     0,    86,   716,     0,     0,     0,     0,   411,     0,
    -541,  -541,  -541,  -541,   273,   274,   275,   276,   277,   278,
     279,   280,   728,   281,     0,     0,   106,     0,     0,   334,
     736,     0,   257,   258,   259,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,   262,   147,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   768,   281,     0,     0,     0,     0,   773,     0,   147,
       0,   147,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,     0,     0,     0,     0,     0,     0,
       0,   526,   526,   526,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   808,     0,     0,     0,
       0,     0,   147,   813,   106,     0,     0,     0,  -495,  -495,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,     0,     0,    30,    31,   394,     0,    34,   546,
     832,     0,     0,   395,   396,     0,     0,     0,     0,   838,
     147,   840,   334,   147,     0,     0,     0,     0,   487,     0,
       0,     0,     0,     0,     0,   147,  -495,  -495,     0,     0,
     526,     0,     0,     0,   553,     0,     0,     0,     0,   879,
     573,   576,     0,  -178,     0,     0,     0,     0,     0,     0,
     160,   397,     0,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,   596,     0,   398,     0,     0,     0,     0,
       0,    74,    75,  -178,   147,   147,   526,   568,     0,     0,
       0,     0,     0,     0,     0,   526,     0,   399,    85,   487,
       0,     0,   526,     0,     0,     0,   147,     0,   147,     0,
       0,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   596,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,   487,     0,     0,   313,     0,
     313,     0,     0,     0,   596,   334,     0,     0,     0,     0,
       0,     0,   954,     0,     0,     0,     0,     0,     0,     0,
       0,   963,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   362,     0,     0,     0,     0,     0,     0,     0,     0,
     526,     0,   526,     0,   106,     0,     0,     0,     0,   106,
     106,   147,     0,     0,   596,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   334,     0,   147,     0,   411,
       0,     0,   411,     0,   518,   519,     0,   147,     0,     0,
       0,     0,     0,     0,   313,     0,     0,     0,     0,     0,
       0,     0,     0,   520,  1041,     0,     0,     0,     0,     0,
       0,    30,    31,   121,     0,     0,     0,  1048,     0,     0,
       0,    36,     0,   526,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,   737,   411,     0,     0,     0,  1072,     0,
       0,     0,   106,     0,   143,     0,     0,     0,     0,  1083,
       0,     0,     0,     0,     0,   757,     0,   546,   521,     0,
     522,    67,    68,    69,    70,    71,   596,     0,     0,   526,
       0,     0,   398,     0,     0,     0,     0,   523,    74,    75,
     524,     0,     0,     0,     0,     0,     0,     0,     0,   786,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   526,
       0,   106,     0,     0,     0,     0,   596,   596,   257,   258,
     259,     0,     0,   596,   596,     0,     0,     0,     0,   313,
       0,     0,     0,     0,   260,     0,   261,   262,   526,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,     0,   281,     0,
     546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   526,     0,   411,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   313,     0,     0,   526,
     257,   258,   259,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,     0,   260,     0,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   526,
     281,     0,     0,   526,    11,    12,     0,     0,     0,   526,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,    33,    34,     0,    35,     0,     0,
     591,    36,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,   596,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    51,    52,     0,    53,     0,
     526,     0,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,    73,    74,    75,
      76,    77,   629,    78,     0,     0,     0,    79,    80,    81,
       0,    82,    83,     0,    84,    85,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,    54,    55,    56,     0,    57,    58,    59,
     583,    61,    62,    63,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     5,     6,
       7,     8,     9,    72,     0,     0,     0,    10,   123,    74,
      75,    76,    77,     0,    78,     0,     0,     0,    79,    80,
      81,   741,    82,    83,     0,    84,    85,     0,    86,     0,
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
       0,     0,    81,   814,    82,    83,     0,    84,    85,     0,
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
      71,     0,     5,     6,     7,     8,     9,    72,     0,     0,
       0,    10,   123,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    81,   998,    82,    83,     0,    84,
      85,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     5,     6,     7,     8,     9,    72,
       0,     0,     0,    10,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,  1076,    82,    83,
       0,    84,    85,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,     0,    53,     0,     0,
       0,     0,     0,    56,     0,    57,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      82,    83,     0,    84,    85,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,    30,    31,    32,    33,    34,     0,    35,     0,     0,
       0,    36,    37,    38,    39,     0,    40,     0,    41,     0,
      42,     0,     0,    43,     0,     0,     0,    44,    45,    46,
      47,     0,    49,    50,     0,    51,     0,     0,    53,     0,
       0,     0,     0,     0,    56,     0,    57,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    82,    83,     0,    84,    85,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   223,     0,
       0,     0,    30,    31,   224,    33,    34,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,   226,     0,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   123,    74,
      75,    76,     5,     6,     7,     8,     9,     0,     0,     0,
      81,    10,     0,     0,     0,    84,    85,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     121,    33,    34,     0,   260,     0,   261,   262,    36,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,    47,   281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,    85,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   121,    33,    34,     0,     0,     0,   261,   262,    36,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,    47,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   123,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,   179,
       0,     0,    84,    85,     0,    86,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   121,    33,    34,     0,     0,     0,     0,   262,
      36,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,    47,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   123,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
     181,     0,     0,    84,    85,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   121,    33,    34,     0,     0,     0,     0,
       0,    36,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
      47,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   123,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,   185,     0,     0,    84,    85,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,    33,    34,     0,     0,     0,
       0,     0,    36,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,     0,
     281,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   123,    74,
      75,    76,     0,     0,     0,     0,   236,     0,     0,     0,
      81,     0,     0,     0,     0,    84,    85,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   121,    33,    34,     0,     0,
       0,     0,     0,    36,  -541,  -541,  -541,  -541,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   123,
      74,    75,    76,     0,     5,     6,     7,     8,     9,     0,
       0,    81,   325,    10,     0,     0,    84,    85,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   121,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,   123,    74,    75,    76,
       5,     6,     7,     8,     9,     0,     0,     0,    81,    10,
       0,     0,     0,    84,    85,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   121,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   123,    74,    75,    76,     5,     6,     7,     8,
       9,     0,     0,     0,    81,    10,     0,     0,     0,    84,
      85,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   121,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,   123,    74,
      75,    76,     5,     6,     7,     8,     9,     0,     0,     0,
      81,    10,     0,     0,     0,    84,    85,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     121,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,   123,    74,    75,    76,     5,     6,
       7,     8,     9,     0,     0,     0,    81,    10,     0,     0,
       0,    84,    85,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   592,     0,     0,     0,
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
     123,    74,    75,    76,     5,     6,     7,     8,     9,     0,
       0,     0,    81,    10,     0,     0,     0,    84,    85,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   121,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,    72,     0,     0,     0,     0,   123,    74,    75,    76,
       5,     6,     7,     8,     9,     0,     0,     0,    81,    10,
       0,     0,     0,    84,    85,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   784,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
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
       0,     0,     0,     0,    81,     0,     0,     0,     0,    84,
      85,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   121,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   123,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
      84,    85,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     121,   375,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   123,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,     0,
       0,    84,    85,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   121,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
      72,     0,     0,     0,     0,   123,    74,    75,    76,     0,
     257,   258,   259,     0,     0,     0,     0,   412,     0,     0,
       0,     0,    84,    85,     0,    86,   260,     0,   261,   262,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,     0,
     281,   257,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,   257,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,   955,
     261,   262,   658,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,   261,   262,   720,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   888,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,     0,     0,     0,     0,     0,
       0,     0,   257,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,   262,   956,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,   261,   262,   282,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   339,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,   258,   259,     0,     0,
       0,     0,   340,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,   261,   262,   688,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     0,   281,   257,   258,   259,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,   261,   262,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,   257,   258,   259,
       0,     0,     0,   425,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     0,   281,     0,     0,
       0,     0,     0,     0,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   425,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,   257,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,   261,   262,   492,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     0,   281,   257,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,   261,   262,   506,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,     0,     0,     0,
       0,     0,     0,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,   261,   262,   507,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   517,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,   257,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,   261,   262,   638,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     0,   281,     0,     0,     0,     0,
       0,     0,   257,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,   262,   893,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,   261,   262,   912,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,  1075,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,     0,     0,     0,     0,     0,
       0,   257,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,   261,
     262,  1100,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   281,   257,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   423,     0,   260,     0,
     261,   262,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,   281,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   563,     0,   260,
       0,   261,   262,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   281,   257,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,   692,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281,   257,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,   261,   262,   842,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     0,   281,   257,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,   261,   262,  1082,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   258,   259,     0,     0,     0,     0,  1106,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,   261,   262,
     314,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,     0,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   632,     0,     0,     0,     0,   257,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   580,   260,   717,   261,   262,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,   281,   257,   258,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     0,   281,   258,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,   261,   262,     0,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   259,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   261,   262,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,     0,   281
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-961)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-541)))

static const yytype_int16 yycheck[] =
{
      23,    24,     4,   124,    27,    27,   256,    49,   301,    27,
     660,     4,     4,   482,   409,   209,   505,   409,   281,   224,
     868,     8,    81,    77,   342,     8,   389,    79,   914,    52,
     916,    26,    84,   502,    86,    77,   433,     8,   356,     8,
     496,    26,   498,     8,     8,    71,   780,   574,   298,    61,
      73,    61,    29,    76,   211,    61,   706,     8,     8,   216,
     310,   311,     8,     8,    56,     8,     8,     8,    27,    65,
     320,     8,   322,     8,    71,   232,    73,     8,   235,    61,
      78,   211,   203,    71,   241,   242,   216,   244,   298,   246,
      71,    23,    24,   562,    73,    27,   118,  1057,    73,   148,
     144,   311,   232,    29,   148,   235,   144,     0,   157,   148,
     148,   241,   242,   157,   244,    71,   246,    73,   148,   157,
     159,   160,   145,    98,  1010,    59,    60,   157,    83,   152,
     122,   157,   144,     0,   176,   158,   592,   342,    71,    26,
      73,    90,   196,   141,   166,   438,    73,   157,   160,  1109,
     160,   356,   886,    73,   160,    71,   152,    73,    61,    71,
     148,    73,   689,   160,  1050,   160,   163,   148,   191,  1129,
    1056,   173,   159,   196,   159,   152,   159,   160,   160,   160,
      61,   204,   205,   206,   163,   577,   920,   158,   580,    31,
     159,   214,   215,   215,   159,   159,   219,   402,   561,   148,
     518,   519,   224,   226,   160,   674,   603,   163,   159,   159,
     737,   738,   158,  1061,   159,   158,   158,   158,    61,  1105,
     152,   158,    61,   158,  1110,  1111,   152,   158,    90,    71,
     163,    73,   157,   159,   256,    71,   163,    73,  1124,   489,
      61,   144,   123,   163,   639,   714,   715,   163,    66,    67,
     642,   163,   721,   722,   157,   505,   157,   160,   281,   281,
     152,    71,   157,   281,   196,   224,    31,   159,    71,    31,
     112,   727,   204,   205,   206,    31,   298,   157,    31,   597,
     123,   745,   214,   215,   123,   308,   148,    73,   310,   311,
     779,    63,    78,   157,   226,   318,   157,   256,   320,    71,
     322,    73,   123,   145,   701,   555,   148,   557,    73,    71,
     157,    73,    71,   518,   519,   520,   843,    73,   118,   342,
      73,   163,   281,   126,   127,   643,   349,   163,   784,    71,
      71,   118,    73,   356,    71,   145,    73,    31,   148,   298,
     112,   659,   145,    73,   367,   148,   157,   399,    78,   281,
     112,   310,   311,   412,   617,   141,   142,   143,   822,   157,
     824,   320,   144,   322,   157,    71,   148,    73,   144,   157,
     564,   112,   148,   145,   160,   112,   148,   772,    71,    73,
     402,   157,   774,   145,   406,   408,   148,   148,   125,   431,
     345,   163,   597,   790,    73,   157,   157,   157,    75,    78,
     889,   163,   157,    71,   145,    71,   112,   148,   145,   566,
     433,   148,   142,   143,   883,    71,   160,    73,   420,   160,
     442,   144,   163,    93,    94,   148,   163,   420,   420,   747,
     160,   749,   725,   126,   127,   367,   566,    75,   643,   145,
     482,    71,   148,   402,    71,    73,   469,   652,  1098,    71,
      78,    73,   145,    31,   659,   148,   112,   163,   855,    61,
     502,   144,   141,   142,   143,   158,   157,   489,   144,    92,
      93,    94,   149,   496,   151,   498,   408,   145,   155,   156,
     148,   160,    61,   505,   123,   778,    92,    93,    94,   145,
     112,   161,   148,    93,    94,   518,   519,   520,    73,    98,
     895,   524,   820,    78,    45,    46,    47,   163,    49,    49,
     907,   149,   148,   151,   142,   143,   539,   155,   156,    71,
     562,    73,    74,   145,   144,   144,   148,   148,   148,   779,
     489,   144,   160,   555,   162,   557,     8,   469,   161,    98,
      73,   163,   747,   148,   749,    78,   505,   164,   107,   108,
     109,   110,   111,   112,   577,   161,   849,   580,   876,    66,
      67,   161,    66,    67,   496,   148,   498,   142,   143,   592,
     965,    66,    67,    68,   597,   972,   599,   974,   159,   160,
     603,    23,    24,   606,   144,   160,   144,   162,   906,   123,
     157,   884,   885,   159,   617,   617,   555,    73,   557,   617,
      73,    75,    78,    79,    13,    78,   159,   539,   141,   142,
     143,   160,    75,    13,   158,   820,   152,   935,   641,   642,
     643,    29,  1019,    92,    93,    94,    73,   160,    73,   652,
     653,    78,   674,    78,   636,   152,   659,   660,    13,   889,
     663,   161,   665,   645,   158,   577,   165,    75,   580,    92,
      93,    94,    71,   971,    71,   697,   121,    61,   617,    26,
     592,   157,    75,   157,    82,  1062,   142,   143,   986,   142,
     143,   876,   714,   715,    75,   149,   699,   151,   701,   721,
     722,   155,   156,   706,   160,   617,   149,   160,   151,    75,
       8,   159,   155,   156,    90,   142,   143,   142,   143,    71,
      71,   906,   157,    73,   727,    66,    67,    68,  1026,   641,
     642,    75,  1030,   160,   158,   160,    71,   158,  1036,  1116,
     159,   149,    61,   151,   747,   161,   749,   155,   156,   144,
     935,   663,   734,   665,   161,   758,   149,   144,   151,   161,
      13,   157,   155,   156,    13,    71,   124,    71,   149,   152,
     151,   774,    13,    75,   155,   156,   121,   779,   157,   157,
     157,   784,   157,   149,   157,   151,   971,   790,  1165,   155,
     156,   794,   164,   164,    26,   157,   731,    13,   157,  1097,
     148,   986,   836,    71,   144,   149,   741,   151,   161,    13,
     159,   155,   156,   141,   836,   727,    13,   820,   157,   161,
     154,   159,   158,     8,   157,   926,     8,   148,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     779,  1026,   122,   160,   157,  1030,   758,   149,   164,   151,
     158,  1036,   855,   155,   156,   107,   108,   109,   110,   111,
     112,   883,   774,    42,    43,    44,    45,    46,    47,   158,
      49,    71,   784,   876,    59,    60,   124,   164,     8,   814,
      71,   102,    13,   164,     4,     5,     6,   889,     8,     9,
      10,    11,    12,    13,    14,   867,    16,    17,    18,    19,
      20,    21,    22,   906,   907,    25,    26,   161,   158,   154,
       8,   158,  1097,     8,   158,   158,    13,    37,   160,   157,
     159,   161,   159,   159,    44,    45,    26,   158,   157,   152,
       8,    51,   935,   158,   158,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   159,   123,   158,
     889,   104,    73,    13,    61,   158,   158,   158,    61,   158,
      80,    81,   944,   123,   158,   158,   164,    89,   971,   972,
     124,   974,   159,   158,   164,    71,   160,   157,  1012,   160,
    1014,    59,    60,   986,    13,   159,   159,   159,   152,    83,
    1012,   160,  1014,   158,   164,   930,    13,   932,    73,    71,
      99,    13,    73,   158,   152,   104,   164,   127,   107,   108,
     109,   110,   111,   112,   113,   135,  1019,   164,   157,   159,
     158,    13,   159,  1026,    71,    13,   961,  1030,   161,    73,
      13,   157,   161,  1036,    68,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   167,    73,   169,
      26,   161,  1086,   173,   158,   175,    46,    90,   178,  1062,
    1042,   144,   161,   998,  1086,   105,    90,   159,   161,  1004,
     159,    73,   159,  1107,    87,   152,   158,    71,    65,  1113,
     158,    59,    60,    67,    13,  1107,    68,   157,    73,   209,
     159,  1113,    46,   213,  1097,  1098,    23,    24,   152,   152,
      27,    46,  1136,   223,  1039,  1139,  1140,   227,    71,  1044,
      71,     8,    90,  1116,  1136,  1149,    26,  1139,  1140,  1101,
      85,   160,    84,   243,   159,    46,    86,  1149,   158,   152,
     152,    84,    46,   161,   152,    84,    86,   152,   258,    73,
     161,  1076,   152,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   102,  1165,   158,   157,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,  1161,   349,   299,
     160,   301,   302,   690,   161,   402,   420,  1122,   402,   701,
     420,   950,   354,   539,   314,   789,   316,   954,  1133,   794,
     830,  1019,   800,   850,   918,   652,   215,   651,   328,   758,
    1145,   331,   215,    -1,   665,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    25,    -1,    27,    28,  1172,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,    -1,   196,
     107,   108,   109,   110,   111,   112,   113,   204,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,   215,   409,
      -1,    -1,   412,    -1,    -1,    23,    24,    -1,    -1,   226,
     420,    -1,   422,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,   438,    -1,
      -1,    49,    -1,   443,   161,   445,    -1,   447,   448,   449,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,   281,    -1,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,   484,    -1,    78,    79,    -1,    42,
      43,    -1,   164,    46,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    -1,    86,   126,   342,    -1,   129,   130,   131,
     132,   133,    -1,    -1,   152,    98,    -1,    -1,   140,   356,
      -1,    -1,   552,    -1,   146,   147,    -1,    -1,    -1,   112,
     367,    -1,   115,   116,   564,    -1,    -1,    -1,   176,   159,
     162,   163,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,   140,   196,    -1,
      -1,    -1,   145,   146,   147,   148,   204,   205,   206,    -1,
      -1,   408,    -1,    -1,   157,    -1,   214,    -1,    -1,   162,
     163,    -1,   165,   613,    -1,    -1,    -1,    -1,   226,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   632,    49,    -1,    -1,   636,    -1,    -1,   639,
     640,    -1,     9,    10,    11,   645,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   469,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   681,    49,    -1,    -1,    -1,    -1,   687,    -1,   496,
      -1,   498,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   518,   519,   520,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   725,   726,    -1,    -1,    -1,
      -1,    -1,   539,   733,   734,    -1,    -1,    -1,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    69,    70,    71,    -1,    73,   367,
     760,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,   769,
     577,   771,   772,   580,    -1,    -1,    -1,    -1,   778,    -1,
      -1,    -1,    -1,    -1,    -1,   592,    59,    60,    -1,    -1,
     597,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,   799,
     408,   409,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     617,   126,    -1,    -1,   129,   130,   131,   132,   133,    -1,
      -1,    -1,    -1,   431,    -1,   140,    -1,    -1,    -1,    -1,
      -1,   146,   147,   154,   641,   642,   643,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   652,    -1,   162,   163,   849,
      -1,    -1,   659,    -1,    -1,    -1,   663,    -1,   665,    -1,
      -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   884,   885,    -1,    -1,   496,    -1,
     498,    -1,    -1,    -1,   502,   895,    -1,    -1,    -1,    -1,
      -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   911,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   539,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     747,    -1,   749,    -1,   944,    -1,    -1,    -1,    -1,   949,
     950,   758,    -1,    -1,   562,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   965,    -1,   774,    -1,   577,
      -1,    -1,   580,    -1,    42,    43,    -1,   784,    -1,    -1,
      -1,    -1,    -1,    -1,   592,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,   994,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    -1,    -1,  1007,    -1,    -1,
      -1,    79,    -1,   820,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   641,   642,    -1,    -1,    -1,  1038,    -1,
      -1,    -1,  1042,    -1,   112,    -1,    -1,    -1,    -1,  1049,
      -1,    -1,    -1,    -1,    -1,   663,    -1,   665,   126,    -1,
     128,   129,   130,   131,   132,   133,   674,    -1,    -1,   876,
      -1,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   697,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   906,
      -1,  1101,    -1,    -1,    -1,    -1,   714,   715,     9,    10,
      11,    -1,    -1,   721,   722,    -1,    -1,    -1,    -1,   727,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,   935,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
     758,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   971,    -1,   774,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,   986,
       9,    10,    11,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,  1026,
      49,    -1,    -1,  1030,    42,    43,    -1,    -1,    -1,  1036,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
     161,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,   883,    -1,    95,    96,    97,
      98,    99,   100,   101,    -1,   103,   104,    -1,   106,    -1,
    1097,    -1,   110,   111,   112,    -1,   114,   115,   116,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,   161,   151,    -1,    -1,    -1,   155,   156,   157,
      -1,   159,   160,    -1,   162,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,   110,   111,   112,    -1,   114,   115,   116,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,     3,     4,
       5,     6,     7,   140,    -1,    -1,    -1,    12,   145,   146,
     147,   148,   149,    -1,   151,    -1,    -1,    -1,   155,   156,
     157,    26,   159,   160,    -1,   162,   163,    -1,   165,    -1,
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
      -1,    -1,   157,    26,   159,   160,    -1,   162,   163,    -1,
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
     133,    -1,     3,     4,     5,     6,     7,   140,    -1,    -1,
      -1,    12,   145,   146,   147,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    26,   159,   160,    -1,   162,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,     3,     4,     5,     6,     7,   140,
      -1,    -1,    -1,    12,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    26,   159,   160,
      -1,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
     159,   160,    -1,   162,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,   159,   160,    -1,   162,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,
     147,   148,     3,     4,     5,     6,     7,    -1,    -1,    -1,
     157,    12,    -1,    -1,    -1,   162,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    25,    -1,    27,    28,    79,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    98,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    27,    28,    79,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    98,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,   159,
      -1,    -1,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    28,
      79,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    98,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
     159,    -1,    -1,   162,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,   159,    -1,    -1,   162,   163,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,   162,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,     3,     4,     5,     6,     7,    -1,
      -1,   157,   158,    12,    -1,    -1,   162,   163,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,
       3,     4,     5,     6,     7,    -1,    -1,    -1,   157,    12,
      -1,    -1,    -1,   162,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,
      -1,    -1,   145,   146,   147,   148,     3,     4,     5,     6,
       7,    -1,    -1,    -1,   157,    12,    -1,    -1,    -1,   162,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,
     147,   148,     3,     4,     5,     6,     7,    -1,    -1,    -1,
     157,    12,    -1,    -1,    -1,   162,   163,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,   145,   146,   147,   148,     3,     4,
       5,     6,     7,    -1,    -1,    -1,   157,    12,    -1,    -1,
      -1,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
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
     145,   146,   147,   148,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   157,    12,    -1,    -1,    -1,   162,   163,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,
       3,     4,     5,     6,     7,    -1,    -1,    -1,   157,    12,
      -1,    -1,    -1,   162,   163,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
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
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,   162,
     163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,   163,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,   162,   163,    -1,   165,    25,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,   161,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   161,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   161,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,   159,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   159,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   159,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    90,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   158,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   158,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   158,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,   158,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   158,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   158,    30,    31,    32,    33,
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
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    25,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    25,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,   152,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,   152,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,   152,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
     124,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    25,    26,    27,    28,    -1,    30,    31,    32,
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
       0,   167,   168,     0,   169,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   125,   126,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   155,
     156,   157,   159,   160,   162,   163,   165,   170,   171,   176,
     180,   181,   216,   238,   239,   241,   243,   246,   248,   317,
     319,   333,   336,   345,   356,   359,   363,   364,   366,   367,
     377,   378,   379,   380,   382,   383,   385,   386,   392,   403,
     406,    71,   112,   145,   333,   363,   363,   157,   363,   363,
     363,   363,   363,   363,   363,   330,   363,   363,   363,   363,
     363,   363,   363,   112,   145,   148,   170,   345,   366,   367,
     379,   366,    31,   363,   396,   397,   363,   145,   148,   170,
     345,   347,   348,   379,   383,   385,   392,   157,   353,   157,
      26,   307,   363,   188,   157,   157,   157,   198,   157,   159,
     363,   159,   363,    71,    71,   159,   319,   363,   367,   199,
     363,   148,   170,   174,   175,    73,   163,   281,   282,   118,
     118,    73,   283,   333,   157,   157,   157,   157,   157,   157,
      73,    78,   141,   142,   143,   160,   398,   399,   401,   148,
     160,   170,   170,    65,    71,    79,    84,    86,   205,   319,
     364,   177,    78,    79,   215,   398,   153,   363,   317,   363,
     177,    78,   398,   160,    78,   354,   398,   148,   157,     8,
     159,    71,    71,    31,   240,   381,   144,     9,    10,    11,
      25,    27,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    49,   159,    59,    60,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   157,   144,    61,
     123,    61,   160,   163,   385,   240,   363,   363,   148,   170,
     144,   144,   365,   367,   124,   164,     8,   361,   148,   170,
     144,   318,   144,   123,   385,   158,   363,   363,     8,   159,
     180,   186,   308,   309,   363,   319,   367,   157,   363,   159,
     159,   159,    13,   159,   159,   160,   159,   170,    90,     8,
     159,   160,   364,   367,     8,   159,    13,     8,   159,   240,
     236,   237,   367,   367,   404,   367,   158,   320,   396,    61,
     123,    78,   141,   399,   401,    72,   363,   367,   163,   345,
     378,   379,   385,   406,    78,   141,   399,   401,   170,   173,
     159,   160,   157,   363,    71,    78,    79,   126,   140,   162,
     210,   211,   212,   356,   384,   385,   392,    29,    31,   157,
     253,   367,   157,   363,    29,   152,   152,   159,   159,   152,
     178,   152,    13,   152,   158,   158,   161,   162,   363,   165,
      71,   337,    71,   121,   247,   245,    71,   157,    61,    71,
     377,   385,   392,   324,   363,   325,    26,   327,   322,   323,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   347,    31,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   344,    71,   160,   377,   391,   363,   387,   368,
     387,   363,   158,   170,    71,    71,    31,   363,    31,   363,
     170,   377,   157,   355,   377,   349,   158,   158,   363,    82,
     363,   159,     8,    90,    90,    71,   257,   158,    42,    43,
      61,   126,   128,   145,   148,   170,   345,   356,   357,   358,
     177,    90,    71,   175,   363,   282,   357,    73,   157,     8,
     158,     8,   158,   158,   159,   125,   367,   393,   394,   158,
     400,    71,    61,   161,   161,   144,   161,   144,   161,   157,
     168,   172,   339,   152,   157,    78,   398,    13,   152,   210,
     211,   385,    71,   367,   253,   308,   367,   124,   252,   363,
      90,    71,   152,   117,   179,   180,   216,   238,   239,   363,
     326,   161,    31,   279,   280,   319,   367,    13,   145,   148,
     170,   346,   244,   121,   249,   242,   331,   387,   157,   157,
     385,   363,   363,   329,   363,   363,   363,    63,   367,   279,
     363,   157,   157,   164,   377,   388,   390,   391,   164,   161,
     365,   365,   124,   279,   388,    26,   182,   157,   158,   190,
     310,   196,   194,    13,     8,   158,   193,   357,   357,   357,
     360,   362,   157,   148,   170,   144,   161,    71,   161,    13,
     332,   237,   159,   405,   157,     8,   158,    71,    73,    74,
     402,   363,    71,    71,   338,   161,   168,   279,   222,   396,
     162,   213,    13,   206,   252,   159,   253,   154,    90,   253,
     207,   157,   152,   315,   316,   365,   158,     8,   357,   148,
     170,   122,   250,   251,   346,   160,   157,   126,   127,   276,
     277,   278,   346,   164,   340,   341,   363,    26,   347,   158,
     161,   343,   342,   389,   369,    61,   160,    31,   363,   158,
     350,   184,   180,   189,   187,   308,   363,   367,   253,   357,
      71,    26,   180,   256,    26,   160,   258,   124,   164,     8,
     361,   360,   170,    71,   102,   357,   276,   367,   395,   394,
      13,   164,   164,   279,   161,   158,   204,   158,   363,   214,
     208,   154,   224,   363,   217,   252,   208,   158,    61,   123,
     311,   312,   313,   371,    31,   319,   367,   170,   251,   160,
       8,   284,   276,   158,     8,    31,    73,   279,   279,   328,
     321,   279,   279,   157,   373,   374,   376,   387,   363,   365,
     351,   177,   183,   363,    26,   180,   263,   159,   252,   252,
      13,   177,   159,   259,   159,   259,   357,   357,   158,   157,
     158,   393,   363,   161,   158,    75,   149,   216,   363,    26,
     363,   308,   152,   253,   152,   159,   387,   388,   371,    61,
     314,   365,   284,   346,    99,   104,   107,   108,   109,   110,
     111,   112,   113,   161,   285,   288,   301,   302,   303,   304,
     306,   158,   104,   334,   278,    73,    13,   158,   158,   363,
     355,   158,   158,   375,    61,    61,   370,   164,   161,   123,
     352,   185,   264,   158,   177,   191,   158,   158,   357,    89,
     259,    92,    93,    94,   259,   161,   124,   200,   334,   158,
     223,   209,   158,   159,   229,   252,   220,   164,   372,   387,
     311,   161,    71,   289,   346,   286,   333,   304,     8,   159,
     160,   157,   160,    31,    73,    13,   357,   279,   387,   387,
     371,   388,   269,    66,    67,   271,   159,    83,   308,   197,
     195,   159,    92,   159,   363,    26,   159,   262,   161,   357,
     346,   160,   266,   363,   152,   225,   204,   158,   204,   376,
     164,    13,     8,   159,   160,   290,    73,   305,   240,    71,
     177,    31,    73,   335,   177,    73,    13,   357,   158,   164,
     164,    66,    67,   274,   157,   180,   159,   158,    26,   180,
     255,   255,   159,   262,   261,   201,   177,    66,    67,   272,
     227,   308,   149,   152,   149,   357,   346,    71,   291,   292,
     293,   294,   296,   297,   298,   346,    13,     8,   159,    71,
      13,   161,    73,     8,   158,   161,    13,   357,   157,    26,
      68,   363,   192,   177,   260,   177,    73,   161,   363,    65,
     152,    46,   273,   204,   158,   230,   218,   221,   161,   293,
     159,    90,   105,   159,   144,   357,    73,   287,   357,    31,
      73,   357,   363,   177,   159,   158,    26,   180,   254,    87,
     177,   158,   152,   363,   204,    65,   149,   152,    67,   275,
     204,   275,   299,   304,   295,   346,    71,    13,   157,    73,
     158,   265,   177,   159,   202,   267,   152,   149,   152,   228,
     226,   152,    46,   149,    46,    71,     8,   357,   276,    26,
     180,    85,   160,   204,   268,   275,   204,   204,    84,   219,
      86,   346,   158,   270,   159,   177,   149,   204,    46,   149,
     149,   152,   275,   152,   159,   160,   300,   177,   161,   149,
      84,    46,    46,   177,   203,   152,    84,    86,   161,   102,
     231,   232,   233,   152,   152,   157,   233,   346,   234,    73,
     158,   235,   160,   177,   161
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
#line 235 "Zend54/zend_language_parser.y"
    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 239 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 239 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 244 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 245 "Zend54/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 249 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 250 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 251 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 252 "Zend54/zend_language_parser.y"
    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 253 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 254 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 255 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 256 "Zend54/zend_language_parser.y"
    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 257 "Zend54/zend_language_parser.y"
    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 258 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 259 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 260 "Zend54/zend_language_parser.y"
    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 269 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 270 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 271 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 272 "Zend54/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 276 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 277 "Zend54/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 281 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 281 "Zend54/zend_language_parser.y"
    { HANDLE_INTERACTIVE(); }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 291 "Zend54/zend_language_parser.y"
    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 296 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 297 "Zend54/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 302 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 302 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 302 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 303 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 303 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 303 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 304 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (2)])) = get_next_op_number(CG(active_op_array));  }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 304 "Zend54/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 304 "Zend54/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 305 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 305 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 305 "Zend54/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 309 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 311 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 313 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 314 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 315 "Zend54/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 315 "Zend54/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 316 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 317 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 318 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 319 "Zend54/zend_language_parser.y"
    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 320 "Zend54/zend_language_parser.y"
    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 321 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 322 "Zend54/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 326 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 327 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 330 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 331 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 332 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 334 "Zend54/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 335 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 336 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 337 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(1) - (1)])) = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 337 "Zend54/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 339 "Zend54/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 340 "Zend54/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 341 "Zend54/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 342 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 343 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 344 "Zend54/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 345 "Zend54/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 346 "Zend54/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 351 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 356 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 357 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 358 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 359 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 360 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (3)])) = zend_do_begin_function_call(&(yyvsp[(3) - (3)]), 1 TSRMLS_CC); zend_do_pass_param(&(yyvsp[(1) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 361 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 366 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 367 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 367 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 371 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 372 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 376 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 378 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 379 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 380 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 384 "Zend54/zend_language_parser.y"
    { if (Z_STRVAL((yyvsp[(1) - (2)]).u.constant)[0] == '_') { zend_error(E_COMPILE_ERROR, "attribute name cannot start with _"); } STU_G(st_tpl_no_constant) = 1; }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 384 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 385 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 1; }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 385 "Zend54/zend_language_parser.y"
    { STU_G(st_tpl_no_constant) = 0; zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 386 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 387 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 391 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 392 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 393 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 400 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 402 "Zend54/zend_language_parser.y"
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
#line 409 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 414 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 415 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 416 "Zend54/zend_language_parser.y"
    { tpl_do_include(&(yyval), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 418 "Zend54/zend_language_parser.y"
    { int is_dynamic = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 1 TSRMLS_CC);
			zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, 1 TSRMLS_CC); Z_LVAL((yyvsp[(3) - (3)]).u.constant) = 1;
			zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, is_dynamic TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_echo(&(yyval) TSRMLS_CC); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 422 "Zend54/zend_language_parser.y"
    { tpl_do_function(&(yyval), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 424 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(4) - (5)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (5)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]), &dummy_var, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 425 "Zend54/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(2) - (10)]), &(yyvsp[(3) - (10)]), &(yyvsp[(5) - (10)]), &(yyvsp[(7) - (10)]), &(yyvsp[(8) - (10)]) TSRMLS_CC); }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 426 "Zend54/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (13)]), &(yyvsp[(5) - (13)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(6) - (13)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (13)]), 1 TSRMLS_CC); }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 427 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 429 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(3) - (7)]) TSRMLS_CC); ZVAL_LONG(&(yyval).u.constant, STU_G(tpl_assign_idx)); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); tpl_do_foreach_i_init(Z_LVAL((yyval).u.constant) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(4) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 430 "Zend54/zend_language_parser.y"
    { tpl_do_foreach_i_inc(TSRMLS_CC); zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); tpl_do_foreach_i_end(Z_LVAL((yyvsp[(8) - (10)]).u.constant) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 431 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 433 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 436 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 438 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 441 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(4) - (5)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(5) - (5)])) = get_next_op_number(CG(active_op_array)); }
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 442 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(7) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 443 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(10) - (12)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(5) - (12)]), &(yyvsp[(8) - (12)]) TSRMLS_CC); }
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 445 "Zend54/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(8) - (18)]) TSRMLS_CC); }
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 448 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(7) - (9)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(1) - (9)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &dummy_var, &(yyvsp[(6) - (9)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (9)]), &(yyvsp[(3) - (9)]), &(yyvsp[(6) - (9)]), &(yyvsp[(4) - (9)]), &(yyvsp[(5) - (9)]) TSRMLS_CC); }
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 449 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (12)]), &(yyvsp[(6) - (12)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(1) - (12)]), 1 TSRMLS_CC); }
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 450 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 452 "Zend54/zend_language_parser.y"
    { znode dummy_var; tpl_do_assign(&dummy_var, &(yyvsp[(6) - (7)]) TSRMLS_CC); zend_do_if_cond(&dummy_var, &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_foreach_begin(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &dummy_var, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); zend_do_foreach_cont(&(yyvsp[(2) - (7)]), &(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); }
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 453 "Zend54/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(2) - (10)]), &(yyvsp[(5) - (10)]) TSRMLS_CC); zend_do_if_after_statement(&(yyvsp[(7) - (10)]), 1 TSRMLS_CC); }
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 454 "Zend54/zend_language_parser.y"
    { zend_do_if_end(TSRMLS_C); }
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 458 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 459 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = -1; }
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 463 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 464 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 469 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = get_next_op_number(CG(active_op_array)); }
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 469 "Zend54/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 469 "Zend54/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 479 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 483 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 487 "Zend54/zend_language_parser.y"
    { DO_TICKS(); }
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 492 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 493 "Zend54/zend_language_parser.y"
    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 498 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 499 "Zend54/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 504 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 508 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 510 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 514 "Zend54/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 519 "Zend54/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 520 "Zend54/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 521 "Zend54/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 166:
/* Line 1787 of yacc.c  */
#line 522 "Zend54/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 526 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 527 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 531 "Zend54/zend_language_parser.y"
    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 545 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 546 "Zend54/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 550 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 551 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 556 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 557 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 579 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 580 "Zend54/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 585 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 586 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 587 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 588 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 593 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 594 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 594 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 595 "Zend54/zend_language_parser.y"
    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 595 "Zend54/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 614 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 614 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 619 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 619 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(3) - (7)]), 0 TSRMLS_CC); }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 620 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 620 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (8)]), 0 TSRMLS_CC); }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 625 "Zend54/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 625 "Zend54/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 660 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 661 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 662 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 663 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 664 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 665 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 666 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 667 "Zend54/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 672 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 673 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 674 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 675 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 680 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 681 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 686 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 687 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 688 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 689 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 690 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 691 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 695 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 696 "Zend54/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 701 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 702 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 703 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 708 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 709 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 710 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 711 "Zend54/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 723 "Zend54/zend_language_parser.y"
    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 726 "Zend54/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 727 "Zend54/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 735 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 736 "Zend54/zend_language_parser.y"
    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 760 "Zend54/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 764 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 765 "Zend54/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 769 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 275:
/* Line 1787 of yacc.c  */
#line 770 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 774 "Zend54/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 778 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 779 "Zend54/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 783 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 784 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 788 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 789 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 793 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 794 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 798 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 799 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 803 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 804 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 808 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 809 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 810 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 811 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 812 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 813 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 817 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 818 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 819 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 820 "Zend54/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 824 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 825 "Zend54/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 301:
/* Line 1787 of yacc.c  */
#line 829 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:
/* Line 1787 of yacc.c  */
#line 830 "Zend54/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 835 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 836 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 840 "Zend54/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 840 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 841 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 845 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 846 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 850 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 851 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 855 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 855 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 856 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 857 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 861 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 862 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 863 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 867 "Zend54/zend_language_parser.y"
    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 867 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 871 "Zend54/zend_language_parser.y"
    { zend_do_list_init(TSRMLS_C); }
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 871 "Zend54/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 872 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 873 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 874 "Zend54/zend_language_parser.y"
    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 874 "Zend54/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 327:
/* Line 1787 of yacc.c  */
#line 875 "Zend54/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 876 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 877 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 878 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:
/* Line 1787 of yacc.c  */
#line 879 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 880 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 881 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 882 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 335:
/* Line 1787 of yacc.c  */
#line 883 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 336:
/* Line 1787 of yacc.c  */
#line 884 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 337:
/* Line 1787 of yacc.c  */
#line 885 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 338:
/* Line 1787 of yacc.c  */
#line 886 "Zend54/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 339:
/* Line 1787 of yacc.c  */
#line 887 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 340:
/* Line 1787 of yacc.c  */
#line 888 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 889 "Zend54/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 890 "Zend54/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 891 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 344:
/* Line 1787 of yacc.c  */
#line 891 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 345:
/* Line 1787 of yacc.c  */
#line 892 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 346:
/* Line 1787 of yacc.c  */
#line 892 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 893 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 893 "Zend54/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 894 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 894 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 895 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 898 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 899 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 900 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 901 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 902 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 903 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 904 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 359:
/* Line 1787 of yacc.c  */
#line 905 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 360:
/* Line 1787 of yacc.c  */
#line 906 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 361:
/* Line 1787 of yacc.c  */
#line 907 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 362:
/* Line 1787 of yacc.c  */
#line 908 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 363:
/* Line 1787 of yacc.c  */
#line 909 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 910 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 911 "Zend54/zend_language_parser.y"
    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 366:
/* Line 1787 of yacc.c  */
#line 912 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 367:
/* Line 1787 of yacc.c  */
#line 913 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 368:
/* Line 1787 of yacc.c  */
#line 914 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 915 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 916 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 917 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 918 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 919 "Zend54/zend_language_parser.y"
    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 920 "Zend54/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 921 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 922 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 923 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 923 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 924 "Zend54/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 925 "Zend54/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 381:
/* Line 1787 of yacc.c  */
#line 926 "Zend54/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 382:
/* Line 1787 of yacc.c  */
#line 927 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 383:
/* Line 1787 of yacc.c  */
#line 928 "Zend54/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 384:
/* Line 1787 of yacc.c  */
#line 929 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:
/* Line 1787 of yacc.c  */
#line 930 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 386:
/* Line 1787 of yacc.c  */
#line 931 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 387:
/* Line 1787 of yacc.c  */
#line 932 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 388:
/* Line 1787 of yacc.c  */
#line 933 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 389:
/* Line 1787 of yacc.c  */
#line 934 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 390:
/* Line 1787 of yacc.c  */
#line 935 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 391:
/* Line 1787 of yacc.c  */
#line 936 "Zend54/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 392:
/* Line 1787 of yacc.c  */
#line 937 "Zend54/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 393:
/* Line 1787 of yacc.c  */
#line 938 "Zend54/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 394:
/* Line 1787 of yacc.c  */
#line 938 "Zend54/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 395:
/* Line 1787 of yacc.c  */
#line 939 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 396:
/* Line 1787 of yacc.c  */
#line 940 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 941 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 942 "Zend54/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 943 "Zend54/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 944 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 945 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 946 "Zend54/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 947 "Zend54/zend_language_parser.y"
    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 951 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyval)) = CG(zend_lineno); }
    break;

  case 407:
/* Line 1787 of yacc.c  */
#line 960 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 408:
/* Line 1787 of yacc.c  */
#line 961 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 962 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 963 "Zend54/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 967 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(2) - (2)])) = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 969 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, OPLINE_NUM((yyvsp[(2) - (5)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 970 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 972 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 973 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(3) - (3)])) = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 975 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, OPLINE_NUM((yyvsp[(3) - (6)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 976 "Zend54/zend_language_parser.y"
    { OPLINE_NUM((yyvsp[(4) - (4)])) = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 418:
/* Line 1787 of yacc.c  */
#line 978 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(OPLINE_NUM((yyvsp[(4) - (7)]))?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), OPLINE_NUM((yyvsp[(4) - (7)])), OPLINE_NUM((yyvsp[(4) - (7)])) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 419:
/* Line 1787 of yacc.c  */
#line 979 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 420:
/* Line 1787 of yacc.c  */
#line 981 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 421:
/* Line 1787 of yacc.c  */
#line 982 "Zend54/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 422:
/* Line 1787 of yacc.c  */
#line 984 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 985 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 987 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 988 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 990 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 427:
/* Line 1787 of yacc.c  */
#line 994 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 428:
/* Line 1787 of yacc.c  */
#line 995 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:
/* Line 1787 of yacc.c  */
#line 996 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 430:
/* Line 1787 of yacc.c  */
#line 997 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 431:
/* Line 1787 of yacc.c  */
#line 1001 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 1002 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 1003 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 434:
/* Line 1787 of yacc.c  */
#line 1009 "Zend54/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 435:
/* Line 1787 of yacc.c  */
#line 1010 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 436:
/* Line 1787 of yacc.c  */
#line 1015 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 437:
/* Line 1787 of yacc.c  */
#line 1016 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 438:
/* Line 1787 of yacc.c  */
#line 1017 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 1018 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 442:
/* Line 1787 of yacc.c  */
#line 1029 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 443:
/* Line 1787 of yacc.c  */
#line 1033 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 444:
/* Line 1787 of yacc.c  */
#line 1034 "Zend54/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 445:
/* Line 1787 of yacc.c  */
#line 1035 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 446:
/* Line 1787 of yacc.c  */
#line 1039 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 1040 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 1041 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:
/* Line 1787 of yacc.c  */
#line 1046 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 450:
/* Line 1787 of yacc.c  */
#line 1047 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 451:
/* Line 1787 of yacc.c  */
#line 1052 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 452:
/* Line 1787 of yacc.c  */
#line 1053 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:
/* Line 1787 of yacc.c  */
#line 1054 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 454:
/* Line 1787 of yacc.c  */
#line 1055 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 455:
/* Line 1787 of yacc.c  */
#line 1056 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 456:
/* Line 1787 of yacc.c  */
#line 1057 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 457:
/* Line 1787 of yacc.c  */
#line 1058 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 458:
/* Line 1787 of yacc.c  */
#line 1059 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 459:
/* Line 1787 of yacc.c  */
#line 1060 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 460:
/* Line 1787 of yacc.c  */
#line 1061 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 461:
/* Line 1787 of yacc.c  */
#line 1062 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 462:
/* Line 1787 of yacc.c  */
#line 1063 "Zend54/zend_language_parser.y"
    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 463:
/* Line 1787 of yacc.c  */
#line 1068 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 464:
/* Line 1787 of yacc.c  */
#line 1069 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 465:
/* Line 1787 of yacc.c  */
#line 1070 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 466:
/* Line 1787 of yacc.c  */
#line 1071 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 467:
/* Line 1787 of yacc.c  */
#line 1072 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:
/* Line 1787 of yacc.c  */
#line 1073 "Zend54/zend_language_parser.y"
    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 469:
/* Line 1787 of yacc.c  */
#line 1074 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 470:
/* Line 1787 of yacc.c  */
#line 1075 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 471:
/* Line 1787 of yacc.c  */
#line 1076 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 472:
/* Line 1787 of yacc.c  */
#line 1077 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 473:
/* Line 1787 of yacc.c  */
#line 1081 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 474:
/* Line 1787 of yacc.c  */
#line 1085 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:
/* Line 1787 of yacc.c  */
#line 1086 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:
/* Line 1787 of yacc.c  */
#line 1087 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 477:
/* Line 1787 of yacc.c  */
#line 1088 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 478:
/* Line 1787 of yacc.c  */
#line 1089 "Zend54/zend_language_parser.y"
    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 479:
/* Line 1787 of yacc.c  */
#line 1090 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 480:
/* Line 1787 of yacc.c  */
#line 1091 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 481:
/* Line 1787 of yacc.c  */
#line 1092 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 482:
/* Line 1787 of yacc.c  */
#line 1093 "Zend54/zend_language_parser.y"
    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 483:
/* Line 1787 of yacc.c  */
#line 1098 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 484:
/* Line 1787 of yacc.c  */
#line 1099 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 487:
/* Line 1787 of yacc.c  */
#line 1108 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 488:
/* Line 1787 of yacc.c  */
#line 1109 "Zend54/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 489:
/* Line 1787 of yacc.c  */
#line 1110 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 490:
/* Line 1787 of yacc.c  */
#line 1111 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 491:
/* Line 1787 of yacc.c  */
#line 1115 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1787 of yacc.c  */
#line 1116 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 493:
/* Line 1787 of yacc.c  */
#line 1121 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:
/* Line 1787 of yacc.c  */
#line 1126 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 495:
/* Line 1787 of yacc.c  */
#line 1131 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 496:
/* Line 1787 of yacc.c  */
#line 1136 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 497:
/* Line 1787 of yacc.c  */
#line 1137 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 498:
/* Line 1787 of yacc.c  */
#line 1138 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 499:
/* Line 1787 of yacc.c  */
#line 1139 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 1143 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 1144 "Zend54/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 1149 "Zend54/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 1149 "Zend54/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 1153 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 1154 "Zend54/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 1158 "Zend54/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 1160 "Zend54/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 1164 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 1165 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 1166 "Zend54/zend_language_parser.y"
    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 1170 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 1171 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 1175 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 1176 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 1181 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 1185 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 1186 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 1187 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 1191 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 1192 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 1193 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 1198 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 1199 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 1200 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 1204 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 1205 "Zend54/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 1209 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 1210 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 1211 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 1216 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 1217 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 1221 "Zend54/zend_language_parser.y"
    { (yyval).op_type = IS_UNUSED; }
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 1222 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 1227 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 1228 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 1228 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 1232 "Zend54/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 1233 "Zend54/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 1234 "Zend54/zend_language_parser.y"
    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 1238 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 1239 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 1243 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 1244 "Zend54/zend_language_parser.y"
    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 546:
/* Line 1787 of yacc.c  */
#line 1254 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 547:
/* Line 1787 of yacc.c  */
#line 1255 "Zend54/zend_language_parser.y"
    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 1255 "Zend54/zend_language_parser.y"
    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 1256 "Zend54/zend_language_parser.y"
    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 1261 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 1262 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 1266 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 1267 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 1268 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 1269 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 1270 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 1271 "Zend54/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 1272 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 1273 "Zend54/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 1277 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 1278 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 1279 "Zend54/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 1280 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 1281 "Zend54/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 1282 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 1283 "Zend54/zend_language_parser.y"
    { zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 1284 "Zend54/zend_language_parser.y"
    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_add_string(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 1290 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 1291 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 570:
/* Line 1787 of yacc.c  */
#line 1291 "Zend54/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 571:
/* Line 1787 of yacc.c  */
#line 1292 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 572:
/* Line 1787 of yacc.c  */
#line 1293 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 1294 "Zend54/zend_language_parser.y"
    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 1295 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 1296 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 1300 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 1304 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 1305 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 1306 "Zend54/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 1311 "Zend54/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 1312 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 1313 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 1314 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 1315 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 1316 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 1317 "Zend54/zend_language_parser.y"
    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 1321 "Zend54/zend_language_parser.y"
    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 1322 "Zend54/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 1322 "Zend54/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 1326 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 1327 "Zend54/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1787 of yacc.c  */
#line 7142 "Zend54/zend_language_parser.c"
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
#line 1330 "Zend54/zend_language_parser.y"


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
