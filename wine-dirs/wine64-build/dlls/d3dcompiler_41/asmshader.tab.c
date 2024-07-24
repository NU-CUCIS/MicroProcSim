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
#define YYSTYPE         ASMSHADER_STYPE
/* Substitute the variable and function names.  */
#define yyparse         asmshader_parse
#define yylex           asmshader_lex
#define yyerror         asmshader_error
#define yydebug         asmshader_debug
#define yynerrs         asmshader_nerrs

#define yylval          asmshader_lval
#define yychar          asmshader_char

/* Copy the first part of user declarations.  */
#line 22 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:339  */

#include "wine/debug.h"

#include "d3dcompiler_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(asmshader);

struct asm_parser asm_ctx;

void WINAPIV asmparser_message(struct asm_parser *ctx, const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    compilation_message(&ctx->messages, fmt, args);
    va_end(args);
}

static void asmshader_error(char const *s) {
    asmparser_message(&asm_ctx, "Line %u: Error \"%s\" from bison\n", asm_ctx.line_no, s);
    set_parse_status(&asm_ctx.status, PARSE_ERR);
}

static void set_rel_reg(struct shader_reg *reg, struct rel_reg *rel) {
    /* We can have an additional offset without true relative addressing
     * ex. c2[ 4 ] */
    reg->regnum += rel->additional_offset;
    if(!rel->has_rel_reg) {
        reg->rel_reg = NULL;
    } else {
        reg->rel_reg = d3dcompiler_alloc(sizeof(*reg->rel_reg));
        if(!reg->rel_reg) {
            return;
        }
        reg->rel_reg->type = rel->type;
        reg->rel_reg->swizzle = rel->swizzle;
        reg->rel_reg->regnum = rel->rel_regnum;
    }
}

/* Needed lexer functions declarations */
int asmshader_lex(void);



#line 121 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:339  */

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
#ifndef ASMSHADER_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ASMSHADER_DEBUG 1
#  else
#   define ASMSHADER_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ASMSHADER_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ASMSHADER_DEBUG */
#if ASMSHADER_DEBUG
extern int asmshader_debug;
#endif

/* Token type.  */
#ifndef ASMSHADER_TOKENTYPE
# define ASMSHADER_TOKENTYPE
  enum asmshader_tokentype
  {
    INSTR_ADD = 258,
    INSTR_NOP = 259,
    INSTR_MOV = 260,
    INSTR_SUB = 261,
    INSTR_MAD = 262,
    INSTR_MUL = 263,
    INSTR_RCP = 264,
    INSTR_RSQ = 265,
    INSTR_DP3 = 266,
    INSTR_DP4 = 267,
    INSTR_MIN = 268,
    INSTR_MAX = 269,
    INSTR_SLT = 270,
    INSTR_SGE = 271,
    INSTR_ABS = 272,
    INSTR_EXP = 273,
    INSTR_LOG = 274,
    INSTR_EXPP = 275,
    INSTR_LOGP = 276,
    INSTR_DST = 277,
    INSTR_LRP = 278,
    INSTR_FRC = 279,
    INSTR_POW = 280,
    INSTR_CRS = 281,
    INSTR_SGN = 282,
    INSTR_NRM = 283,
    INSTR_SINCOS = 284,
    INSTR_M4x4 = 285,
    INSTR_M4x3 = 286,
    INSTR_M3x4 = 287,
    INSTR_M3x3 = 288,
    INSTR_M3x2 = 289,
    INSTR_DCL = 290,
    INSTR_DEF = 291,
    INSTR_DEFB = 292,
    INSTR_DEFI = 293,
    INSTR_REP = 294,
    INSTR_ENDREP = 295,
    INSTR_IF = 296,
    INSTR_ELSE = 297,
    INSTR_ENDIF = 298,
    INSTR_BREAK = 299,
    INSTR_BREAKP = 300,
    INSTR_CALL = 301,
    INSTR_CALLNZ = 302,
    INSTR_LOOP = 303,
    INSTR_RET = 304,
    INSTR_ENDLOOP = 305,
    INSTR_LABEL = 306,
    INSTR_SETP = 307,
    INSTR_TEXLDL = 308,
    INSTR_LIT = 309,
    INSTR_MOVA = 310,
    INSTR_CND = 311,
    INSTR_CMP = 312,
    INSTR_DP2ADD = 313,
    INSTR_TEXCOORD = 314,
    INSTR_TEXCRD = 315,
    INSTR_TEXKILL = 316,
    INSTR_TEX = 317,
    INSTR_TEXLD = 318,
    INSTR_TEXBEM = 319,
    INSTR_TEXBEML = 320,
    INSTR_TEXREG2AR = 321,
    INSTR_TEXREG2GB = 322,
    INSTR_TEXREG2RGB = 323,
    INSTR_TEXM3x2PAD = 324,
    INSTR_TEXM3x2TEX = 325,
    INSTR_TEXM3x3PAD = 326,
    INSTR_TEXM3x3SPEC = 327,
    INSTR_TEXM3x3VSPEC = 328,
    INSTR_TEXM3x3TEX = 329,
    INSTR_TEXDP3TEX = 330,
    INSTR_TEXM3x2DEPTH = 331,
    INSTR_TEXDP3 = 332,
    INSTR_TEXM3x3 = 333,
    INSTR_TEXDEPTH = 334,
    INSTR_BEM = 335,
    INSTR_DSX = 336,
    INSTR_DSY = 337,
    INSTR_TEXLDP = 338,
    INSTR_TEXLDB = 339,
    INSTR_TEXLDD = 340,
    INSTR_PHASE = 341,
    REG_TEMP = 342,
    REG_OUTPUT = 343,
    REG_INPUT = 344,
    REG_CONSTFLOAT = 345,
    REG_CONSTINT = 346,
    REG_CONSTBOOL = 347,
    REG_TEXTURE = 348,
    REG_SAMPLER = 349,
    REG_TEXCRDOUT = 350,
    REG_OPOS = 351,
    REG_OFOG = 352,
    REG_OPTS = 353,
    REG_VERTEXCOLOR = 354,
    REG_FRAGCOLOR = 355,
    REG_FRAGDEPTH = 356,
    REG_VPOS = 357,
    REG_VFACE = 358,
    REG_ADDRESS = 359,
    REG_LOOP = 360,
    REG_PREDICATE = 361,
    REG_LABEL = 362,
    VER_VS10 = 363,
    VER_VS11 = 364,
    VER_VS20 = 365,
    VER_VS2X = 366,
    VER_VS30 = 367,
    VER_PS10 = 368,
    VER_PS11 = 369,
    VER_PS12 = 370,
    VER_PS13 = 371,
    VER_PS14 = 372,
    VER_PS20 = 373,
    VER_PS2X = 374,
    VER_PS30 = 375,
    SHIFT_X2 = 376,
    SHIFT_X4 = 377,
    SHIFT_X8 = 378,
    SHIFT_D2 = 379,
    SHIFT_D4 = 380,
    SHIFT_D8 = 381,
    MOD_SAT = 382,
    MOD_PP = 383,
    MOD_CENTROID = 384,
    COMP_GT = 385,
    COMP_LT = 386,
    COMP_GE = 387,
    COMP_LE = 388,
    COMP_EQ = 389,
    COMP_NE = 390,
    SMOD_BIAS = 391,
    SMOD_SCALEBIAS = 392,
    SMOD_DZ = 393,
    SMOD_DW = 394,
    SMOD_ABS = 395,
    SMOD_NOT = 396,
    SAMPTYPE_1D = 397,
    SAMPTYPE_2D = 398,
    SAMPTYPE_CUBE = 399,
    SAMPTYPE_VOLUME = 400,
    USAGE_POSITION = 401,
    USAGE_BLENDWEIGHT = 402,
    USAGE_BLENDINDICES = 403,
    USAGE_NORMAL = 404,
    USAGE_PSIZE = 405,
    USAGE_TEXCOORD = 406,
    USAGE_TANGENT = 407,
    USAGE_BINORMAL = 408,
    USAGE_TESSFACTOR = 409,
    USAGE_POSITIONT = 410,
    USAGE_COLOR = 411,
    USAGE_FOG = 412,
    USAGE_DEPTH = 413,
    USAGE_SAMPLE = 414,
    COMPONENT = 415,
    IMMVAL = 416,
    IMMBOOL = 417
  };
