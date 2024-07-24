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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         PARSER_STYPE
#define YYLTYPE         PARSER_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         parser_parse
#define yylex           parser_lex
#define yyerror         parser_error
#define yydebug         parser_debug
#define yynerrs         parser_nerrs


/* Copy the first part of user declarations.  */
#line 19 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:339  */


#include "vbscript.h"
#include "parse.h"

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(vbscript);

static int parser_error(unsigned*,parser_ctx_t*,const char*);

static void handle_isexpression_script(parser_ctx_t *ctx, expression_t *expr);

static void source_add_statement(parser_ctx_t*,statement_t*);
static void source_add_class(parser_ctx_t*,class_decl_t*);

static void *new_expression(parser_ctx_t*,expression_type_t,size_t);
static expression_t *new_bool_expression(parser_ctx_t*,VARIANT_BOOL);
static expression_t *new_date_expression(parser_ctx_t*,DATE);
static expression_t *new_string_expression(parser_ctx_t*,const WCHAR*);
static expression_t *new_long_expression(parser_ctx_t*,expression_type_t,LONG);
static expression_t *new_double_expression(parser_ctx_t*,double);
static expression_t *new_unary_expression(parser_ctx_t*,expression_type_t,expression_t*);
static expression_t *new_binary_expression(parser_ctx_t*,expression_type_t,expression_t*,expression_t*);
static expression_t *new_new_expression(parser_ctx_t*,const WCHAR*);

static member_expression_t *new_member_expression(parser_ctx_t*,expression_t*,const WCHAR*);
static call_expression_t *new_call_expression(parser_ctx_t*,expression_t*,expression_t*);
static call_expression_t *make_call_expression(parser_ctx_t*,expression_t*,expression_t*);

static void *new_statement(parser_ctx_t*,statement_type_t,size_t,unsigned);
static statement_t *new_call_statement(parser_ctx_t*,unsigned,expression_t*);
static statement_t *new_assign_statement(parser_ctx_t*,unsigned,expression_t*,expression_t*);
static statement_t *new_set_statement(parser_ctx_t*,unsigned,expression_t*,expression_t*);
static statement_t *new_dim_statement(parser_ctx_t*,unsigned,dim_decl_t*);
static statement_t *new_redim_statement(parser_ctx_t*,unsigned,BOOL,redim_decl_t*);
static statement_t *new_while_statement(parser_ctx_t*,unsigned,statement_type_t,expression_t*,statement_t*);
static statement_t *new_forto_statement(parser_ctx_t*,unsigned,const WCHAR*,expression_t*,expression_t*,expression_t*,statement_t*);
static statement_t *new_foreach_statement(parser_ctx_t*,unsigned,const WCHAR*,expression_t*,statement_t*);
static statement_t *new_if_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*,elseif_decl_t*,statement_t*);
static statement_t *new_function_statement(parser_ctx_t*,unsigned,function_decl_t*);
static statement_t *new_onerror_statement(parser_ctx_t*,unsigned,BOOL);
static statement_t *new_const_statement(parser_ctx_t*,unsigned,const_decl_t*);
static statement_t *new_select_statement(parser_ctx_t*,unsigned,expression_t*,case_clausule_t*);
static statement_t *new_with_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*);

static dim_decl_t *new_dim_decl(parser_ctx_t*,const WCHAR*,BOOL,dim_list_t*);
static dim_list_t *new_dim(parser_ctx_t*,unsigned,dim_list_t*);
static redim_decl_t *new_redim_decl(parser_ctx_t*,const WCHAR*,expression_t*);
static elseif_decl_t *new_elseif_decl(parser_ctx_t*,unsigned,expression_t*,statement_t*);
static function_decl_t *new_function_decl(parser_ctx_t*,const WCHAR*,function_type_t,unsigned,arg_decl_t*,statement_t*);
static arg_decl_t *new_argument_decl(parser_ctx_t*,const WCHAR*,BOOL);
static const_decl_t *new_const_decl(parser_ctx_t*,const WCHAR*,expression_t*);
static case_clausule_t *new_case_clausule(parser_ctx_t*,expression_t*,statement_t*,case_clausule_t*);

static class_decl_t *new_class_decl(parser_ctx_t*);
static class_decl_t *add_class_function(parser_ctx_t*,class_decl_t*,function_decl_t*);
static class_decl_t *add_dim_prop(parser_ctx_t*,class_decl_t*,dim_decl_t*,unsigned);

static statement_t *link_statements(statement_t*,statement_t*);

#define STORAGE_IS_PRIVATE    1
#define STORAGE_IS_DEFAULT    2

#define CHECK_ERROR if(((parser_ctx_t*)ctx)->hres != S_OK) YYABORT

#define PARSER_LTYPE unsigned
#define YYLLOC_DEFAULT(Cur, Rhs, N) Cur = YYRHSLOC((Rhs), (N) ? 1 : 0)


#line 145 "dlls/vbscript/parser.tab.c" /* yacc.c:339  */

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
#ifndef PARSER_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PARSER_DEBUG 1
#  else
#   define PARSER_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PARSER_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PARSER_DEBUG */
#if PARSER_DEBUG
extern int parser_debug;
#endif

/* Token type.  */
#ifndef PARSER_TOKENTYPE
# define PARSER_TOKENTYPE
  enum parser_tokentype
  {
    tEXPRESSION = 258,
    tNL = 259,
    tEMPTYBRACKETS = 260,
    tEXPRLBRACKET = 261,
    tLTEQ = 262,
    tGTEQ = 263,
    tNEQ = 264,
    tSTOP = 265,
    tME = 266,
    tREM = 267,
    tDOT = 268,
    tTRUE = 269,
    tFALSE = 270,
    tNOT = 271,
    tAND = 272,
    tOR = 273,
    tXOR = 274,
    tEQV = 275,
    tIMP = 276,
    tIS = 277,
    tMOD = 278,
    tCALL = 279,
    tSUB = 280,
    tFUNCTION = 281,
    tGET = 282,
    tLET = 283,
    tCONST = 284,
    tDIM = 285,
    tREDIM = 286,
    tPRESERVE = 287,
    tIF = 288,
    tELSE = 289,
    tELSEIF = 290,
    tEND = 291,
    tTHEN = 292,
    tEXIT = 293,
    tWHILE = 294,
    tWEND = 295,
    tDO = 296,
    tLOOP = 297,
    tUNTIL = 298,
    tFOR = 299,
    tTO = 300,
    tEACH = 301,
    tIN = 302,
    tSELECT = 303,
    tCASE = 304,
    tWITH = 305,
    tBYREF = 306,
    tBYVAL = 307,
    tOPTION = 308,
    tNOTHING = 309,
    tEMPTY = 310,
    tNULL = 311,
    tCLASS = 312,
    tSET = 313,
    tNEW = 314,
    tPUBLIC = 315,
    tPRIVATE = 316,
    tNEXT = 317,
    tON = 318,
    tRESUME = 319,
    tGOTO = 320,
    tIdentifier = 321,
    tString = 322,
    tDEFAULT = 323,
    tERROR = 324,
    tEXPLICIT = 325,
    tPROPERTY = 326,
    tSTEP = 327,
    tInt = 328,
    tDouble = 329,
    tDate = 330
  };
#endif

/* Value type.  */
#if ! defined PARSER_STYPE && ! defined PARSER_STYPE_IS_DECLARED

union PARSER_STYPE
{
#line 96 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:355  */

    const WCHAR *string;
    statement_t *statement;
    expression_t *expression;
    member_expression_t *member;
    elseif_decl_t *elseif;
    dim_decl_t *dim_decl;
    dim_list_t *dim_list;
    redim_decl_t *redim_decl;
    function_decl_t *func_decl;
    arg_decl_t *arg_decl;
    class_decl_t *class_decl;
    const_decl_t *const_decl;
    case_clausule_t *case_clausule;
    unsigned uint;
    LONG integer;
    BOOL boolean;
    double dbl;
    DATE date;

#line 287 "dlls/vbscript/parser.tab.c" /* yacc.c:355  */
};

typedef union PARSER_STYPE PARSER_STYPE;
# define PARSER_STYPE_IS_TRIVIAL 1
# define PARSER_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined PARSER_LTYPE && ! defined PARSER_LTYPE_IS_DECLARED
typedef struct PARSER_LTYPE PARSER_LTYPE;
struct PARSER_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define PARSER_LTYPE_IS_DECLARED 1
# define PARSER_LTYPE_IS_TRIVIAL 1
#endif



int parser_parse (parser_ctx_t *ctx);



/* Copy the second part of user declarations.  */

