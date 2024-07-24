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
#define YYSTYPE         PPY_STYPE
/* Substitute the variable and function names.  */
#define yyparse         ppy_parse
#define yylex           ppy_lex
#define yyerror         ppy_error
#define yydebug         ppy_debug
#define yynerrs         ppy_nerrs

#define yylval          ppy_lval
#define yychar          ppy_char

/* Copy the first part of user declarations.  */
#line 22 "../wine-source/tools/wrc/ppy.y" /* yacc.c:339  */

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>

#include "../tools.h"
#include "utils.h"
#include "wpp_private.h"


#define UNARY_OP(r, v, OP)					\
	switch(v.type)						\
	{							\
	case cv_sint:	r.val.si  = OP v.val.si; break;		\
	case cv_uint:	r.val.ui  = OP v.val.ui; break;		\
	case cv_slong:	r.val.sl  = OP v.val.sl; break;		\
	case cv_ulong:	r.val.ul  = OP v.val.ul; break;		\
	case cv_sll:	r.val.sll = OP v.val.sll; break;	\
	case cv_ull:	r.val.ull = OP v.val.ull; break;	\
	}

#define cv_signed(v)	((v.type & FLAG_SIGNED) != 0)

#define BIN_OP_INT(r, v1, v2, OP)			\
	r.type = v1.type;				\
	if(cv_signed(v1) && cv_signed(v2))		\
		r.val.si = v1.val.si OP v2.val.si;	\
	else if(cv_signed(v1) && !cv_signed(v2))	\
		r.val.si = v1.val.si OP (signed) v2.val.ui; \
	else if(!cv_signed(v1) && cv_signed(v2))	\
		r.val.si = (signed) v1.val.ui OP v2.val.si; \
	else						\
		r.val.ui = v1.val.ui OP v2.val.ui;

#define BIN_OP_LONG(r, v1, v2, OP)			\
	r.type = v1.type;				\
	if(cv_signed(v1) && cv_signed(v2))		\
		r.val.sl = v1.val.sl OP v2.val.sl;	\
	else if(cv_signed(v1) && !cv_signed(v2))	\
		r.val.sl = v1.val.sl OP (signed long) v2.val.ul; \
	else if(!cv_signed(v1) && cv_signed(v2))	\
		r.val.sl = (signed long) v1.val.ul OP v2.val.sl; \
	else						\
		r.val.ul = v1.val.ul OP v2.val.ul;

#define BIN_OP_LONGLONG(r, v1, v2, OP)			\
	r.type = v1.type;				\
	if(cv_signed(v1) && cv_signed(v2))		\
		r.val.sll = v1.val.sll OP v2.val.sll;	\
	else if(cv_signed(v1) && !cv_signed(v2))	\
		r.val.sll = v1.val.sll OP (__int64) v2.val.ull; \
	else if(!cv_signed(v1) && cv_signed(v2))	\
		r.val.sll = (__int64) v1.val.ull OP v2.val.sll; \
	else						\
		r.val.ull = v1.val.ull OP v2.val.ull;

#define BIN_OP(r, v1, v2, OP)						\
	switch(v1.type & SIZE_MASK)					\
	{								\
	case SIZE_INT:		BIN_OP_INT(r, v1, v2, OP); break;	\
	case SIZE_LONG:		BIN_OP_LONG(r, v1, v2, OP); break;	\
	case SIZE_LONGLONG:	BIN_OP_LONGLONG(r, v1, v2, OP); break;	\
	default: assert(0);                                             \
	}


/*
 * Prototypes
 */
static int boolean(cval_t *v);
static void promote_equal_size(cval_t *v1, cval_t *v2);
static void cast_to_sint(cval_t *v);
static void cast_to_uint(cval_t *v);
static void cast_to_slong(cval_t *v);
static void cast_to_ulong(cval_t *v);
static void cast_to_sll(cval_t *v);
static void cast_to_ull(cval_t *v);
static char *add_new_marg(char *str);
static int marg_index(char *id);
static mtext_t *new_mtext(char *str, int idx, def_exp_t type);
static mtext_t *combine_mtext(mtext_t *tail, mtext_t *mtp);
static char *merge_text(char *s1, char *s2);

