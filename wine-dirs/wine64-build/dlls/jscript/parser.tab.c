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
#line 19 "../wine-source/dlls/jscript/parser.y" /* yacc.c:339  */


#include "jscript.h"
#include "engine.h"
#include "parser.h"

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(jscript);

static int parser_error(unsigned*,parser_ctx_t*,const char*);
static void set_error(parser_ctx_t*,unsigned,HRESULT);
static BOOL explicit_error(parser_ctx_t*,void*,WCHAR);
static BOOL allow_auto_semicolon(parser_ctx_t*);

static literal_t *new_string_literal(parser_ctx_t*,jsstr_t*);
static literal_t *new_null_literal(parser_ctx_t*);

typedef struct _property_list_t {
    property_definition_t *head;
    property_definition_t *tail;
} property_list_t;

static property_definition_t *new_property_definition(parser_ctx_t *ctx, property_definition_type_t,
                                                      literal_t *name, expression_t *value);
static property_list_t *new_property_list(parser_ctx_t*,property_definition_t*);
static property_list_t *property_list_add(parser_ctx_t*,property_list_t*,property_definition_t*);

typedef struct _element_list_t {
    array_element_t *head;
    array_element_t *tail;
} element_list_t;

static element_list_t *new_element_list(parser_ctx_t*,int,expression_t*);
static element_list_t *element_list_add(parser_ctx_t*,element_list_t*,int,expression_t*);

typedef struct _argument_list_t {
    argument_t *head;
    argument_t *tail;
} argument_list_t;

static argument_list_t *new_argument_list(parser_ctx_t*,expression_t*);
static argument_list_t *argument_list_add(parser_ctx_t*,argument_list_t*,expression_t*);

typedef struct _case_list_t {
    case_clausule_t *head;
    case_clausule_t *tail;
} case_list_t;

typedef struct _statement_list_t {
   statement_t *head;
   statement_t *tail;
} statement_list_t;

static catch_block_t *new_catch_block(parser_ctx_t*,const WCHAR*,statement_t*);
static case_clausule_t *new_case_clausule(parser_ctx_t*,unsigned,expression_t*,statement_list_t*);
static case_list_t *new_case_list(parser_ctx_t*,case_clausule_t*);
static case_list_t *case_list_add(parser_ctx_t*,case_list_t*,case_clausule_t*);
static case_clausule_t *new_case_block(parser_ctx_t*,case_list_t*,case_clausule_t*,case_list_t*);

typedef struct _variable_list_t {
    variable_declaration_t *head;
    variable_declaration_t *tail;
} variable_list_t;

static variable_declaration_t *new_variable_declaration(parser_ctx_t*,const WCHAR*,expression_t*);
static variable_list_t *new_variable_list(parser_ctx_t*,variable_declaration_t*);
static variable_list_t *variable_list_add(parser_ctx_t*,variable_list_t*,variable_declaration_t*);

static void *new_statement(parser_ctx_t*,statement_type_t,size_t,unsigned);
static statement_t *new_block_statement(parser_ctx_t*,unsigned,statement_list_t*);
static statement_t *new_var_statement(parser_ctx_t*,BOOL,BOOL,unsigned,variable_list_t*);
static statement_t *new_expression_statement(parser_ctx_t*,unsigned,expression_t*);
static statement_t *new_if_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*,statement_t*);
static statement_t *new_while_statement(parser_ctx_t*,unsigned,BOOL,expression_t*,statement_t*);
static statement_t *new_for_statement(parser_ctx_t*,unsigned,variable_declaration_t*,expression_t*,expression_t*,unsigned,
                                      expression_t*,unsigned,statement_t*);
static statement_t *new_forin_statement(parser_ctx_t*,unsigned,variable_declaration_t*,expression_t*,expression_t*,statement_t*);
static statement_t *new_continue_statement(parser_ctx_t*,unsigned,const WCHAR*);
static statement_t *new_break_statement(parser_ctx_t*,unsigned,const WCHAR*);
static statement_t *new_return_statement(parser_ctx_t*,unsigned,expression_t*);
static statement_t *new_with_statement(parser_ctx_t*,unsigned,expression_t*,statement_t*);
static statement_t *new_labelled_statement(parser_ctx_t*,unsigned,const WCHAR*,statement_t*);
static statement_t *new_switch_statement(parser_ctx_t*,unsigned,expression_t*,case_clausule_t*);
static statement_t *new_throw_statement(parser_ctx_t*,unsigned,expression_t*);
static statement_t *new_try_statement(parser_ctx_t*,statement_t*,catch_block_t*,statement_t*,unsigned);

static statement_list_t *new_statement_list(parser_ctx_t*,statement_t*);
static statement_list_t *statement_list_add(statement_list_t*,statement_t*);

typedef struct _parameter_list_t {
    parameter_t *head;
    parameter_t *tail;
} parameter_list_t;

static parameter_list_t *new_parameter_list(parser_ctx_t*,const WCHAR*);
static parameter_list_t *parameter_list_add(parser_ctx_t*,parameter_list_t*,const WCHAR*);

static void *new_expression(parser_ctx_t *ctx,expression_type_t,size_t);
static expression_t *new_function_expression(parser_ctx_t*,const WCHAR*,parameter_list_t*,
        statement_list_t*,const WCHAR*,const WCHAR*,DWORD);
static expression_t *new_binary_expression(parser_ctx_t*,expression_type_t,expression_t*,expression_t*);
static expression_t *new_unary_expression(parser_ctx_t*,expression_type_t,expression_t*);
static expression_t *new_conditional_expression(parser_ctx_t*,expression_t*,expression_t*,expression_t*);
static expression_t *new_member_expression(parser_ctx_t*,expression_t*,const WCHAR*);
static expression_t *new_new_expression(parser_ctx_t*,expression_t*,argument_list_t*);
static expression_t *new_call_expression(parser_ctx_t*,expression_t*,argument_list_t*);
static expression_t *new_identifier_expression(parser_ctx_t*,const WCHAR*);
static expression_t *new_literal_expression(parser_ctx_t*,literal_t*);
static expression_t *new_array_literal_expression(parser_ctx_t*,element_list_t*,int);
static expression_t *new_prop_and_value_expression(parser_ctx_t*,property_list_t*);

#define PARSER_LTYPE unsigned
#define YYLLOC_DEFAULT(Cur, Rhs, N) Cur = YYRHSLOC((Rhs), (N) ? 1 : 0)


#line 191 "dlls/jscript/parser.tab.c" /* yacc.c:339  */

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
    kBREAK = 258,
    kCASE = 259,
    kCATCH = 260,
    kCONST = 261,
    kCONTINUE = 262,
    kDEFAULT = 263,
    kDELETE = 264,
    kDO = 265,
    kELSE = 266,
    kFUNCTION = 267,
    kIF = 268,
    kFINALLY = 269,
    kFOR = 270,
    kGET = 271,
    kIN = 272,
    kLET = 273,
    kSET = 274,
    kINSTANCEOF = 275,
    kNEW = 276,
    kNULL = 277,
    kRETURN = 278,
    kSWITCH = 279,
    kTHIS = 280,
    kTHROW = 281,
    kTRUE = 282,
    kFALSE = 283,
    kTRY = 284,
    kTYPEOF = 285,
    kVAR = 286,
    kVOID = 287,
    kWHILE = 288,
    kWITH = 289,
    tANDAND = 290,
    tOROR = 291,
    tINC = 292,
    tDEC = 293,
    tHTMLCOMMENT = 294,
    kDIVEQ = 295,
    kDCOL = 296,
    tIdentifier = 297,
    tAssignOper = 298,
    tEqOper = 299,
    tShiftOper = 300,
    tRelOper = 301,
    tNumericLiteral = 302,
    tBooleanLiteral = 303,
    tStringLiteral = 304,
    LOWER_THAN_ELSE = 305
  };
#endif

/* Value type.  */
#if ! defined PARSER_STYPE && ! defined PARSER_STYPE_IS_DECLARED

union PARSER_STYPE
{
#line 142 "../wine-source/dlls/jscript/parser.y" /* yacc.c:355  */

    int                     ival;
    jsstr_t                 *str;
    literal_t               *literal;
    struct _argument_list_t *argument_list;
    case_clausule_t         *case_clausule;
    struct _case_list_t     *case_list;
    catch_block_t           *catch_block;
    struct _element_list_t  *element_list;
    expression_t            *expr;
    const WCHAR            *identifier;
    struct _parameter_list_t *parameter_list;
    struct _property_list_t *property_list;
    property_definition_t   *property_definition;
    statement_t             *statement;
    struct _statement_list_t *statement_list;
    struct _variable_list_t *variable_list;
    variable_declaration_t  *variable_declaration;

#line 307 "dlls/jscript/parser.tab.c" /* yacc.c:355  */
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

#line 337 "dlls/jscript/parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  174
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  265
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,    65,    60,     2,
      71,    72,    63,    61,    53,    62,    70,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    55,
       2,    54,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    58,    52,    66,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if PARSER_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   253,   253,   257,   260,   261,   265,   269,   271,   273,
     278,   282,   283,   288,   289,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     311,   315,   316,   320,   321,   326,   327,   331,   332,   336,
     338,   351,   353,   366,   371,   372,   377,   379,   384,   389,
     394,   395,   399,   404,   405,   409,   414,   418,   423,   425,
     430,   432,   435,   437,   434,   441,   443,   440,   446,   448,
     451,   453,   450,   460,   465,   470,   475,   480,   485,   490,
     492,   497,   498,   502,   503,   508,   513,   518,   523,   524,
     525,   530,   535,   539,   540,   543,   544,   548,   549,   554,
     555,   559,   561,   565,   566,   570,   571,   573,   578,   580,
     582,   587,   588,   593,   595,   600,   601,   606,   608,   613,
     614,   619,   621,   626,   627,   632,   634,   639,   640,   645,
     647,   652,   653,   658,   660,   665,   666,   671,   672,   677,
     678,   680,   682,   687,   688,   690,   695,   696,   701,   703,
     705,   710,   711,   713,   715,   720,   721,   723,   724,   726,
     727,   728,   729,   730,   731,   735,   737,   739,   745,   746,
     750,   751,   755,   756,   757,   759,   761,   766,   768,   770,
     772,   777,   778,   782,   783,   788,   789,   790,   791,   792,
     793,   797,   798,   799,   800,   805,   807,   812,   813,   817,
     818,   822,   823,   825,   837,   838,   843,   845,   847,   851,
     856,   857,   858,   862,   863,   867,   868,   880,   881,   882,
     883,   884,   885,   886,   887,   888,   889,   890,   891,   892,
     893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   911,   915,
     916,   917,   918,   919,   921,   926,   927,   928,   931,   932,
     935,   936,   939,   940,   943,   944
};
#endif