#line 317 "dlls/vbscript/parser.tab.c" /* yacc.c:358  */

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
         || (defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL \
             && defined PARSER_STYPE_IS_TRIVIAL && PARSER_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,     2,
      80,    81,    89,    87,    82,    83,    79,    90,    78,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    76,     2,
      85,    77,    84,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    88,     2,    91,     2,     2,     2,     2,     2,
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
      75
};

#if PARSER_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   164,   166,   168,   170,   172,   174,   175,
     178,   179,   180,   181,   184,   185,   188,   189,   190,   193,
     194,   197,   198,   201,   204,   205,   206,   207,   208,   211,
     213,   214,   216,   217,   218,   219,   221,   224,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   241,   243,   245,   249,   250,   251,   255,   256,   259,
     262,   263,   266,   267,   270,   271,   272,   275,   276,   279,
     280,   283,   286,   287,   290,   291,   294,   295,   298,   300,
     301,   304,   306,   309,   310,   313,   314,   317,   321,   322,
     323,   326,   327,   328,   331,   332,   335,   336,   339,   340,
     341,   343,   345,   348,   349,   352,   353,   356,   357,   360,
     361,   364,   365,   368,   369,   372,   373,   376,   377,   378,
     379,   380,   381,   382,   383,   386,   387,   390,   391,   392,
     395,   396,   399,   400,   404,   405,   407,   411,   412,   415,
     416,   417,   420,   421,   422,   425,   426,   427,   431,   432,
     433,   434,   435,   436,   437,   438,   441,   442,   443,   446,
     447,   450,   451,   454,   457,   458,   459,   461,   463,   465,
     466,   467,   468,   471,   473,   475,   479,   481,   485,   486,
     489,   490,   491,   494,   495,   498,   499,   502,   503,   504,
     508,   509,   510,   511,   512,   513,   515,   517,   521,   522,
     523,   524
};
#endif

#if PARSER_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tEXPRESSION", "tNL", "tEMPTYBRACKETS",
  "tEXPRLBRACKET", "tLTEQ", "tGTEQ", "tNEQ", "tSTOP", "tME", "tREM",
  "tDOT", "tTRUE", "tFALSE", "tNOT", "tAND", "tOR", "tXOR", "tEQV", "tIMP",
  "tIS", "tMOD", "tCALL", "tSUB", "tFUNCTION", "tGET", "tLET", "tCONST",
  "tDIM", "tREDIM", "tPRESERVE", "tIF", "tELSE", "tELSEIF", "tEND",
  "tTHEN", "tEXIT", "tWHILE", "tWEND", "tDO", "tLOOP", "tUNTIL", "tFOR",
  "tTO", "tEACH", "tIN", "tSELECT", "tCASE", "tWITH", "tBYREF", "tBYVAL",
  "tOPTION", "tNOTHING", "tEMPTY", "tNULL", "tCLASS", "tSET", "tNEW",
  "tPUBLIC", "tPRIVATE", "tNEXT", "tON", "tRESUME", "tGOTO", "tIdentifier",
  "tString", "tDEFAULT", "tERROR", "tEXPLICIT", "tPROPERTY", "tSTEP",
  "tInt", "tDouble", "tDate", "':'", "'='", "'0'", "'.'", "'('", "')'",
  "','", "'-'", "'>'", "'<'", "'&'", "'+'", "'\\\\'", "'*'", "'/'", "'^'",
  "$accept", "Program", "OptionExplicit_opt", "SourceElements",
  "GlobalDimDeclaration", "ExpressionNl_opt", "BodyStatements",
  "StatementsNl_opt", "StatementsNl", "StatementNl", "Statement",
  "SimpleStatement", "MemberExpression", "Preserve_opt", "ReDimDecl",
  "ReDimDeclList", "DimDeclList", "DimDecl", "DimList", "ConstDeclList",
  "ConstDecl", "ConstExpression", "DoType", "Step_opt", "IfStatement",
  "EndIf_opt", "ElseIfs_opt", "ElseIfs", "ElseIf", "Else_opt",
  "CaseClausules", "Arguments", "ArgumentList_opt", "ArgumentList",
  "EmptyBrackets_opt", "ExpressionList", "Expression", "EqvExpression",
  "XorExpression", "OrExpression", "AndExpression", "NotExpression",
  "EqualityExpression", "ConcatExpression", "AdditiveExpression",
  "ModExpression", "IntdivExpression", "MultiplicativeExpression",
  "ExpExpression", "SignExpression", "UnaryExpression", "CallExpression",
  "LiteralExpression", "NumericLiteralExpression", "IntegerValue",
  "PrimaryExpression", "ClassDeclaration", "ClassBody", "PropertyDecl",
  "FunctionDecl", "Storage_opt", "Storage", "ArgumentsDecl_opt",
  "ArgumentDeclList", "ArgumentDecl", "Identifier", "StSep_opt", "StSep", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,    58,    61,    48,    46,
      40,    41,    44,    45,    62,    60,    38,    43,    92,    42,
      47,    94
};
# endif

#define YYPACT_NINF -288

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-288)))