/*
 * Local variables
 */
static char   **macro_args;	/* Macro parameters array while parsing */
static int	nmacro_args;
static int	macro_variadic; /* Macro arguments end with (or consist entirely of) '...' */


#line 172 "tools/widl/ppy.tab.c" /* yacc.c:339  */

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
#ifndef PPY_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PPY_DEBUG 1
#  else
#   define PPY_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PPY_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PPY_DEBUG */
#if PPY_DEBUG
extern int ppy_debug;
#endif

/* Token type.  */
#ifndef PPY_TOKENTYPE
# define PPY_TOKENTYPE
  enum ppy_tokentype
  {
    tRCINCLUDE = 258,
    tIF = 259,
    tIFDEF = 260,
    tIFNDEF = 261,
    tELSE = 262,
    tELIF = 263,
    tENDIF = 264,
    tDEFINED = 265,
    tNL = 266,
    tINCLUDE = 267,
    tLINE = 268,
    tGCCLINE = 269,
    tERROR = 270,
    tWARNING = 271,
    tPRAGMA = 272,
    tPPIDENT = 273,
    tUNDEF = 274,
    tMACROEND = 275,
    tCONCAT = 276,
    tELLIPSIS = 277,
    tSTRINGIZE = 278,
    tIDENT = 279,
    tLITERAL = 280,
    tMACRO = 281,
    tDEFINE = 282,
    tDQSTRING = 283,
    tSQSTRING = 284,
    tIQSTRING = 285,
    tUINT = 286,
    tSINT = 287,
    tULONG = 288,
    tSLONG = 289,
    tULONGLONG = 290,
    tSLONGLONG = 291,
    tRCINCLUDEPATH = 292,
    tLOGOR = 293,
    tLOGAND = 294,
    tEQ = 295,
    tNE = 296,
    tLTE = 297,
    tGTE = 298,
    tLSHIFT = 299,
    tRSHIFT = 300
  };
#endif

/* Value type.  */
#if ! defined PPY_STYPE && ! defined PPY_STYPE_IS_DECLARED

union PPY_STYPE
{
#line 121 "../wine-source/tools/wrc/ppy.y" /* yacc.c:355  */

	int		sint;
	unsigned int	uint;
	long		slong;
	unsigned long	ulong;
	__int64		sll;
	unsigned __int64 ull;
	int		*iptr;
	char		*cptr;
	cval_t		cval;
	char		*marg;
	mtext_t		*mtext;

#line 277 "tools/widl/ppy.tab.c" /* yacc.c:355  */
};

typedef union PPY_STYPE PPY_STYPE;
# define PPY_STYPE_IS_TRIVIAL 1
# define PPY_STYPE_IS_DECLARED 1
#endif


extern PPY_STYPE ppy_lval;

int ppy_parse (void);



/* Copy the second part of user declarations.  */

#line 294 "tools/widl/ppy.tab.c" /* yacc.c:358  */

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
         || (defined PPY_STYPE_IS_TRIVIAL && PPY_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,     2,    44,     2,
      60,    61,    55,    53,    59,    54,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,     2,
      47,     2,    49,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,    57,     2,     2,     2,
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
      35,    36,    37,    40,    41,    45,    46,    48,    50,    51,
      52
};

#if PPY_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   176,   176,   177,   181,   182,   183,   184,   185,   205,
     227,   251,   268,   269,   270,   273,   274,   275,   277,   279,
     281,   283,   284,   285,   286,   287,   288,   291,   297,   298,
     301,   302,   303,   304,   305,   306,   309,   312,   313,   316,
     317,   318,   321,   322,   326,   327,   333,   334,   337,   338,
     339,   340,   341,   348,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388
};
#endif

