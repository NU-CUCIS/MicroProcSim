/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DBG_STYPE
/* Substitute the variable and function names.  */
#define yyparse         dbg_parse
#define yylex           dbg_lex
#define yyerror         dbg_error
#define yydebug         dbg_debug
#define yynerrs         dbg_nerrs

#define yylval          dbg_lval
#define yychar          dbg_char

/* Copy the first part of user declarations.  */
#line 1 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:339  */

/*
 * Parser for command lines in the Wine debugger
 *
 * Copyright 1993 Eric Youngdale
 * Copyright 1995 Morten Welinder
 * Copyright 2000 Eric Pouech
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "debugger.h"
#include "wine/exception.h"
#include "expr.h"

int dbg_lex(void);
static int dbg_error(const char*);
static void parser(const char*);


#line 112 "programs/winedbg/dbg.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef DBG_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define DBG_DEBUG 1
#  else
#   define DBG_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define DBG_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined DBG_DEBUG */
#if DBG_DEBUG
extern int dbg_debug;
#endif

/* Token type.  */
#ifndef DBG_TOKENTYPE
# define DBG_TOKENTYPE
  enum dbg_tokentype
  {
    tCONT = 258,
    tPASS = 259,
    tSTEP = 260,
    tLIST = 261,
    tNEXT = 262,
    tQUIT = 263,
    tHELP = 264,
    tBACKTRACE = 265,
    tALL = 266,
    tINFO = 267,
    tUP = 268,
    tDOWN = 269,
    tENABLE = 270,
    tDISABLE = 271,
    tBREAK = 272,
    tHBREAK = 273,
    tWATCH = 274,
    tRWATCH = 275,
    tDELETE = 276,
    tSET = 277,
    tPRINT = 278,
    tEXAM = 279,
    tABORT = 280,
    tECHO = 281,
    tCLASS = 282,
    tMAPS = 283,
    tSTACK = 284,
    tSEGMENTS = 285,
    tSYMBOL = 286,
    tREGS = 287,
    tALLREGS = 288,
    tWND = 289,
    tLOCAL = 290,
    tEXCEPTION = 291,
    tPROCESS = 292,
    tTHREAD = 293,
    tEOL = 294,
    tEOF = 295,
    tFRAME = 296,
    tSHARE = 297,
    tMODULE = 298,
    tCOND = 299,
    tDISPLAY = 300,
    tUNDISPLAY = 301,
    tDISASSEMBLE = 302,
    tSTEPI = 303,
    tNEXTI = 304,
    tFINISH = 305,
    tSHOW = 306,
    tDIR = 307,
    tWHATIS = 308,
    tSOURCE = 309,
    tPATH = 310,
    tIDENTIFIER = 311,
    tSTRING = 312,
    tINTVAR = 313,
    tNUM = 314,
    tFORMAT = 315,
    tTYPEDEF = 316,
    tSYMBOLFILE = 317,
    tRUN = 318,
    tATTACH = 319,
    tDETACH = 320,
    tKILL = 321,
    tMAINTENANCE = 322,
    tTYPE = 323,
    tMINIDUMP = 324,
    tNOPROCESS = 325,
    tVOID = 326,
    tCHAR = 327,
    tWCHAR = 328,
    tSHORT = 329,
    tINT = 330,
    tLONG = 331,
    tFLOAT = 332,
    tDOUBLE = 333,
    tUNSIGNED = 334,
    tSIGNED = 335,
    tSTRUCT = 336,
    tUNION = 337,
    tENUM = 338,
    OP_LOR = 339,
    OP_LAND = 340,
    OP_EQ = 341,
    OP_NE = 342,
    OP_LE = 343,
    OP_GE = 344,
    OP_SHL = 345,
    OP_SHR = 346,
    OP_SIGN = 347,
    OP_DEREF = 348,
    OP_DRF = 349
  };
#endif

/* Value type.  */
#if ! defined DBG_STYPE && ! defined DBG_STYPE_IS_DECLARED

union DBG_STYPE
{
#line 41 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:355  */

    struct dbg_lvalue   lvalue;
    char*               string;
    dbg_lgint_t         integer;
    IMAGEHLP_LINE64     listing;
    struct expr*        expression;
    struct dbg_type     type;
    struct list_string* strings;

#line 262 "programs/winedbg/dbg.tab.c" /* yacc.c:355  */
};

typedef union DBG_STYPE DBG_STYPE;
# define DBG_STYPE_IS_TRIVIAL 1
# define DBG_STYPE_IS_DECLARED 1
#endif


extern DBG_STYPE dbg_lval;

int dbg_parse (void);



/* Copy the second part of user declarations.  */

#line 279 "programs/winedbg/dbg.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DBG_STYPE_IS_TRIVIAL && DBG_STYPE_IS_TRIVIAL)))

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  187
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   994

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,     2,     2,     2,   101,    88,     2,
     112,   113,    99,    97,   110,    98,   106,   100,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   109,     2,
      91,   111,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   107,     2,   114,    87,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    86,     2,   104,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    89,    90,    93,    94,    95,    96,   102,   105,   108
};

#if DBG_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    99,   103,   104,   105,   106,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   164,
     165,   166,   170,   174,   175,   176,   177,   178,   184,   188,
     189,   193,   194,   195,   196,   197,   201,   202,   203,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     221,   222,   226,   227,   228,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   251,   252,   253,   254,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   299,
     300,   301,   305,   306,   307,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   360,   364,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   421,   425,   426,   427,   428,   429,   430,
     431
};
#endif