#if PARSER_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "kBREAK", "kCASE", "kCATCH", "kCONST",
  "kCONTINUE", "kDEFAULT", "kDELETE", "kDO", "kELSE", "kFUNCTION", "kIF",
  "kFINALLY", "kFOR", "kGET", "kIN", "kLET", "kSET", "kINSTANCEOF", "kNEW",
  "kNULL", "kRETURN", "kSWITCH", "kTHIS", "kTHROW", "kTRUE", "kFALSE",
  "kTRY", "kTYPEOF", "kVAR", "kVOID", "kWHILE", "kWITH", "tANDAND",
  "tOROR", "tINC", "tDEC", "tHTMLCOMMENT", "kDIVEQ", "kDCOL",
  "tIdentifier", "tAssignOper", "tEqOper", "tShiftOper", "tRelOper",
  "tNumericLiteral", "tBooleanLiteral", "tStringLiteral",
  "LOWER_THAN_ELSE", "'{'", "'}'", "','", "'='", "';'", "':'", "'?'",
  "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'!'",
  "'['", "']'", "'.'", "'('", "')'", "$accept", "Script", "ScriptBody",
  "HtmlComment", "FunctionStatementList", "FunctionExpression",
  "FunctionBody", "FormalParameterList", "FormalParameterList_opt",
  "Statement", "Declaration", "StatementListItem", "StatementList",
  "StatementList_opt", "Block", "LexicalDeclaration",
  "LexicalDeclarationNoIn", "VariableStatement", "VariableDeclarationList",
  "VariableDeclarationListNoIn", "VariableDeclaration",
  "VariableDeclarationNoIn", "Initialiser_opt", "Initialiser",
  "InitialiserNoIn_opt", "InitialiserNoIn", "EmptyStatement",
  "ExpressionStatement", "IfStatement", "IterationStatement", "$@1", "$@2",
  "$@3", "$@4", "$@5", "$@6", "ContinueStatement", "BreakStatement",
  "ReturnStatement", "WithStatement", "LabelledStatement",
  "SwitchStatement", "CaseBlock", "CaseClausules_opt", "CaseClausules",
  "CaseClausule", "DefaultClausule", "ThrowStatement", "TryStatement",
  "Catch", "Finally", "Expression_opt", "Expression_err", "Expression",
  "ExpressionNoIn_opt", "ExpressionNoIn", "AssignOper",
  "AssignmentExpression", "AssignmentExpressionNoIn",
  "ConditionalExpression", "ConditionalExpressionNoIn",
  "LogicalORExpression", "LogicalORExpressionNoIn", "LogicalANDExpression",
  "LogicalANDExpressionNoIn", "BitwiseORExpression",
  "BitwiseORExpressionNoIn", "BitwiseXORExpression",
  "BitwiseXORExpressionNoIn", "BitwiseANDExpression",
  "BitwiseANDExpressionNoIn", "EqualityExpression",
  "EqualityExpressionNoIn", "RelationalExpression",
  "RelationalExpressionNoIn", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PostfixExpression",
  "LeftHandSideExpression", "NewExpression", "MemberExpression",
  "CallExpression", "Arguments", "ArgumentList", "PrimaryExpression",
  "ArrayLiteral", "ElementList", "Elision", "Elision_opt", "ObjectLiteral",
  "PropertyNameAndValueList", "PropertyDefinition", "GetterSetterMethod",
  "PropertyName", "Identifier_opt", "IdentifierName",
  "ReservedAsIdentifier", "Literal", "BooleanLiteral", "semicolon_opt",
  "left_bracket", "right_bracket", "semicolon", YY_NULLPTR
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
     305,   123,   125,    44,    61,    59,    58,    63,   124,    94,
      38,    43,    45,    42,    47,    37,   126,    33,    91,    93,
      46,    40,    41
};
# endif

#define YYPACT_NINF -373

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-373)))