#endif

/* Value type.  */
#if ! defined ASMSHADER_STYPE && ! defined ASMSHADER_STYPE_IS_DECLARED

union ASMSHADER_STYPE
{
#line 70 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:355  */

    struct {
        float           val;
        BOOL            integer;
    } immval;
    BOOL                immbool;
    unsigned int        regnum;
    struct shader_reg   reg;
    uint32_t            srcmod;
    uint32_t            writemask;
    struct {
        uint32_t        writemask;
        uint32_t        idx;
        uint32_t        last;
    } wm_components;
    uint32_t            swizzle;
    struct {
        uint32_t        swizzle;
        uint32_t        idx;
    } sw_components;
    uint32_t            component;
    struct {
        uint32_t        mod;
        uint32_t        shift;
    } modshift;
    enum bwriter_comparison_type comptype;
    struct {
        uint32_t        dclusage;
        unsigned int    regnum;
    } declaration;
    enum bwritersampler_texture_type samplertype;
    struct rel_reg      rel_reg;
    struct src_regs     sregs;

#line 364 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:355  */
};

typedef union ASMSHADER_STYPE ASMSHADER_STYPE;
# define ASMSHADER_STYPE_IS_TRIVIAL 1
# define ASMSHADER_STYPE_IS_DECLARED 1
#endif


extern ASMSHADER_STYPE asmshader_lval;

int asmshader_parse (void);



/* Copy the second part of user declarations.  */

#line 381 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:358  */

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
         || (defined ASMSHADER_STYPE_IS_TRIVIAL && ASMSHADER_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   748

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  233
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  560

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   417

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     169,   170,     2,   163,   164,   166,   165,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   167,     2,   168,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162
};

#if ASMSHADER_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   313,   313,   318,   323,   328,   333,   338,   343,   348,
     353,   358,   363,   368,   373,   378,   384,   385,   390,   394,
     399,   405,   410,   415,   420,   425,   430,   435,   440,   445,
     450,   455,   460,   465,   470,   475,   480,   485,   490,   495,
     500,   505,   510,   515,   520,   525,   530,   535,   540,   545,
     550,   555,   560,   565,   577,   589,   612,   635,   657,   679,
     689,   704,   711,   718,   722,   726,   730,   735,   740,   745,
     750,   755,   760,   765,   770,   775,   780,   785,   790,   795,
     800,   805,   810,   815,   820,   825,   830,   835,   840,   845,
     851,   856,   861,   866,   877,   882,   887,   892,   897,   902,
     907,   912,   917,   922,   927,   932,   937,   942,   947,   952,
     957,   962,   967,   972,   977,   982,   989,   997,  1006,  1010,
    1014,  1018,  1024,  1030,  1036,  1040,  1044,  1050,  1054,  1058,
    1062,  1066,  1070,  1074,  1078,  1084,  1090,  1095,  1102,  1117,
    1123,  1139,  1143,  1165,  1170,  1184,  1188,  1201,  1206,  1211,
    1216,  1221,  1226,  1231,  1236,  1241,  1247,  1252,  1263,  1271,
    1279,  1287,  1312,  1326,  1340,  1350,  1354,  1359,  1367,  1375,
    1383,  1392,  1393,  1397,  1403,  1413,  1425,  1429,  1434,  1438,
    1442,  1446,  1450,  1454,  1459,  1463,  1468,  1472,  1478,  1482,
    1486,  1490,  1494,  1498,  1504,  1508,  1514,  1520,  1526,  1532,
    1538,  1542,  1546,  1550,  1554,  1558,  1563,  1564,  1565,  1566,
    1567,  1568,  1570,  1576,  1582,  1588,  1594,  1600,  1606,  1612,
    1618,  1624,  1630,  1636,  1642,  1648,  1655,  1659,  1664,  1668,
    1672,  1676,  1681,  1689
};
#endif

#if ASMSHADER_DEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INSTR_ADD", "INSTR_NOP", "INSTR_MOV",
  "INSTR_SUB", "INSTR_MAD", "INSTR_MUL", "INSTR_RCP", "INSTR_RSQ",
  "INSTR_DP3", "INSTR_DP4", "INSTR_MIN", "INSTR_MAX", "INSTR_SLT",
  "INSTR_SGE", "INSTR_ABS", "INSTR_EXP", "INSTR_LOG", "INSTR_EXPP",
  "INSTR_LOGP", "INSTR_DST", "INSTR_LRP", "INSTR_FRC", "INSTR_POW",
  "INSTR_CRS", "INSTR_SGN", "INSTR_NRM", "INSTR_SINCOS", "INSTR_M4x4",
  "INSTR_M4x3", "INSTR_M3x4", "INSTR_M3x3", "INSTR_M3x2", "INSTR_DCL",
  "INSTR_DEF", "INSTR_DEFB", "INSTR_DEFI", "INSTR_REP", "INSTR_ENDREP",
  "INSTR_IF", "INSTR_ELSE", "INSTR_ENDIF", "INSTR_BREAK", "INSTR_BREAKP",
  "INSTR_CALL", "INSTR_CALLNZ", "INSTR_LOOP", "INSTR_RET", "INSTR_ENDLOOP",
  "INSTR_LABEL", "INSTR_SETP", "INSTR_TEXLDL", "INSTR_LIT", "INSTR_MOVA",
  "INSTR_CND", "INSTR_CMP", "INSTR_DP2ADD", "INSTR_TEXCOORD",
  "INSTR_TEXCRD", "INSTR_TEXKILL", "INSTR_TEX", "INSTR_TEXLD",
  "INSTR_TEXBEM", "INSTR_TEXBEML", "INSTR_TEXREG2AR", "INSTR_TEXREG2GB",
  "INSTR_TEXREG2RGB", "INSTR_TEXM3x2PAD", "INSTR_TEXM3x2TEX",
  "INSTR_TEXM3x3PAD", "INSTR_TEXM3x3SPEC", "INSTR_TEXM3x3VSPEC",
  "INSTR_TEXM3x3TEX", "INSTR_TEXDP3TEX", "INSTR_TEXM3x2DEPTH",
  "INSTR_TEXDP3", "INSTR_TEXM3x3", "INSTR_TEXDEPTH", "INSTR_BEM",
  "INSTR_DSX", "INSTR_DSY", "INSTR_TEXLDP", "INSTR_TEXLDB", "INSTR_TEXLDD",
  "INSTR_PHASE", "REG_TEMP", "REG_OUTPUT", "REG_INPUT", "REG_CONSTFLOAT",
  "REG_CONSTINT", "REG_CONSTBOOL", "REG_TEXTURE", "REG_SAMPLER",
  "REG_TEXCRDOUT", "REG_OPOS", "REG_OFOG", "REG_OPTS", "REG_VERTEXCOLOR",
  "REG_FRAGCOLOR", "REG_FRAGDEPTH", "REG_VPOS", "REG_VFACE", "REG_ADDRESS",
  "REG_LOOP", "REG_PREDICATE", "REG_LABEL", "VER_VS10", "VER_VS11",
  "VER_VS20", "VER_VS2X", "VER_VS30", "VER_PS10", "VER_PS11", "VER_PS12",
  "VER_PS13", "VER_PS14", "VER_PS20", "VER_PS2X", "VER_PS30", "SHIFT_X2",
  "SHIFT_X4", "SHIFT_X8", "SHIFT_D2", "SHIFT_D4", "SHIFT_D8", "MOD_SAT",
  "MOD_PP", "MOD_CENTROID", "COMP_GT", "COMP_LT", "COMP_GE", "COMP_LE",
  "COMP_EQ", "COMP_NE", "SMOD_BIAS", "SMOD_SCALEBIAS", "SMOD_DZ",
  "SMOD_DW", "SMOD_ABS", "SMOD_NOT", "SAMPTYPE_1D", "SAMPTYPE_2D",
  "SAMPTYPE_CUBE", "SAMPTYPE_VOLUME", "USAGE_POSITION",
  "USAGE_BLENDWEIGHT", "USAGE_BLENDINDICES", "USAGE_NORMAL", "USAGE_PSIZE",
  "USAGE_TEXCOORD", "USAGE_TANGENT", "USAGE_BINORMAL", "USAGE_TESSFACTOR",
  "USAGE_POSITIONT", "USAGE_COLOR", "USAGE_FOG", "USAGE_DEPTH",
  "USAGE_SAMPLE", "COMPONENT", "IMMVAL", "IMMBOOL", "'+'", "','", "'.'",
  "'-'", "'['", "']'", "'('", "')'", "$accept", "shader", "version_marker",
  "instructions", "complexinstr", "instruction", "dreg", "dreg_name",
  "writemask", "wm_components", "swizzle", "sw_components", "omods",
  "omodifier", "sregs", "sreg", "rel_reg", "immsum", "signed_integer",
  "signed_float", "smod", "relreg_name", "sreg_name", "comp", "dclusage",
  "dcl_inputreg", "sampdcl", "predicate", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,    43,    44,    46,    45,    91,    93,    40,
      41
};
# endif