#if DBG_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tCONT", "tPASS", "tSTEP", "tLIST",
  "tNEXT", "tQUIT", "tHELP", "tBACKTRACE", "tALL", "tINFO", "tUP", "tDOWN",
  "tENABLE", "tDISABLE", "tBREAK", "tHBREAK", "tWATCH", "tRWATCH",
  "tDELETE", "tSET", "tPRINT", "tEXAM", "tABORT", "tECHO", "tCLASS",
  "tMAPS", "tSTACK", "tSEGMENTS", "tSYMBOL", "tREGS", "tALLREGS", "tWND",
  "tLOCAL", "tEXCEPTION", "tPROCESS", "tTHREAD", "tEOL", "tEOF", "tFRAME",
  "tSHARE", "tMODULE", "tCOND", "tDISPLAY", "tUNDISPLAY", "tDISASSEMBLE",
  "tSTEPI", "tNEXTI", "tFINISH", "tSHOW", "tDIR", "tWHATIS", "tSOURCE",
  "tPATH", "tIDENTIFIER", "tSTRING", "tINTVAR", "tNUM", "tFORMAT",
  "tTYPEDEF", "tSYMBOLFILE", "tRUN", "tATTACH", "tDETACH", "tKILL",
  "tMAINTENANCE", "tTYPE", "tMINIDUMP", "tNOPROCESS", "tVOID", "tCHAR",
  "tWCHAR", "tSHORT", "tINT", "tLONG", "tFLOAT", "tDOUBLE", "tUNSIGNED",
  "tSIGNED", "tSTRUCT", "tUNION", "tENUM", "OP_LOR", "OP_LAND", "'|'",
  "'^'", "'&'", "OP_EQ", "OP_NE", "'<'", "'>'", "OP_LE", "OP_GE", "OP_SHL",
  "OP_SHR", "'+'", "'-'", "'*'", "'/'", "'%'", "OP_SIGN", "'!'", "'~'",
  "OP_DEREF", "'.'", "'['", "OP_DRF", "':'", "','", "'='", "'('", "')'",
  "']'", "$accept", "input", "line", "command", "pathname", "identifier",
  "list_arg", "run_command", "list_of_words", "list_command",
  "disassemble_command", "set_command", "x_command", "print_command",
  "break_command", "watch_command", "display_command", "info_command",
  "maintenance_command", "noprocess_state", "type_expr", "expr_lvalue",
  "expr_rvalue", "expr", "lvalue_addr", "lvalue", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   124,    94,    38,   341,
     342,    60,    62,   343,   344,   345,   346,    43,    45,    42,
      47,    37,   347,    33,   126,   348,    46,    91,   349,    58,
      44,    61,    40,    41,    93
};
# endif