#define YYTABLE_NINF -249

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     766,   -32,    71,   -32,  1078,   832,    54,    52,    52,    71,
    1110,  -373,  1078,    52,  -373,  1078,  -373,  -373,    73,  1078,
      71,  1078,    52,    52,  1078,  1078,  -373,    -6,  -373,  -373,
    -373,   568,  -373,  1078,  1078,  -373,  1078,  1078,   -11,  1078,
     141,   134,   237,  -373,  -373,  -373,   766,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,     8,  -373,  -373,   142,   140,   119,   145,
     149,   169,   151,   175,   146,   172,  -373,  -373,   225,  -373,
     242,   246,  -373,  -373,  -373,  -373,  -373,  -373,    75,   168,
      15,  -373,    75,  -373,  1179,  -373,  -373,   194,   195,  -373,
      51,  -373,   197,   499,   883,    15,  -373,   242,    75,   202,
    1078,     8,   634,    68,  -373,    15,  -373,   499,  1078,  -373,
    -373,   832,   161,  -373,  -373,    71,   163,  -373,  1078,   832,
    -373,    18,   103,  -373,   105,  1279,  -373,    71,  1279,  -373,
    1110,   205,   979,   108,   208,  1078,   228,   230,    73,  1078,
      71,  1078,   150,   159,    -6,   247,   253,   339,   700,   207,
    -373,   262,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
      47,   147,  1078,   -15,  -373,  -373,  -373,  -373,  -373,  1078,
    -373,  -373,  1078,  1078,  1078,  1078,  1078,  1078,  1078,  1078,
    1078,  1078,  1078,  1078,  1078,  1078,  1078,  1078,  -373,  -373,
    -373,  -373,  1078,  1078,  1078,  1326,   931,  -373,  1078,  1326,
    -373,  -373,  1078,  -373,  -373,    71,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,    52,   277,   197,  -373,   267,
      33,  -373,    33,   202,   279,   279,   279,  -373,  -373,   270,
    -373,  -373,   144,   215,   266,   269,   265,   282,    31,   175,
     268,  -373,  -373,  -373,    48,  -373,  -373,    52,    73,   315,
    -373,  -373,    33,    48,  -373,  -373,  -373,    52,    52,  -373,
    -373,  1229,  1078,   280,  -373,  -373,  -373,  -373,  -373,  -373,
     140,   274,   119,   145,   149,   169,   151,   175,   175,   175,
     146,   172,   172,  -373,  -373,  -373,  -373,  -373,   157,  -373,
    -373,  -373,   110,   165,  -373,  -373,  -373,   499,    52,    33,
     290,  -373,  -373,   284,   832,   283,   101,  -373,   101,   285,
     319,  1078,   114,  1078,  1078,  1078,  1078,  1078,  1078,  1078,
    1078,  1078,  1078,   499,  1078,  1078,   288,   313,  -373,  -373,
     832,   832,  -373,   197,  -373,  -373,  -373,  -373,   309,  1027,
    1078,  -373,  1078,  -373,  -373,    33,   197,   314,  -373,   766,
     353,  1078,  -373,  -373,   279,  -373,  -373,   114,   499,  -373,
    -373,  -373,  1078,  -373,   261,   215,   311,   266,   269,   265,
     282,    31,   175,   175,    33,  -373,  -373,   366,  -373,    33,
    -373,  -373,    33,  -373,  -373,  -373,  -373,    75,    33,   766,
    -373,   321,  -373,   832,  -373,  -373,  1078,    33,   114,  -373,
    1078,   832,  1078,    19,   366,  -373,    73,   325,  -373,   326,
     329,  -373,  -373,  -373,   832,  1078,   114,  -373,  -373,   109,
     330,  -373,   366,  -373,  -373,   766,   766,  -373,   114,  -373,
      33,  1078,   766,   766,   335,   336,   337,  1078,   832,    33,
    -373,  -373,  -373,  -373,  -373,    33,  -373,   832,   832,  -373,
    -373
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      35,   213,     0,   213,     0,     0,     0,     0,     0,     0,
       0,   249,    93,     0,   185,     0,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   186,   251,   257,
     252,     0,    56,     0,     0,   253,     0,     0,   199,     0,
       0,     5,    18,    31,    32,    33,    36,     3,    15,    30,
      16,    17,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    97,   105,   111,   115,   119,   123,
     127,   131,   135,   139,   146,   148,   151,   155,   165,   168,
     170,   169,   172,   188,   189,   187,   250,   214,     0,    50,
       0,    44,     0,   186,     0,   173,   156,   165,     0,   261,
       0,   260,    13,     0,    99,     0,   171,   170,     0,    94,
       0,     0,     0,     0,   158,     0,   157,     0,     0,   159,
     160,     0,   213,   218,   219,   220,   213,   222,   223,   224,
     225,     0,     0,   227,     0,   230,   232,   234,   238,   233,
     235,   249,    93,     0,   185,   241,   255,   256,   243,   244,
     245,   246,     0,     0,   186,   251,   252,    38,     0,     0,
     204,     0,   210,   216,   161,   162,   163,   164,   197,   191,
       0,   200,     0,     0,     1,     4,     2,    34,   259,     0,
     258,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,   167,
     104,   103,     0,     0,     0,     0,     0,   177,     0,     0,
     178,    74,     0,    48,    51,     0,    40,    73,   217,   220,
     221,   223,   224,   229,   231,   228,   234,   235,   236,   237,
     239,   240,   241,   242,   226,   243,   244,   245,   246,   247,
     248,   215,   212,   211,   201,     0,     0,    13,    11,    14,
       0,    96,     0,    95,     0,     0,     0,    70,    62,   100,
     101,   108,   113,   117,   121,   125,   129,   133,   137,   143,
     165,    39,   176,    75,     0,    87,    38,     0,     0,    88,
      89,    43,     0,     0,    77,   230,   238,     0,     0,    37,
     202,     0,     0,   199,   193,   198,   192,   195,   190,    98,
     116,     0,   120,   124,   128,   132,   136,   142,   141,   140,
     147,   149,   150,   152,   153,   154,   106,   107,     0,   175,
     181,   183,     0,     0,   180,    52,    45,     0,     0,     0,
       0,   263,   262,     0,     0,    53,     0,    46,     0,    65,
      46,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    90,
       0,     0,   207,    13,   208,   203,   205,   206,   200,     0,
       0,   174,     0,   182,   179,     0,    13,     0,    12,    35,
      59,     0,    49,    54,     0,    42,    41,     0,     0,    71,
     265,   264,    93,   102,   165,   118,     0,   122,   126,   130,
     134,   138,   145,   144,     0,   109,   110,    81,    78,     0,
      61,    76,     0,   194,   196,   112,   184,     0,     0,    35,
      10,     0,     6,     0,    55,    47,    93,     0,     0,    63,
       0,     0,     0,     0,    82,    83,     0,     0,    60,     0,
       0,     7,    58,    66,     0,    93,     0,   114,    68,     0,
       0,    79,    81,    84,    91,    35,    35,     8,     0,    69,
       0,    93,    35,    35,     0,     0,     0,    93,     0,     0,
      85,    86,    80,   209,     9,     0,    72,     0,     0,    64,
      67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -373,  -373,  -373,     0,  -372,  -373,  -219,    -3,
    -373,   -39,   -18,     4,   -12,  -373,  -373,  -373,     2,    37,
     176,  -244,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,   -62,  -373,   -40,  -373,  -373,  -373,  -373,
     116,  -312,  -100,    25,  -373,  -373,   322,  -158,  -264,  -373,
    -373,  -373,  -373,   221,    61,   222,    62,   229,    60,   224,
      67,   234,    76,   238,    66,  -103,   235,    81,    74,  -373,
      -1,    -2,     5,  -373,    91,  -373,  -373,  -373,  -373,   129,
     137,  -373,  -373,   143,   148,   -63,    27,  -140,  -373,  -373,
    -373,   -49,   124,    89,  -361
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    40,    41,   176,   420,    95,   421,   249,   250,    43,
      44,    45,    46,   422,    48,    49,   257,    50,    90,   336,
      91,   337,   213,   214,   382,   383,    51,    52,    53,    54,
     342,   446,   387,   458,   341,   428,    55,    56,    57,    58,
      59,    60,   408,   433,   434,   435,   452,    61,    62,   279,
     280,   108,   252,    63,   258,   259,   355,    64,   260,    65,
     261,    66,   262,    67,   263,    68,   264,    69,   265,    70,
     266,    71,   267,    72,   268,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   207,   322,    82,    83,   170,   171,
     172,    84,   159,   160,   362,   161,    88,   162,   163,    85,
      86,   181,   102,   333,   392
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   269,    98,    97,    47,    42,   113,   177,   106,   178,
      87,   105,   340,   158,   297,   107,   178,   282,    97,    99,
      97,   299,   115,    97,    97,   301,   426,   450,   329,   389,
      92,    42,    97,    97,   331,    97,    97,   109,   179,   211,
     111,   216,   168,   217,   316,   317,    42,   440,   321,   331,
     121,   351,    99,    99,   325,    99,   271,   298,   169,   273,
     100,   179,   275,   180,   173,   319,   281,   445,   215,   324,
     180,   451,   287,   277,  -229,   288,   178,   352,    96,   393,
     429,   396,   278,   465,   466,   461,   307,   308,   309,   101,
     405,   406,   246,   114,   158,   116,   100,   467,   119,   120,
     293,   179,   178,   270,    99,   332,    99,   164,   165,    99,
     166,   167,    42,    89,   443,   390,   294,   424,   284,   177,
     332,    42,   101,   101,   112,   101,    98,    97,   253,    42,
     180,   103,   104,   460,   367,   274,   113,   110,   106,   105,
     425,   174,   253,   283,   412,   107,   117,   118,    97,   469,
      97,    99,   115,    92,   384,   475,   180,   418,    42,  -231,
      99,  -228,   179,   372,  -239,   462,   447,   109,   189,   391,
     111,   190,   210,   175,   101,   184,   101,   185,   182,   101,
     344,    97,   373,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,   191,   272,   183,
     295,   345,    96,    87,   186,    87,  -247,   193,   194,   187,
     179,   414,   415,   188,   416,  -248,   296,  -217,   179,  -221,
     192,   101,   212,   114,   247,   116,   371,   375,   245,   318,
     101,   198,   199,   323,   374,   195,   196,   197,  -173,   248,
     269,   269,   269,   269,   269,   269,   269,   269,   402,   403,
     346,   269,   269,   404,  -173,   179,   103,  -173,   104,   290,
     291,  -236,   198,   199,  -240,   200,   358,   110,   201,   313,
     314,   315,  -173,  -173,   311,   312,   117,   118,   269,   202,
    -173,  -173,  -173,  -173,  -242,   353,  -226,   385,   427,   386,
    -173,  -173,   338,   339,  -173,  -173,  -173,  -173,   198,   199,
    -173,   200,  -173,  -212,   201,   198,   199,  -173,   200,  -211,
     204,   201,   205,   206,   208,   354,   209,   206,   292,   328,
     330,   335,   354,   343,   347,   349,   350,   269,   348,   278,
     370,   380,   378,   168,    42,   379,   388,   381,   384,   407,
    -201,   334,   394,    97,   394,    97,    97,    97,    97,    97,
      97,    97,   253,   394,   394,   409,  -201,   410,   411,  -201,
      42,    42,   295,   356,   423,   419,   109,   430,   438,   327,
     432,   360,   361,   441,  -201,  -201,   455,   456,   253,    42,
     394,   457,  -201,  -201,  -201,  -201,   463,   472,   473,   474,
     464,   326,  -201,  -201,   453,   359,  -201,  -201,  -201,  -201,
     203,   357,  -201,   300,  -201,   395,   302,   398,   397,  -201,
     304,   363,   363,   253,   303,   399,   401,   109,   377,    42,
     442,   305,   368,    42,   454,   400,   306,   310,   448,   394,
     369,    42,     0,     0,   366,     0,   364,     0,     0,     0,
       0,   459,     0,     0,    42,     0,     0,     0,     0,     0,
       0,   109,   376,     0,     0,    42,    42,   449,     0,     0,
       0,     0,    42,    42,   417,   476,   470,   471,    42,     0,
     109,     0,     0,     0,   479,   480,     0,    42,    42,     0,
       0,     0,     0,     0,     0,     0,   109,     0,     0,     0,
       0,     0,   109,   431,     0,     0,     0,     0,   436,     0,
     251,   437,     0,     0,     0,     0,     0,   439,     4,     0,
       0,     6,     0,     0,     0,     0,   444,     0,     0,     0,
      10,    11,     0,     0,    14,     0,    16,    17,     0,    19,
       0,    21,     0,     0,     0,     0,    24,    25,     0,    26,
       0,    93,     0,     0,     0,     0,    28,    29,    30,   468,
      94,     0,     0,     0,     0,     0,     0,     0,   477,     0,
      33,    34,     0,    35,   478,    36,    37,    38,     0,     0,
      39,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,    24,    25,     0,    26,     0,
     154,     0,     0,     0,     0,   155,    29,   156,     0,    31,
     157,     0,     0,    32,     0,     0,     0,     0,     0,    33,
      34,     0,    35,     0,    36,    37,    38,     1,     0,    39,
       2,     3,     0,     4,     5,     0,     6,     7,     0,     8,
       0,     0,     9,     0,     0,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,    25,     0,    26,     0,    27,     0,     0,     0,
       0,    28,    29,    30,     0,    31,   276,     0,     0,    32,
       0,     0,     0,     0,     0,    33,    34,     0,    35,     0,
      36,    37,    38,     1,     0,    39,     2,     3,     0,     4,
       5,     0,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,    25,     0,
      26,     0,    27,     0,     0,     0,     0,    28,    29,    30,
       0,    31,   289,     0,     0,    32,     0,     0,     0,     0,
       0,    33,    34,     0,    35,     0,    36,    37,    38,     1,
       0,    39,     2,     3,     0,     4,     5,     0,     6,     7,
       0,     8,     0,     0,     9,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,    25,     0,    26,     0,    27,     0,
       0,     0,     0,    28,    29,    30,     0,    31,     0,     0,
       0,    32,     0,     0,     0,     0,     0,    33,    34,     0,
      35,     0,    36,    37,    38,     1,     0,    39,     0,     3,
       0,     4,     5,     0,     6,     7,     0,     8,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
      25,     0,    26,     0,    27,     0,     0,     0,     0,    28,
      29,    30,     0,    31,     0,     0,     0,    32,     0,   254,
       0,     0,     4,    33,    34,     6,    35,     0,    36,    37,
      38,   255,     0,    39,    10,    11,     0,     0,    14,     0,
      16,    17,     0,    19,   256,    21,     0,     0,     0,     0,
      24,    25,     0,    26,     0,    93,     0,     0,     0,     0,
      28,    29,    30,     0,    94,     0,     0,     0,     0,     0,
       4,     0,     0,     6,    33,    34,     0,    35,     0,    36,
      37,    38,    10,    11,    39,     0,    14,     0,    16,    17,
       0,    19,     0,    21,     0,     0,     0,     0,    24,    25,
       0,    26,     0,    93,     0,     0,     0,     0,    28,    29,
      30,     0,    94,     0,     0,     0,     0,     0,     4,     0,
       0,     6,    33,    34,     0,    35,     0,    36,    37,    38,
      10,    11,    39,   320,    14,     0,    16,    17,     0,    19,
       0,    21,     0,     0,     0,     0,    24,    25,     0,    26,
       0,    93,     0,     0,     0,     0,    28,    29,    30,     0,
      94,     0,     0,     0,     0,  -237,     4,     0,     0,     6,
      33,    34,     0,    35,     0,    36,    37,    38,    10,    11,
      39,     0,    14,     0,    16,    17,     0,    19,     0,    21,
       0,     0,     0,     0,    24,    25,     0,    26,     0,    93,
       0,     0,     0,     0,    28,    29,    30,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     4,    33,    34,
       6,    35,     0,    36,    37,    38,   413,     0,    39,    10,
      11,     0,     0,    14,     0,    16,    17,     0,    19,     0,
      21,     0,     0,     0,     0,    24,    25,     0,    26,     0,
      93,     0,     6,     0,     0,    28,    29,    30,     0,    94,
       0,    10,    11,     0,     0,    14,     0,    16,    17,    33,
      34,     0,    35,     0,    36,    37,    38,     0,     0,    39,
      26,     0,    93,     0,     0,     0,     0,    28,    29,    30,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    38,     0,
       0,    39,   218,   123,   124,   219,   220,   127,   221,   222,
     130,   223,   224,   133,   225,   135,   136,   226,   138,   139,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,   242,     0,   243,     0,
       0,   244,   218,   123,   124,   219,   220,   127,   221,   222,
     130,   223,   224,   133,   225,   135,   136,   226,   138,   139,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,   242,     0,   243,     0,
       0,   365,   218,   123,   124,   219,   220,   127,   221,   222,
     130,   223,   224,   133,   225,   285,   136,   226,   286,   139,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,     0,   242,     0,   243,   218,
     123,   124,   219,   220,   127,   221,   222,   130,   223,   224,
     133,   225,   285,   136,   226,   286,   139,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,   241
};