#define YYTABLE_NINF -181

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   494,   -41,    47,  -288,   494,  -288,    -3,  -288,  -288,
     494,  -288,  -288,  -288,   282,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,   519,   519,  -288,  -288,
      33,    74,    65,    85,    98,  -288,    27,    45,   -17,   115,
      58,   -37,    68,  -288,  -288,    34,  -288,  -288,  -288,  -288,
      26,  -288,   598,    -4,  -288,  -288,  -288,  -288,  -288,  -288,
     494,   494,   494,   494,   494,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
    -288,    89,   389,  -288,    26,    26,  -288,  -288,   707,   282,
     282,   141,   494,   142,   494,   123,   152,   128,   494,   282,
     411,   293,   370,   106,   777,    26,  -288,   176,   109,  -288,
     301,  -288,  -288,    84,  -288,  -288,    74,    65,    85,    98,
    -288,    45,    45,    45,    45,    45,    45,    45,   -17,   115,
     115,    58,   -37,    68,    68,  -288,  -288,   389,   101,   -11,
    -288,  -288,  -288,  -288,   112,   130,  -288,   124,    -1,  -288,
     122,     5,  -288,  -288,  -288,  -288,  -288,    10,  -288,  -288,
     494,  1114,   282,   132,   494,    10,    26,    64,   282,   104,
    -288,   282,  -288,   126,   143,  -288,  -288,  -288,  -288,   777,
     494,  -288,  -288,   282,   282,  -288,  -288,   389,   282,   178,
     282,  -288,   -33,   135,   134,  -288,   667,  1181,    10,   168,
    -288,    26,   170,   494,    10,  1248,    20,   494,  -288,  -288,
     164,   149,  -288,  -288,   207,    18,    18,  -288,  -288,   127,
    -288,  -288,  -288,  -288,  -288,   150,   157,   389,   122,  1047,
     111,   201,  1114,    82,  1047,   494,     6,   195,   210,   282,
     211,    26,    26,    36,   182,   207,  -288,  -288,  -288,   452,
    -288,    26,    26,  -288,  -288,   -33,   173,  -288,   220,   911,
     224,  -288,  -288,   216,   494,  -288,    10,   494,   419,   223,
     212,    26,   203,    20,    20,    95,    26,   282,   282,   185,
     189,   262,   844,   844,  -288,  -288,   494,   238,  -288,   220,
     237,  -288,  -288,   207,  1315,    11,    26,    26,    -8,   228,
    -288,    20,    26,  -288,  -288,   282,   282,   282,    20,   262,
     262,  -288,   452,  -288,   241,   844,   176,   242,    23,   980,
     243,  -288,  -288,   218,   494,    26,  1248,  -288,  1047,   494,
    -288,  -288,  -288,    18,   202,   204,  -288,  -288,  -288,  -288,
     260,  -288,   263,   284,  1248,  -288,   253,  -288,   207,  1315,
    -288,   195,  -288,    26,   452,   452,  -288,  -288,  1047,  -288,
    -288,   232,  -288,   844,   209,   214,  -288,  -288,   261,    26,
      26,   225,   844,   844,  -288,   264,   265,   234,   248,  -288,
    -288
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    14,     0,     0,     6,     0,   162,     0,   148,   149,
       0,   155,   153,   154,     0,   190,   150,   191,   192,   193,
     194,   195,   157,   158,   151,   156,     0,     0,     3,   146,
       0,   105,   107,   109,   111,   113,   115,   117,   125,   127,
     130,   132,   134,   137,   139,   143,   142,   152,   145,    54,
       0,     1,   178,     0,    56,   116,   144,   140,   141,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,   147,   198,   199,     5,    46,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,     0,    24,     0,     8,     0,    26,    34,
      96,     9,    39,     0,   179,   161,   106,   108,   110,   112,
     114,   123,   122,   119,   124,   118,   120,   121,   126,   129,
     128,   131,   133,   135,   136,   138,    55,     0,     0,    98,
     200,   201,    30,    49,    69,     0,    32,    62,    64,    58,
       0,     0,    44,    42,    40,    41,    43,     0,    74,    75,
       0,   178,     0,     0,     0,     0,     0,     0,     0,   191,
      13,     0,    12,     0,   181,   182,    25,     7,    23,    28,
       0,    29,    97,     0,     0,   100,    95,     0,     0,     0,
       0,    66,     0,     0,    60,    33,   178,   178,     0,     0,
      20,     0,     0,     0,     0,   178,   178,     0,    11,    10,
       0,     0,   180,    27,    31,   101,   101,    99,    70,     0,
      71,    72,    63,   160,   159,     0,    67,     0,     0,    19,
      81,     0,   178,    38,    21,     0,     0,    91,     0,     0,
       0,   171,   165,     0,   179,    45,    47,    48,   102,     0,
     183,     0,     0,    73,    65,     0,     0,    61,    83,   178,
       0,    79,    35,     0,     0,    22,     0,     0,     0,     0,
       0,   169,     0,   178,   178,     0,   167,     0,     0,     0,
     185,   101,   178,   178,    68,    59,     0,    88,    84,    85,
      81,    82,    36,    37,   178,    76,   196,   196,   103,     0,
      53,   178,     0,   172,   166,     0,     0,     0,   178,   101,
     101,   184,     0,   187,     0,   178,    17,     0,     0,   178,
       0,    86,    80,     0,     0,     0,   178,   197,    19,     0,
      52,   170,   163,   101,     0,     0,   168,   188,   189,   186,
       0,    18,     0,     0,   178,    90,     0,    51,    77,   178,
      92,    91,   104,     0,     0,     0,   176,   177,    19,    89,
      78,     0,    93,   178,     0,     0,    87,    50,     0,     0,
       0,     0,   178,   178,   173,     0,     0,     0,     0,   174,
     175
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,  -288,  -288,  -288,  -288,  -267,  -186,    69,   256,
     -47,   -40,  -288,  -288,  -288,    81,   -93,    87,    66,  -130,
    -288,  -288,    91,  -288,  -288,    30,  -288,    40,  -288,  -288,
     -20,  -288,  -288,  -109,  -131,     7,     1,   274,   276,   273,
     275,     8,  -288,   470,   267,   129,   269,   266,   119,    -6,
     257,   -45,   158,   139,  -288,  -288,  -288,  -137,  -288,  -184,
    -182,  -173,  -213,  -287,  -288,   -14,    80,   145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    52,   105,    28,   314,   199,   200,   315,
     316,   201,    29,   150,   194,   195,   146,   147,   225,   143,
     144,   220,   160,   325,   109,   261,   287,   288,   289,   320,
     269,    83,   181,   138,   250,   297,   139,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   226,    48,   111,   240,   241,   112,
     113,   114,   251,   279,   280,    49,   326,   327
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,   182,    30,   252,   191,   107,    53,   110,   170,   172,
      60,   231,   108,    60,    84,     1,   317,    60,    55,   238,
      57,    58,   242,   248,   243,   339,    60,    60,   185,    50,
      84,    60,    60,   244,    65,    66,    67,    59,   208,    80,
     223,   209,   196,   258,    60,   224,   263,    51,   341,    68,
     239,   267,    77,    78,    60,   167,  -164,   176,   218,   110,
     343,   183,   184,    54,   108,     2,    73,   364,   365,    80,
      74,   187,   120,   135,   329,   145,   148,   115,   217,   192,
     174,   175,   163,   324,    62,   166,    85,   148,   148,   242,
     242,   243,   243,   151,    61,   157,   368,   222,   249,   165,
     244,   244,    85,    63,    69,   375,   376,   275,   323,   183,
     184,    70,    71,    81,    82,    64,   110,   242,   256,   243,
     353,   158,   305,   306,   242,   159,   243,    84,   244,  -180,
    -180,    72,   213,   345,   110,   244,   303,   304,    75,   108,
     350,   207,   351,    81,    82,   259,    76,   260,   202,   230,
     313,   110,   110,   307,   145,   136,   108,   145,   359,    79,
     110,   198,   158,   361,   331,   204,   159,   152,   153,   215,
     216,   336,   366,   149,   145,   173,   148,   164,   337,   338,
     178,   214,   186,   154,   110,   179,   155,   110,   193,   110,
     210,   211,     8,     9,   188,    86,   133,   134,   162,    85,
      22,    23,   129,   130,   236,    25,   190,   189,   245,   203,
     233,   212,   290,   156,   110,   227,   228,   235,    15,   108,
      17,    18,    19,    20,    21,   148,   246,   247,    60,   140,
     141,   254,    11,    12,    13,   281,   266,   110,   110,   255,
     161,   262,   108,   108,   268,    16,   270,   272,   276,   110,
     177,    22,    23,    24,   285,   286,    25,   291,   292,   299,
     302,   219,   300,   309,   310,   293,   311,   248,   295,   298,
     110,   312,   319,   260,   110,   108,   330,   340,   342,   346,
     347,   110,   354,   110,   355,   356,   360,   318,   358,   357,
     369,   333,   334,   335,   367,   370,   374,   371,   281,   110,
     377,   378,   197,   265,   110,   379,    80,     5,   106,   257,
     205,   206,     6,   110,     7,     8,     9,    10,   110,   380,
     322,   284,   168,   108,   264,   348,   271,   110,   110,   321,
     298,   362,   108,   108,   116,   118,   352,   117,   119,   128,
     281,   281,   132,   232,   131,   142,   234,   221,    15,   237,
      17,    18,    19,    20,    21,    11,    12,    13,   253,    15,
      14,   169,    18,    19,    20,    21,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   328,   180,    25,
      81,    82,     0,   137,    26,     0,   273,   274,    27,     0,
       0,     0,     0,     0,     0,     5,   282,   283,     0,   171,
       6,     0,     7,     8,     9,    10,     0,     0,     0,     0,
       0,   294,     0,     0,     0,     0,   301,     5,     0,     0,
       0,   308,     6,     0,     7,     5,     0,     0,     0,     0,
       6,     0,     7,     8,     9,    10,    15,     0,    17,    18,
      19,    20,    21,    11,    12,    13,     0,   332,    14,     0,
       0,     0,     0,   296,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,     0,     0,
     349,   137,    26,    11,    12,    13,    27,    15,    14,    17,
      18,    19,    20,    21,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,   363,     0,
       5,     0,    26,   277,   278,     6,    27,     7,     8,     9,
      10,     0,     0,     0,   372,   373,     0,     0,    15,     0,
      17,    18,    19,    20,    21,     5,     0,     0,     0,     0,
       6,     0,     7,     8,     9,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,    11,    12,
      13,     0,     0,    14,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,    25,    11,    12,    13,     0,    26,    14,     0,
       0,    27,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    -2,     0,
       0,     0,    26,     0,     5,     0,    27,     0,    87,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,     0,     0,     0,    93,    94,     0,    95,
       0,     0,    96,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,     0,     0,    99,   100,     0,   101,   102,
       0,   103,     0,     0,    15,     0,    17,    18,    19,    20,
      21,   229,     0,     5,   104,     0,     0,    87,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,    89,    90,    91,     0,
      92,     0,     0,     0,     0,    93,    94,     0,    95,     0,
       0,    96,     0,     5,     0,    97,     0,    98,     6,     0,
       7,     8,     9,     0,     0,   100,     0,   174,   175,     0,
     103,     0,     0,    15,     0,    17,    18,    19,    20,    21,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     0,     0,    14,     0,     0,     0,
       0,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     5,     0,    25,     0,    87,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,  -178,  -178,     0,     0,    89,    90,    91,     0,
      92,     0,     0,     0,     0,    93,    94,     0,    95,     0,
       0,    96,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,     0,     0,     0,   100,     0,   174,   175,     0,
     103,     0,     0,    15,     0,    17,    18,    19,    20,    21,
       5,     0,     0,   104,    87,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,    92,     0,     0,
     -16,     0,    93,    94,     0,    95,     0,     0,    96,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,     0,
       0,     0,   100,     0,   174,   175,     0,   103,     0,     0,
      15,     0,    17,    18,    19,    20,    21,     5,     0,     0,
     104,    87,     6,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,     0,     0,     0,    93,
      94,     0,    95,     0,     0,    96,     0,     0,     0,    97,
       0,    98,     0,     0,     0,     0,     0,     0,     0,   100,
       0,   174,   175,     0,   103,     0,     0,    15,     0,    17,
      18,    19,    20,    21,   344,     0,     5,   104,     0,     0,
      87,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,    89,
      90,    91,     0,    92,     0,     0,   -19,     0,    93,    94,
       0,    95,     0,     0,    96,     0,     0,     0,    97,     0,
      98,     0,     0,     0,     0,     0,     0,     0,   100,     0,
     174,   175,     0,   103,     0,     0,    15,     0,    17,    18,
      19,    20,    21,     5,     0,     0,     0,    87,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,  -178,  -178,     0,     0,    89,    90,    91,     0,
      92,     0,     0,     0,     0,    93,    94,     0,    95,     0,
       0,    96,     0,     0,     0,    97,     0,    98,     0,     0,
       0,     0,     0,     0,     0,   100,     0,   174,   175,     0,
     103,     0,     0,    15,     0,    17,    18,    19,    20,    21,
       5,     0,     0,     0,    87,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    89,    90,    91,     0,    92,     0,     0,
       0,     0,    93,    94,     0,    95,   -19,     0,    96,     0,
       0,     0,    97,     0,    98,     0,     0,     0,     0,     0,
       0,     0,   100,     0,   174,   175,     0,   103,     0,     0,
      15,     0,    17,    18,    19,    20,    21,     5,     0,     0,
       0,    87,     6,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,     0,     0,     0,    93,
      94,   -19,    95,     0,     0,    96,     0,     0,     0,    97,
       0,    98,     0,     0,     0,     0,     0,     0,     0,   100,
       0,   174,   175,     0,   103,     0,     0,    15,     0,    17,
      18,    19,    20,    21,     5,     0,     0,     0,    87,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    89,    90,    91,
       0,    92,     0,     0,   -19,     0,    93,    94,     0,    95,
       0,     0,    96,     0,     0,     0,    97,     0,    98,     0,
       0,     0,     0,     0,     0,     0,   100,     0,   174,   175,
       0,   103,     0,     0,    15,     0,    17,    18,    19,    20,
      21,     5,     0,     0,     0,    87,     6,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,    89,    90,    91,     0,    92,     0,
       0,     0,     0,    93,    94,     0,    95,     0,     0,    96,
       0,     0,     0,    97,     0,    98,     0,     0,     0,     0,
       0,     0,     0,   100,     0,   174,   175,   -19,   103,     0,
       0,    15,     0,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      14,   110,     1,   216,     5,    52,     5,    52,   101,   102,
      21,   197,    52,    21,     4,     3,   283,    21,    10,   205,
      26,    27,   206,     5,   206,   312,    21,    21,   137,    70,
       4,    21,    21,   206,     7,     8,     9,     4,   168,     5,
      73,   171,    37,   229,    21,    78,   232,     0,   315,    22,
      30,    45,    89,    90,    21,   100,    36,   104,   188,   104,
      37,    25,    26,    66,   104,    53,    83,   354,   355,     5,
      87,    82,    64,    79,    82,    89,    90,    81,   187,    80,
      60,    61,    96,    72,    19,    99,    76,   101,   102,   273,
     274,   273,   274,    92,    20,    94,   363,   190,    80,    98,
     273,   274,    76,    18,    77,   372,   373,    71,   294,    25,
      26,    84,    85,    79,    80,    17,   161,   301,   227,   301,
     333,    39,    27,    28,   308,    43,   308,     4,   301,    25,
      26,    86,   179,   319,   179,   308,   273,   274,    23,   179,
     326,    77,   328,    79,    80,    34,    88,    36,   162,   196,
     281,   196,   197,    58,   168,    66,   196,   171,   344,    91,
     205,   160,    39,   349,   301,   164,    43,    25,    26,   183,
     184,   308,   358,    32,   188,    69,   190,    49,   309,   310,
       4,   180,    81,    41,   229,    76,    44,   232,    66,   234,
      64,    65,    14,    15,    82,    50,    77,    78,    46,    76,
      73,    74,    73,    74,   203,    78,    82,    77,   207,    77,
      42,    68,   259,    71,   259,    80,    82,    47,    66,   259,
      68,    69,    70,    71,    72,   239,    62,    78,    21,    84,
      85,    81,    54,    55,    56,   249,   235,   282,   283,    82,
      95,    40,   282,   283,    49,    67,    36,    36,    66,   294,
     105,    73,    74,    75,    81,    35,    78,    33,    42,    36,
      57,    83,    50,   277,   278,   264,    81,     5,   267,   268,
     315,    82,    34,    36,   319,   315,    48,    36,    36,    36,
      62,   326,    80,   328,    80,    25,    33,   286,     4,    26,
      81,   305,   306,   307,    62,    81,    71,    36,   312,   344,
      36,    36,   157,   234,   349,    71,     5,     6,    52,   228,
     165,   166,    11,   358,    13,    14,    15,    16,   363,    71,
     290,   255,    29,   363,   233,   324,   239,   372,   373,   289,
     329,   351,   372,   373,    60,    62,   329,    61,    63,    72,
     354,   355,    76,   198,    75,    88,   201,   189,    66,   204,
      68,    69,    70,    71,    72,    54,    55,    56,   219,    66,
      59,    68,    69,    70,    71,    72,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,   297,    77,    78,
      79,    80,    -1,    82,    83,    -1,   241,   242,    87,    -1,
      -1,    -1,    -1,    -1,    -1,     6,   251,   252,    -1,    29,
      11,    -1,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,   271,     6,    -1,    -1,
      -1,   276,    11,    -1,    13,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    16,    66,    -1,    68,    69,
      70,    71,    72,    54,    55,    56,    -1,   302,    59,    -1,
      -1,    -1,    -1,    34,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    78,    -1,    -1,
     325,    82,    83,    54,    55,    56,    87,    66,    59,    68,
      69,    70,    71,    72,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    78,   353,    -1,
       6,    -1,    83,    51,    52,    11,    87,    13,    14,    15,
      16,    -1,    -1,    -1,   369,   370,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,     6,    -1,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    -1,    78,    54,    55,    56,    -1,    83,    59,    -1,
      -1,    87,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    -1,    78,     0,    -1,
      -1,    -1,    83,    -1,     6,    -1,    87,    -1,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,     4,    -1,     6,    76,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,
      -1,    44,    -1,     6,    -1,    48,    -1,    50,    11,    -1,
      13,    14,    15,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     6,    -1,    78,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
       6,    -1,    -1,    76,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,
      36,    -1,    38,    39,    -1,    41,    -1,    -1,    44,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,     6,    -1,    -1,
      76,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    61,    -1,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,     4,    -1,     6,    76,    -1,    -1,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    33,    -1,    -1,    36,    -1,    38,    39,
      -1,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      60,    61,    -1,    63,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,     6,    -1,    -1,    -1,    10,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
       6,    -1,    -1,    -1,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    42,    -1,    44,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,     6,    -1,    -1,
      -1,    10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    61,    -1,    63,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,     6,    -1,    -1,    -1,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    31,
      -1,    33,    -1,    -1,    36,    -1,    38,    39,    -1,    41,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,
      -1,    63,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,     6,    -1,    -1,    -1,    10,    11,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    -1,    -1,    44,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    62,    63,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    93,    94,     6,    11,    13,    14,    15,
      16,    54,    55,    56,    59,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    78,    83,    87,    97,   104,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   147,   157,
      70,     0,    95,   128,    66,   133,   157,   141,   141,     4,
      21,    20,    19,    18,    17,     7,     8,     9,    22,    77,
      84,    85,    86,    83,    87,    23,    88,    89,    90,    91,
       5,    79,    80,   123,     4,    76,   159,    10,    24,    29,
      30,    31,    33,    38,    39,    41,    44,    48,    50,    57,
      58,    60,    61,    63,    76,    96,   101,   102,   103,   116,
     143,   148,   151,   152,   153,    81,   129,   130,   131,   132,
     133,   135,   135,   135,   135,   135,   135,   135,   136,   137,
     137,   138,   139,   140,   140,   141,    66,    82,   125,   128,
     159,   159,   142,   111,   112,   157,   108,   109,   157,    32,
     105,   128,    25,    26,    41,    44,    71,   128,    39,    43,
     114,   159,    46,   157,    49,   128,   157,   143,    29,    68,
     108,    29,   108,    69,    60,    61,   102,   159,     4,    76,
      77,   124,   125,    25,    26,   125,    81,    82,    82,    77,
      82,     5,    80,    66,   106,   107,    37,   159,   128,    99,
     100,   103,   157,    77,   128,   159,   159,    77,   111,   111,
      64,    65,    68,   102,   128,   157,   157,   125,   111,    83,
     113,   144,   108,    73,    78,   110,   146,    80,    82,     4,
     102,    99,   159,    42,   159,    47,   128,   159,    99,    30,
     149,   150,   151,   152,   153,   128,    62,    78,     5,    80,
     126,   154,   154,   145,    81,    82,   125,   107,    99,    34,
      36,   117,    40,    99,   114,   100,   128,    45,    49,   122,
      36,   109,    36,   159,   159,    71,    66,    51,    52,   155,
     156,   157,   159,   159,   110,    81,    35,   118,   119,   120,
     102,    33,    42,   128,   159,   128,    34,   127,   128,    36,
      50,   159,    57,   149,   149,    27,    28,    58,   159,   157,
     157,    81,    82,   126,    98,   101,   102,    98,   128,    34,
     121,   119,   117,    99,    72,   115,   158,   159,   158,    82,
      48,   149,   159,   157,   157,   157,   149,   126,   126,   155,
      36,    98,    36,    37,     4,    99,    36,    62,   128,   159,
      99,    99,   127,   154,    80,    80,    25,    26,     4,    99,
      33,    99,   122,   159,   155,   155,    99,    62,    98,    81,
      81,    36,   159,   159,    71,    98,    98,    36,    36,    71,
      71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   105,   105,   106,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   121,   121,
     121,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   141,
     141,   141,   142,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   145,   146,
     146,   147,   147,   148,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   158,   158,   159,   159,
     159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     0,     3,     2,     2,
       3,     3,     2,     2,     0,     2,     0,     1,     2,     0,
       1,     2,     3,     2,     1,     2,     1,     3,     2,     2,
       2,     3,     2,     3,     1,     5,     6,     6,     4,     1,
       2,     2,     2,     2,     2,     4,     1,     4,     4,     2,
      10,     8,     7,     6,     1,     3,     2,     0,     1,     4,
       1,     3,     1,     3,     1,     4,     2,     1,     3,     1,
       3,     3,     1,     2,     1,     1,     0,     2,     9,     5,
       7,     0,     2,     0,     1,     1,     2,     5,     0,     3,
       2,     0,     4,     5,     1,     3,     0,     1,     1,     3,
       2,     0,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       2,     2,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     7,     0,     1,     3,     2,     4,     2,
       4,     1,     3,     9,    11,    11,     8,     8,     0,     1,
       2,     1,     1,     1,     3,     1,     3,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       2,     2
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
      yyerror (&yylloc, ctx, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if PARSER_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_ctx_t *ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (ctx);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, parser_ctx_t *ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, ctx);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, parser_ctx_t *ctx)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !PARSER_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PARSER_DEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, parser_ctx_t *ctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parser_ctx_t *ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined PARSER_LTYPE_IS_TRIVIAL && PARSER_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, ctx);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 164 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { handle_isexpression_script(ctx, (yyvsp[0].expression)); }