#if PPY_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tRCINCLUDE", "tIF", "tIFDEF", "tIFNDEF",
  "tELSE", "tELIF", "tENDIF", "tDEFINED", "tNL", "tINCLUDE", "tLINE",
  "tGCCLINE", "tERROR", "tWARNING", "tPRAGMA", "tPPIDENT", "tUNDEF",
  "tMACROEND", "tCONCAT", "tELLIPSIS", "tSTRINGIZE", "tIDENT", "tLITERAL",
  "tMACRO", "tDEFINE", "tDQSTRING", "tSQSTRING", "tIQSTRING", "tUINT",
  "tSINT", "tULONG", "tSLONG", "tULONGLONG", "tSLONGLONG",
  "tRCINCLUDEPATH", "'?'", "':'", "tLOGOR", "tLOGAND", "'|'", "'^'", "'&'",
  "tEQ", "tNE", "'<'", "tLTE", "'>'", "tGTE", "tLSHIFT", "tRSHIFT", "'+'",
  "'-'", "'*'", "'/'", "'~'", "'!'", "','", "'('", "')'", "$accept",
  "pp_file", "preprocessor", "opt_text", "text", "res_arg", "allmargs",
  "emargs", "margs", "opt_mtexts", "mtexts", "mtext", "pp_expr", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    63,    58,
     293,   294,   124,    94,    38,   295,   296,    60,   297,    62,
     298,   299,   300,    43,    45,    42,    47,   126,    33,    44,
      40,    41
};
# endif

#define YYPACT_NINF -27

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-27)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,   124,   -27,   -26,    -3,   -12,    -2,    30,    -3,    41,
      73,    21,     2,   -19,   -19,   -19,   -19,    32,   -27,   -19,
     -27,   -27,   -27,   -23,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,    -3,    -3,    -3,    -3,    -3,    38,    94,   115,   -27,
      66,   -27,   123,   137,    74,   -27,    97,   -27,   -27,   -27,
     142,    -9,   185,   283,   284,   285,   149,   286,   -27,   111,
     -10,   -10,   -27,   -27,   114,   -27,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,    -3,    -3,   -27,   -27,   -27,   -27,   -27,   287,
       3,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   129,   -27,   240,   -27,   239,   -27,   138,   173,   188,
     202,   215,   227,   237,   237,    44,    44,    44,    44,    91,
      91,   -10,   -10,   -27,   -27,   -27,   -27,     4,    19,   150,
     -27,    -3,   -27,     6,   -27,   277,   -27,   -27,   -27,   -27,
     291,    19,   -27,   -27,   -27,   157,   -27,     7,   -27,   -27,
     -27,   -27,   292,   -27
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    28,    28,    28,     0,    36,    28,
       3,    27,    26,     0,    62,    55,    54,    57,    56,    59,
      58,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,    11,     0,     0,     0,    21,     0,    30,    31,    32,
       0,    29,     0,     0,     0,     0,    37,     0,    60,     0,
      80,    81,    82,    83,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,     4,     5,     0,
       0,    22,    33,    34,    35,    23,    24,    25,    12,    41,
      43,     0,    38,    39,    13,     0,    84,     0,    63,    64,
      75,    73,    74,    65,    66,    67,    69,    68,    70,    78,
      79,    71,    72,    76,    77,    15,    16,     0,    44,     0,
      61,     0,    17,     0,    51,     0,    53,    48,    49,    50,
       0,    45,    46,    40,    42,    85,    18,     0,    52,    14,
      47,    19,     0,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   -27,   -11,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   163,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    20,    50,    51,    56,   101,   102,   103,   140,
     141,   142,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,    58,    21,    52,    53,    54,    47,    23,    57,    48,
      49,    22,    37,    45,   126,   132,    92,   146,   151,    93,
      94,    24,    38,    60,    61,    62,    63,    64,    25,    26,
      27,    28,    29,    30,    46,   127,   133,    59,   147,   152,
     134,    39,   135,   136,   137,    82,    83,   138,   139,    65,
      31,    32,    41,    44,    33,    34,    55,    35,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    66,    86,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    78,    79,    80,    81,    82,
      83,    42,    89,    43,    66,    84,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   145,     2,    90,    85,     3,     4,     5,
       6,     7,     8,     9,    87,   105,    10,    11,    12,    13,
      14,    15,    16,    17,    80,    81,    82,    83,    88,   128,
      18,    19,    66,    91,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    99,   143,   100,   144,   106,    66,   131,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    66,    95,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    96,    97,    98,   104,   125,   129,
     130,   148,   149,   153,   150
};