static const yytype_int16 yycheck[] =
{
       0,   104,     5,     4,     0,     5,    18,    46,    10,     1,
      42,     9,   256,    31,   172,    10,     1,   117,    19,     1,
      21,   179,    20,    24,    25,   183,   387,     8,   247,   341,
       3,    31,    33,    34,     1,    36,    37,    12,    53,    88,
      15,    90,    53,    92,   202,   203,    46,   419,   206,     1,
      56,    20,     1,     1,   212,     1,   105,    72,    69,   108,
      42,    53,   111,    55,    39,   205,   115,   428,    53,   209,
      55,    52,   135,     5,    56,   138,     1,    46,     4,   343,
     392,   345,    14,   455,   456,   446,   189,   190,   191,    71,
     354,   355,    41,    19,   112,    21,    42,   458,    24,    25,
      53,    53,     1,   104,     1,    72,     1,    33,    34,     1,
      36,    37,   112,    42,   426,     1,    69,   381,   121,   158,
      72,   121,    71,    71,    51,    71,   129,   128,   103,   129,
      55,     7,     8,   445,   292,   110,   148,    13,   140,   137,
     384,     0,   117,   118,   363,   140,    22,    23,   149,   461,
     151,     1,   150,   126,    53,   467,    55,   376,   158,    56,
       1,    56,    53,    53,    56,    56,   430,   142,    17,    55,
     145,    20,    81,    39,    71,    35,    71,    58,    36,    71,
      36,   182,    72,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    46,   107,    57,
      53,    57,   128,    42,    59,    42,    56,    61,    62,    60,
      53,   369,   370,    44,   372,    56,    69,    56,    53,    56,
      45,    71,    54,   149,   100,   151,    69,   327,    33,   204,
      71,    37,    38,   208,    69,    63,    64,    65,     1,    42,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      35,   354,   355,   353,    17,    53,   132,    20,   134,    52,
      53,    56,    37,    38,    56,    40,   278,   143,    43,   195,
     196,   197,    35,    36,   193,   194,   152,   153,   381,    54,
      43,    44,    45,    46,    56,    17,    56,   336,   388,   338,
      53,    54,   255,   256,    57,    58,    59,    60,    37,    38,
      63,    40,    65,    56,    43,    37,    38,    70,    40,    56,
      68,    43,    70,    71,    68,    54,    70,    71,    56,    42,
      53,    42,    54,    53,    58,    60,    44,   430,    59,    14,
      56,   334,    42,    53,   334,    51,    17,    54,    53,    51,
       1,   252,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   327,   354,   355,    42,    17,   360,   361,    20,
     360,   361,    53,   274,    11,    51,   341,    56,   417,   245,
       4,   282,   283,    52,    35,    36,    51,    51,   353,   379,
     381,    52,    43,    44,    45,    46,    56,    52,    52,    52,
     452,   215,    53,    54,   434,   279,    57,    58,    59,    60,
      78,   277,    63,   182,    65,   344,   184,   347,   346,    70,
     186,   287,   288,   388,   185,   348,   350,   392,   329,   419,
     423,   187,   293,   423,   436,   349,   188,   192,   431,   430,
     293,   431,    -1,    -1,   291,    -1,   288,    -1,    -1,    -1,
      -1,   444,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,
      -1,   426,   328,    -1,    -1,   455,   456,   432,    -1,    -1,
      -1,    -1,   462,   463,   375,   468,   462,   463,   468,    -1,
     445,    -1,    -1,    -1,   477,   478,    -1,   477,   478,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,
      -1,    -1,   467,   404,    -1,    -1,    -1,    -1,   409,    -1,
       1,   412,    -1,    -1,    -1,    -1,    -1,   418,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    47,    48,    49,   460,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,
      61,    62,    -1,    64,   475,    66,    67,    68,    -1,    -1,
      71,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    64,    -1,    66,    67,    68,     3,    -1,    71,
       6,     7,    -1,     9,    10,    -1,    12,    13,    -1,    15,
      -1,    -1,    18,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    37,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    64,    -1,
      66,    67,    68,     3,    -1,    71,     6,     7,    -1,     9,
      10,    -1,    12,    13,    -1,    15,    -1,    -1,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    64,    -1,    66,    67,    68,     3,
      -1,    71,     6,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      64,    -1,    66,    67,    68,     3,    -1,    71,    -1,     7,
      -1,     9,    10,    -1,    12,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    37,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    55,    -1,     6,
      -1,    -1,     9,    61,    62,    12,    64,    -1,    66,    67,
      68,    18,    -1,    71,    21,    22,    -1,    -1,    25,    -1,
      27,    28,    -1,    30,    31,    32,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    61,    62,    -1,    64,    -1,    66,
      67,    68,    21,    22,    71,    -1,    25,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    61,    62,    -1,    64,    -1,    66,    67,    68,
      21,    22,    71,    72,    25,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    56,     9,    -1,    -1,    12,
      61,    62,    -1,    64,    -1,    66,    67,    68,    21,    22,
      71,    -1,    25,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    61,    62,
      12,    64,    -1,    66,    67,    68,    69,    -1,    71,    21,
      22,    -1,    -1,    25,    -1,    27,    28,    -1,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    -1,    12,    -1,    -1,    47,    48,    49,    -1,    51,
      -1,    21,    22,    -1,    -1,    25,    -1,    27,    28,    61,
      62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      40,    -1,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    -1,
      -1,    71,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,
      -1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,
      -1,    52,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    49,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     9,    10,    12,    13,    15,    18,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    37,    38,    40,    42,    47,    48,
      49,    51,    55,    61,    62,    64,    66,    67,    68,    71,
      74,    75,    78,    82,    83,    84,    85,    86,    87,    88,
      90,    99,   100,   101,   102,   109,   110,   111,   112,   113,
     114,   120,   121,   126,   130,   132,   134,   136,   138,   140,
     142,   144,   146,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   159,   160,   164,   172,   173,    42,   169,    42,
      91,    93,   169,    42,    51,    78,   151,   153,    82,     1,
      42,    71,   175,   175,   175,    91,   154,   155,   124,   126,
     175,   126,    51,    87,   151,    91,   151,   175,   175,   151,
     151,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    42,    47,    49,    52,    85,   165,
     166,   168,   170,   171,   151,   151,   151,   151,    53,    69,
     161,   162,   163,   126,     0,    39,    76,    84,     1,    53,
      55,   174,    36,    57,    35,    58,    59,    60,    44,    17,
      20,    46,    45,    61,    62,    63,    64,    65,    37,    38,
      40,    43,    54,   129,    68,    70,    71,   157,    68,    70,
     157,   174,    54,    95,    96,    53,   174,   174,     3,     6,
       7,     9,    10,    12,    13,    15,    18,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    42,    47,    49,    52,    33,    41,   175,    42,    80,
      81,     1,   125,   126,     6,    18,    31,    89,   127,   128,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   148,
     153,   174,   157,   174,   126,   174,    52,     5,    14,   122,
     123,   174,   125,   126,    82,    16,    19,   168,   168,    52,
      52,    53,    56,    53,    69,    53,    69,   130,    72,   130,
     136,   130,   138,   140,   142,   144,   146,   148,   148,   148,
     149,   150,   150,   151,   151,   151,   130,   130,   126,   170,
      72,   130,   158,   126,   170,   130,    93,   175,    42,    81,
      53,     1,    72,   176,   176,    42,    92,    94,    92,    92,
      94,   107,   103,    53,    36,    57,    35,    58,    59,    60,
      44,    20,    46,    17,    54,   129,   176,   175,    87,   123,
     176,   176,   167,   175,   167,    52,   166,   130,   162,   163,
      56,    69,    53,    72,    69,   125,   175,   176,    42,    51,
      82,    54,    97,    98,    53,   174,   174,   105,    17,   124,
       1,    55,   177,   131,   153,   137,   131,   139,   141,   143,
     145,   147,   148,   148,   125,   131,   131,    51,   115,    42,
      82,    82,    81,    69,   130,   130,   130,   176,    81,    51,
      77,    79,    86,    11,   131,    94,   177,   125,   108,   124,
      56,   176,     4,   116,   117,   118,   176,   176,   174,   176,
      79,    52,    82,   124,   176,   177,   104,   131,    82,   126,
       8,    52,   119,   118,    87,    51,    51,    52,   106,    82,
     124,   177,    56,    56,   116,    79,    79,   177,   176,   124,
      86,    86,    52,    52,    52,   124,    82,   176,   176,    82,
      82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    76,    76,    77,    78,    78,    78,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    91,    91,    92,    92,    93,    94,
      95,    95,    96,    97,    97,    98,    99,   100,   101,   101,
     102,   102,   103,   104,   102,   105,   106,   102,   102,   102,
     107,   108,   102,   109,   110,   111,   112,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   119,   120,   121,   121,
     121,   122,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   146,   147,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   160,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   164,   165,   165,   166,   166,   166,   167,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     1,     7,     8,    10,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     1,     3,     2,     3,
       3,     3,     3,     3,     1,     3,     1,     3,     2,     2,
       0,     1,     2,     0,     1,     2,     1,     2,     7,     5,
       7,     5,     0,     0,    11,     0,     0,    12,     7,     8,
       0,     0,    10,     3,     3,     3,     5,     3,     5,     3,
       5,     0,     1,     1,     2,     4,     3,     3,     3,     3,
       4,     5,     2,     0,     1,     1,     1,     1,     3,     0,
       1,     1,     3,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     5,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     1,     1,
       1,     2,     1,     1,     4,     3,     3,     2,     2,     4,
       3,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       3,     2,     3,     3,     5,     2,     4,     1,     2,     0,
       1,     2,     3,     4,     1,     3,     3,     3,     3,     6,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
        case 2:
#line 253 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { ctx->source = (yyvsp[-1].statement_list) ? (yyvsp[-1].statement_list)->head : NULL; }
#line 2072 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 257 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = (yyvsp[0].statement_list); }
#line 2078 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 265 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = (yyvsp[0].statement_list); }
#line 2084 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 270 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_function_expression(ctx, NULL, (yyvsp[-4].parameter_list), (yyvsp[-1].statement_list), NULL, ctx->begin + (yylsp[-6]), (yylsp[0]) - (yylsp[-6]) + 1); }
#line 2090 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 272 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_function_expression(ctx, (yyvsp[-6].identifier), (yyvsp[-4].parameter_list), (yyvsp[-1].statement_list), NULL, ctx->begin + (yylsp[-7]), (yylsp[0]) - (yylsp[-7]) + 1); }
#line 2096 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 274 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_function_expression(ctx, (yyvsp[-6].identifier), (yyvsp[-4].parameter_list), (yyvsp[-1].statement_list), (yyvsp[-8].identifier), ctx->begin + (yylsp[-9]), (yylsp[0]) - (yylsp[-9]) + 1); }
#line 2102 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 278 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = (yyvsp[0].statement_list); }
#line 2108 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 282 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = new_parameter_list(ctx, (yyvsp[0].identifier)); }
#line 2114 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 284 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = parameter_list_add(ctx, (yyvsp[-2].parameter_list), (yyvsp[0].identifier)); }
#line 2120 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 288 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = NULL; }
#line 2126 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 289 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.parameter_list) = (yyvsp[0].parameter_list); }
#line 2132 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 293 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2138 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 294 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2144 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 295 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2150 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 296 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_expression_statement(ctx, (yyloc), (yyvsp[0].expr)); }
#line 2156 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 297 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2162 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 298 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2168 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 299 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2174 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 300 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2180 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 301 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2186 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 302 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2192 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 303 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2198 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 304 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2204 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 305 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2210 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 306 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2216 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 307 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2222 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 311 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2228 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 315 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2234 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 316 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 2240 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 320 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = new_statement_list(ctx, (yyvsp[0].statement)); }
#line 2246 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = statement_list_add((yyvsp[-1].statement_list), (yyvsp[0].statement)); }
#line 2252 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 326 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = NULL; }
#line 2258 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 327 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement_list) = (yyvsp[0].statement_list); }
#line 2264 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 331 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_block_statement(ctx, (yylsp[-1]), (yyvsp[-1].statement_list)); }
#line 2270 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 332 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_block_statement(ctx, (yyloc), NULL); }
#line 2276 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 337 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_var_statement(ctx, TRUE, FALSE, (yyloc), (yyvsp[-1].variable_list)); }
#line 2282 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 339 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    {
                                    if(ctx->script->version < SCRIPTLANGUAGEVERSION_ES5) {
                                        WARN("const var declaration %s in legacy mode.\n",
                                                debugstr_w((yyvsp[-2].identifier)));
                                        set_error(ctx, (yyloc), JS_E_SYNTAX);
                                        YYABORT;
                                    }
                                    (yyval.statement) = new_var_statement(ctx, TRUE, TRUE, (yyloc), (yyvsp[-1].variable_list));
                                }