#line 1991 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 168 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->option_explicit = TRUE; }
#line 1997 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 173 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { source_add_statement(ctx, (yyvsp[-1].statement)); }
#line 2003 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 174 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { source_add_statement(ctx, (yyvsp[0].statement)); }
#line 2009 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 175 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { source_add_class(ctx, (yyvsp[0].class_decl)); }
#line 2015 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_const_statement(ctx, (yyloc), (yyvsp[0].const_decl)); CHECK_ERROR; }
#line 2021 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_const_statement(ctx, (yyloc), (yyvsp[0].const_decl)); CHECK_ERROR; }
#line 2027 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 180 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2033 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2039 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 184 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2045 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 185 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2051 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 188 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 2057 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2063 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 190 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = link_statements((yyvsp[-1].statement), (yyvsp[0].statement)); }
#line 2069 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 193 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 2075 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 194 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2081 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 197 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-1].statement); }
#line 2087 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 198 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = link_statements((yyvsp[-2].statement), (yyvsp[0].statement)); }
#line 2093 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 201 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-1].statement); }
#line 2099 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 204 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 2105 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 205 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2111 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 206 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2117 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 207 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].statement)->next = (yyvsp[0].statement); (yyval.statement) = (yyvsp[-2].statement); }
#line 2123 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 208 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[-1].statement); }
#line 2129 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 211 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { call_expression_t *call_expr = make_call_expression(ctx, (yyvsp[-1].expression), (yyvsp[0].expression)); CHECK_ERROR;
                                              (yyval.statement) = new_call_statement(ctx, (yyloc), &call_expr->expr); CHECK_ERROR; }