#define YYPACT_NINF -90

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define YYTABLE_NINF -102

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-102)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     455,   -25,   -48,   -90,   -23,    -1,   -14,   -90,    35,    12,
      32,    30,    40,    31,    83,    96,   105,   -49,   -24,   139,
     -15,   195,   109,   -90,   -35,    42,   -90,   -90,    47,    48,
     454,    54,   471,    67,    70,   -90,    87,   -28,   471,   -28,
     -28,    97,    98,   -90,   -90,   -42,   -28,    -6,   385,   -90,
     124,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   471,   115,    74,    76,    84,   -90,   -90,   -90,   -90,
     -90,   129,   471,   132,   471,   142,   -90,   -90,   471,   -90,
     -90,   -90,   -90,   471,   471,   -90,   167,   -90,   -90,   151,
     152,   -90,   158,   169,   -90,   -90,   471,   138,   210,   -90,
     471,   148,   219,   471,   -90,   471,   -90,   200,   201,   -90,
      -5,   -90,   -90,    -3,    22,   471,   205,   -90,   153,    10,
     206,   -90,   -90,   -90,   471,   -90,   -90,   -90,   -90,     6,
     -90,   140,   -90,   -90,    36,   101,   206,   206,   206,   471,
     471,   471,   471,   471,   471,   275,   168,   164,   -90,   742,
     471,   -90,   -90,   -90,   -90,   471,   471,   742,   -90,   171,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   471,    97,   -90,
     -90,   222,   -90,   239,   -90,   273,   -90,   -90,   -90,   -90,
     -90,   -90,   -47,   115,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   471,   -90,   -90,   -90,   -90,   -90,   226,
     -90,   227,   -90,   -90,   -90,   -90,    23,    24,   -90,   -90,
     -90,   -90,   742,   232,   471,   233,   471,   234,   -90,   -90,
     -90,   216,   220,   -90,   -37,   -90,   221,   225,   -90,   228,
     -90,    57,   -90,   229,   -90,    62,   -90,   -90,   -90,   117,
     117,   117,   117,   117,   117,   -89,   682,    46,   -90,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   241,   471,   245,
     471,   -90,   742,   742,   471,   -90,   -90,   -90,   248,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   500,   -90,   -90,   -90,   -90,   231,   -90,
     -90,   -90,   -90,   235,   -90,   -90,   236,   471,   -90,   -90,
     562,   767,   791,   814,   836,   857,   440,   440,   872,   872,
     872,   872,   885,   885,    81,    81,   117,   117,   117,   -90,
     531,   -90,   199,   -90,   -90,   -90,   -90,   -90,   -90,   117,
     471,   -90,   -90,   592,   471,   -90,   622,   471,   -90,   652,
     471,   -90,   712,   -90
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    11,    14,    71,    16,     8,     9,    24,
       0,    27,    29,     0,     0,    99,   104,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     5,     6,     0,     0,
     115,   123,    76,    18,    20,    22,     0,    34,     0,     0,
       0,    69,     0,    42,    44,     0,     0,   152,     0,     2,
       0,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     7,    13,    15,    61,    62,    60,    63,
      72,     0,     0,     0,    65,    73,    17,    10,    26,    25,
     124,   136,   146,   132,   130,     0,   127,   128,   138,   134,
     148,   142,   143,   144,   125,   135,     0,    28,    30,     0,
       0,   105,     0,     0,   107,    98,     0,     0,    59,   103,
       0,     0,    59,     0,   112,     0,   114,     0,   121,   109,
      62,   245,   244,     0,     0,     0,     0,   246,     0,   243,
       0,   204,   205,   203,     0,   195,   155,   156,   157,   161,
     170,   174,   192,   193,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,    94,    92,   201,
       0,    90,    46,    43,    31,    35,     0,   116,   122,    77,
      19,    21,    32,    33,    59,    40,    37,    38,    69,    68,
      41,     0,   149,     0,    45,     0,   154,     1,     3,     4,
      67,    74,     0,     0,   137,   202,   147,   131,   129,   133,
     139,   145,   126,   140,   106,   118,   108,   119,    95,     0,
     100,     0,   111,   113,   110,   120,     0,     0,    81,    80,
      83,    82,   250,    89,     0,     0,     0,     0,   197,    93,
     160,   166,   165,   175,   184,   194,   180,   178,   159,   168,
     173,   182,   158,   163,   171,   176,   198,   199,   200,   241,
     236,   235,   240,   237,   238,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    36,   117,     0,    39,    70,   150,     0,   153,
      64,    66,    75,   141,    97,   102,    85,    84,    87,    86,
      88,    79,   248,     0,   247,   167,   164,   185,   190,   181,
     179,   169,   183,   188,   162,   177,   186,     0,   239,   209,
       0,   217,   218,   219,   221,   220,   222,   227,   224,   223,
     226,   225,   228,   229,   230,   231,   232,   233,   234,   208,
       0,   207,   216,    78,   151,   249,   191,   189,   187,   242,
       0,   210,   215,     0,     0,   211,     0,     0,   212,     0,
       0,   213,     0,   214
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   261,   -90,   163,     0,   -66,   -90,   134,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     159,   -19,   -63,   -30,   -90,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,    50,    73,   156,    75,    51,   179,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     157,   195,   196,   159,   128,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     167,   181,   158,   161,   185,    74,   191,    67,   218,    67,
     258,    64,   290,   169,    63,   108,   112,   114,   116,   175,
     127,   198,   162,    78,   317,   200,   182,    66,    67,    68,
     201,   202,    67,   220,   296,   298,    65,   174,   307,   174,
     174,   120,   308,   121,   122,    76,   174,    77,    99,    80,
     113,   186,   190,   219,    66,    67,    68,   183,    69,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    79,    74,    93,    94,   115,   100,    95,   221,   297,
     299,   230,   123,   124,   125,   231,   232,   208,   126,    97,
     101,   210,   216,   217,   212,   222,   213,    70,    71,    98,
     102,   163,    67,   131,   132,   133,   164,   165,   238,    72,
     239,   240,   241,   168,   285,   229,   225,   226,   227,   249,
     250,   251,   252,   253,   254,   256,   170,   292,   103,   171,
     228,    96,   312,   313,   149,   282,   283,   315,   316,   172,
     293,   281,   104,   150,   151,   152,   246,   247,   248,   153,
     154,    66,    67,    68,   178,   105,   117,   180,   155,   319,
      66,    67,    68,   189,   109,    67,   131,   132,   133,   160,
      66,    67,    68,   242,    69,   243,   244,   245,   107,   111,
     274,   275,   276,   192,   118,   -59,   194,   277,   278,   279,
     280,   197,   291,    74,   193,   106,   303,   149,   119,   199,
     173,   203,   176,   177,   110,   301,   150,   151,   152,   184,
     204,   205,   153,   154,    71,   233,   234,   206,   235,   236,
     237,   155,   130,   277,   278,   279,   280,   320,   207,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   209,   340,   -96,
     342,    67,   131,   132,   133,   134,   135,   211,  -101,   214,
     215,   223,    67,   258,   224,   343,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   287,
     257,   284,   288,   149,   289,   294,   295,   349,   300,   302,
     304,   305,   150,   151,   152,   306,   309,   339,   153,   154,
     310,   341,   130,   311,   314,   344,   346,   155,  -102,   188,
     347,   348,   286,     0,   255,     0,     0,     0,     0,     0,
     353,     0,     0,     0,   356,     0,     0,   359,     0,     0,
     362,    67,   131,   132,   133,     0,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,   149,     0,     0,     0,     0,     0,     0,
       0,     0,   150,   151,   152,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,   187,     1,   155,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      67,   131,   132,   133,   166,     0,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,     0,    67,   131,   132,
     133,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   149,     0,     0,     0,   277,   278,   279,   280,
       0,   150,   151,   152,     0,     0,     0,   153,   154,   149,
       0,     0,     0,     0,     0,     0,   155,     0,   150,   151,
     152,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   155,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,     0,     0,     0,     0,   277,   278,   279,   280,
       0,     0,     0,     0,   345,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,     0,     0,     0,   277,   278,   279,
     280,     0,     0,     0,     0,   352,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   350,     0,     0,   351,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   354,     0,     0,   355,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   357,     0,     0,   358,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   360,     0,     0,   361,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,     0,     0,     0,   318,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,     0,     0,     0,   363,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
       0,     0,     0,   277,   278,   279,   280,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,     0,     0,     0,     0,   277,   278,   279,
     280,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,     0,     0,     0,     0,
     277,   278,   279,   280,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,     0,     0,
       0,     0,   277,   278,   279,   280,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,     0,
       0,     0,     0,   277,   278,   279,   280,   270,   271,   272,
     273,   274,   275,   276,     0,     0,     0,     0,   277,   278,
     279,   280,   272,   273,   274,   275,   276,     0,     0,     0,
       0,   277,   278,   279,   280
};