#define YYPACT_NINF -533

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-533)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     628,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,    20,  -533,  -533,   393,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
     576,   -12,   -26,   -38,   -32,  -533,   394,  -533,  -533,   -39,
     -32,   -32,   -32,   -32,  -533,  -533,   -32,   -39,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,   250,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,   560,   -89,  -533,  -533,   560,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,   579,     1,  -533,   -54,
     -51,   -50,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,   192,   -41,   192,   -31,  -533,   -29,  -533,  -533,
    -533,  -533,  -533,  -533,   -31,   -32,   -32,   -31,   -31,   -31,
     -31,   -31,   250,   561,   561,   561,   561,   561,   561,   561,
     561,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
    -533,  -533,   -88,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,  -533,   -30,    22,
    -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,  -533,
     -28,  -533,   -20,   -19,   -18,     7,     8,     9,    11,    12,
      13,    14,    15,    16,    18,    19,    23,    25,    27,    28,
      29,    30,    31,    32,    33,    65,    66,    67,    69,    72,
      73,    74,  -533,  -533,  -533,    75,    75,   588,   424,   -62,
      77,   -55,   -30,   192,   -29,   -32,   -24,   371,   -31,   -31,
      79,    80,    90,   126,   136,   137,   138,  -533,   170,    24,
    -533,  -533,  -533,   193,   194,   195,   196,   197,   198,   199,
     208,   209,   316,   338,   339,   340,   341,   342,   350,  -533,
     351,   352,   355,   356,   357,   358,    81,   353,   -30,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
    -533,  -533,    75,  -533,  -533,  -533,  -533,   369,   367,  -533,
    -533,   372,   368,  -533,   -29,   371,  -533,  -533,  -533,   -81,
    -533,   -30,  -533,  -533,  -533,  -533,  -533,  -533,  -533,   -30,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,  -533,   374,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,  -533,   377,  -533,   370,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,  -533,  -533,   -62,
    -533,   -55,   371,  -533,   -30,   -24,   -55,  -533,   -37,  -533,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,  -533,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,  -533,  -533,   375,   378,  -533,   -30,  -533,  -533,   -30,
    -533,   -55,  -533,   -62,   -55,  -533,   -36,   -80,   379,   380,
     -55,  -533,   -55,  -533,   -62,   -55,   -63,  -533,  -533,  -533
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,    16,     1,     2,   145,    22,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,     0,     0,     0,     0,    67,     0,    70,    71,    72,
       0,     0,     0,     0,    78,    79,     0,     0,   145,   145,
     145,   145,   145,   145,   145,   145,     0,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   115,     0,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   228,   229,
     230,   231,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,     0,   145,   145,     0,
       0,     0,   186,   187,   188,   189,   190,   191,   192,   194,
     193,   195,   196,   197,   198,   199,   201,   202,   203,   204,
     200,   205,     0,     0,     0,    66,   156,   165,   206,   207,
     208,   209,   210,   211,    68,     0,     0,    74,    75,    76,
      77,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   119,   120,   121,   122,   123,   124,   126,   125,
     127,   129,   128,   130,   131,   132,   134,   135,   136,   137,
     133,    90,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,   141,     0,
      19,   147,   148,   149,   150,   151,   152,   153,   154,   155,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   227,    60,    57,    53,     0,     0,     0,
       0,     0,   141,     0,   165,     0,     0,   141,    69,    73,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
     117,   116,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,    54,    55,    62,    59,    61,   176,     0,     0,    65,
     174,     0,     0,   164,   165,   141,   157,   184,   185,     0,
     171,   141,   179,   178,   180,   181,   182,   183,   158,   141,
       0,     0,     0,     0,     0,     0,     0,     0,   139,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   142,   232,     0,    21,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    38,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    56,   177,     0,
     175,     0,   141,   160,   141,     0,     0,   166,     0,   159,
      81,    82,    83,    84,    85,    86,    87,    89,   140,    93,
      96,    97,    98,    99,   100,   101,   108,   102,   103,   104,
     105,   106,   107,   109,   110,   111,   112,   113,    94,    95,
     114,   144,   233,     0,     0,   162,   141,   161,   172,   141,
     173,     0,   167,     0,     0,   163,     0,     0,     0,     0,
       0,   168,     0,   169,     0,     0,     0,    63,    64,   170
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -533,  -533,  -533,  -533,  -533,     6,   -86,  -533,  -290,  -533,
    -304,  -533,   178,  -533,   -56,   223,  -230,  -532,  -310,  -413,
    -402,    46,  -170,   -48,  -533,  -210,  -533,  -533
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    17,   104,   105,   231,   232,   330,   429,
     357,   453,   107,   271,   185,   186,   317,   409,   410,   398,
     419,   411,   187,   195,   157,   305,   158,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     194,   402,   331,   494,   197,   198,   199,   200,   403,   547,
     201,   196,   312,   418,   314,   390,   391,   258,   556,   202,
      16,   270,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   259,   161,   455,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   160,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   533,   329,   159,   316,
     407,   408,   495,   552,   405,   496,   496,   497,   553,   306,
     536,   188,   189,   190,   191,   192,   193,   392,   395,   396,
     552,   493,   487,   496,   397,   559,   400,   498,   257,   182,
     309,   401,   260,   310,   311,   499,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   313,   541,   550,   358,   183,
     548,   542,   551,   315,   184,   356,   359,   400,   316,   318,
     319,   557,   401,   404,   360,   361,   362,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   363,   364,   365,   492,   366,   367,   368,   369,   370,
     371,   534,   372,   373,   428,   538,   540,   374,   535,   375,
     537,   376,   377,   378,   379,   380,   381,   382,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   156,   383,
     384,   385,   545,   386,   549,   546,   387,   388,   389,   399,
     329,   452,   538,   420,   421,   558,   203,   204,   205,   206,
     207,   208,   209,   210,   422,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     423,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     424,   425,   426,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   427,   307,   308,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   430,   431,   432,
     433,   434,   435,   436,   500,   501,   502,   503,   504,   505,
     506,   507,   437,   438,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     439,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   412,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   440,   441,   442,   443,   444,   413,   414,   415,
     416,   417,   393,   302,   445,   446,   447,   303,   394,   448,
     449,   450,   451,   454,   188,   189,   190,   191,   192,   193,
     488,   489,   491,   490,   508,   182,   356,   531,   406,   543,
     532,   539,   544,   554,   555,   261,   262,   263,   264,   265,
     266,   267,   268,   269,     0,   183,   102,     0,     0,     0,
     184,     0,   103,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   302,     0,
       0,     0,   303,   304,     0,     0,     0,   302,     0,     0,
       0,   303,   261,   262,   263,   264,   265,   266,   267,   268,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13
};