static const yytype_uint8 yycheck[] =
{
       8,    24,    28,    14,    15,    16,    25,    10,    19,    28,
      29,    37,    24,    11,    11,    11,    25,    11,    11,    28,
      29,    24,    24,    31,    32,    33,    34,    35,    31,    32,
      33,    34,    35,    36,    32,    32,    32,    60,    32,    32,
      21,    11,    23,    24,    25,    55,    56,    28,    29,    11,
      53,    54,    11,    32,    57,    58,    24,    60,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    38,    11,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    51,    52,    53,    54,    55,
      56,    28,    28,    30,    38,    11,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   131,     0,    28,    11,     3,     4,     5,
       6,     7,     8,     9,    11,    24,    12,    13,    14,    15,
      16,    17,    18,    19,    53,    54,    55,    56,    11,    20,
      26,    27,    38,    11,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    22,    22,    24,    24,    61,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    38,    11,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    11,    11,    11,    11,    11,    59,
      61,    24,    11,    11,   141
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,     3,     4,     5,     6,     7,     8,     9,
      12,    13,    14,    15,    16,    17,    18,    19,    26,    27,
      64,    28,    37,    10,    24,    31,    32,    33,    34,    35,
      36,    53,    54,    57,    58,    60,    74,    24,    24,    11,
      74,    11,    28,    30,    32,    11,    32,    25,    28,    29,
      65,    66,    65,    65,    65,    24,    67,    65,    24,    60,
      74,    74,    74,    74,    74,    11,    38,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    11,    11,    11,    11,    11,    28,
      28,    11,    25,    28,    29,    11,    11,    11,    11,    22,
      24,    68,    69,    70,    11,    24,    61,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    11,    11,    32,    20,    59,
      61,    39,    11,    32,    21,    23,    24,    25,    28,    29,
      71,    72,    73,    22,    24,    74,    11,    32,    24,    11,
      73,    11,    32,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    67,    68,    68,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     6,     4,     4,     5,     6,     7,
       8,     2,     3,     3,     3,     3,     2,     2,     0,     1,
       1,     1,     1,     2,     2,     2,     0,     0,     1,     1,
       3,     1,     3,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     5
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
#if PPY_DEBUG

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
#else /* !PPY_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PPY_DEBUG */


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
#line 181 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_do_include((yyvsp[-1].cptr), 1); }
#line 1510 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 182 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_do_include((yyvsp[-1].cptr), 0); }
#line 1516 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 183 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_next_if_state(boolean(&(yyvsp[-1].cval))); }
#line 1522 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 184 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_next_if_state(pplookup((yyvsp[-1].cptr)) != NULL); free((yyvsp[-1].cptr)); }
#line 1528 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 185 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		int t = pplookup((yyvsp[-1].cptr)) == NULL;
		if(pp_incl_state.state == 0 && t && !pp_incl_state.seen_junk)
		{
			pp_incl_state.state	= 1;
			pp_incl_state.ppp	= (yyvsp[-1].cptr);
			pp_incl_state.ifdepth	= pp_get_if_depth();
		}
		else if(pp_incl_state.state != 1)
		{
			pp_incl_state.state = -1;
			free((yyvsp[-1].cptr));
		}
		else
			free((yyvsp[-1].cptr));
		pp_next_if_state(t);
		if(pp_status.debug)
			fprintf(stderr, "tIFNDEF: %s:%d: include_state=%d, include_ppp='%s', include_ifdepth=%d\n",
                                pp_status.input, pp_status.line_number, pp_incl_state.state, pp_incl_state.ppp, pp_incl_state.ifdepth);
		}
#line 1553 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 205 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		pp_if_state_t s = pp_pop_if();
		switch(s)
		{
		case if_true:
		case if_elif:
			pp_push_if(if_elif);
			break;
		case if_false:
			pp_push_if(boolean(&(yyvsp[-1].cval)) ? if_true : if_false);
			break;
		case if_ignore:
			pp_push_if(if_ignore);
			break;
		case if_elsetrue:
		case if_elsefalse:
			ppy_error("#elif cannot follow #else");
			break;
		case if_error:
			break;
		}
		}