static const yytype_int16 yycheck[] =
{
      30,    43,    21,    22,    10,     5,    72,    56,    11,    56,
      99,    59,    59,    32,    39,    15,    16,    17,    18,    38,
      20,    84,    57,    11,   113,    88,    68,    55,    56,    57,
      93,    94,    56,    11,    11,    11,    59,    37,    75,    39,
      40,    56,    79,    58,    59,    59,    46,    12,    17,    17,
      99,    57,    71,    56,    55,    56,    57,    99,    59,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    59,    72,    41,    42,    99,    45,    45,    56,    56,
      56,    75,    97,    98,    99,    79,    80,   106,   103,    59,
      59,   110,    97,    98,   113,   125,   115,    98,    99,    59,
      17,    59,    56,    57,    58,    59,    59,    59,    72,   110,
      74,    75,    76,    59,   177,   134,   106,   107,   108,   149,
     150,   151,   152,   153,   154,   155,    59,   193,    45,    59,
     130,    99,    75,    76,    88,   165,   166,    75,    76,    52,
     203,   160,    59,    97,    98,    99,   146,   147,   148,   103,
     104,    55,    56,    57,    57,    59,    17,    59,   112,   113,
      55,    56,    57,    39,    59,    56,    57,    58,    59,    60,
      55,    56,    57,    72,    59,    74,    75,    76,    15,    16,
      99,   100,   101,   109,    45,   109,    57,   106,   107,   108,
     109,    59,   192,   193,   110,    99,   226,    88,    59,    57,
      37,    34,    39,    40,    99,   224,    97,    98,    99,    46,
      59,    59,   103,   104,    99,    75,    76,    59,    78,    79,
      80,   112,    27,   106,   107,   108,   109,   257,    59,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   109,   278,    39,
     280,    56,    57,    58,    59,    60,    61,   109,    39,    59,
      59,    56,    56,    99,   111,   284,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    57,
     112,   110,    43,    88,    11,    59,    59,   317,    56,    56,
      56,    75,    97,    98,    99,    75,    75,    56,   103,   104,
      75,    56,    27,    75,    75,    57,    75,   112,   109,    48,
      75,    75,   178,    -1,   155,    -1,    -1,    -1,    -1,    -1,
     350,    -1,    -1,    -1,   354,    -1,    -1,   357,    -1,    -1,
     360,    56,    57,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,    -1,    -1,    -1,   103,   104,
      -1,    -1,    -1,    -1,    -1,     0,     1,   112,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      56,    57,    58,    59,    60,    -1,    -1,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    -1,    56,    57,    58,
      59,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    88,    -1,    -1,    -1,   106,   107,   108,   109,
      -1,    97,    98,    99,    -1,    -1,    -1,   103,   104,    88,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    97,    98,
      99,    -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
      -1,    -1,    -1,    -1,   114,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,   110,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,    -1,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,    -1,    -1,    -1,   113,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,   108,
     109,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,   108,   109,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,   106,   107,   108,   109,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,   109,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,   106,   107,   108,   109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    38,    39,    40,    41,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      62,    63,    64,    65,    66,    67,    69,    70,   116,   117,
     118,   122,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    39,    59,    59,    55,    56,    57,    59,
      98,    99,   110,   119,   120,   121,    59,    12,    11,    59,
      17,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    41,    42,    45,    99,    59,    59,    17,
      45,    59,    17,    45,    59,    59,    99,   119,   120,    59,
      99,   119,   120,    99,   120,    99,   120,    17,    45,    59,
      56,    58,    59,    97,    98,    99,   103,   120,   139,   140,
      27,    57,    58,    59,    60,    61,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    88,
      97,    98,    99,   103,   104,   112,   120,   135,   136,   138,
      60,   136,    57,    59,    59,    59,    60,   138,    59,   136,
      59,    59,    52,   119,   120,   136,   119,   119,    57,   123,
      59,    43,    68,    99,   119,    10,    57,     0,   117,    39,
     136,   121,   109,   110,    57,   136,   137,    59,   137,    57,
     137,   137,   137,    34,    59,    59,    59,    59,   136,   109,
     136,   109,   136,   136,    59,    59,    97,    98,    11,    56,
      11,    56,   138,    56,   111,   106,   107,   108,   120,   136,
      75,    79,    80,    75,    76,    78,    79,    80,    72,    74,
      75,    76,    72,    74,    75,    76,   120,   120,   120,   138,
     138,   138,   138,   138,   138,   135,   138,   112,    99,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   106,   107,   108,
     109,   136,   138,   138,   110,   137,   123,    57,    43,    11,
      59,   120,   121,   137,    59,    59,    11,    56,    11,    56,
      56,   136,    56,   138,    56,    75,    75,    75,    79,    75,
      75,    75,    75,    76,    75,    75,    76,   113,   113,   113,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,    56,
     138,    56,   138,   136,    57,   114,    75,    75,    75,   138,
     110,   113,   114,   138,   110,   113,   138,   110,   113,   138,
     110,   113,   138,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   119,   120,   121,   121,   121,   121,   121,   122,   123,
     123,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   134,   134,   134,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   139,   140,   140,   140,   140,   140,   140,
     140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     1,     1,
       2,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     2,     3,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     2,     2,     0,
       2,     1,     2,     2,     3,     4,     1,     2,     4,     4,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     3,
       2,     3,     2,     3,     2,     3,     2,     4,     2,     1,
       3,     2,     4,     2,     1,     2,     3,     2,     3,     2,
       3,     3,     2,     3,     2,     1,     2,     3,     3,     3,
       3,     2,     2,     1,     2,     2,     3,     2,     2,     3,
       2,     3,     2,     3,     2,     2,     2,     3,     2,     3,
       3,     4,     2,     2,     2,     3,     2,     3,     2,     2,
       3,     4,     1,     3,     2,     1,     1,     1,     2,     2,
       2,     1,     3,     2,     3,     2,     2,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     2,     3,     3,     4,     3,     4,
       3,     4,     1,     1,     2,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       4,     6,     8,    10,    12,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       2,     2,     4,     1,     1,     1,     1,     3,     3,     4,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if DBG_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DBG_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DBG_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 103 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { expr_free_all(); }
#line 1769 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 105 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { return 1; }
#line 1775 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 106 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { yyerrok; expr_free_all(); }
#line 1781 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { return 1; }
#line 1787 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { print_help(); }
#line 1793 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 112 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_help(); }
#line 1799 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 113 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_EXCEPTION_NOT_HANDLED, 0, 0); }
#line 1805 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_cont); }
#line 1811 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_cont); }
#line 1817 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_into_line); }
#line 1823 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_into_line); }
#line 1829 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_over_line); }
#line 1835 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_over_line); }
#line 1841 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_into_insn); }
#line 1847 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_into_insn); }
#line 1853 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 1,  dbg_exec_step_over_insn); }
#line 1859 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, (yyvsp[0].integer), dbg_exec_step_over_insn); }
#line 1865 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_wait_next_exception(DBG_CONTINUE, 0,  dbg_exec_finish); }
#line 1871 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 125 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { abort(); }
#line 1877 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_backtrace(dbg_curr_tid); }
#line 1883 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 127 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_backtrace((yyvsp[0].integer)); }
#line 1889 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 128 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_backtrace(-1); }
#line 1895 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame + 1);  }
#line 1901 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 130 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame + (yyvsp[0].integer)); }
#line 1907 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 131 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame - 1);  }
#line 1913 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 132 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_set_frame(dbg_curr_thread->curr_frame - (yyvsp[0].integer)); }
#line 1919 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_set_frame((yyvsp[0].integer)); }
#line 1925 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_show_path(); }
#line 1931 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 135 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_add_path((yyvsp[0].string)); }
#line 1937 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_nuke_path(dbg_curr_process); }
#line 1943 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_condition((yyvsp[0].integer), NULL); }
#line 1949 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 138 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_condition((yyvsp[-1].integer), (yyvsp[0].expression)); }
#line 1955 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 139 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { parser((yyvsp[0].string)); }
#line 1961 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_read_symtable((yyvsp[0].string), 0); }
#line 1967 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 141 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_read_symtable((yyvsp[-1].string), (yyvsp[0].integer)); }
#line 1973 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_printf("type = "); types_print_type(&(yyvsp[0].lvalue).type, FALSE, NULL); dbg_printf("\n"); }
#line 1979 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_attach_debuggee((yyvsp[0].integer)); dbg_active_wait_for_first_exception(); }
#line 1985 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->process_io->close_process(dbg_curr_process, FALSE); }
#line 1991 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 145 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_set_curr_thread((yyvsp[0].integer)); }
#line 1997 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->process_io->close_process(dbg_curr_process, TRUE); }
#line 2003 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { minidump_write((yyvsp[0].string), (dbg_curr_thread && dbg_curr_thread->in_exception) ? &dbg_curr_thread->excpt_record : NULL);}
#line 2009 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 148 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_printf("%s\n", (yyvsp[0].string)); }
#line 2015 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 164 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2021 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2027 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2033 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 170 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2039 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 174 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.listing).FileName = NULL; (yyval.listing).LineNumber = (yyvsp[0].integer); }
#line 2045 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 175 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.listing).FileName = (yyvsp[-2].string); (yyval.listing).LineNumber = (yyvsp[0].integer); }
#line 2051 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 176 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_get_line(NULL, (yyvsp[0].string), &(yyval.listing)); }
#line 2057 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 177 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_get_line((yyvsp[-2].string), (yyvsp[0].string), &(yyval.listing)); }
#line 2063 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 178 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { DWORD disp; ADDRESS64 addr; (yyval.listing).SizeOfStruct = sizeof((yyval.listing));
                                  types_extract_as_address(&(yyvsp[0].lvalue), &addr);
                                  SymGetLineFromAddr64(dbg_curr_process->handle, (ULONG_PTR)memory_to_linear_addr(& addr), &disp, & (yyval.listing)); }