static const yytype_int16 yycheck[] =
{
      56,   311,   232,   405,    60,    61,    62,    63,   312,   541,
      66,    59,   182,   317,   184,   305,   306,   106,   550,    67,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   141,    91,   358,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    92,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   489,   165,    90,   167,
     104,   105,   163,   163,   314,   166,   166,   168,   168,    88,
     492,   130,   131,   132,   133,   134,   135,   307,   308,   161,
     163,   405,   392,   166,   166,   168,   161,   411,   102,   141,
     164,   166,   106,   164,   164,   419,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   166,   163,   163,   106,   161,
     543,   168,   168,   164,   166,   165,   164,   161,   167,   195,
     196,   554,   166,   313,   164,   164,   164,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   164,   164,   164,   404,   164,   164,   164,   164,   164,
     164,   491,   164,   164,   160,   495,   496,   164,   492,   164,
     494,   164,   164,   164,   164,   164,   164,   164,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   164,
     164,   164,   536,   164,   544,   539,   164,   164,   164,   162,
     165,   160,   552,   164,   164,   555,    68,    69,    70,    71,
      72,    73,    74,    75,   164,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     164,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     164,   164,   164,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   164,   157,   158,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   164,   164,   164,
     164,   164,   164,   164,   420,   421,   422,   423,   424,   425,
     426,   427,   164,   164,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     164,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   121,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   164,   164,   164,   164,   164,   136,   137,   138,
     139,   140,    88,    89,   164,   164,   164,    93,    94,   164,
     164,   164,   164,   170,   130,   131,   132,   133,   134,   135,
     161,   164,   164,   161,   160,   141,   165,   160,   315,   164,
     170,   495,   164,   164,   164,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   161,   163,    -1,    -1,    -1,
     166,    -1,   169,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    89,    -1,
      -1,    -1,    93,    94,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    93,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   172,   173,     0,   174,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   163,   169,   175,   176,   198,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   183,   195,   197,    90,
      92,    91,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   141,   161,   166,   185,   186,   193,   130,   131,
     132,   133,   134,   135,   185,   194,   194,   185,   185,   185,
     185,   185,   194,   183,   183,   183,   183,   183,   183,   183,
     183,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   177,   178,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   176,   106,   141,
     176,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     177,   184,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,    89,    93,    94,   196,    88,   183,   183,   164,
     164,   164,   193,   166,   193,   164,   167,   187,   185,   185,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   165,
     179,   187,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   165,   181,   106,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     179,   179,   196,    88,    94,   196,   161,   166,   190,   162,
     161,   166,   189,   181,   193,   187,   186,   104,   105,   188,
     189,   192,   121,   136,   137,   138,   139,   140,   181,   191,
     164,   164,   164,   164,   164,   164,   164,   164,   160,   180,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   160,   182,   170,   181,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   179,   161,   164,
     161,   164,   187,   181,   191,   163,   166,   168,   181,   181,
     185,   185,   185,   185,   185,   185,   185,   185,   160,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   160,   170,   190,   189,   181,   191,   181,   189,   192,
     189,   163,   168,   164,   164,   181,   181,   188,   190,   189,
     163,   168,   163,   168,   164,   164,   188,   190,   189,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   171,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   187,   187,   187,   187,   187,
     187,   188,   188,   188,   189,   189,   190,   190,   191,   191,
     191,   191,   191,   191,   192,   192,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   196,   196,   197,   197,
     197,   197,   198,   198
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     2,
       2,     5,     1,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     3,     4,     4,     5,     3,     4,     4,
       3,     4,     4,    10,    10,     4,     2,     1,     2,     3,
       1,     1,     1,     3,     2,     2,     2,     2,     1,     1,
       2,     5,     5,     5,     5,     5,     5,     5,     3,     5,
       2,     3,     3,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     0,     2,     1,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     5,     5,     6,     3,     0,     3,     4,     6,     6,
       8,     1,     3,     3,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5
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
#if ASMSHADER_DEBUG

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
#else /* !ASMSHADER_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ASMSHADER_DEBUG */


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
        case 2:
#line 314 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asm_ctx.funcs->end(&asm_ctx);
                        }
#line 1906 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 319 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Vertex shader 1.0\n");
                            create_vs10_parser(&asm_ctx);
                        }
#line 1915 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 324 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Vertex shader 1.1\n");
                            create_vs11_parser(&asm_ctx);
                        }
#line 1924 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 329 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Vertex shader 2.0\n");
                            create_vs20_parser(&asm_ctx);
                        }
#line 1933 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 334 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Vertex shader 2.x\n");
                            create_vs2x_parser(&asm_ctx);
                        }
#line 1942 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 339 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Vertex shader 3.0\n");
                            create_vs30_parser(&asm_ctx);
                        }
#line 1951 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 344 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 1.0\n");
                            create_ps10_parser(&asm_ctx);
                        }
#line 1960 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 349 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 1.1\n");
                            create_ps11_parser(&asm_ctx);
                        }
#line 1969 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 354 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 1.2\n");
                            create_ps12_parser(&asm_ctx);
                        }
#line 1978 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 359 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 1.3\n");
                            create_ps13_parser(&asm_ctx);
                        }
#line 1987 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 364 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 1.4\n");
                            create_ps14_parser(&asm_ctx);
                        }
#line 1996 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 369 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 2.0\n");
                            create_ps20_parser(&asm_ctx);
                        }
#line 2005 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 374 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 2.x\n");
                            create_ps2x_parser(&asm_ctx);
                        }
#line 2014 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 379 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("Pixel  shader 3.0\n");
                            create_ps30_parser(&asm_ctx);
                        }
#line 2023 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 386 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                /* Nothing to do */
                            }
#line 2031 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 391 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {

                            }
#line 2039 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 395 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("predicate\n");
                                asm_ctx.funcs->predicate(&asm_ctx, &(yyvsp[-1].reg));
                            }
#line 2048 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 400 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("coissue\n");
                                asm_ctx.funcs->coissue(&asm_ctx);
                            }
#line 2057 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 406 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ADD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ADD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2066 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 411 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("NOP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_NOP, 0, 0, 0, 0, 0, 0);
                            }
#line 2075 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 416 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MOV\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MOV, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2084 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 421 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SUB\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SUB, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2093 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 426 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MAD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MAD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2102 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 431 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MUL\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MUL, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2111 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 436 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("RCP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_RCP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2120 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 441 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("RSQ\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_RSQ, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2129 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 446 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DP3\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DP3, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2138 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 451 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DP4\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DP4, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2147 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 456 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MIN\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MIN, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2156 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 461 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MAX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MAX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2165 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 466 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SLT\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SLT, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2174 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 471 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SGE\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SGE, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2183 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 476 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ABS\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ABS, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2192 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 481 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("EXP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_EXP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2201 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 486 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LOG\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LOG, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2210 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 491 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LOGP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LOGP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2219 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 496 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("EXPP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_EXPP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2228 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 501 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DST\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DST, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2237 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 506 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LRP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LRP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2246 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 511 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("FRC\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_FRC, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2255 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 516 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("POW\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_POW, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2264 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 521 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("CRS\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_CRS, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2273 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 526 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SGN\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SGN, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2282 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 531 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("NRM\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_NRM, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2291 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 536 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SINCOS\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SINCOS, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2300 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 541 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("M4x4\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_M4x4, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2309 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 546 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("M4x3\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_M4x3, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2318 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 551 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("M3x4\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_M3x4, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2327 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 556 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("M3x3\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_M3x3, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2336 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 561 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("M3x2\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_M3x2, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2345 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 566 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Output reg declaration\n");
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = BWRITERSPR_OUTPUT;
                                reg.regnum = (yyvsp[0].regnum);
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = BWRITERSP_WRITEMASK_ALL;
                                asm_ctx.funcs->dcl_output(&asm_ctx, (yyvsp[-1].declaration).dclusage, (yyvsp[-1].declaration).regnum, &reg);
                            }