#line 1580 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 227 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		pp_if_state_t s = pp_pop_if();
		switch(s)
		{
		case if_true:
			pp_push_if(if_elsefalse);
			break;
		case if_elif:
			pp_push_if(if_elif);
			break;
		case if_false:
			pp_push_if(if_elsetrue);
			break;
		case if_ignore:
			pp_push_if(if_ignore);
			break;
		case if_elsetrue:
		case if_elsefalse:
			ppy_error("#else clause already defined");
			break;
		case if_error:
			break;
		}
		}
#line 1609 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 251 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		if(pp_pop_if() != if_error)
		{
			if(pp_incl_state.ifdepth == pp_get_if_depth() && pp_incl_state.state == 1)
			{
				pp_incl_state.state = 2;
				pp_incl_state.seen_junk = 0;
			}
			else if(pp_incl_state.state != 1)
			{
				pp_incl_state.state = -1;
			}
			if(pp_status.debug)
				fprintf(stderr, "tENDIF: %s:%d: include_state=%d, include_ppp='%s', include_ifdepth=%d\n",
					pp_status.input, pp_status.line_number, pp_incl_state.state, pp_incl_state.ppp, pp_incl_state.ifdepth);
		}
		}
#line 1631 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 268 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_del_define((yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1637 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 269 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { pp_add_define((yyvsp[-2].cptr), (yyvsp[-1].cptr)); free((yyvsp[-2].cptr)); free((yyvsp[-1].cptr)); }
#line 1643 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 270 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		pp_add_macro((yyvsp[-5].cptr), macro_args, nmacro_args, macro_variadic, (yyvsp[-1].mtext));
		}
#line 1651 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 273 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-1].cptr)) fprintf(ppy_out, "# %d %s\n", (yyvsp[-2].sint) , (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1657 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 274 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-1].cptr)) fprintf(ppy_out, "# %d %s\n", (yyvsp[-2].sint) , (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1663 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 276 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-2].cptr)) fprintf(ppy_out, "# %d %s %d\n", (yyvsp[-3].sint), (yyvsp[-2].cptr), (yyvsp[-1].sint)); free((yyvsp[-2].cptr)); }
#line 1669 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 278 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-3].cptr)) fprintf(ppy_out, "# %d %s %d %d\n", (yyvsp[-4].sint) ,(yyvsp[-3].cptr), (yyvsp[-2].sint), (yyvsp[-1].sint)); free((yyvsp[-3].cptr)); }
#line 1675 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 280 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-4].cptr)) fprintf(ppy_out, "# %d %s %d %d %d\n", (yyvsp[-5].sint) ,(yyvsp[-4].cptr) ,(yyvsp[-3].sint) ,(yyvsp[-2].sint), (yyvsp[-1].sint)); free((yyvsp[-4].cptr)); }
#line 1681 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if((yyvsp[-5].cptr)) fprintf(ppy_out, "# %d %s %d %d %d %d\n", (yyvsp[-6].sint) ,(yyvsp[-5].cptr) ,(yyvsp[-4].sint) ,(yyvsp[-3].sint), (yyvsp[-2].sint), (yyvsp[-1].sint)); free((yyvsp[-5].cptr)); }
#line 1687 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 284 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { ppy_error("#error directive: '%s'", (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1693 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 285 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { ppy_warning("#warning directive: '%s'", (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1699 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 286 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { fprintf(ppy_out, "#pragma %s\n", (yyvsp[-1].cptr) ? (yyvsp[-1].cptr) : ""); free((yyvsp[-1].cptr)); }
#line 1705 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 287 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { if(pedantic) ppy_warning("#ident ignored (arg: '%s')", (yyvsp[-1].cptr)); free((yyvsp[-1].cptr)); }
#line 1711 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 288 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
                pp_do_include(strmake( "\"%s\"", (yyvsp[0].cptr) ),1);
	}
#line 1719 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 291 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		pp_do_include((yyvsp[0].cptr),1);
	}