#line 2296 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 352 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_var_statement(ctx, TRUE, FALSE, (yyloc), (yyvsp[-1].variable_list)); }
#line 2302 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 354 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    {
                                    if(ctx->script->version < SCRIPTLANGUAGEVERSION_ES5) {
                                        WARN("const var declaration %s in legacy mode.\n",
                                                debugstr_w((yyvsp[-2].identifier)));
                                        set_error(ctx, (yyloc), JS_E_SYNTAX);
                                        YYABORT;
                                    }
                                    (yyval.statement) = new_var_statement(ctx, TRUE, TRUE, (yyloc), (yyvsp[-1].variable_list));
                                }
#line 2316 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 367 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_var_statement(ctx, FALSE, FALSE, (yyloc), (yyvsp[-1].variable_list)); }
#line 2322 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 371 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_list) = new_variable_list(ctx, (yyvsp[0].variable_declaration)); }
#line 2328 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 373 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_list) = variable_list_add(ctx, (yyvsp[-2].variable_list), (yyvsp[0].variable_declaration)); }
#line 2334 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 378 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_list) = new_variable_list(ctx, (yyvsp[0].variable_declaration)); }
#line 2340 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 380 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_list) = variable_list_add(ctx, (yyvsp[-2].variable_list), (yyvsp[0].variable_declaration)); }
#line 2346 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 385 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_declaration) = new_variable_declaration(ctx, (yyvsp[-1].identifier), (yyvsp[0].expr)); }
#line 2352 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 390 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.variable_declaration) = new_variable_declaration(ctx, (yyvsp[-1].identifier), (yyvsp[0].expr)); }
#line 2358 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 394 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2364 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 395 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2370 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 400 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2376 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 404 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2382 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 405 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2388 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 410 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2394 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 414 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_statement(ctx, STAT_EMPTY, 0, (yyloc)); }
#line 2400 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 419 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_expression_statement(ctx, (yyloc),  (yyvsp[-1].expr)); }
#line 2406 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 424 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-4].expr), (yyvsp[-2].statement), (yyvsp[0].statement)); }
#line 2412 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 426 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_if_statement(ctx, (yyloc), (yyvsp[-2].expr), (yyvsp[0].statement), NULL); }
#line 2418 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 431 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yylsp[-4]), TRUE, (yyvsp[-2].expr), (yyvsp[-5].statement)); }
#line 2424 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 433 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_while_statement(ctx, (yyloc), FALSE, (yyvsp[-2].expr), (yyvsp[0].statement)); }
#line 2430 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 435 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].expr), ';')) YYABORT; }
#line 2436 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 437 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].expr), ';')) YYABORT; }
#line 2442 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 439 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_for_statement(ctx, (yylsp[-8]), NULL, (yyvsp[-8].expr), (yyvsp[-5].expr), (yylsp[-5]), (yyvsp[-2].expr), (yylsp[-2]), (yyvsp[0].statement)); }
#line 2448 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 441 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].variable_list), ';')) YYABORT; }
#line 2454 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 443 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].expr), ';')) YYABORT; }
#line 2460 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 445 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_for_statement(ctx, (yylsp[-9]), (yyvsp[-8].variable_list) ? (yyvsp[-8].variable_list)->head : NULL, NULL, (yyvsp[-5].expr), (yylsp[-5]), (yyvsp[-2].expr), (yylsp[-2]), (yyvsp[0].statement)); }
#line 2466 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 447 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_forin_statement(ctx, (yyloc), NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].statement)); }
#line 2472 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 449 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_forin_statement(ctx, (yyloc),  (yyvsp[-4].variable_declaration), NULL, (yyvsp[-2].expr), (yyvsp[0].statement)); }
#line 2478 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 451 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].statement), ';')) YYABORT; }
#line 2484 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 453 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!explicit_error(ctx, (yyvsp[0].expr), ';')) YYABORT; }
#line 2490 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 455 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_for_statement(ctx, (yylsp[-7]), ((var_statement_t *)(yyvsp[-7].statement))->variable_list,
                                  NULL, (yyvsp[-5].expr), (yylsp[-5]), (yyvsp[-2].expr), (yylsp[-2]), (yyvsp[0].statement)); }