#line 2361 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 578 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Output reg declaration\n");
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = BWRITERSPR_OUTPUT;
                                reg.regnum = (yyvsp[-1].regnum);
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = (yyvsp[0].writemask);
                                asm_ctx.funcs->dcl_output(&asm_ctx, (yyvsp[-2].declaration).dclusage, (yyvsp[-2].declaration).regnum, &reg);
                            }
#line 2377 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 590 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Input reg declaration\n");
                                if((yyvsp[-1].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                if (asm_ctx.shader->type == ST_PIXEL && asm_ctx.shader->major_version == 2)
                                {
                                    asmparser_message(&asm_ctx, "Line %u: Declaration not supported in PS 2\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = (yyvsp[0].reg).type;
                                reg.regnum = (yyvsp[0].reg).regnum;
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = BWRITERSP_WRITEMASK_ALL;
                                asm_ctx.funcs->dcl_input(&asm_ctx, (yyvsp[-2].declaration).dclusage, (yyvsp[-2].declaration).regnum, (yyvsp[-1].modshift).mod, &reg);
                            }
#line 2404 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 613 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Input reg declaration\n");
                                if((yyvsp[-2].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                if (asm_ctx.shader->type == ST_PIXEL && asm_ctx.shader->major_version == 2)
                                {
                                    asmparser_message(&asm_ctx, "Line %u: Declaration not supported in PS 2\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = (yyvsp[-1].reg).type;
                                reg.regnum = (yyvsp[-1].reg).regnum;
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = (yyvsp[0].writemask);
                                asm_ctx.funcs->dcl_input(&asm_ctx, (yyvsp[-3].declaration).dclusage, (yyvsp[-3].declaration).regnum, (yyvsp[-2].modshift).mod, &reg);
                            }
#line 2431 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 636 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Input reg declaration\n");
                                if((yyvsp[-1].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                if(asm_ctx.shader->type != ST_PIXEL) {
                                    asmparser_message(&asm_ctx, "Line %u: Declaration needs a semantic\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = (yyvsp[0].reg).type;
                                reg.regnum = (yyvsp[0].reg).regnum;
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = BWRITERSP_WRITEMASK_ALL;
                                asm_ctx.funcs->dcl_input(&asm_ctx, 0, 0, (yyvsp[-1].modshift).mod, &reg);
                            }
#line 2457 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 658 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                struct shader_reg reg;
                                TRACE("Input reg declaration\n");
                                if((yyvsp[-2].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                if(asm_ctx.shader->type != ST_PIXEL) {
                                    asmparser_message(&asm_ctx, "Line %u: Declaration needs a semantic\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                ZeroMemory(&reg, sizeof(reg));
                                reg.type = (yyvsp[-1].reg).type;
                                reg.regnum = (yyvsp[-1].reg).regnum;
                                reg.rel_reg = NULL;
                                reg.srcmod = 0;
                                reg.writemask = (yyvsp[0].writemask);
                                asm_ctx.funcs->dcl_input(&asm_ctx, 0, 0, (yyvsp[-2].modshift).mod, &reg);
                            }
#line 2483 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 680 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("Sampler declared\n");
                                if((yyvsp[-1].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                asm_ctx.funcs->dcl_sampler(&asm_ctx, (yyvsp[-2].samplertype), (yyvsp[-1].modshift).mod, (yyvsp[0].regnum), asm_ctx.line_no);
                            }
#line 2497 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 690 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("Sampler declared\n");
                                if((yyvsp[-1].modshift).shift != 0) {
                                    asmparser_message(&asm_ctx, "Line %u: Shift modifier not allowed here\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                if(asm_ctx.shader->type != ST_PIXEL) {
                                    asmparser_message(&asm_ctx, "Line %u: Declaration needs a sampler type\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                }
                                asm_ctx.funcs->dcl_sampler(&asm_ctx, BWRITERSTT_UNKNOWN, (yyvsp[-1].modshift).mod, (yyvsp[0].regnum), asm_ctx.line_no);
                            }
#line 2516 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 705 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("Error rule: sampler decl of input reg\n");
                                asmparser_message(&asm_ctx, "Line %u: Sampler declarations of input regs is not valid\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_WARN);
                            }
#line 2527 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 712 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("Error rule: sampler decl of output reg\n");
                                asmparser_message(&asm_ctx, "Line %u: Sampler declarations of output regs is not valid\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_WARN);
                            }
#line 2538 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 719 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                asm_ctx.funcs->constF(&asm_ctx, (yyvsp[-8].regnum), (yyvsp[-6].immval).val, (yyvsp[-4].immval).val, (yyvsp[-2].immval).val, (yyvsp[0].immval).val);
                            }
#line 2546 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 723 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                asm_ctx.funcs->constI(&asm_ctx, (yyvsp[-8].regnum), (yyvsp[-6].immval).val, (yyvsp[-4].immval).val, (yyvsp[-2].immval).val, (yyvsp[0].immval).val);
                            }
#line 2554 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 727 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                asm_ctx.funcs->constB(&asm_ctx, (yyvsp[-2].regnum), (yyvsp[0].immbool));
                            }
#line 2562 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 731 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("REP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_REP, 0, 0, 0, 0, &(yyvsp[0].sregs), 1);
                            }
#line 2571 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 736 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ENDREP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ENDREP, 0, 0, 0, 0, 0, 0);
                            }
#line 2580 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 741 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("IF\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_IF, 0, 0, 0, 0, &(yyvsp[0].sregs), 1);
                            }
#line 2589 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 746 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("IFC\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_IFC, 0, 0, (yyvsp[-1].comptype), 0, &(yyvsp[0].sregs), 2);
                            }
#line 2598 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 751 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ELSE\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ELSE, 0, 0, 0, 0, 0, 0);
                            }
#line 2607 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 756 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ENDIF\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ENDIF, 0, 0, 0, 0, 0, 0);
                            }
#line 2616 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 761 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("BREAK\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_BREAK, 0, 0, 0, 0, 0, 0);
                            }
#line 2625 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 766 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("BREAKC\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_BREAKC, 0, 0, (yyvsp[-1].comptype), 0, &(yyvsp[0].sregs), 2);
                            }
#line 2634 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 771 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("BREAKP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_BREAKP, 0, 0, 0, 0, &(yyvsp[0].sregs), 1);
                            }
#line 2643 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 776 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("CALL\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_CALL, 0, 0, 0, 0, &(yyvsp[0].sregs), 1);
                            }
#line 2652 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 781 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("CALLNZ\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_CALLNZ, 0, 0, 0, 0, &(yyvsp[0].sregs), 2);
                            }
#line 2661 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 786 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LOOP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LOOP, 0, 0, 0, 0, &(yyvsp[0].sregs), 2);
                            }
#line 2670 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 791 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("RET\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_RET, 0, 0, 0, 0, 0, 0);
                            }
#line 2679 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 796 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("ENDLOOP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_ENDLOOP, 0, 0, 0, 0, 0, 0);
                            }
#line 2688 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 801 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LABEL\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LABEL, 0, 0, 0, 0, &(yyvsp[0].sregs), 1);
                            }
#line 2697 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 806 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("SETP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_SETP, 0, 0, (yyvsp[-3].comptype), &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2706 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 811 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXLDL\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXLDL, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2715 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 816 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("LIT\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_LIT, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2724 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 821 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("MOVA\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_MOVA, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2733 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 826 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("CND\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_CND, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2742 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 831 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("CMP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_CMP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2751 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 836 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DP2ADD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DP2ADD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 3);
                            }