#line 1727 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 297 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = NULL; }
#line 1733 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 298 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 1739 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 301 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 1745 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 302 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 1751 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 303 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = (yyvsp[0].cptr); }
#line 1757 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 304 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = merge_text((yyvsp[-1].cptr), (yyvsp[0].cptr)); }
#line 1763 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 305 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = merge_text((yyvsp[-1].cptr), (yyvsp[0].cptr)); }
#line 1769 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 306 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cptr) = merge_text((yyvsp[-1].cptr), (yyvsp[0].cptr)); }
#line 1775 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 309 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { macro_args = NULL; nmacro_args = 0; macro_variadic = 0; }
#line 1781 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 312 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.sint) = 0; macro_args = NULL; nmacro_args = 0; macro_variadic = 0; }
#line 1787 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 313 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.sint) = nmacro_args; }
#line 1793 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 316 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.marg) = (yyvsp[0].marg); }
#line 1799 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 317 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { macro_variadic = 1; }
#line 1805 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 318 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { macro_args = NULL; nmacro_args = 0; macro_variadic = 1; }
#line 1811 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 321 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.marg) = add_new_marg((yyvsp[0].cptr)); }
#line 1817 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 322 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.marg) = add_new_marg((yyvsp[0].cptr)); }
#line 1823 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 326 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = NULL; }
#line 1829 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 327 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		for((yyval.mtext) = (yyvsp[0].mtext); (yyval.mtext) && (yyval.mtext)->prev; (yyval.mtext) = (yyval.mtext)->prev)
			;
		}
#line 1838 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 333 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = (yyvsp[0].mtext); }
#line 1844 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 334 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = combine_mtext((yyvsp[-1].mtext), (yyvsp[0].mtext)); }
#line 1850 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 337 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = new_mtext((yyvsp[0].cptr), 0, exp_text); }
#line 1856 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 338 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = new_mtext((yyvsp[0].cptr), 0, exp_text); }
#line 1862 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 339 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = new_mtext((yyvsp[0].cptr), 0, exp_text); }
#line 1868 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 340 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.mtext) = new_mtext(NULL, 0, exp_concat); }
#line 1874 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 341 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		int mat = marg_index((yyvsp[0].cptr));
		if(mat < 0)
			ppy_error("Stringification identifier must be an argument parameter");
		else
			(yyval.mtext) = new_mtext(NULL, mat, exp_stringize);
		}
#line 1886 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 348 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    {
		int mat = marg_index((yyvsp[0].cptr));
		if(mat >= 0)
			(yyval.mtext) = new_mtext(NULL, mat, exp_subst);
		else if((yyvsp[0].cptr))
			(yyval.mtext) = new_mtext((yyvsp[0].cptr), 0, exp_text);
		}
#line 1898 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 357 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint;  (yyval.cval).val.si = (yyvsp[0].sint); }
#line 1904 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 358 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_uint;  (yyval.cval).val.ui = (yyvsp[0].uint); }
#line 1910 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 359 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_slong; (yyval.cval).val.sl = (yyvsp[0].slong); }
#line 1916 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 360 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_ulong; (yyval.cval).val.ul = (yyvsp[0].ulong); }
#line 1922 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 361 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sll;   (yyval.cval).val.sll = (yyvsp[0].sll); }
#line 1928 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 362 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_ull;   (yyval.cval).val.ull = (yyvsp[0].ull); }
#line 1934 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 363 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint;  (yyval.cval).val.si = pplookup((yyvsp[0].cptr)) != NULL; }
#line 1940 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 364 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint;  (yyval.cval).val.si = pplookup((yyvsp[-1].cptr)) != NULL; }
#line 1946 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 365 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint;  (yyval.cval).val.si = 0; }
#line 1952 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 366 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint; (yyval.cval).val.si = boolean(&(yyvsp[-2].cval)) || boolean(&(yyvsp[0].cval)); }
#line 1958 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 367 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint; (yyval.cval).val.si = boolean(&(yyvsp[-2].cval)) && boolean(&(yyvsp[0].cval)); }
#line 1964 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 368 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), ==); }
#line 1970 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 369 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), !=); }
#line 1976 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 370 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  <); }
#line 1982 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 371 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  >); }
#line 1988 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 372 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), <=); }
#line 1994 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 373 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), >=); }
#line 2000 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 374 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  +); }
#line 2006 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 375 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  -); }
#line 2012 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 376 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  ^); }
#line 2018 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 377 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  &); }
#line 2024 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 378 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  |); }
#line 2030 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 379 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  *); }
#line 2036 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 380 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval),  /); }
#line 2042 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 381 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), <<); }
#line 2048 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 382 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { promote_equal_size(&(yyvsp[-2].cval), &(yyvsp[0].cval)); BIN_OP((yyval.cval), (yyvsp[-2].cval), (yyvsp[0].cval), >>); }
#line 2054 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 383 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval) =  (yyvsp[0].cval); }
#line 2060 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 384 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { UNARY_OP((yyval.cval), (yyvsp[0].cval), -); }
#line 2066 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 385 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { UNARY_OP((yyval.cval), (yyvsp[0].cval), ~); }
#line 2072 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 386 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval).type = cv_sint; (yyval.cval).val.si = !boolean(&(yyvsp[0].cval)); }
#line 2078 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 387 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval) =  (yyvsp[-1].cval); }
#line 2084 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 388 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1646  */
    { (yyval.cval) = boolean(&(yyvsp[-4].cval)) ? (yyvsp[-2].cval) : (yyvsp[0].cval); }