#line 2136 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 213 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_call_statement(ctx, (yyloc), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2142 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 215 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_assign_statement(ctx, (yyloc), (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2148 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 216 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_dim_statement(ctx, (yyloc), (yyvsp[0].dim_decl)); CHECK_ERROR; }
#line 2154 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 217 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_redim_statement(ctx, (yyloc), (yyvsp[-1].boolean), (yyvsp[0].redim_decl)); CHECK_ERROR; }
#line 2160 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 218 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2166 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yyloc), STAT_WHILE, (yyvsp[-3].expression), (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2172 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 222 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yyloc), (yyvsp[-4].boolean) ? STAT_WHILELOOP : STAT_UNTIL, (yyvsp[-3].expression), (yyvsp[-1].statement));
                                              CHECK_ERROR; }
#line 2179 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 225 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yylsp[-2]), (yyvsp[-1].boolean) ? STAT_DOWHILE : STAT_DOUNTIL, (yyvsp[0].expression), (yyvsp[-3].statement));
                                              CHECK_ERROR; }
#line 2186 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 227 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yyloc), STAT_DOWHILE, NULL, (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2192 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 228 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_function_statement(ctx, (yyloc), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2198 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 229 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EXITDO, 0, (yyloc)); CHECK_ERROR; }
#line 2204 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 230 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EXITFOR, 0, (yyloc)); CHECK_ERROR; }
#line 2210 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 231 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EXITFUNC, 0, (yyloc)); CHECK_ERROR; }
#line 2216 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 232 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EXITPROP, 0, (yyloc)); CHECK_ERROR; }
#line 2222 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 233 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EXITSUB, 0, (yyloc)); CHECK_ERROR; }
#line 2228 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 234 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_set_statement(ctx, (yyloc), (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2234 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 235 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_STOP, 0, (yyloc)); CHECK_ERROR; }
#line 2240 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 236 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_onerror_statement(ctx, (yyloc), TRUE); CHECK_ERROR; }
#line 2246 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 237 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_onerror_statement(ctx, (yyloc), FALSE); CHECK_ERROR; }
#line 2252 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 238 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_const_statement(ctx, (yyloc), (yyvsp[0].const_decl)); CHECK_ERROR; }
#line 2258 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 240 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_forto_statement(ctx, (yyloc), (yyvsp[-8].string), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-3].expression), (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2264 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 242 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_foreach_statement(ctx, (yyloc), (yyvsp[-5].string), (yyvsp[-3].expression), (yyvsp[-1].statement)); }
#line 2270 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 244 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_select_statement(ctx, (yyloc), (yyvsp[-4].expression), (yyvsp[-2].case_clausule)); }
#line 2276 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 246 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_with_statement(ctx, (yyloc), (yyvsp[-4].expression), (yyvsp[-2].statement)); }
#line 2282 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 249 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.member) = new_member_expression(ctx, NULL, (yyvsp[0].string)); CHECK_ERROR; }
#line 2288 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 250 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.member) = new_member_expression(ctx, (yyvsp[-2].expression), (yyvsp[0].string)); CHECK_ERROR; }
#line 2294 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 251 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { expression_t *dot_expr = new_expression(ctx, EXPR_DOT, sizeof(*dot_expr)); CHECK_ERROR;
                                              (yyval.member) = new_member_expression(ctx, dot_expr, (yyvsp[0].string)); CHECK_ERROR; }