#line 2760 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 841 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXCOORD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXCOORD, (yyvsp[-1].modshift).mod, (yyvsp[-1].modshift).shift, 0, &(yyvsp[0].reg), 0, 0);
                            }
#line 2769 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 846 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXCRD\n");
                                /* texcoord and texcrd share the same opcode */
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXCOORD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2779 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 852 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXKILL\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXKILL, 0, 0, 0, &(yyvsp[0].reg), 0, 0);
                            }
#line 2788 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 857 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEX, (yyvsp[-1].modshift).mod, (yyvsp[-1].modshift).shift, 0, &(yyvsp[0].reg), 0, 0);
                            }
#line 2797 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 862 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXDEPTH\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXDEPTH, (yyvsp[-1].modshift).mod, (yyvsp[-1].modshift).shift, 0, &(yyvsp[0].reg), 0, 0);
                            }
#line 2806 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 867 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXLD\n");
                                /* There is more than one acceptable syntax for texld:
                                   with 1 sreg (PS 1.4) or
                                   with 2 sregs (PS 2.0+)
                                   Moreover, texld shares the same opcode as the tex instruction,
                                   so there are a total of 3 valid syntaxes
                                   These variations are handled in asmparser.c */
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2821 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 878 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXLDP\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXLDP, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2830 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 883 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXLDB\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXLDB, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2839 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 888 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXBEM\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXBEM, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2848 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 893 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXBEML\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXBEML, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2857 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 898 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXREG2AR\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXREG2AR, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2866 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 903 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXREG2GB\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXREG2GB, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2875 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 908 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXREG2RGB\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXREG2RGB, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2884 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 913 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x2PAD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x2PAD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2893 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 918 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("INSTR_TEXM3x3PAD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x3PAD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2902 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 923 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x3SPEC\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x3SPEC, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2911 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 928 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x3VSPEC\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x3VSPEC, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2920 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 933 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x3TEX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x3TEX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2929 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 938 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXDP3TEX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXDP3TEX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2938 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 943 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x2DEPTH\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x2DEPTH, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2947 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 948 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x2TEX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x2TEX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2956 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 953 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXDP3\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXDP3, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2965 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 958 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXM3x3\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXM3x3, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2974 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 963 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("BEM\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_BEM, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 2);
                            }
#line 2983 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 968 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DSX\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DSX, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 2992 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 973 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("DSY\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_DSY, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 1);
                            }
#line 3001 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 978 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("TEXLDD\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_TEXLDD, (yyvsp[-3].modshift).mod, (yyvsp[-3].modshift).shift, 0, &(yyvsp[-2].reg), &(yyvsp[0].sregs), 4);
                            }
#line 3010 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 983 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                TRACE("PHASE\n");
                                asm_ctx.funcs->instr(&asm_ctx, BWRITERSIO_PHASE, 0, 0, 0, 0, 0, 0);
                            }
#line 3019 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 990 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                (yyval.reg).regnum = (yyvsp[-1].reg).regnum;
                                (yyval.reg).type = (yyvsp[-1].reg).type;
                                (yyval.reg).writemask = BWRITERSP_WRITEMASK_ALL;
                                (yyval.reg).srcmod = BWRITERSPSM_NONE;
                                set_rel_reg(&(yyval.reg), &(yyvsp[0].rel_reg));
                            }
#line 3031 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 998 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                                (yyval.reg).regnum = (yyvsp[-1].reg).regnum;
                                (yyval.reg).type = (yyvsp[-1].reg).type;
                                (yyval.reg).writemask = (yyvsp[0].writemask);
                                (yyval.reg).srcmod = BWRITERSPSM_NONE;
                                (yyval.reg).rel_reg = NULL;
                            }
#line 3043 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1007 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEMP;
                        }
#line 3051 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1011 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_OUTPUT;
                        }
#line 3059 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1015 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_INPUT;
                        }
#line 3067 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1019 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register c%u is not a valid destination register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3077 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1025 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register i%u is not a valid destination register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3087 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1031 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register b%u is not a valid destination register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3097 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1037 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEXTURE;
                        }
#line 3105 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1041 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEXCRDOUT;
                        }
#line 3113 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1045 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register s%u is not a valid destination register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3123 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1051 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = BWRITERSRO_POSITION; (yyval.reg).type = BWRITERSPR_RASTOUT;
                        }
#line 3131 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1055 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = BWRITERSRO_POINT_SIZE; (yyval.reg).type = BWRITERSPR_RASTOUT;
                        }
#line 3139 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1059 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = BWRITERSRO_FOG; (yyval.reg).type = BWRITERSPR_RASTOUT;
                        }
#line 3147 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1063 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_ATTROUT;
                        }
#line 3155 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1067 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_COLOROUT;
                        }
#line 3163 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1071 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_DEPTHOUT;
                        }
#line 3171 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1075 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_PREDICATE;
                        }
#line 3179 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1079 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register vPos is not a valid destination register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3189 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1085 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register vFace is not a valid destination register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3199 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1091 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            /* index 0 is hardcoded for the addr register */
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_ADDR;
                        }
#line 3208 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1096 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register aL is not a valid destination register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3218 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1103 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyvsp[0].wm_components).writemask == SWIZZLE_ERR) {
                                asmparser_message(&asm_ctx, "Line %u: Invalid writemask specified\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                /* Provide a correct writemask to prevent following complaints */
                                (yyval.writemask) = BWRITERSP_WRITEMASK_ALL;
                            }
                            else {
                                (yyval.writemask) = (yyvsp[0].wm_components).writemask;
                                TRACE("Writemask: %x\n", (yyval.writemask));
                            }
                        }
#line 3236 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1118 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.wm_components).writemask = 1 << (yyvsp[0].component);
                            (yyval.wm_components).last = (yyvsp[0].component);
                            (yyval.wm_components).idx = 1;
                        }
#line 3246 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1124 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyvsp[-1].wm_components).writemask == SWIZZLE_ERR || (yyvsp[-1].wm_components).idx == 4)
                                /* Wrong writemask */
                                (yyval.wm_components).writemask = SWIZZLE_ERR;
                            else {
                                if((yyvsp[0].component) <= (yyvsp[-1].wm_components).last)
                                    (yyval.wm_components).writemask = SWIZZLE_ERR;
                                else {
                                    (yyval.wm_components).writemask = (yyvsp[-1].wm_components).writemask | (1 << (yyvsp[0].component));
                                    (yyval.wm_components).idx = (yyvsp[-1].wm_components).idx + 1;
                                }
                            }
                        }
#line 3264 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1139 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.swizzle) = BWRITERVS_NOSWIZZLE;
                            TRACE("Default swizzle: %08x\n", (yyval.swizzle));
                        }
#line 3273 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1144 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyvsp[0].sw_components).swizzle == SWIZZLE_ERR) {
                                asmparser_message(&asm_ctx, "Line %u: Invalid swizzle\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                /* Provide a correct swizzle to prevent following complaints */
                                (yyval.swizzle) = BWRITERVS_NOSWIZZLE;
                            }
                            else {
                                uint32_t last, i;

                                (yyval.swizzle) = (yyvsp[0].sw_components).swizzle;
                                /* Fill the swizzle by extending the last component */
                                last = ((yyvsp[0].sw_components).swizzle >> 2 * ((yyvsp[0].sw_components).idx - 1)) & 0x03;
                                for(i = (yyvsp[0].sw_components).idx; i < 4; i++){
                                    (yyval.swizzle) |= last << (2 * i);
                                }
                                TRACE("Got a swizzle: %08x\n", (yyval.swizzle));
                            }
                        }
#line 3298 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1166 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.sw_components).swizzle = (yyvsp[0].component);
                            (yyval.sw_components).idx = 1;
                        }