#line 2497 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 461 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_continue_statement(ctx, (yyloc), (yyvsp[-1].identifier)); }
#line 2503 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 466 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_break_statement(ctx, (yyloc), (yyvsp[-1].identifier)); }
#line 2509 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 471 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_return_statement(ctx, (yyloc), (yyvsp[-1].expr)); }
#line 2515 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 476 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_with_statement(ctx, (yyloc), (yyvsp[-2].expr), (yyvsp[0].statement)); }
#line 2521 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 481 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_labelled_statement(ctx, (yyloc), (yyvsp[-2].identifier), (yyvsp[0].statement)); }
#line 2527 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 486 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_switch_statement(ctx, (yyloc), (yyvsp[-2].expr), (yyvsp[0].case_clausule)); }
#line 2533 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 491 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_block(ctx, (yyvsp[-1].case_list), NULL, NULL); }
#line 2539 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 493 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_block(ctx, (yyvsp[-3].case_list), (yyvsp[-2].case_clausule), (yyvsp[-1].case_list)); }
#line 2545 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 497 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_list) = NULL; }
#line 2551 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 498 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_list) = (yyvsp[0].case_list); }
#line 2557 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 502 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_list) = new_case_list(ctx, (yyvsp[0].case_clausule)); }
#line 2563 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 504 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_list) = case_list_add(ctx, (yyvsp[-1].case_list), (yyvsp[0].case_clausule)); }
#line 2569 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 509 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_clausule(ctx, (yyloc), (yyvsp[-2].expr), (yyvsp[0].statement_list)); }
#line 2575 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 514 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.case_clausule) = new_case_clausule(ctx, (yyloc), NULL, (yyvsp[0].statement_list)); }
#line 2581 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 519 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_throw_statement(ctx, (yyloc), (yyvsp[-1].expr)); }
#line 2587 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 523 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_try_statement(ctx, (yyvsp[-1].statement), (yyvsp[0].catch_block), NULL, 0); }
#line 2593 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 524 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_try_statement(ctx, (yyvsp[-1].statement), NULL, (yyvsp[0].statement), (yylsp[0])); }
#line 2599 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 526 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new_try_statement(ctx, (yyvsp[-2].statement), (yyvsp[-1].catch_block), (yyvsp[0].statement), (yylsp[0])); }
#line 2605 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 531 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.catch_block) = new_catch_block(ctx, (yyvsp[-2].identifier), (yyvsp[0].statement)); }
#line 2611 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 535 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyloc) = (yylsp[0]); (yyval.statement) = (yyvsp[0].statement); }
#line 2617 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 539 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2623 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 540 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2629 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 543 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2635 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 544 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { set_error(ctx, (yyloc), JS_E_SYNTAX); YYABORT; }
#line 2641 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 548 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2647 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 550 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_COMMA, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2653 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 554 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = NULL; }
#line 2659 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 555 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2665 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 560 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2671 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 562 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_COMMA, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2677 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 565 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].ival); }
#line 2683 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 566 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = EXPR_ASSIGNDIV; }
#line 2689 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 570 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2695 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 572 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_ASSIGN, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2701 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 574 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2707 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 579 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2713 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 581 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_ASSIGN, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2719 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 583 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2725 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 587 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2731 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 589 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_conditional_expression(ctx, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2737 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 594 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2743 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 596 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_conditional_expression(ctx, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2749 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 600 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2755 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 602 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2761 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 607 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2767 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 609 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2773 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 613 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2779 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 615 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2785 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 620 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2791 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 622 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2797 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 626 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2803 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 628 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2809 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 633 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2815 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 635 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2821 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 639 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2827 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 641 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2833 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 646 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2839 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 648 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BXOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2845 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 652 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2851 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 654 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BAND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2857 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 659 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2863 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 661 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_BAND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2869 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 665 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2875 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 667 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2881 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 671 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2887 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 673 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2893 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 677 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2899 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 679 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2905 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 681 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_INSTANCEOF, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2911 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 683 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_IN, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2917 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 687 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2923 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 689 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2929 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 691 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_INSTANCEOF, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2935 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 695 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2941 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 697 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, (yyvsp[-1].ival), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2947 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 702 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2953 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 704 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_ADD, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2959 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 706 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2965 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 710 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2971 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 712 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_MUL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2977 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 714 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_DIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2983 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 716 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_MOD, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2989 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 720 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2995 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 722 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_DELETE, (yyvsp[0].expr)); }
#line 3001 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 723 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_VOID, (yyvsp[0].expr)); }
#line 3007 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 725 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_TYPEOF, (yyvsp[0].expr)); }
#line 3013 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 726 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_PREINC, (yyvsp[0].expr)); }
#line 3019 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 727 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_PREDEC, (yyvsp[0].expr)); }
#line 3025 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 728 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_PLUS, (yyvsp[0].expr)); }
#line 3031 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 729 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_MINUS, (yyvsp[0].expr)); }
#line 3037 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 730 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_BITNEG, (yyvsp[0].expr)); }
#line 3043 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 731 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_LOGNEG, (yyvsp[0].expr)); }
#line 3049 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 736 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3055 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 738 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_POSTINC, (yyvsp[-1].expr)); }
#line 3061 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 740 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_unary_expression(ctx, EXPR_POSTDEC, (yyvsp[-1].expr)); }
#line 3067 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 745 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3073 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 746 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3079 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 750 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3085 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 751 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_new_expression(ctx, (yyvsp[0].expr), NULL); }
#line 3091 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 755 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3097 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 756 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3103 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 758 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_ARRAY, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3109 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 760 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_member_expression(ctx, (yyvsp[-2].expr), (yyvsp[0].identifier)); }
#line 3115 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 762 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_new_expression(ctx, (yyvsp[-1].expr), (yyvsp[0].argument_list)); }
#line 3121 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 767 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_call_expression(ctx, (yyvsp[-1].expr), (yyvsp[0].argument_list)); }
#line 3127 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 769 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_call_expression(ctx, (yyvsp[-1].expr), (yyvsp[0].argument_list)); }
#line 3133 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 771 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_binary_expression(ctx, EXPR_ARRAY, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3139 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 773 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_member_expression(ctx, (yyvsp[-2].expr), (yyvsp[0].identifier)); }
#line 3145 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 777 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.argument_list) = NULL; }
#line 3151 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 778 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.argument_list) = (yyvsp[-1].argument_list); }
#line 3157 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 782 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.argument_list) = new_argument_list(ctx, (yyvsp[0].expr)); }
#line 3163 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 784 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.argument_list) = argument_list_add(ctx, (yyvsp[-2].argument_list), (yyvsp[0].expr)); }
#line 3169 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 788 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_expression(ctx, EXPR_THIS, 0); }
#line 3175 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 789 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_identifier_expression(ctx, (yyvsp[0].identifier)); }
#line 3181 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 790 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_literal_expression(ctx, (yyvsp[0].literal)); }
#line 3187 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 791 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3193 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 792 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 3199 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 793 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 3205 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 797 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_array_literal_expression(ctx, NULL, 0); }
#line 3211 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 798 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_array_literal_expression(ctx, NULL, (yyvsp[-1].ival)+1); }
#line 3217 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 799 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_array_literal_expression(ctx, (yyvsp[-1].element_list), 0); }
#line 3223 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 801 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_array_literal_expression(ctx, (yyvsp[-3].element_list), (yyvsp[-1].ival)+1); }
#line 3229 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 806 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.element_list) = new_element_list(ctx, (yyvsp[-1].ival), (yyvsp[0].expr)); }
#line 3235 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 808 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.element_list) = element_list_add(ctx, (yyvsp[-3].element_list), (yyvsp[-1].ival), (yyvsp[0].expr)); }
#line 3241 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 812 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 3247 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 813 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival) + 1; }
#line 3253 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 817 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3259 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 818 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].ival); }
#line 3265 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 822 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_prop_and_value_expression(ctx, NULL); }
#line 3271 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 824 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_prop_and_value_expression(ctx, (yyvsp[-1].property_list)); }
#line 3277 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 826 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    {
            if(ctx->script->version < 2) {
                WARN("Trailing comma in object literal is illegal in legacy mode.\n");
                set_error(ctx, (yylsp[-1]), JS_E_SYNTAX);
                YYABORT;
            }
            (yyval.expr) = new_prop_and_value_expression(ctx, (yyvsp[-2].property_list));
        }
#line 3290 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 837 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.property_list) = new_property_list(ctx, (yyvsp[0].property_definition)); }
#line 3296 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 839 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.property_list) = property_list_add(ctx, (yyvsp[-2].property_list), (yyvsp[0].property_definition)); }
#line 3302 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 844 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.property_definition) = new_property_definition(ctx, PROPERTY_DEFINITION_VALUE, (yyvsp[-2].literal), (yyvsp[0].expr)); }
#line 3308 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 846 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.property_definition) = new_property_definition(ctx, PROPERTY_DEFINITION_GETTER, (yyvsp[-1].literal), (yyvsp[0].expr)); }
#line 3314 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 848 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.property_definition) = new_property_definition(ctx, PROPERTY_DEFINITION_SETTER, (yyvsp[-1].literal), (yyvsp[0].expr)); }
#line 3320 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 852 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new_function_expression(ctx, NULL, (yyvsp[-4].parameter_list), (yyvsp[-1].statement_list), NULL, ctx->begin + (yylsp[-5]), (yylsp[0]) - (yylsp[-5]) + 1); }
#line 3326 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 856 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_string_literal(ctx, compiler_alloc_string_len(ctx->compiler, (yyvsp[0].identifier), lstrlenW((yyvsp[0].identifier)))); }
#line 3332 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 857 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_string_literal(ctx, (yyvsp[0].str)); }
#line 3338 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 858 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = (yyvsp[0].literal); }
#line 3344 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 862 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = NULL; }
#line 3350 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 863 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3356 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 867 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3362 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 869 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    {
            if(ctx->script->version < SCRIPTLANGUAGEVERSION_ES5) {
                WARN("%s keyword used as an identifier in legacy mode.\n",
                     debugstr_w((yyvsp[0].identifier)));
                set_error(ctx, (yyloc), JS_E_SYNTAX);
                YYABORT;
            }
            (yyval.identifier) = (yyvsp[0].identifier);
        }
#line 3376 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 880 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3382 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 881 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3388 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 882 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3394 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 883 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3400 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 884 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3406 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 885 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3412 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 886 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3418 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 887 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3424 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 888 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3430 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 889 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3436 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 890 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3442 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 891 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3448 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 892 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3454 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 893 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3460 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 894 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3466 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 895 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3472 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 896 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3478 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 897 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3484 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 898 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3490 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 899 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3496 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 900 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3502 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 901 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3508 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 902 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3514 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 903 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3520 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 904 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3526 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 905 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3532 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 906 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3538 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 907 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3544 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 908 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3550 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 909 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3556 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 910 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3562 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 911 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.identifier) = (yyvsp[0].identifier); }
#line 3568 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 915 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_null_literal(ctx); }
#line 3574 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 916 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = (yyvsp[0].literal); }
#line 3580 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 917 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = (yyvsp[0].literal); }
#line 3586 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 918 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_string_literal(ctx, (yyvsp[0].str)); }
#line 3592 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 919 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = parse_regexp(ctx);
                                  if(!(yyval.literal)) YYABORT; }
#line 3599 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 921 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = parse_regexp(ctx);
                                  if(!(yyval.literal)) YYABORT; }