#line 2301 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 255 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.boolean) = FALSE; }
#line 2307 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 256 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.boolean) = TRUE; }
#line 2313 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 259 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.redim_decl) = new_redim_decl(ctx, (yyvsp[-3].string), (yyvsp[-1].expression)); CHECK_ERROR; }
#line 2319 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 262 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.redim_decl) = (yyvsp[0].redim_decl); }
#line 2325 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 263 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].redim_decl)->next = (yyvsp[0].redim_decl); (yyval.redim_decl) = (yyvsp[-2].redim_decl); }
#line 2331 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 266 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_decl) = (yyvsp[0].dim_decl); }
#line 2337 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 267 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].dim_decl)->next = (yyvsp[0].dim_decl); (yyval.dim_decl) = (yyvsp[-2].dim_decl); }
#line 2343 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 270 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[0].string), FALSE, NULL); CHECK_ERROR; }
#line 2349 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 271 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[-3].string), TRUE, (yyvsp[-1].dim_list)); CHECK_ERROR; }
#line 2355 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 272 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_decl) = new_dim_decl(ctx, (yyvsp[-1].string), TRUE, NULL); CHECK_ERROR; }
#line 2361 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 275 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_list) = new_dim(ctx, (yyvsp[0].uint), NULL); }
#line 2367 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 276 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.dim_list) = new_dim(ctx, (yyvsp[-2].uint), (yyvsp[0].dim_list)); }
#line 2373 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 279 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.const_decl) = (yyvsp[0].const_decl); }
#line 2379 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 280 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].const_decl)->next = (yyvsp[0].const_decl); (yyval.const_decl) = (yyvsp[-2].const_decl); }
#line 2385 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 283 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.const_decl) = new_const_decl(ctx, (yyvsp[-2].string), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2391 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 286 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2397 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 287 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_unary_expression(ctx, EXPR_NEG, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2403 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 290 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.boolean) = TRUE; }
#line 2409 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 291 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.boolean) = FALSE; }
#line 2415 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 294 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL;}
#line 2421 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 295 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2427 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 299 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-7].expression), (yyvsp[-4].statement), (yyvsp[-3].elseif), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2433 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 300 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-3].expression), (yyvsp[-1].statement), NULL, NULL); CHECK_ERROR; }
#line 2439 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 302 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-5].expression), (yyvsp[-3].statement), NULL, (yyvsp[-1].statement)); CHECK_ERROR; }
#line 2445 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 309 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.elseif) = NULL; }
#line 2451 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 310 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.elseif) = (yyvsp[0].elseif); }
#line 2457 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 313 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.elseif) = (yyvsp[0].elseif); }
#line 2463 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 314 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].elseif)->next = (yyvsp[0].elseif); (yyval.elseif) = (yyvsp[-1].elseif); }
#line 2469 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 318 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.elseif) = new_elseif_decl(ctx, (yyloc), (yyvsp[-3].expression), (yyvsp[0].statement)); }
#line 2475 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 321 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = NULL; }
#line 2481 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 322 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2487 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 323 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2493 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 326 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = NULL; }
#line 2499 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 327 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_clausule(ctx, NULL, (yyvsp[0].statement), NULL); }
#line 2505 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 328 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_clausule(ctx, (yyvsp[-3].expression), (yyvsp[-1].statement), (yyvsp[0].case_clausule)); }
#line 2511 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 331 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2517 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 332 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2523 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 335 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = NULL; }
#line 2529 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 336 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2535 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 339 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2541 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 340 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expression)->next = (yyvsp[0].expression); (yyval.expression) = (yyvsp[-2].expression); }
#line 2547 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 341 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_expression(ctx, EXPR_NOARG, 0); CHECK_ERROR; (yyval.expression)->next = (yyvsp[0].expression); }
#line 2553 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 348 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2559 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 349 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expression)->next = (yyvsp[0].expression); (yyval.expression) = (yyvsp[-2].expression); }
#line 2565 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 352 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2571 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 353 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_IMP, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2577 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 356 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2583 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 357 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_EQV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2589 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 360 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2595 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 361 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2601 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 364 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2607 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2613 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 368 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2619 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 369 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2625 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 372 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2631 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 373 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_unary_expression(ctx, EXPR_NOT, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2637 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 376 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2643 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 377 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2649 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 378 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_NEQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2655 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 379 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_GT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2661 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 380 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_LT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2667 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 381 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_GTEQ, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2673 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 382 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_LTEQ, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2679 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 383 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_IS, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2685 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 386 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2691 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 387 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2697 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 390 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2703 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 391 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_ADD, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2709 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 392 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_SUB, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2715 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 395 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2721 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 396 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_MOD, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2727 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 399 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2733 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 401 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_IDIV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2739 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 404 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2745 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 406 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_MUL, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2751 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 408 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2757 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 411 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2763 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 412 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_binary_expression(ctx, EXPR_EXP, (yyvsp[-2].expression), (yyvsp[0].expression)); CHECK_ERROR; }
#line 2769 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 415 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2775 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 416 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_unary_expression(ctx, EXPR_NEG, (yyvsp[0].expression)); CHECK_ERROR; }
#line 2781 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 417 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2787 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 420 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2793 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 421 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2799 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 422 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_new_expression(ctx, (yyvsp[0].string)); CHECK_ERROR; }
#line 2805 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 425 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2811 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 426 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = &(yyvsp[0].member)->expr; }
#line 2817 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 427 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { call_expression_t *expr = new_call_expression(ctx, (yyvsp[-1].expression), (yyvsp[0].expression)); CHECK_ERROR;
                                      (yyval.expression) = &expr->expr; }
#line 2824 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 431 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_bool_expression(ctx, VARIANT_TRUE); CHECK_ERROR; }
#line 2830 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 432 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_bool_expression(ctx, VARIANT_FALSE); CHECK_ERROR; }
#line 2836 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 433 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_string_expression(ctx, (yyvsp[0].string)); CHECK_ERROR; }
#line 2842 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 434 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_date_expression(ctx, (yyvsp[0].date)); CHECK_ERROR; }
#line 2848 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 435 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 2854 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 436 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_expression(ctx, EXPR_EMPTY, 0); CHECK_ERROR; }
#line 2860 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 437 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_expression(ctx, EXPR_NULL, 0); CHECK_ERROR; }
#line 2866 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 438 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_expression(ctx, EXPR_NOTHING, 0); CHECK_ERROR; }
#line 2872 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 441 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_long_expression(ctx, EXPR_INT, 0); CHECK_ERROR; }
#line 2878 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 442 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_long_expression(ctx, EXPR_INT, (yyvsp[0].integer)); CHECK_ERROR; }
#line 2884 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 443 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_double_expression(ctx, (yyvsp[0].dbl)); CHECK_ERROR; }
#line 2890 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 446 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = 0; }
#line 2896 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 447 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = (yyvsp[0].integer); }
#line 2902 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 450 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_unary_expression(ctx, EXPR_BRACKETS, (yyvsp[-1].expression)); }
#line 2908 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 451 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new_expression(ctx, EXPR_ME, 0); CHECK_ERROR; }
#line 2914 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 454 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-3].class_decl)->name = (yyvsp[-5].string); (yyval.class_decl) = (yyvsp[-3].class_decl); }
#line 2920 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 457 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = new_class_decl(ctx); }
#line 2926 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 458 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_class_function(ctx, new_class_decl(ctx), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2932 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 459 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_class_function(ctx, (yyvsp[0].class_decl), (yyvsp[-2].func_decl)); CHECK_ERROR; }
#line 2938 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 461 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { dim_decl_t *dim_decl = new_dim_decl(ctx, (yyvsp[0].string), FALSE, NULL); CHECK_ERROR;
                                                  (yyval.class_decl) = add_dim_prop(ctx, new_class_decl(ctx), dim_decl, (yyvsp[-1].uint)); CHECK_ERROR; }
#line 2945 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 463 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { dim_decl_t *dim_decl = new_dim_decl(ctx, (yyvsp[-2].string), FALSE, NULL); CHECK_ERROR;
                                                  (yyval.class_decl) = add_dim_prop(ctx, (yyvsp[0].class_decl), dim_decl, (yyvsp[-3].uint)); CHECK_ERROR; }
#line 2952 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 465 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_dim_prop(ctx, new_class_decl(ctx), (yyvsp[0].dim_decl), 0); CHECK_ERROR; }
#line 2958 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 466 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_dim_prop(ctx, (yyvsp[0].class_decl), (yyvsp[-2].dim_decl), 0); CHECK_ERROR; }
#line 2964 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 467 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_class_function(ctx, new_class_decl(ctx), (yyvsp[0].func_decl)); CHECK_ERROR; }
#line 2970 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 468 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.class_decl) = add_class_function(ctx, (yyvsp[0].class_decl), (yyvsp[-2].func_decl)); CHECK_ERROR; }
#line 2976 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 472 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_PROPGET, (yyvsp[-8].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2982 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 474 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-7].string), FUNC_PROPLET, (yyvsp[-10].uint), (yyvsp[-5].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2988 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 476 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-7].string), FUNC_PROPSET, (yyvsp[-10].uint), (yyvsp[-5].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 2994 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 480 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_SUB, (yyvsp[-7].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 3000 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 482 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.func_decl) = new_function_decl(ctx, (yyvsp[-5].string), FUNC_FUNCTION, (yyvsp[-7].uint), (yyvsp[-4].arg_decl), (yyvsp[-2].statement)); CHECK_ERROR; }
#line 3006 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 485 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = 0; }
#line 3012 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 486 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = (yyvsp[0].uint); }
#line 3018 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 489 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = STORAGE_IS_DEFAULT; }
#line 3024 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 490 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = 0; }
#line 3030 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 491 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.uint) = STORAGE_IS_PRIVATE; }
#line 3036 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 494 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = NULL; }
#line 3042 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 495 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = (yyvsp[-1].arg_decl); }
#line 3048 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 498 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = (yyvsp[0].arg_decl); }
#line 3054 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 499 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].arg_decl)->next = (yyvsp[0].arg_decl); (yyval.arg_decl) = (yyvsp[-2].arg_decl); }
#line 3060 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 502 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), TRUE); }
#line 3066 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 503 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), TRUE); }
#line 3072 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 504 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.arg_decl) = new_argument_decl(ctx, (yyvsp[-1].string), FALSE); }
#line 3078 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 508 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 3084 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 509 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3090 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 510 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3096 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 511 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3102 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 512 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3108 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 513 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1646  */
    { ctx->last_token = tIdentifier; (yyval.string) = (yyvsp[0].string); }