#line 2071 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 184 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_run_debuggee((yyvsp[0].strings)); }
#line 2077 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 188 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.strings) = NULL; }
#line 2083 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 189 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.strings) = (struct list_string*)lexeme_alloc_size(sizeof(*(yyval.strings))); (yyval.strings)->next = (yyvsp[0].strings); (yyval.strings)->string = (yyvsp[-1].string); }
#line 2089 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 193 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_list(NULL, NULL, 10); }
#line 2095 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 194 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_list(NULL,  NULL, -10); }
#line 2101 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 195 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_list(& (yyvsp[0].listing), NULL, 10); }
#line 2107 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_list(NULL, & (yyvsp[0].listing), -10); }
#line 2113 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 197 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { source_list(& (yyvsp[-2].listing), & (yyvsp[0].listing), 0); }
#line 2119 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 201 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { memory_disassemble(NULL, NULL, 10); }
#line 2125 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 202 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { memory_disassemble(&(yyvsp[0].lvalue), NULL, 10); }
#line 2131 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 203 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { memory_disassemble(&(yyvsp[-2].lvalue), &(yyvsp[0].lvalue), 0); }
#line 2137 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 207 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { types_store_value(&(yyvsp[-2].lvalue), &(yyvsp[0].lvalue)); }
#line 2143 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 208 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, NULL, (yyvsp[0].string)); }
#line 2149 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 209 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, NULL, "all"); }
#line 2155 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 210 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, NULL, (yyvsp[0].string)); }
#line 2161 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 211 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, NULL, "all"); }
#line 2167 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 212 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2173 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 213 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(TRUE, (yyvsp[-2].string), "all"); }
#line 2179 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 214 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, (yyvsp[-2].string), (yyvsp[0].string)); }
#line 2185 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 215 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_wine_dbg_channel(FALSE, (yyvsp[-2].string), "all"); }
#line 2191 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 216 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_set_option((yyvsp[-1].string), (yyvsp[0].string)); }
#line 2197 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 217 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_set_option((yyvsp[0].string), NULL); }
#line 2203 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 221 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { memory_examine(&(yyvsp[0].lvalue), 1, 'x'); }
#line 2209 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 222 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { memory_examine(&(yyvsp[0].lvalue), (yyvsp[-1].integer) >> 8, (yyvsp[-1].integer) & 0xff); }
#line 2215 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 226 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { print_value(&(yyvsp[0].lvalue), 0, 0); }
#line 2221 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 227 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (((yyvsp[-1].integer) >> 8) == 1) print_value(&(yyvsp[0].lvalue), (yyvsp[-1].integer) & 0xff, 0); else dbg_printf("Count is meaningless in print command\n"); }
#line 2227 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 228 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { types_print_type(&(yyvsp[0].type), TRUE, NULL); dbg_printf("\n"); }
#line 2233 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 232 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lvalue(&(yyvsp[0].lvalue), TRUE); }
#line 2239 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 233 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_id((yyvsp[0].string), -1, TRUE); }
#line 2245 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 234 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno((yyvsp[-2].string), (yyvsp[0].integer), TRUE); }
#line 2251 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 235 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, (yyvsp[0].integer), TRUE); }
#line 2257 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 236 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, -1, TRUE); }
#line 2263 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 237 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lvalue(&(yyvsp[0].lvalue), FALSE); }
#line 2269 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 238 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_id((yyvsp[0].string), -1, FALSE); }
#line 2275 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 239 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno((yyvsp[-2].string), (yyvsp[0].integer), FALSE); }
#line 2281 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 240 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, (yyvsp[0].integer), FALSE); }
#line 2287 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 241 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_break_from_lineno(NULL, -1, FALSE); }
#line 2293 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 242 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), TRUE); }
#line 2299 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 243 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), TRUE); }
#line 2305 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 244 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), FALSE); }
#line 2311 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 245 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_enable_xpoint((yyvsp[0].integer), FALSE); }
#line 2317 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 246 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_delete_xpoint((yyvsp[0].integer)); }
#line 2323 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 247 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_delete_xpoint((yyvsp[0].integer)); }
#line 2329 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 251 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_lvalue(&(yyvsp[0].lvalue), TRUE); }
#line 2335 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 252 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_id((yyvsp[0].string), TRUE); }
#line 2341 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 253 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_lvalue(&(yyvsp[0].lvalue), FALSE); }
#line 2347 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 254 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_add_watch_from_id((yyvsp[0].string), FALSE); }
#line 2353 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 259 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_print(); }
#line 2359 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 260 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_add((yyvsp[0].expression), 1, 0); }
#line 2365 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 261 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_add((yyvsp[0].expression), (yyvsp[-1].integer) >> 8, (yyvsp[-1].integer) & 0xff); }
#line 2371 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 262 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_enable((yyvsp[0].integer), TRUE); }
#line 2377 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 263 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_enable((yyvsp[0].integer), FALSE); }
#line 2383 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 264 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_delete((yyvsp[0].integer)); }
#line 2389 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 265 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_delete(-1); }
#line 2395 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 266 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_delete((yyvsp[0].integer)); }
#line 2401 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 267 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_delete(-1); }
#line 2407 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 271 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { break_info(); }
#line 2413 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 272 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_module(0); }
#line 2419 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 273 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_module((yyvsp[0].integer)); }
#line 2425 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 274 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->be_cpu->print_context(dbg_curr_thread->handle, &dbg_context, 0); }
#line 2431 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 275 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_curr_process->be_cpu->print_context(dbg_curr_thread->handle, &dbg_context, 1); }
#line 2437 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 276 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_segments((yyvsp[0].integer) >> 3, 1); }
#line 2443 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 277 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_segments(0, -1); }
#line 2449 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 278 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_info((yyvsp[0].integer)); }
#line 2455 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 279 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_info(-1); }
#line 2461 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 280 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_info((yyvsp[0].string)); }
#line 2467 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 281 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { symbol_info_locals(); }
#line 2473 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 282 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { display_info(); }
#line 2479 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 283 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_class(NULL, NULL); }
#line 2485 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 284 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_class(NULL, (yyvsp[0].string)); }
#line 2491 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 285 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_window(NULL, FALSE); }
#line 2497 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 286 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_window((HWND)(DWORD_PTR)(yyvsp[0].integer), FALSE); }
#line 2503 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 287 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_window(NULL, TRUE); }
#line 2509 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 288 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_window((HWND)(DWORD_PTR)(yyvsp[0].integer), TRUE); }
#line 2515 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 289 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_processes(); }
#line 2521 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 290 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_threads(); }
#line 2527 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 291 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_frame_exceptions(dbg_curr_tid); }
#line 2533 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 292 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_frame_exceptions((yyvsp[0].integer)); }
#line 2539 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 293 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_virtual(dbg_curr_pid); }
#line 2545 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 294 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_virtual((yyvsp[0].integer)); }
#line 2551 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 295 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { info_win32_exception(); }
#line 2557 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 299 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { print_types(); }
#line 2563 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 300 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { tgt_module_load((yyvsp[0].string), FALSE); }
#line 2569 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 301 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { tgt_module_load((yyvsp[0].string), TRUE); }
#line 2575 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 305 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    {}
#line 2581 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 306 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { stack_backtrace(-1); }
#line 2587 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 307 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { dbg_printf("No process loaded, cannot execute '%s'\n", (yyvsp[0].string)); }
#line 2593 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 311 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"void",                   (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2599 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 312 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"char",                   (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2605 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 313 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"WCHAR",                  (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2611 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 314 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"signed char",            (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2617 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 315 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned char",          (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2623 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 316 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2629 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 317 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2635 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 318 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2641 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 319 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2647 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 320 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2653 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 321 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"short int",              (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2659 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 322 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned short int",     (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2665 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 323 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned short int",     (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2671 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 324 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned short int",     (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2677 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 325 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned short int",     (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2683 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 326 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"int",                    (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2689 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 327 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"int",                    (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2695 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 328 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned int",           (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2701 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 329 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned int",           (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2707 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 330 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2713 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 331 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2719 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 332 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2725 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 333 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2731 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 334 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2737 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 335 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long int",               (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2743 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 336 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long int",      (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2749 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 337 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long int",      (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2755 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 338 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long int",      (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2761 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 339 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long int",      (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2767 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 340 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long long int",          (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2773 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 341 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long long int",          (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2779 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 342 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long long int",          (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2785 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 343 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long long int",          (yyvsp[-3].string), &(yyval.type))) YYERROR; }
#line 2791 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 344 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long long int", (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2797 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 345 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long long int", (yyvsp[-3].string), &(yyval.type))) YYERROR; }
#line 2803 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 346 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long long int", (yyvsp[-2].string), &(yyval.type))) YYERROR; }
#line 2809 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 347 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"unsigned long long int", (yyvsp[-3].string), &(yyval.type))) YYERROR; }
#line 2815 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 348 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"float",                  (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2821 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 349 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"double",                 (yyvsp[0].string), &(yyval.type))) YYERROR; }
#line 2827 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 350 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_basic(L"long double",            (yyvsp[-1].string), &(yyval.type))) YYERROR; }
#line 2833 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 351 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 2839 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 352 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_pointer(&(yyvsp[-1].type), &(yyval.type))) {yyerror("Cannot find pointer type\n"); YYERROR; } }
#line 2845 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 353 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_type((yyvsp[0].string), SymTagUDT, &(yyval.type))) {yyerror("Unknown type\n"); YYERROR; } }
#line 2851 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 354 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_type((yyvsp[0].string), SymTagUDT, &(yyval.type))) {yyerror("Unknown type\n"); YYERROR; } }
#line 2857 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 355 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_type((yyvsp[0].string), SymTagUDT, &(yyval.type))) {yyerror("Unknown type\n"); YYERROR; } }
#line 2863 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 356 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { if (!types_find_type((yyvsp[0].string), SymTagEnum, &(yyval.type))) {yyerror("Unknown type\n"); YYERROR; } }
#line 2869 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 360 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.lvalue) = expr_eval((yyvsp[0].expression)); }
#line 2875 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 364 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.integer) = types_extract_as_integer(&(yyvsp[0].lvalue)); }
#line 2881 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 374 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_sconstant((yyvsp[0].integer)); }
#line 2887 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 375 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_string((yyvsp[0].string)); }
#line 2893 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 376 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_internal_var((yyvsp[0].string)); }
#line 2899 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 377 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_symbol((yyvsp[0].string)); }
#line 2905 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 378 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_pstruct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 2911 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 379 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_struct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 2917 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 380 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-2].string), 0); }
#line 2923 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 381 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-3].string), 1, (yyvsp[-1].expression)); }
#line 2929 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 382 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-5].string), 2, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2935 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 383 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-7].string), 3, (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2941 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 384 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-9].string), 4, (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2947 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 385 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_func_call((yyvsp[-11].string), 5, (yyvsp[-9].expression), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2953 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 386 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ARR, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 2959 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 387 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SEG, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2965 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 388 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LOR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2971 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 389 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LAND, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2977 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 390 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2983 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 391 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2989 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 392 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2995 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 393 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_EQ, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3001 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 394 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_GT, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3007 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 395 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LT, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3013 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 396 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_GE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3019 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 397 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_LE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3025 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 398 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_NE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3031 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 399 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SHL, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3037 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 400 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SHR, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3043 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 401 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ADD, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3049 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 402 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_SUB, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3055 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 403 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_MUL, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3061 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 404 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3067 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 405 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_REM, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 3073 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 406 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_NEG, (yyvsp[0].expression)); }
#line 3079 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 407 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 3085 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 408 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_NOT, (yyvsp[0].expression)); }
#line 3091 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 409 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_LNOT, (yyvsp[0].expression)); }
#line 3097 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 410 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 3103 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 411 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_DEREF, (yyvsp[0].expression)); }
#line 3109 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 412 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_ADDR, (yyvsp[0].expression)); }
#line 3115 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 413 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_typecast(&(yyvsp[-2].type), (yyvsp[0].expression)); }
#line 3121 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 421 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.lvalue) = expr_eval((yyvsp[0].expression)); }
#line 3127 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 425 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_sconstant((yyvsp[0].integer)); }
#line 3133 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 426 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_internal_var((yyvsp[0].string)); }
#line 3139 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 427 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_symbol((yyvsp[0].string)); }
#line 3145 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 428 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_pstruct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 3151 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 429 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_struct((yyvsp[-2].expression), (yyvsp[0].string)); }
#line 3157 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 430 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_binary_op(EXP_OP_ARR, (yyvsp[-3].expression), (yyvsp[-1].expression)); }
#line 3163 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 431 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1646  */
    { (yyval.expression) = expr_alloc_unary_op(EXP_OP_DEREF, (yyvsp[0].expression)); }