#line 3606 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 926 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_boolean_literal(ctx, VARIANT_TRUE); }
#line 3612 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 927 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = new_boolean_literal(ctx, VARIANT_FALSE); }
#line 3618 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 928 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { (yyval.literal) = (yyvsp[0].literal); }
#line 3624 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 932 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { if(!allow_auto_semicolon(ctx)) {YYABORT;} else { ctx->hres = S_OK; ctx->error_loc = -1; } }
#line 3630 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 936 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { set_error(ctx, (yyloc), JS_E_MISSING_LBRACKET); YYABORT; }
#line 3636 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 940 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { set_error(ctx, (yyloc), JS_E_MISSING_RBRACKET); YYABORT; }
#line 3642 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 944 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1646  */
    { set_error(ctx,  (yyloc), JS_E_MISSING_SEMICOLON); YYABORT; }
#line 3648 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
    break;


#line 3652 "dlls/jscript/parser.tab.c" /* yacc.c:1646  */
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
#line 946 "../wine-source/dlls/jscript/parser.y" /* yacc.c:1906  */


static BOOL allow_auto_semicolon(parser_ctx_t *ctx)
{
    return ctx->nl || ctx->ptr == ctx->end || *(ctx->ptr-1) == '}';
}

static void *new_statement(parser_ctx_t *ctx, statement_type_t type, size_t size, unsigned loc)
{
    statement_t *stat;

    stat = parser_alloc(ctx, size ? size : sizeof(*stat));
    if(!stat)
        return NULL;

    stat->type = type;
    stat->loc  = loc;
    stat->next = NULL;

    return stat;
}

static literal_t *new_string_literal(parser_ctx_t *ctx, jsstr_t *str)
{
    literal_t *ret = parser_alloc(ctx, sizeof(literal_t));

    ret->type = LT_STRING;
    ret->u.str = str;

    return ret;
}

static literal_t *new_null_literal(parser_ctx_t *ctx)
{
    literal_t *ret = parser_alloc(ctx, sizeof(literal_t));

    ret->type = LT_NULL;

    return ret;
}

static property_definition_t *new_property_definition(parser_ctx_t *ctx, property_definition_type_t type,
                                                      literal_t *name, expression_t *value)
{
    property_definition_t *ret = parser_alloc(ctx, sizeof(property_definition_t));

    ret->type = type;
    ret->name = name;
    ret->value = value;
    ret->next = NULL;

    return ret;
}

static property_list_t *new_property_list(parser_ctx_t *ctx, property_definition_t *prop)
{
    property_list_t *ret = parser_alloc_tmp(ctx, sizeof(property_list_t));
    ret->head = ret->tail = prop;
    return ret;
}

static property_list_t *property_list_add(parser_ctx_t *ctx, property_list_t *list, property_definition_t *prop)
{
    list->tail = list->tail->next = prop;
    return list;
}

static array_element_t *new_array_element(parser_ctx_t *ctx, int elision, expression_t *expr)
{
    array_element_t *ret = parser_alloc(ctx, sizeof(array_element_t));

    ret->elision = elision;
    ret->expr = expr;
    ret->next = NULL;

    return ret;
}

static element_list_t *new_element_list(parser_ctx_t *ctx, int elision, expression_t *expr)
{
    element_list_t *ret = parser_alloc_tmp(ctx, sizeof(element_list_t));

    ret->head = ret->tail = new_array_element(ctx, elision, expr);

    return ret;
}

static element_list_t *element_list_add(parser_ctx_t *ctx, element_list_t *list, int elision, expression_t *expr)
{
    list->tail = list->tail->next = new_array_element(ctx, elision, expr);

    return list;
}

static argument_t *new_argument(parser_ctx_t *ctx, expression_t *expr)
{
    argument_t *ret = parser_alloc(ctx, sizeof(argument_t));

    ret->expr = expr;
    ret->next = NULL;

    return ret;
}

static argument_list_t *new_argument_list(parser_ctx_t *ctx, expression_t *expr)
{
    argument_list_t *ret = parser_alloc_tmp(ctx, sizeof(argument_list_t));

    ret->head = ret->tail = new_argument(ctx, expr);

    return ret;
}

static argument_list_t *argument_list_add(parser_ctx_t *ctx, argument_list_t *list, expression_t *expr)
{
    list->tail = list->tail->next = new_argument(ctx, expr);

    return list;
}

static catch_block_t *new_catch_block(parser_ctx_t *ctx, const WCHAR *identifier, statement_t *statement)
{
    catch_block_t *ret = parser_alloc(ctx, sizeof(catch_block_t));

    ret->identifier = identifier;
    ret->statement = statement;

    return ret;
}

static case_clausule_t *new_case_clausule(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_list_t *stat_list)
{
    case_clausule_t *ret = parser_alloc(ctx, sizeof(case_clausule_t));

    ret->expr = expr;
    ret->stat = stat_list ? stat_list->head : NULL;
    ret->loc = loc;
    ret->next = NULL;

    return ret;
}

static case_list_t *new_case_list(parser_ctx_t *ctx, case_clausule_t *case_clausule)
{
    case_list_t *ret = parser_alloc_tmp(ctx, sizeof(case_list_t));

    ret->head = ret->tail = case_clausule;

    return ret;
}

static case_list_t *case_list_add(parser_ctx_t *ctx, case_list_t *list, case_clausule_t *case_clausule)
{
    list->tail = list->tail->next = case_clausule;

    return list;
}

static case_clausule_t *new_case_block(parser_ctx_t *ctx, case_list_t *case_list1,
        case_clausule_t *default_clausule, case_list_t *case_list2)
{
    case_clausule_t *ret = NULL, *iter = NULL, *iter2;
    statement_t *stat = NULL;

    if(case_list1) {
        ret = case_list1->head;
        iter = case_list1->tail;
    }

    if(default_clausule) {
        if(ret)
            iter = iter->next = default_clausule;
        else
            ret = iter = default_clausule;
    }

    if(case_list2) {
        if(ret)
            iter->next = case_list2->head;
        else
            ret = case_list2->head;
    }

    if(!ret)
        return NULL;

    for(iter = ret; iter; iter = iter->next) {
        for(iter2 = iter; iter2 && !iter2->stat; iter2 = iter2->next);
        if(!iter2)
            break;

        while(iter != iter2) {
            iter->stat = iter2->stat;
            iter = iter->next;
        }

        if(stat) {
            while(stat->next)
                stat = stat->next;
            stat->next = iter->stat;
        }else {
            stat = iter->stat;
        }
    }

    return ret;
}