#line 3114 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
    break;


#line 3118 "dlls/vbscript/parser.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, ctx, YY_("syntax error"));
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
        yyerror (&yylloc, ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, ctx);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, ctx);
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
#line 526 "../wine-source/dlls/vbscript/parser.y" /* yacc.c:1906  */


static int parser_error(unsigned *loc, parser_ctx_t *ctx, const char *str)
{
    if(ctx->error_loc == -1)
        ctx->error_loc = *loc;
    if(ctx->hres == S_OK) {
        FIXME("%s: %s\n", debugstr_w(ctx->code + *loc), debugstr_a(str));
        ctx->hres = E_FAIL;
    }else {
        WARN("%s: %08lx\n", debugstr_w(ctx->code + *loc), ctx->hres);
    }
    return 0;
}

static void source_add_statement(parser_ctx_t *ctx, statement_t *stat)
{
    if(!stat)
        return;

    /* concatenate both linked lists */
    if(ctx->stats) {
        ctx->stats_tail->next = stat;
        ctx->stats_tail = stat;
    }else {
        ctx->stats = ctx->stats_tail = stat;
    }
    /* find new tail */
    while(ctx->stats_tail->next) {
        ctx->stats_tail=ctx->stats_tail->next;
    }
}

static void source_add_class(parser_ctx_t *ctx, class_decl_t *class_decl)
{
    class_decl->next = ctx->class_decls;
    ctx->class_decls = class_decl;
}

static void handle_isexpression_script(parser_ctx_t *ctx, expression_t *expr)
{
    retval_statement_t *stat;

    if(!expr)
        return;

    stat = new_statement(ctx, STAT_RETVAL, sizeof(*stat), 0);
    if(!stat)
        return;

    stat->expr = expr;
    ctx->stats = &stat->stat;
}

static void *new_expression(parser_ctx_t *ctx, expression_type_t type, size_t size)
{
    expression_t *expr;

    expr = parser_alloc(ctx, size ? size : sizeof(*expr));
    if(expr) {
        expr->type = type;
        expr->next = NULL;
    }

    return expr;
}