#line 2090 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
    break;


#line 2094 "tools/widl/ppy.tab.c" /* yacc.c:1646  */
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
#line 391 "../wine-source/tools/wrc/ppy.y" /* yacc.c:1906  */


/*
 **************************************************************************
 * Support functions
 **************************************************************************
 */

static void cast_to_sint(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	break;
	case cv_uint:	break;
	case cv_slong:	v->val.si = v->val.sl;	break;
	case cv_ulong:	v->val.si = v->val.ul;	break;
	case cv_sll:	v->val.si = v->val.sll;	break;
	case cv_ull:	v->val.si = v->val.ull;	break;
	}
	v->type = cv_sint;
}

static void cast_to_uint(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	break;
	case cv_uint:	break;
	case cv_slong:	v->val.ui = v->val.sl;	break;
	case cv_ulong:	v->val.ui = v->val.ul;	break;
	case cv_sll:	v->val.ui = v->val.sll;	break;
	case cv_ull:	v->val.ui = v->val.ull;	break;
	}
	v->type = cv_uint;
}

static void cast_to_slong(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	v->val.sl = v->val.si;	break;
	case cv_uint:	v->val.sl = v->val.ui;	break;
	case cv_slong:	break;
	case cv_ulong:	break;
	case cv_sll:	v->val.sl = v->val.sll;	break;
	case cv_ull:	v->val.sl = v->val.ull;	break;
	}
	v->type = cv_slong;
}

static void cast_to_ulong(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	v->val.ul = v->val.si;	break;
	case cv_uint:	v->val.ul = v->val.ui;	break;
	case cv_slong:	break;
	case cv_ulong:	break;
	case cv_sll:	v->val.ul = v->val.sll;	break;
	case cv_ull:	v->val.ul = v->val.ull;	break;
	}
	v->type = cv_ulong;
}

static void cast_to_sll(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	v->val.sll = v->val.si;	break;
	case cv_uint:	v->val.sll = v->val.ui;	break;
	case cv_slong:	v->val.sll = v->val.sl;	break;
	case cv_ulong:	v->val.sll = v->val.ul;	break;
	case cv_sll:	break;
	case cv_ull:	break;
	}
	v->type = cv_sll;
}

static void cast_to_ull(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	v->val.ull = v->val.si;	break;
	case cv_uint:	v->val.ull = v->val.ui;	break;
	case cv_slong:	v->val.ull = v->val.sl;	break;
	case cv_ulong:	v->val.ull = v->val.ul;	break;
	case cv_sll:	break;
	case cv_ull:	break;
	}
	v->type = cv_ull;
}