static statement_t *new_block_statement(parser_ctx_t *ctx, unsigned loc, statement_list_t *list)
{
    block_statement_t *ret;

    ret = new_statement(ctx, STAT_BLOCK, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->scope_index = 0;
    ret->stat_list = list ? list->head : NULL;

    return &ret->stat;
}

static variable_declaration_t *new_variable_declaration(parser_ctx_t *ctx, const WCHAR *identifier, expression_t *expr)
{
    variable_declaration_t *ret = parser_alloc(ctx, sizeof(variable_declaration_t));

    ret->identifier = identifier;
    ret->expr = expr;
    ret->next = NULL;
    ret->global_next = NULL;
    ret->block_scope = FALSE;
    ret->constant = FALSE;

    return ret;
}

static variable_list_t *new_variable_list(parser_ctx_t *ctx, variable_declaration_t *decl)
{
    variable_list_t *ret = parser_alloc_tmp(ctx, sizeof(variable_list_t));

    ret->head = ret->tail = decl;

    return ret;
}

static variable_list_t *variable_list_add(parser_ctx_t *ctx, variable_list_t *list, variable_declaration_t *decl)
{
    list->tail = list->tail->next = decl;

    return list;
}

static statement_t *new_var_statement(parser_ctx_t *ctx, BOOL block_scope, BOOL constant, unsigned loc,
        variable_list_t *variable_list)
{
    variable_declaration_t *var;
    var_statement_t *ret;

    ret = new_statement(ctx, STAT_VAR, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->variable_list = variable_list->head;
    for (var = ret->variable_list; var; var = var->next)
    {
        var->block_scope = block_scope;
        var->constant = constant;
    }

    return &ret->stat;
}

static statement_t *new_expression_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr)
{
    expression_statement_t *ret;

    ret = new_statement(ctx, STAT_EXPR, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;

    return &ret->stat;
}

static statement_t *new_if_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr,
                                     statement_t *if_stat, statement_t *else_stat)
{
    if_statement_t *ret;

    ret = new_statement(ctx, STAT_IF, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;
    ret->if_stat = if_stat;
    ret->else_stat = else_stat;

    return &ret->stat;
}

static statement_t *new_while_statement(parser_ctx_t *ctx, unsigned loc, BOOL dowhile, expression_t *expr, statement_t *stat)
{
    while_statement_t *ret;

    ret = new_statement(ctx, STAT_WHILE, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->do_while = dowhile;
    ret->expr = expr;
    ret->statement = stat;

    return &ret->stat;
}

static statement_t *new_for_statement(parser_ctx_t *ctx, unsigned loc, variable_declaration_t *variable_list, expression_t *begin_expr,
        expression_t *expr, unsigned expr_loc, expression_t *end_expr, unsigned end_loc, statement_t *statement)
{
    for_statement_t *ret;

    ret = new_statement(ctx, STAT_FOR, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->variable_list = variable_list;
    ret->begin_expr = begin_expr;
    ret->expr = expr;
    ret->expr_loc = expr_loc;
    ret->end_expr = end_expr;
    ret->end_loc = end_loc;
    ret->statement = statement;
    ret->scope_index = 0;

    return &ret->stat;
}

static statement_t *new_forin_statement(parser_ctx_t *ctx, unsigned loc, variable_declaration_t *variable, expression_t *expr,
        expression_t *in_expr, statement_t *statement)
{
    forin_statement_t *ret;

    ret = new_statement(ctx, STAT_FORIN, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->variable = variable;
    ret->expr = expr;
    ret->in_expr = in_expr;
    ret->statement = statement;

    return &ret->stat;
}

static statement_t *new_continue_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier)
{
    branch_statement_t *ret;

    ret = new_statement(ctx, STAT_CONTINUE, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->identifier = identifier;

    return &ret->stat;
}

static statement_t *new_break_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier)
{
    branch_statement_t *ret;

    ret = new_statement(ctx, STAT_BREAK, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->identifier = identifier;

    return &ret->stat;
}

static statement_t *new_return_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr)
{
    expression_statement_t *ret;

    ret = new_statement(ctx, STAT_RETURN, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;

    return &ret->stat;
}

static statement_t *new_with_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, statement_t *statement)
{
    with_statement_t *ret;

    ret = new_statement(ctx, STAT_WITH, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;
    ret->statement = statement;

    return &ret->stat;
}

static statement_t *new_labelled_statement(parser_ctx_t *ctx, unsigned loc, const WCHAR *identifier, statement_t *statement)
{
    labelled_statement_t *ret;

    ret = new_statement(ctx, STAT_LABEL, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->identifier = identifier;
    ret->statement = statement;

    return &ret->stat;
}

static statement_t *new_switch_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr, case_clausule_t *case_list)
{
    switch_statement_t *ret;

    ret = new_statement(ctx, STAT_SWITCH, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;
    ret->case_list = case_list;

    return &ret->stat;
}

static statement_t *new_throw_statement(parser_ctx_t *ctx, unsigned loc, expression_t *expr)
{
    expression_statement_t *ret;

    ret = new_statement(ctx, STAT_THROW, sizeof(*ret), loc);
    if(!ret)
        return NULL;

    ret->expr = expr;

    return &ret->stat;
}

static statement_t *new_try_statement(parser_ctx_t *ctx, statement_t *try_statement,
        catch_block_t *catch_block, statement_t *finally_statement, unsigned finally_loc)
{
    try_statement_t *ret;

    ret = new_statement(ctx, STAT_TRY, sizeof(*ret), try_statement->loc);
    if(!ret)
        return NULL;

    ret->try_statement = try_statement;
    ret->catch_block = catch_block;
    ret->finally_statement = finally_statement;
    ret->finally_loc = finally_loc;

    return &ret->stat;
}

static parameter_t *new_parameter(parser_ctx_t *ctx, const WCHAR *identifier)
{
    parameter_t *ret = parser_alloc(ctx, sizeof(parameter_t));

    ret->identifier = identifier;
    ret->next = NULL;

    return ret;
}

static parameter_list_t *new_parameter_list(parser_ctx_t *ctx, const WCHAR *identifier)
{
    parameter_list_t *ret = parser_alloc_tmp(ctx, sizeof(parameter_list_t));

    ret->head = ret->tail = new_parameter(ctx, identifier);

    return ret;
}

static parameter_list_t *parameter_list_add(parser_ctx_t *ctx, parameter_list_t *list, const WCHAR *identifier)
{
    list->tail = list->tail->next = new_parameter(ctx, identifier);

    return list;
}

static expression_t *new_function_expression(parser_ctx_t *ctx, const WCHAR *identifier, parameter_list_t *parameter_list,
    statement_list_t *statement_list, const WCHAR *event_target, const WCHAR *src_str, DWORD src_len)
{
    function_expression_t *ret = new_expression(ctx, EXPR_FUNC, sizeof(*ret));

    ret->identifier = identifier;
    ret->parameter_list = parameter_list ? parameter_list->head : NULL;
    ret->statement_list = statement_list ? statement_list->head : NULL;
    ret->event_target = event_target;
    ret->src_str = src_str;
    ret->src_len = src_len;
    ret->is_statement = FALSE;
    ret->scope_index = 0;
    ret->next = NULL;

    return &ret->expr;
}

static void *new_expression(parser_ctx_t *ctx, expression_type_t type, size_t size)
{
    expression_t *ret = parser_alloc(ctx, size ? size : sizeof(*ret));

    ret->type = type;

    return ret;
}

static expression_t *new_binary_expression(parser_ctx_t *ctx, expression_type_t type,
       expression_t *expression1, expression_t *expression2)
{
    binary_expression_t *ret = new_expression(ctx, type, sizeof(*ret));

    ret->expression1 = expression1;
    ret->expression2 = expression2;

    return &ret->expr;
}

static expression_t *new_unary_expression(parser_ctx_t *ctx, expression_type_t type, expression_t *expression)
{
    unary_expression_t *ret = new_expression(ctx, type, sizeof(*ret));

    ret->expression = expression;

    return &ret->expr;
}

static expression_t *new_conditional_expression(parser_ctx_t *ctx, expression_t *expression,
       expression_t *true_expression, expression_t *false_expression)
{
    conditional_expression_t *ret = new_expression(ctx, EXPR_COND, sizeof(*ret));

    ret->expression = expression;
    ret->true_expression = true_expression;
    ret->false_expression = false_expression;

    return &ret->expr;
}

static expression_t *new_member_expression(parser_ctx_t *ctx, expression_t *expression, const WCHAR *identifier)
{
    member_expression_t *ret = new_expression(ctx, EXPR_MEMBER, sizeof(*ret));

    ret->expression = expression;
    ret->identifier = identifier;

    return &ret->expr;
}

static expression_t *new_new_expression(parser_ctx_t *ctx, expression_t *expression, argument_list_t *argument_list)
{
    call_expression_t *ret = new_expression(ctx, EXPR_NEW, sizeof(*ret));

    ret->expression = expression;
    ret->argument_list = argument_list ? argument_list->head : NULL;

    return &ret->expr;
}

static expression_t *new_call_expression(parser_ctx_t *ctx, expression_t *expression, argument_list_t *argument_list)
{
    call_expression_t *ret = new_expression(ctx, EXPR_CALL, sizeof(*ret));

    ret->expression = expression;
    ret->argument_list = argument_list ? argument_list->head : NULL;

    return &ret->expr;
}

static int parser_error(unsigned *loc, parser_ctx_t *ctx, const char *str)
{
    if(ctx->error_loc == -1)
        ctx->error_loc = *loc;
    if(ctx->hres == S_OK)
        ctx->hres = JS_E_SYNTAX;
    return 0;
}

static void set_error(parser_ctx_t *ctx, unsigned loc, HRESULT error)
{
    ctx->hres = error;
    ctx->error_loc = loc;
}

static BOOL explicit_error(parser_ctx_t *ctx, void *obj, WCHAR next)
{
    if(obj || *(ctx->ptr-1)==next) return TRUE;

    set_error(ctx, ctx->ptr - ctx->begin /* FIXME */, JS_E_SYNTAX);
    return FALSE;
}


static expression_t *new_identifier_expression(parser_ctx_t *ctx, const WCHAR *identifier)
{
    identifier_expression_t *ret = new_expression(ctx, EXPR_IDENT, sizeof(*ret));

    ret->identifier = identifier;

    return &ret->expr;
}

static expression_t *new_array_literal_expression(parser_ctx_t *ctx, element_list_t *element_list, int length)
{
    array_literal_expression_t *ret = new_expression(ctx, EXPR_ARRAYLIT, sizeof(*ret));

    ret->element_list = element_list ? element_list->head : NULL;
    ret->length = length;

    return &ret->expr;
}

static expression_t *new_prop_and_value_expression(parser_ctx_t *ctx, property_list_t *property_list)
{
    property_value_expression_t *ret = new_expression(ctx, EXPR_PROPVAL, sizeof(*ret));

    ret->property_list = property_list ? property_list->head : NULL;

    return &ret->expr;
}

static expression_t *new_literal_expression(parser_ctx_t *ctx, literal_t *literal)
{
    literal_expression_t *ret = new_expression(ctx, EXPR_LITERAL, sizeof(*ret));

    ret->literal = literal;

    return &ret->expr;
}

static statement_list_t *new_statement_list(parser_ctx_t *ctx, statement_t *statement)
{
    statement_list_t *ret =  parser_alloc_tmp(ctx, sizeof(statement_list_t));

    ret->head = ret->tail = statement;

    return ret;
}

static statement_list_t *statement_list_add(statement_list_t *list, statement_t *statement)
{
    list->tail = list->tail->next = statement;

    return list;
}

void parser_release(parser_ctx_t *ctx)
{
    script_release(ctx->script);
    heap_pool_free(&ctx->heap);
    free(ctx);
}

HRESULT script_parse(script_ctx_t *ctx, struct _compiler_ctx_t *compiler, bytecode_t *code, const WCHAR *delimiter, BOOL from_eval,
        parser_ctx_t **ret)
{
    parser_ctx_t *parser_ctx;
    heap_pool_t *mark;
    HRESULT hres;

    parser_ctx = calloc(1, sizeof(parser_ctx_t));
    if(!parser_ctx)
        return E_OUTOFMEMORY;

    parser_ctx->error_loc = -1;
    parser_ctx->is_html = delimiter && !wcsicmp(delimiter, L"</script>");

    parser_ctx->begin = parser_ctx->ptr = code->source;
    parser_ctx->end = parser_ctx->begin + lstrlenW(parser_ctx->begin);

    script_addref(ctx);
    parser_ctx->script = ctx;

    mark = heap_pool_mark(&ctx->tmp_heap);
    heap_pool_init(&parser_ctx->heap);

    parser_ctx->compiler = compiler;
    parser_parse(parser_ctx);
    parser_ctx->compiler = NULL;

    heap_pool_clear(mark);
    hres = parser_ctx->hres;
    if(FAILED(hres)) {
        unsigned int error_loc = parser_ctx->error_loc == -1 ? 0 : parser_ctx->error_loc;
        const WCHAR *line_start = code->source + error_loc, *line_end = line_start;
        jsstr_t *line_str;

        while(line_start > code->source && line_start[-1] != '\n')
            line_start--;
        while(*line_end && *line_end != '\n')
            line_end++;
        line_str = jsstr_alloc_len(line_start, line_end - line_start);

        WARN("parser failed around %s in line %s\n",
             debugstr_w(parser_ctx->begin+20 > parser_ctx->ptr ? parser_ctx->begin : parser_ctx->ptr-20),
             debugstr_jsstr(line_str));

        throw_error(ctx, hres, NULL);
        set_error_location(ctx->ei, code, error_loc, IDS_COMPILATION_ERROR, line_str);
        parser_release(parser_ctx);
        if(line_str)
            jsstr_release(line_str);
        return DISP_E_EXCEPTION;
    }

    *ret = parser_ctx;
    return S_OK;
}