static expression_t *new_bool_expression(parser_ctx_t *ctx, VARIANT_BOOL value)
{
    bool_expression_t *expr;

    expr = new_expression(ctx, EXPR_BOOL, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_string_expression(parser_ctx_t *ctx, const WCHAR *value)
{
    string_expression_t *expr;

    expr = new_expression(ctx, EXPR_STRING, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_date_expression(parser_ctx_t *ctx, DATE value)
{
    date_expression_t *expr;

    expr = new_expression(ctx, EXPR_DATE, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_long_expression(parser_ctx_t *ctx, expression_type_t type, LONG value)
{
    int_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_double_expression(parser_ctx_t *ctx, double value)
{
    double_expression_t *expr;

    expr = new_expression(ctx, EXPR_DOUBLE, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = value;
    return &expr->expr;
}

static expression_t *new_unary_expression(parser_ctx_t *ctx, expression_type_t type, expression_t *subexpr)
{
    unary_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->subexpr = subexpr;
    return &expr->expr;
}

static expression_t *new_binary_expression(parser_ctx_t *ctx, expression_type_t type, expression_t *left, expression_t *right)
{
    binary_expression_t *expr;

    expr = new_expression(ctx, type, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->left = left;
    expr->right = right;
    return &expr->expr;
}

static member_expression_t *new_member_expression(parser_ctx_t *ctx, expression_t *obj_expr, const WCHAR *identifier)
{
    member_expression_t *expr;

    expr = new_expression(ctx, EXPR_MEMBER, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->obj_expr = obj_expr;
    expr->identifier = identifier;
    return expr;
}

static call_expression_t *new_call_expression(parser_ctx_t *ctx, expression_t *expr, expression_t *arguments)
{
    call_expression_t *call_expr;

    call_expr = new_expression(ctx, EXPR_CALL, sizeof(*call_expr));
    if(!call_expr)
        return NULL;

    call_expr->call_expr = expr;
    call_expr->args = arguments;
    return call_expr;
}

static call_expression_t *make_call_expression(parser_ctx_t *ctx, expression_t *callee_expr, expression_t *arguments)
{
    call_expression_t *call_expr;

    if(callee_expr->type == EXPR_MEMBER)
        return new_call_expression(ctx, callee_expr, arguments);
    if(callee_expr->type != EXPR_CALL) {
        FIXME("Unhandled for expr type %u\n", callee_expr->type);
        ctx->hres = E_FAIL;
        return NULL;
    }
    call_expr = (call_expression_t*)callee_expr;
    if(!call_expr->args) {
        call_expr->args = arguments;
        return call_expr;
    }

    if(call_expr->args->next) {
        FIXME("Invalid syntax: invalid use of parentheses for arguments\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    call_expr->args = new_unary_expression(ctx, EXPR_BRACKETS, call_expr->args);
    if(!call_expr->args)
        return NULL;
    if(!arguments)
        return call_expr;

    if(arguments->type != EXPR_NOARG) {
        FIXME("Invalid syntax: missing comma\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    call_expr->args->next = arguments->next;
    return call_expr;
}

static expression_t *new_new_expression(parser_ctx_t *ctx, const WCHAR *identifier)
{
    string_expression_t *expr;

    expr = new_expression(ctx, EXPR_NEW, sizeof(*expr));
    if(!expr)
        return NULL;

    expr->value = identifier;
    return &expr->expr;
}

static void *new_statement(parser_ctx_t *ctx, statement_type_t type, size_t size, unsigned loc)
{
    statement_t *stat;

    stat = parser_alloc(ctx, size ? size : sizeof(*stat));
    if(stat) {
        stat->type = type;
        stat->loc = loc;
        stat->next = NULL;
    }

    return stat;
}

static statement_t *new_call_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr)
{
    call_expression_t *call_expr = NULL;
    call_statement_t *stat;

    stat = new_statement(ctx, STAT_CALL, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    switch(expr->type) {
    case EXPR_MEMBER:
        call_expr = new_call_expression(ctx, expr, NULL);
        break;
    case EXPR_CALL:
        call_expr = (call_expression_t*)expr;
        break;
    default:
        FIXME("Unsupported expr type %u\n", expr->type);
        ctx->hres = E_NOTIMPL;
    }
    if(!call_expr)
        return NULL;

    stat->expr = call_expr;
    return &stat->stat;
}

static statement_t *new_assign_statement(parser_ctx_t *ctx, unsigned loc, expression_t *left, expression_t *right)
{
    assign_statement_t *stat;

    stat = new_statement(ctx, STAT_ASSIGN, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->left_expr = left;
    stat->value_expr = right;

    return &stat->stat;
}

static statement_t *new_set_statement(parser_ctx_t *ctx, unsigned loc, expression_t *left, expression_t *right)
{
    assign_statement_t *stat;

    stat = new_statement(ctx, STAT_SET, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->left_expr = left;
    stat->value_expr = right;

    return &stat->stat;
}

static dim_decl_t *new_dim_decl(parser_ctx_t *ctx, const WCHAR *name, BOOL is_array, dim_list_t *dims)
{
    dim_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->is_array = is_array;
    decl->dims = dims;
    decl->next = NULL;
    return decl;
}

static dim_list_t *new_dim(parser_ctx_t *ctx, unsigned val, dim_list_t *next)
{
    dim_list_t *ret;

    ret = parser_alloc(ctx, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->val = val;
    ret->next = next;
    return ret;
}

static statement_t *new_dim_statement(parser_ctx_t *ctx, unsigned loc, dim_decl_t *decls)
{
    dim_statement_t *stat;

    stat = new_statement(ctx, STAT_DIM, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->dim_decls = decls;
    return &stat->stat;
}

static redim_decl_t *new_redim_decl(parser_ctx_t *ctx, const WCHAR *identifier, expression_t *dims)
{
    redim_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->identifier = identifier;
    decl->dims = dims;
    decl->next = NULL;
    return decl;
}

static statement_t *new_redim_statement(parser_ctx_t *ctx, unsigned loc, BOOL preserve, redim_decl_t *decls)
{
    redim_statement_t *stat;

    stat = new_statement(ctx, STAT_REDIM, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->preserve = preserve;
    stat->redim_decls = decls;
    return &stat->stat;
}

static elseif_decl_t *new_elseif_decl(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *stat)
{
    elseif_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->expr = expr;
    decl->stat = stat;
    decl->loc = loc;
    decl->next = NULL;
    return decl;
}

static statement_t *new_while_statement(parser_ctx_t *ctx, unsigned loc, statement_type_t type, expression_t *expr, statement_t *body)
{
    while_statement_t *stat;

    stat = new_statement(ctx, type, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_forto_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, expression_t *from_expr,
        expression_t *to_expr, expression_t *step_expr, statement_t *body)
{
    forto_statement_t *stat;

    stat = new_statement(ctx, STAT_FORTO, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->identifier = identifier;
    stat->from_expr = from_expr;
    stat->to_expr = to_expr;
    stat->step_expr = step_expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_foreach_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, expression_t *group_expr,
        statement_t *body)
{
    foreach_statement_t *stat;

    stat = new_statement(ctx, STAT_FOREACH, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->identifier = identifier;
    stat->group_expr = group_expr;
    stat->body = body;
    return &stat->stat;
}

static statement_t *new_if_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *if_stat, elseif_decl_t *elseif_decl,
        statement_t *else_stat)
{
    if_statement_t *stat;

    stat = new_statement(ctx, STAT_IF, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->if_stat = if_stat;
    stat->elseifs = elseif_decl;
    stat->else_stat = else_stat;
    return &stat->stat;
}

static statement_t *new_select_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, case_clausule_t *case_clausules)
{
    select_statement_t *stat;

    stat = new_statement(ctx, STAT_SELECT, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->case_clausules = case_clausules;
    return &stat->stat;
}

static statement_t *new_with_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *body)
{
    with_statement_t *stat;

    stat = new_statement(ctx, STAT_WITH, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->expr = expr;
    stat->body = body;
    return &stat->stat;
}

static case_clausule_t *new_case_clausule(parser_ctx_t *ctx, expression_t *expr, statement_t *stat, case_clausule_t *next)
{
    case_clausule_t *ret;

    ret = parser_alloc(ctx, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->expr = expr;
    ret->stat = stat;
    ret->next = next;
    return ret;
}

static statement_t *new_onerror_statement(parser_ctx_t *ctx, unsigned loc, BOOL resume_next)
{
    onerror_statement_t *stat;

    stat = new_statement(ctx, STAT_ONERROR, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->resume_next = resume_next;
    return &stat->stat;
}

static arg_decl_t *new_argument_decl(parser_ctx_t *ctx, const WCHAR *name, BOOL by_ref)
{
    arg_decl_t *arg_decl;

    arg_decl = parser_alloc(ctx, sizeof(*arg_decl));
    if(!arg_decl)
        return NULL;

    arg_decl->name = name;
    arg_decl->by_ref = by_ref;
    arg_decl->next = NULL;
    return arg_decl;
}

static function_decl_t *new_function_decl(parser_ctx_t *ctx, const WCHAR *name, function_type_t type,
        unsigned storage_flags, arg_decl_t *arg_decl, statement_t *body)
{
    function_decl_t *decl;
    BOOL is_default = FALSE;

    if(storage_flags & STORAGE_IS_DEFAULT) {
        if(type == FUNC_PROPGET || type == FUNC_FUNCTION || type == FUNC_SUB) {
            is_default = TRUE;
        }else {
            FIXME("Invalid default property\n");
            ctx->hres = E_FAIL;
            return NULL;
        }
    }

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->type = type;
    decl->is_public = !(storage_flags & STORAGE_IS_PRIVATE);
    decl->is_default = is_default;
    decl->args = arg_decl;
    decl->body = body;
    decl->next = NULL;
    decl->next_prop_func = NULL;
    return decl;
}

static statement_t *new_function_statement(parser_ctx_t *ctx, unsigned loc, function_decl_t *decl)
{
    function_statement_t *stat;

    stat = new_statement(ctx, STAT_FUNC, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->func_decl = decl;
    return &stat->stat;
}

static class_decl_t *new_class_decl(parser_ctx_t *ctx)
{
    class_decl_t *class_decl;

    class_decl = parser_alloc(ctx, sizeof(*class_decl));
    if(!class_decl)
        return NULL;

    class_decl->funcs = NULL;
    class_decl->props = NULL;
    class_decl->next = NULL;
    return class_decl;
}

static class_decl_t *add_class_function(parser_ctx_t *ctx, class_decl_t *class_decl, function_decl_t *decl)
{
    function_decl_t *iter;

    for(iter = class_decl->funcs; iter; iter = iter->next) {
        if(!wcsicmp(iter->name, decl->name)) {
            if(decl->type == FUNC_SUB || decl->type == FUNC_FUNCTION) {
                FIXME("Redefinition of %s::%s\n", debugstr_w(class_decl->name), debugstr_w(decl->name));
                ctx->hres = E_FAIL;
                return NULL;
            }

            while(1) {
                if(iter->type == decl->type) {
                    FIXME("Redefinition of %s::%s\n", debugstr_w(class_decl->name), debugstr_w(decl->name));
                    ctx->hres = E_FAIL;
                    return NULL;
                }
                if(!iter->next_prop_func)
                    break;
                iter = iter->next_prop_func;
            }

            iter->next_prop_func = decl;
            return class_decl;
        }
    }

    decl->next = class_decl->funcs;
    class_decl->funcs = decl;
    return class_decl;
}

static class_decl_t *add_dim_prop(parser_ctx_t *ctx, class_decl_t *class_decl, dim_decl_t *dim_decl, unsigned storage_flags)
{
    if(storage_flags & STORAGE_IS_DEFAULT) {
        FIXME("variant prop can't be default value\n");
        ctx->hres = E_FAIL;
        return NULL;
    }

    dim_decl->is_public = !(storage_flags & STORAGE_IS_PRIVATE);
    dim_decl->next = class_decl->props;
    class_decl->props = dim_decl;
    return class_decl;
}

static const_decl_t *new_const_decl(parser_ctx_t *ctx, const WCHAR *name, expression_t *expr)
{
    const_decl_t *decl;

    decl = parser_alloc(ctx, sizeof(*decl));
    if(!decl)
        return NULL;

    decl->name = name;
    decl->value_expr = expr;
    decl->next = NULL;
    return decl;
}

static statement_t *new_const_statement(parser_ctx_t *ctx, unsigned loc, const_decl_t *decls)
{
    const_statement_t *stat;

    stat = new_statement(ctx, STAT_CONST, sizeof(*stat), loc);
    if(!stat)
        return NULL;

    stat->decls = decls;
    return &stat->stat;
}

static statement_t *link_statements(statement_t *head, statement_t *tail)
{
    statement_t *iter;

    for(iter = head; iter->next; iter = iter->next);
    iter->next = tail;

    return head;
}

void *parser_alloc(parser_ctx_t *ctx, size_t size)
{
    void *ret;

    ret = heap_pool_alloc(&ctx->heap, size);
    if(!ret)
        ctx->hres = E_OUTOFMEMORY;
    return ret;
}

HRESULT parse_script(parser_ctx_t *ctx, const WCHAR *code, const WCHAR *delimiter, DWORD flags)
{
    ctx->code = ctx->ptr = code;
    ctx->end = ctx->code + lstrlenW(ctx->code);

    heap_pool_init(&ctx->heap);

    ctx->hres = S_OK;
    ctx->error_loc = -1;
    ctx->last_token = tNL;
    ctx->last_nl = 0;
    ctx->stats = ctx->stats_tail = NULL;
    ctx->class_decls = NULL;
    ctx->option_explicit = FALSE;
    ctx->is_html = delimiter && !wcsicmp(delimiter, L"</script>");

    if(flags & SCRIPTTEXT_ISEXPRESSION)
        ctx->last_token = tEXPRESSION;

    parser_parse(ctx);

    return ctx->hres;
}

void parser_release(parser_ctx_t *ctx)
{
    heap_pool_free(&ctx->heap);
}