#line 3307 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1171 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyvsp[-1].sw_components).idx == 4) {
                                /* Too many sw_components */
                                (yyval.sw_components).swizzle = SWIZZLE_ERR;
                                (yyval.sw_components).idx = 4;
                            }
                            else {
                                (yyval.sw_components).swizzle = (yyvsp[-1].sw_components).swizzle | ((yyvsp[0].component) << 2 * (yyvsp[-1].sw_components).idx);
                                (yyval.sw_components).idx = (yyvsp[-1].sw_components).idx + 1;
                            }
                        }
#line 3323 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1184 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 0;
                        }
#line 3332 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1189 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = (yyvsp[-1].modshift).mod | (yyvsp[0].modshift).mod;
                            if((yyvsp[-1].modshift).shift && (yyvsp[0].modshift).shift) {
                                asmparser_message(&asm_ctx, "Line %u: More than one shift flag\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                (yyval.modshift).shift = (yyvsp[-1].modshift).shift;
                            } else {
                                (yyval.modshift).shift = (yyvsp[-1].modshift).shift | (yyvsp[0].modshift).shift;
                            }
                        }
#line 3348 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1202 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 1;
                        }
#line 3357 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1207 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 2;
                        }
#line 3366 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1212 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 3;
                        }
#line 3375 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1217 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 15;
                        }
#line 3384 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1222 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 14;
                        }
#line 3393 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1227 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = 0;
                            (yyval.modshift).shift = 13;
                        }
#line 3402 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1232 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = BWRITERSPDM_SATURATE;
                            (yyval.modshift).shift = 0;
                        }
#line 3411 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1237 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = BWRITERSPDM_PARTIALPRECISION;
                            (yyval.modshift).shift = 0;
                        }
#line 3420 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1242 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.modshift).mod = BWRITERSPDM_MSAMPCENTROID;
                            (yyval.modshift).shift = 0;
                        }
#line 3429 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1248 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.sregs).reg[0] = (yyvsp[0].reg);
                            (yyval.sregs).count = 1;
                        }
#line 3438 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1253 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyval.sregs).count == MAX_SRC_REGS){
                                asmparser_message(&asm_ctx, "Line %u: Too many source registers in this instruction\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            }
                            else
                                (yyval.sregs).reg[(yyval.sregs).count++] = (yyvsp[0].reg);
                        }
#line 3452 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1264 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = (yyvsp[-2].reg).type;
                            (yyval.reg).regnum = (yyvsp[-2].reg).regnum;
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                            (yyval.reg).srcmod = BWRITERSPSM_NONE;
                            set_rel_reg(&(yyval.reg), &(yyvsp[-1].rel_reg));
                        }
#line 3464 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1272 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = (yyvsp[-3].reg).type;
                            (yyval.reg).regnum = (yyvsp[-3].reg).regnum;
                            set_rel_reg(&(yyval.reg), &(yyvsp[-2].rel_reg));
                            (yyval.reg).srcmod = (yyvsp[-1].srcmod);
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                        }
#line 3476 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1280 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = (yyvsp[-2].reg).type;
                            (yyval.reg).regnum = (yyvsp[-2].reg).regnum;
                            (yyval.reg).srcmod = BWRITERSPSM_NEG;
                            set_rel_reg(&(yyval.reg), &(yyvsp[-1].rel_reg));
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                        }
#line 3488 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1288 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = (yyvsp[-3].reg).type;
                            (yyval.reg).regnum = (yyvsp[-3].reg).regnum;
                            set_rel_reg(&(yyval.reg), &(yyvsp[-2].rel_reg));
                            switch((yyvsp[-1].srcmod)) {
                                case BWRITERSPSM_BIAS: (yyval.reg).srcmod = BWRITERSPSM_BIASNEG; break;
                                case BWRITERSPSM_X2:   (yyval.reg).srcmod = BWRITERSPSM_X2NEG;   break;
                                case BWRITERSPSM_SIGN: (yyval.reg).srcmod = BWRITERSPSM_SIGNNEG; break;
                                case BWRITERSPSM_ABS:  (yyval.reg).srcmod = BWRITERSPSM_ABSNEG;  break;
                                case BWRITERSPSM_DZ:
                                    asmparser_message(&asm_ctx, "Line %u: Incompatible source modifiers: NEG and DZ\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                    break;
                                case BWRITERSPSM_DW:
                                    asmparser_message(&asm_ctx, "Line %u: Incompatible source modifiers: NEG and DW\n",
                                                      asm_ctx.line_no);
                                    set_parse_status(&asm_ctx.status,  PARSE_ERR);
                                    break;
                                default:
                                    FIXME("Unhandled combination of NEGATE and %u\n", (yyvsp[-1].srcmod));
                            }
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                        }
#line 3517 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1313 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if((yyvsp[-4].immval).val != 1.0 || (!(yyvsp[-4].immval).integer)) {
                                asmparser_message(&asm_ctx, "Line %u: Only \"1 - reg\" is valid for D3DSPSM_COMP, "
                                                  "%g - reg found\n", asm_ctx.line_no, (yyvsp[-4].immval).val);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            }
                            /* Complement - not compatible with other source modifiers */
                            (yyval.reg).type = (yyvsp[-2].reg).type;
                            (yyval.reg).regnum = (yyvsp[-2].reg).regnum;
                            (yyval.reg).srcmod = BWRITERSPSM_COMP;
                            set_rel_reg(&(yyval.reg), &(yyvsp[-1].rel_reg));
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                        }
#line 3535 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1327 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            /* For nicer error reporting */
                            if((yyvsp[-5].immval).val != 1.0 || (!(yyvsp[-5].immval).integer)) {
                                asmparser_message(&asm_ctx, "Line %u: Only \"1 - reg\" is valid for D3DSPSM_COMP\n",
                                                  asm_ctx.line_no);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            } else {
                                asmparser_message(&asm_ctx, "Line %u: Incompatible source modifiers: D3DSPSM_COMP and %s\n",
                                                  asm_ctx.line_no,
                                                  debug_print_srcmod((yyvsp[-1].srcmod)));
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            }
                        }
#line 3553 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1341 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = (yyvsp[-1].reg).type;
                            (yyval.reg).regnum = (yyvsp[-1].reg).regnum;
                            (yyval.reg).rel_reg = NULL;
                            (yyval.reg).srcmod = BWRITERSPSM_NOT;
                            (yyval.reg).swizzle = (yyvsp[0].swizzle);
                        }
#line 3565 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1350 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = FALSE;
                            (yyval.rel_reg).additional_offset = 0;
                        }
#line 3574 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1355 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = FALSE;
                            (yyval.rel_reg).additional_offset = (yyvsp[-1].immval).val;
                        }
#line 3583 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1360 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = TRUE;
                            (yyval.rel_reg).type = (yyvsp[-2].reg).type;
                            (yyval.rel_reg).additional_offset = 0;
                            (yyval.rel_reg).rel_regnum = (yyvsp[-2].reg).regnum;
                            (yyval.rel_reg).swizzle = (yyvsp[-1].swizzle);
                        }
#line 3595 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1368 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = TRUE;
                            (yyval.rel_reg).type = (yyvsp[-2].reg).type;
                            (yyval.rel_reg).additional_offset = (yyvsp[-4].immval).val;
                            (yyval.rel_reg).rel_regnum = (yyvsp[-2].reg).regnum;
                            (yyval.rel_reg).swizzle = (yyvsp[-1].swizzle);
                        }
#line 3607 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1376 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = TRUE;
                            (yyval.rel_reg).type = (yyvsp[-4].reg).type;
                            (yyval.rel_reg).additional_offset = (yyvsp[-1].immval).val;
                            (yyval.rel_reg).rel_regnum = (yyvsp[-4].reg).regnum;
                            (yyval.rel_reg).swizzle = (yyvsp[-3].swizzle);
                        }