#line 3169 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
    break;


#line 3173 "programs/winedbg/dbg.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 434 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1906  */


static LONG WINAPI wine_dbg_cmd(EXCEPTION_POINTERS *eptr)
{
    switch (eptr->ExceptionRecord->ExceptionCode)
    {
    case DEBUG_STATUS_INTERNAL_ERROR:
        dbg_printf("\nWineDbg internal error\n");
        break;
    case DEBUG_STATUS_NO_SYMBOL:
        dbg_printf("\nUndefined symbol\n");
        break;
    case DEBUG_STATUS_DIV_BY_ZERO:
        dbg_printf("\nDivision by zero\n");
        break;
    case DEBUG_STATUS_BAD_TYPE:
        dbg_printf("\nNo type or type mismatch\n");
        break;
    case DEBUG_STATUS_NO_FIELD:
        dbg_printf("\nNo such field in structure or union\n");
        break;
    case DEBUG_STATUS_CANT_DEREF:
        dbg_printf("\nDereference failed (not a pointer, or out of array bounds)\n");
        break;
    case DEBUG_STATUS_ABORT:
        break;
    case DEBUG_STATUS_NOT_AN_INTEGER:
        dbg_printf("\nNeeding an integral value\n");
        break;
    case CONTROL_C_EXIT:
        /* this is generally sent by a ctrl-c when we run winedbg outside of wineconsole */
        /* stop the debuggee, and continue debugger execution, we will be reentered by the
         * debug events generated by stopping
         */
        dbg_interrupt_debuggee();
        return EXCEPTION_CONTINUE_EXECUTION;
    default:
        dbg_printf("\nException %lx\n", eptr->ExceptionRecord->ExceptionCode);
        break;
    }

    return EXCEPTION_EXECUTE_HANDLER;
}