static void promote_equal_size(cval_t *v1, cval_t *v2)
{
#define cv_sizeof(v)	((int)(v->type & SIZE_MASK))
	int s1 = cv_sizeof(v1);
	int s2 = cv_sizeof(v2);
#undef cv_sizeof

	if(s1 == s2)
		return;
	else if(s1 > s2)
	{
		switch(v1->type)
		{
		case cv_sint:	cast_to_sint(v2); break;
		case cv_uint:	cast_to_uint(v2); break;
		case cv_slong:	cast_to_slong(v2); break;
		case cv_ulong:	cast_to_ulong(v2); break;
		case cv_sll:	cast_to_sll(v2); break;
		case cv_ull:	cast_to_ull(v2); break;
		}
	}
	else
	{
		switch(v2->type)
		{
		case cv_sint:	cast_to_sint(v1); break;
		case cv_uint:	cast_to_uint(v1); break;
		case cv_slong:	cast_to_slong(v1); break;
		case cv_ulong:	cast_to_ulong(v1); break;
		case cv_sll:	cast_to_sll(v1); break;
		case cv_ull:	cast_to_ull(v1); break;
		}
	}
}


static int boolean(cval_t *v)
{
	switch(v->type)
	{
	case cv_sint:	return v->val.si != 0;
	case cv_uint:	return v->val.ui != 0;
	case cv_slong:	return v->val.sl != 0;
	case cv_ulong:	return v->val.ul != 0;
	case cv_sll:	return v->val.sll != 0;
	case cv_ull:	return v->val.ull != 0;
	}
	return 0;
}

static char *add_new_marg(char *str)
{
	char *ma;
	macro_args = xrealloc(macro_args, (nmacro_args+1) * sizeof(macro_args[0]));
	macro_args[nmacro_args++] = ma = xstrdup(str);
	return ma;
}

static int marg_index(char *id)
{
	int t;
	if(!id)
		return -1;
	for(t = 0; t < nmacro_args; t++)
	{
		if(!strcmp(id, macro_args[t]))
			break;
	}
	return t < nmacro_args ? t : -1;
}

static mtext_t *new_mtext(char *str, int idx, def_exp_t type)
{
	mtext_t *mt = xmalloc(sizeof(mtext_t));

	if(str == NULL)
		mt->subst.argidx = idx;
	else
		mt->subst.text = str;
	mt->type = type;
	mt->next = mt->prev = NULL;
	return mt;
}

static mtext_t *combine_mtext(mtext_t *tail, mtext_t *mtp)
{
	if(!tail)
		return mtp;

	if(!mtp)
		return tail;

	if(tail->type == exp_text && mtp->type == exp_text)
	{
		tail->subst.text = xrealloc(tail->subst.text, strlen(tail->subst.text)+strlen(mtp->subst.text)+1);
		strcat(tail->subst.text, mtp->subst.text);
		free(mtp->subst.text);
		free(mtp);
		return tail;
	}

	if(tail->type == exp_concat && mtp->type == exp_concat)
	{
		free(mtp);
		return tail;
	}

	if(tail->type == exp_concat && mtp->type == exp_text)
	{
		int len = strlen(mtp->subst.text);
		while(len)
		{
/* FIXME: should delete space from head of string */
			if(isspace(mtp->subst.text[len-1] & 0xff))
				mtp->subst.text[--len] = '\0';
			else
				break;
		}

		if(!len)
		{
			free(mtp->subst.text);
			free(mtp);
			return tail;
		}
	}

	if(tail->type == exp_text && mtp->type == exp_concat)
	{
		int len = strlen(tail->subst.text);
		while(len)
		{
			if(isspace(tail->subst.text[len-1] & 0xff))
				tail->subst.text[--len] = '\0';
			else
				break;
		}

		if(!len)
		{
			mtp->prev = tail->prev;
			mtp->next = tail->next;
			if(tail->prev)
				tail->prev->next = mtp;
			free(tail->subst.text);
			free(tail);
			return mtp;
		}
	}

	tail->next = mtp;
	mtp->prev = tail;

	return mtp;
}

static char *merge_text(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	s1 = xrealloc(s1, l1+l2+1);
	memcpy(s1+l1, s2, l2+1);
	free(s2);
	return s1;
}