#line 3619 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1384 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.rel_reg).has_rel_reg = TRUE;
                            (yyval.rel_reg).type = (yyvsp[-4].reg).type;
                            (yyval.rel_reg).additional_offset = (yyvsp[-6].immval).val + (yyvsp[-1].immval).val;
                            (yyval.rel_reg).rel_regnum = (yyvsp[-4].reg).regnum;
                            (yyval.rel_reg).swizzle = (yyvsp[-3].swizzle);
                        }
#line 3631 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1394 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.immval).val = (yyvsp[-2].immval).val + (yyvsp[0].immval).val;
                        }
#line 3639 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1398 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.immval).val = (yyvsp[-2].immval).val - (yyvsp[0].immval).val;
                        }
#line 3647 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1404 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if (!(yyvsp[0].immval).integer)
                            {
                                asmparser_message(&asm_ctx, "Line %u: Unexpected float %f\n",
                                        asm_ctx.line_no, (yyvsp[0].immval).val);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            }
                            (yyval.immval).val = (yyvsp[0].immval).val;
                        }
#line 3661 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1414 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            if (!(yyvsp[0].immval).integer)
                            {
                                asmparser_message(&asm_ctx, "Line %u: Unexpected float %f\n",
                                        asm_ctx.line_no, (yyvsp[0].immval).val);
                                set_parse_status(&asm_ctx.status,  PARSE_ERR);
                            }
                            (yyval.immval).val = -(yyvsp[0].immval).val;
                        }
#line 3675 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1426 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.immval).val = (yyvsp[0].immval).val;
                        }
#line 3683 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1430 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.immval).val = -(yyvsp[0].immval).val;
                        }
#line 3691 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1435 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_BIAS;
                        }
#line 3699 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1439 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_X2;
                        }
#line 3707 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1443 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_SIGN;
                        }
#line 3715 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1447 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_DZ;
                        }
#line 3723 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1451 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_DW;
                        }
#line 3731 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1455 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.srcmod) = BWRITERSPSM_ABS;
                        }
#line 3739 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1460 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_ADDR;
                        }
#line 3747 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1464 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_LOOP;
                        }
#line 3755 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1469 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEMP;
                        }
#line 3763 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1473 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register o%u is not a valid source register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3773 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1479 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_INPUT;
                        }
#line 3781 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1483 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_CONST;
                        }
#line 3789 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1487 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_CONSTINT;
                        }
#line 3797 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1491 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_CONSTBOOL;
                        }
#line 3805 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1495 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEXTURE;
                        }
#line 3813 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1499 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oT%u is not a valid source register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3823 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1505 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_SAMPLER;
                        }
#line 3831 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1509 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oPos is not a valid source register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3841 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1515 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oFog is not a valid source register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3851 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1521 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oD%u is not a valid source register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3861 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1527 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oC%u is not a valid source register\n",
                                              asm_ctx.line_no, (yyvsp[0].regnum));
                            set_parse_status(&asm_ctx.status,  PARSE_WARN);
                        }
#line 3871 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1533 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            asmparser_message(&asm_ctx, "Line %u: Register oDepth is not a valid source register\n",
                                              asm_ctx.line_no);
                            set_parse_status(&asm_ctx.status, PARSE_WARN);
                        }
#line 3881 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1539 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_PREDICATE;
                        }
#line 3889 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1543 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_MISCTYPE;
                        }
#line 3897 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1547 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 1; (yyval.reg).type = BWRITERSPR_MISCTYPE;
                        }
#line 3905 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1551 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_ADDR;
                        }
#line 3913 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1555 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = 0; (yyval.reg).type = BWRITERSPR_LOOP;
                        }
#line 3921 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1559 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_LABEL;
                        }
#line 3929 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1563 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_GT;       }
#line 3935 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1564 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_LT;       }
#line 3941 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1565 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_GE;       }
#line 3947 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1566 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_LE;       }
#line 3953 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1567 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_EQ;       }
#line 3959 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1568 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    { (yyval.comptype) = BWRITER_COMPARISON_NE;       }
#line 3965 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1571 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_position%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_POSITION;
                        }
#line 3975 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1577 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_blendweight%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_BLENDWEIGHT;
                        }
#line 3985 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1583 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_blendindices%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_BLENDINDICES;
                        }
#line 3995 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1589 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_normal%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_NORMAL;
                        }
#line 4005 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1595 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_psize%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_PSIZE;
                        }
#line 4015 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1601 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_texcoord%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_TEXCOORD;
                        }
#line 4025 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1607 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_tangent%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_TANGENT;
                        }
#line 4035 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1613 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_binormal%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_BINORMAL;
                        }
#line 4045 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1619 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_tessfactor%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_TESSFACTOR;
                        }
#line 4055 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1625 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_positiont%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_POSITIONT;
                        }
#line 4065 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1631 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_color%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_COLOR;
                        }
#line 4075 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1637 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_fog%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_FOG;
                        }
#line 4085 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1643 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_depth%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_DEPTH;
                        }
#line 4095 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1649 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            TRACE("dcl_sample%u\n", (yyvsp[0].regnum));
                            (yyval.declaration).regnum = (yyvsp[0].regnum);
                            (yyval.declaration).dclusage = BWRITERDECLUSAGE_SAMPLE;
                        }
#line 4105 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1656 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_INPUT;
                        }
#line 4113 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1660 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).regnum = (yyvsp[0].regnum); (yyval.reg).type = BWRITERSPR_TEXTURE;
                        }
#line 4121 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1665 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.samplertype) = BWRITERSTT_1D;
                        }
#line 4129 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1669 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.samplertype) = BWRITERSTT_2D;
                        }
#line 4137 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1673 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.samplertype) = BWRITERSTT_CUBE;
                        }
#line 4145 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1677 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.samplertype) = BWRITERSTT_VOLUME;
                        }
#line 4153 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1682 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = BWRITERSPR_PREDICATE;
                            (yyval.reg).regnum = 0;
                            (yyval.reg).rel_reg = NULL;
                            (yyval.reg).srcmod = BWRITERSPSM_NONE;
                            (yyval.reg).swizzle = (yyvsp[-1].swizzle);
                        }
#line 4165 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1690 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1646  */
    {
                            (yyval.reg).type = BWRITERSPR_PREDICATE;
                            (yyval.reg).regnum = 0;
                            (yyval.reg).rel_reg = NULL;
                            (yyval.reg).srcmod = BWRITERSPSM_NOT;
                            (yyval.reg).swizzle = (yyvsp[-1].swizzle);
                        }
#line 4177 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
    break;


#line 4181 "dlls/d3dcompiler_41/asmshader.tab.c" /* yacc.c:1646  */
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
#line 1698 "../wine-source/dlls/d3dcompiler_43/asmshader.y" /* yacc.c:1906  */


struct bwriter_shader *parse_asm_shader(char **messages)
{
    struct bwriter_shader *ret = NULL;

    asm_ctx.shader = NULL;
    asm_ctx.status = PARSE_SUCCESS;
    asm_ctx.messages.size = asm_ctx.messages.capacity = 0;
    asm_ctx.line_no = 1;

    asmshader_parse();

    if (asm_ctx.status != PARSE_ERR)
        ret = asm_ctx.shader;
    else if (asm_ctx.shader)
        SlDeleteShader(asm_ctx.shader);

    if (messages)
    {
        if (asm_ctx.messages.size)
        {
            /* Shrink the buffer to the used size */
            *messages = d3dcompiler_realloc(asm_ctx.messages.string, asm_ctx.messages.size + 1);
            if (!*messages)
            {
                ERR("Out of memory, no messages reported\n");
                d3dcompiler_free(asm_ctx.messages.string);
            }
        }
        else
        {
            *messages = NULL;
        }
    }
    else
    {
        if (asm_ctx.messages.capacity)
            d3dcompiler_free(asm_ctx.messages.string);
    }

    return ret;
}