struct parser_context
{
    const char* filename;
    HANDLE input;
    HANDLE output;
    unsigned line_no;
    char*  last_line;
    size_t last_line_idx;
};

static struct parser_context dbg_parser = {NULL, INVALID_HANDLE_VALUE, INVALID_HANDLE_VALUE, 0, NULL, 0};

static int input_fetch_entire_line(const char* pfx, char** line)
{
    char*       buffer;
    char        ch;
    DWORD	nread;
    size_t      len, alloc;

    /* as of today, console handles can be file handles... so better use file APIs rather than
     * console's
     */
    WriteFile(dbg_parser.output, pfx, strlen(pfx), &nread, NULL);

    buffer = malloc(alloc = 16);
    assert(buffer != NULL);

    dbg_parser.line_no++;
    len = 0;
    do
    {
        if (!ReadFile(dbg_parser.input, &ch, 1, &nread, NULL) || nread == 0)
        {
            free(buffer);
            return -1;
        }

        if (len + 2 > alloc)
        {
            char* new;
            while (len + 2 > alloc) alloc *= 2;
            if (!(new = realloc(buffer, alloc)))
            {
                free(buffer);
                return -1;
            }
            buffer = new;
        }
        buffer[len++] = ch;
    }
    while (ch != '\n');
    buffer[len] = '\0';

    *line = buffer;
    return len;
}

size_t input_lex_read_buffer(char* buf, int size)
{
    int len;

    /* try first to fetch the remaining of an existing line */
    if (dbg_parser.last_line_idx == 0)
    {
        char* tmp = NULL;
        /* no remaining chars to be read from last line, grab a brand new line up to '\n' */
        lexeme_flush();
        len = input_fetch_entire_line("Wine-dbg>", &tmp);
        if (len < 0) return 0;  /* eof */

        /* remove carriage return in newline */
        if (len >= 2 && tmp[len - 2] == '\r')
        {
            tmp[len - 2] = '\n';
            tmp[len - 1] = '\0';
            len--;
        }

        /* recall last command when empty input buffer and not parsing a file */
        if (dbg_parser.last_line && (len == 0 || (len == 1 && tmp[0] == '\n')) &&
            dbg_parser.output != INVALID_HANDLE_VALUE)
        {
            free(tmp);
        }
        else
        {
            free(dbg_parser.last_line);
            dbg_parser.last_line = tmp;
        }
    }

    len = min(strlen(dbg_parser.last_line + dbg_parser.last_line_idx), size - 1);
    memcpy(buf, dbg_parser.last_line + dbg_parser.last_line_idx, len);
    buf[len] = '\0';
    if ((dbg_parser.last_line_idx += len) >= strlen(dbg_parser.last_line))
        dbg_parser.last_line_idx = 0;
    return len;
}

int input_read_line(const char* pfx, char* buf, int size)
{
    char*       line = NULL;

    int len = input_fetch_entire_line(pfx, &line);
    if (len < 0) return 0;
    /* remove trailing \n and \r */
    while (len > 0 && (line[len - 1] == '\n' || line[len - 1] == '\r')) len--;
    len = min(size - 1, len);
    memcpy(buf, line, len);
    buf[len] = '\0';
    free(line);
    return 1;
}

/***********************************************************************
 *           parser_handle
 *
 * Debugger command line parser
 */
void	parser_handle(const char* filename, HANDLE input)
{
    BOOL ret_ok;
    struct parser_context prev = dbg_parser;

    ret_ok = FALSE;

    if (input != INVALID_HANDLE_VALUE)
    {
        dbg_parser.output = INVALID_HANDLE_VALUE;
        dbg_parser.input  = input;
    }
    else
    {
        dbg_parser.output = GetStdHandle(STD_OUTPUT_HANDLE);
        dbg_parser.input  = GetStdHandle(STD_INPUT_HANDLE);
    }
    dbg_parser.line_no = 0;
    dbg_parser.filename = filename;
    dbg_parser.last_line = NULL;
    dbg_parser.last_line_idx = 0;
    do
    {
       __TRY
       {
	  ret_ok = TRUE;
	  dbg_parse();
       }
       __EXCEPT(wine_dbg_cmd)
       {
	  ret_ok = FALSE;
       }
       __ENDTRY;
       lexeme_flush();
    } while (!ret_ok);

    dbg_parser = prev;
}

static void parser(const char* filename)
{
    HANDLE h = CreateFileA(filename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0L, 0);
    if (h != INVALID_HANDLE_VALUE)
    {
        parser_handle(filename, h);
        CloseHandle(h);
    }
}

static int dbg_error(const char* s)
{
    if (dbg_parser.filename)
        dbg_printf("%s:%d:", dbg_parser.filename, dbg_parser.line_no);
    dbg_printf("%s\n", s);
    return 0;
}

HANDLE WINAPIV parser_generate_command_file(const char* pmt, ...)
{
    HANDLE      hFile;
    char        path[MAX_PATH], file[MAX_PATH];
    DWORD       w;
    const char* p;

    GetTempPathA(sizeof(path), path);
    GetTempFileNameA(path, "WD", 0, file);
    hFile = CreateFileA(file, GENERIC_READ|GENERIC_WRITE|DELETE, FILE_SHARE_DELETE, 
                        NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_DELETE_ON_CLOSE, 0);
    if (hFile != INVALID_HANDLE_VALUE)
    {
        va_list ap;

        WriteFile(hFile, pmt, strlen(pmt), &w, 0);
        va_start(ap, pmt);
        while ((p = va_arg(ap, const char*)) != NULL)
        {
            WriteFile(hFile, "\n", 1, &w, 0);
            WriteFile(hFile, p, strlen(p), &w, 0);
        }
        va_end(ap);
        WriteFile(hFile, "\nquit\n", 6, &w, 0);
        SetFilePointer(hFile, 0, NULL, FILE_BEGIN);
    }
    return hFile;
}
