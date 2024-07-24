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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         PREPROC_YYSTYPE
#define YYLTYPE         PREPROC_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         preproc_yyparse
#define yylex           preproc_yylex
#define yyerror         preproc_yyerror
#define yydebug         preproc_yydebug
#define yynerrs         preproc_yynerrs


/* Copy the first part of user declarations.  */

#line 75 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef PREPROC_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define PREPROC_YYDEBUG 1
#  else
#   define PREPROC_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define PREPROC_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined PREPROC_YYDEBUG */
#if PREPROC_YYDEBUG
extern int preproc_yydebug;
#endif
/* "%code requires" blocks.  */
#line 22 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:355  */


#include "vkd3d_shader_private.h"
#include "preproc.h"
#include <stdio.h>
#include <sys/stat.h>

#define PREPROC_YYLTYPE struct vkd3d_shader_location

struct parse_arg_names
{
    char **args;
    size_t count;
};


#line 127 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef PREPROC_YYTOKENTYPE
# define PREPROC_YYTOKENTYPE
  enum preproc_yytokentype
  {
    T_HASHSTRING = 258,
    T_IDENTIFIER = 259,
    T_IDENTIFIER_PAREN = 260,
    T_INTEGER = 261,
    T_STRING = 262,
    T_TEXT = 263,
    T_NEWLINE = 264,
    T_DEFINE = 265,
    T_ERROR = 266,
    T_ELIF = 267,
    T_ELSE = 268,
    T_ENDIF = 269,
    T_IF = 270,
    T_IFDEF = 271,
    T_IFNDEF = 272,
    T_INCLUDE = 273,
    T_LINE = 274,
    T_PRAGMA = 275,
    T_UNDEF = 276,
    T_CONCAT = 277,
    T_LE = 278,
    T_GE = 279,
    T_EQ = 280,
    T_NE = 281,
    T_AND = 282,
    T_OR = 283,
    T_DEFINED = 284
  };
#endif

/* Value type.  */
#if ! defined PREPROC_YYSTYPE && ! defined PREPROC_YYSTYPE_IS_DECLARED

union PREPROC_YYSTYPE
{
#line 276 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:355  */

    char *string;
    const char *const_string;
    uint32_t integer;
    struct vkd3d_string_buffer string_buffer;
    struct parse_arg_names arg_names;

#line 177 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:355  */
};

typedef union PREPROC_YYSTYPE PREPROC_YYSTYPE;
# define PREPROC_YYSTYPE_IS_TRIVIAL 1
# define PREPROC_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined PREPROC_YYLTYPE && ! defined PREPROC_YYLTYPE_IS_DECLARED
typedef struct PREPROC_YYLTYPE PREPROC_YYLTYPE;
struct PREPROC_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define PREPROC_YYLTYPE_IS_DECLARED 1
# define PREPROC_YYLTYPE_IS_TRIVIAL 1
#endif



int preproc_yyparse (void *scanner, struct preproc_ctx *ctx);
/* "%code provides" blocks.  */
#line 40 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:355  */


int preproc_yylex(PREPROC_YYSTYPE *yylval_param, PREPROC_YYLTYPE *yylloc_param, void *scanner);


#line 209 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:355  */



/* Copy the second part of user declarations.  */

#line 215 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 47 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:359  */


#define YYLLOC_DEFAULT(cur, rhs, n) (cur) = YYRHSLOC(rhs, !!n)

#ifndef S_ISREG
# define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif

static void preproc_error(struct preproc_ctx *ctx, const struct vkd3d_shader_location *loc,
        enum vkd3d_shader_error error, const char *format, ...)
{
    va_list args;

    va_start(args, format);
    vkd3d_shader_verror(ctx->message_context, loc, error, format, args);
    va_end(args);
    ctx->error = true;
}

void preproc_warning(struct preproc_ctx *ctx, const struct vkd3d_shader_location *loc,
        enum vkd3d_shader_error error, const char *format, ...)
{
    va_list args;

    va_start(args, format);
    vkd3d_shader_vwarning(ctx->message_context, loc, error, format, args);
    va_end(args);
}

static void yyerror(const YYLTYPE *loc, void *scanner, struct preproc_ctx *ctx, const char *string)
{
    preproc_error(ctx, loc, VKD3D_SHADER_ERROR_PP_INVALID_SYNTAX, "%s", string);
}

struct preproc_macro *preproc_find_macro(struct preproc_ctx *ctx, const char *name)
{
    struct rb_entry *entry;

    if ((entry = rb_get(&ctx->macros, name)))
        return RB_ENTRY_VALUE(entry, struct preproc_macro, entry);
    return NULL;
}

bool preproc_add_macro(struct preproc_ctx *ctx, const struct vkd3d_shader_location *loc, char *name, char **arg_names,
        size_t arg_count, const struct vkd3d_shader_location *body_loc, struct vkd3d_string_buffer *body)
{
    struct preproc_macro *macro;
    unsigned int i;
    int ret;

    if ((macro = preproc_find_macro(ctx, name)))
    {
        preproc_warning(ctx, loc, VKD3D_SHADER_WARNING_PP_ALREADY_DEFINED, "Redefinition of %s.", name);
        rb_remove(&ctx->macros, &macro->entry);
        preproc_free_macro(macro);
    }

    TRACE("Defining new macro %s with %zu arguments.\n", debugstr_a(name), arg_count);

    if (!(macro = vkd3d_malloc(sizeof(*macro))))
        return false;
    macro->name = name;
    macro->arg_names = arg_names;
    macro->arg_count = arg_count;
    macro->arg_values = NULL;
    if (arg_count && !(macro->arg_values = vkd3d_calloc(arg_count, sizeof(*macro->arg_values))))
    {
        vkd3d_free(macro);
        return false;
    }
    for (i = 0; i < arg_count; ++i)
        vkd3d_string_buffer_init(&macro->arg_values[i].text);
    macro->body.text = *body;
    macro->body.location = *body_loc;
    ret = rb_put(&ctx->macros, name, &macro->entry);
    assert(!ret);
    return true;
}

void preproc_free_macro(struct preproc_macro *macro)
{
    unsigned int i;

    vkd3d_free(macro->name);
    for (i = 0; i < macro->arg_count; ++i)
    {
        vkd3d_string_buffer_cleanup(&macro->arg_values[i].text);
        vkd3d_free(macro->arg_names[i]);
    }
    vkd3d_free(macro->arg_names);
    vkd3d_free(macro->arg_values);
    vkd3d_string_buffer_cleanup(&macro->body.text);
    vkd3d_free(macro);
}

static bool preproc_was_writing(struct preproc_ctx *ctx)
{
    const struct preproc_file *file = preproc_get_top_file(ctx);

    /* This applies across files, since we can't #include anyway if we weren't
     * writing. */
    if (file->if_count < 2)
        return true;
    return file->if_stack[file->if_count - 2].current_true;
}

static bool preproc_push_if(struct preproc_ctx *ctx, bool condition)
{
    struct preproc_file *file = preproc_get_top_file(ctx);
    struct preproc_if_state *state;

    if (!vkd3d_array_reserve((void **)&file->if_stack, &file->if_stack_size,
            file->if_count + 1, sizeof(*file->if_stack)))
        return false;
    state = &file->if_stack[file->if_count++];
    state->current_true = condition && preproc_was_writing(ctx);
    state->seen_true = condition;
    state->seen_else = false;
    return true;
}

static int default_open_include(const char *filename, bool local,
        const char *parent_data, void *context, struct vkd3d_shader_code *out)
{
    uint8_t *data, *new_data;
    size_t size = 4096;
    struct stat st;
    size_t pos = 0;
    size_t ret;
    FILE *f;

    if (!(f = fopen(filename, "rb")))
    {
        ERR("Unable to open %s for reading.\n", debugstr_a(filename));
        return VKD3D_ERROR;
    }

    if (fstat(fileno(f), &st) == -1)
    {
        ERR("Could not stat file %s.\n", debugstr_a(filename));
        fclose(f);
        return VKD3D_ERROR;
    }

    if (S_ISREG(st.st_mode))
        size = st.st_size;

    if (!(data = vkd3d_malloc(size)))
    {
        fclose(f);
        return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    for (;;)
    {
        if (pos >= size)
        {
            if (size > SIZE_MAX / 2 || !(new_data = vkd3d_realloc(data, size * 2)))
            {
                vkd3d_free(data);
                fclose(f);
                return VKD3D_ERROR_OUT_OF_MEMORY;
            }
            data = new_data;
            size *= 2;
        }

        if (!(ret = fread(&data[pos], 1, size - pos, f)))
            break;
        pos += ret;
    }

    if (!feof(f))
    {
        vkd3d_free(data);
        return VKD3D_ERROR;
    }

    fclose(f);

    out->code = data;
    out->size = pos;

    return VKD3D_OK;
}

static void default_close_include(const struct vkd3d_shader_code *code, void *context)
{
    vkd3d_free((void *)code->code);
}

void preproc_close_include(struct preproc_ctx *ctx, const struct vkd3d_shader_code *code)
{
    PFN_vkd3d_shader_close_include close_include = ctx->preprocess_info->pfn_close_include;

    if (!close_include)
        close_include = default_close_include;

    close_include(code, ctx->preprocess_info->include_context);
}

static const void *get_parent_data(struct preproc_ctx *ctx)
{
    if (ctx->file_count == 1)
        return NULL;
    return preproc_get_top_file(ctx)->code.code;
}

static void free_parse_arg_names(struct parse_arg_names *args)
{
    unsigned int i;

    for (i = 0; i < args->count; ++i)
        vkd3d_free(args->args[i]);
    vkd3d_free(args->args);
}


#line 436 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:359  */

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
         || (defined PREPROC_YYLTYPE_IS_TRIVIAL && PREPROC_YYLTYPE_IS_TRIVIAL \
             && defined PREPROC_YYSTYPE_IS_TRIVIAL && PREPROC_YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,     2,    44,     2,
      31,    32,    40,    37,    30,    38,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
      42,     2,    43,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,    45,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if PREPROC_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   336,   336,   337,   343,   350,   365,   369,   378,   385,
     386,   387,   388,   389,   392,   396,   400,   404,   408,   412,
     416,   420,   424,   428,   432,   436,   440,   444,   448,   452,
     456,   460,   464,   468,   472,   476,   480,   484,   488,   492,
     496,   502,   511,   521,   533,   538,   543,   548,   572,   596,
     606,   610,   615,   647,   652,   660,   665,   670,   675,   680,
     686,   687,   691,   695,   701,   702,   706,   717,   718,   722,
     728,   729,   733,   737,   741,   747,   748,   752,   758,   759,
     765,   766,   772,   773,   779,   780,   786,   787,   793,   794
};
#endif

#if PREPROC_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_HASHSTRING", "T_IDENTIFIER",
  "T_IDENTIFIER_PAREN", "T_INTEGER", "T_STRING", "T_TEXT", "T_NEWLINE",
  "\"#define\"", "\"#error\"", "\"#elif\"", "\"#else\"", "\"#endif\"",
  "\"#if\"", "\"#ifdef\"", "\"#ifndef\"", "\"#include\"", "\"#line\"",
  "\"#pragma\"", "\"#undef\"", "\"##\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"&&\"", "\"||\"", "\"defined\"", "','", "'('", "')'", "'['",
  "']'", "'{'", "'}'", "'+'", "'-'", "'!'", "'*'", "'/'", "'<'", "'>'",
  "'&'", "'|'", "'^'", "'?'", "':'", "$accept", "shader_text",
  "identifier_list", "body_text", "body_token", "body_token_const",
  "directive", "primary_expr", "unary_expr", "mul_expr", "add_expr",
  "ineq_expr", "eq_expr", "bitand_expr", "bitxor_expr", "bitor_expr",
  "logicand_expr", "logicor_expr", "expr", YY_NULLPTR
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
      44,    40,    41,    91,    93,   123,   125,    43,    45,    33,
      42,    47,    60,    62,    38,   124,    94,    63,    58
};
# endif

#define YYPACT_NINF -72

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-72)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -72,    98,   -72,    55,     8,    91,    -1,    44,    91,    53,
      59,    95,    60,   100,   -72,   -72,    90,   117,   -72,   -72,
     -72,    92,    91,    91,    91,    91,   -72,   -72,    21,    27,
      82,   108,    96,    93,    97,   114,   115,     0,   -72,   -72,
       1,   135,   136,   137,     9,   138,    -2,   144,   -72,   -72,
     145,    71,   -72,   -72,   -72,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
     -72,    91,   -72,   -72,   -72,   -72,   141,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,    26,   119,   -72,   -72,   -72,
      21,    21,    27,    27,    27,    27,    82,    82,   108,    96,
      93,    97,   114,    79,   -72,   148,   -72,   -72,    91,   -72,
      46,   115,   -72
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     6,     0,     0,    50,    56,
      55,     0,     0,     0,     0,     0,    60,    64,    67,    70,
      75,    78,    80,    82,    84,    86,    88,     0,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    57,
       0,     0,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    44,    45,    46,    52,     0,    53,    43,     9,
      10,    11,    12,    13,    41,    33,    34,    35,    36,    37,
      38,    39,    40,    20,    14,    15,    16,    17,    18,    19,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     7,     8,     4,     0,     0,    59,    65,    66,
      68,    69,    73,    74,    71,    72,    76,    77,    79,    81,
      83,    85,    87,     0,    54,     0,     6,    58,     0,     5,
       0,    89,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   -72,    17,   -72,   -72,   -72,   -72,    76,    78,
     -48,    74,    89,    94,    88,    99,    87,   -71,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,   115,    46,   112,   113,    14,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     133,    79,    80,    81,    82,    40,    83,    84,    38,    70,
      72,   122,   123,   124,   125,    17,    76,    18,    77,    51,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    71,    71,    79,
      80,    81,    82,    39,    83,   142,   135,    41,   136,    15,
      16,    55,    56,    42,    57,    58,    44,   141,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    19,    49,    20,     2,    52,
      53,    54,    43,   117,    45,    59,    60,    69,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    71,    13,
      21,    47,    22,    50,    61,    62,    48,   138,    23,    24,
      25,   118,   119,    63,    64,   120,   121,   126,   127,    66,
      65,    68,    67,    69,    73,    74,    75,    78,   114,   116,
     134,   137,   139,   140,   128,   130,   132,     0,     0,     0,
     129,     0,     0,     0,     0,     0,     0,   131
};

static const yytype_int16 yycheck[] =
{
      71,     3,     4,     5,     6,     8,     8,     9,     9,     9,
       9,    59,    60,    61,    62,     7,     7,     9,     9,    22,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    47,    47,     3,
       4,     5,     6,     9,     8,     9,    30,     4,    32,     4,
       5,    40,    41,     4,    37,    38,     6,   138,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     4,     4,     6,     0,    23,
      24,    25,     7,    32,     4,    23,    24,    28,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    47,    21,
      29,    31,    31,    31,    42,    43,     9,    48,    37,    38,
      39,    55,    56,    25,    26,    57,    58,    63,    64,    46,
      44,    27,    45,    28,     9,     9,     9,     9,     4,     4,
       9,    32,     4,   136,    65,    67,    69,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    21,    55,     4,     5,     7,     9,     4,
       6,    29,    31,    37,    38,    39,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     9,     9,
      67,     4,     4,     7,     6,     4,    52,    31,     9,     4,
      31,    67,    57,    57,    57,    40,    41,    37,    38,    23,
      24,    42,    43,    25,    26,    44,    46,    45,    27,    28,
       9,    47,     9,     9,     9,     9,     7,     9,     9,     3,
       4,     5,     6,     8,     9,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    53,    54,     4,    51,     4,    32,    57,    57,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    62,
      63,    64,    65,    66,     9,    30,    32,    32,    48,     4,
      52,    66,     9
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    52,    52,    52,    53,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     7,     3,     3,     3,     3,     3,     2,     2,
       2,     3,     3,     3,     4,     1,     1,     2,     4,     3,
       1,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5
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
      yyerror (&yylloc, scanner, ctx, YY_("syntax error: cannot back up")); \
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
#if PREPROC_YYDEBUG

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
# if defined PREPROC_YYLTYPE_IS_TRIVIAL && PREPROC_YYLTYPE_IS_TRIVIAL

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
                  Type, Value, Location, scanner, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct preproc_ctx *ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct preproc_ctx *ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, ctx);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void *scanner, struct preproc_ctx *ctx)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !PREPROC_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !PREPROC_YYDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, struct preproc_ctx *ctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
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
yyparse (void *scanner, struct preproc_ctx *ctx)
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
# if defined PREPROC_YYLTYPE_IS_TRIVIAL && PREPROC_YYLTYPE_IS_TRIVIAL
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
      yychar = yylex (&yylval, &yylloc, scanner);
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
#line 338 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            vkd3d_string_buffer_printf(&ctx->buffer, "\n");
        }
#line 1725 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 344 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (!((yyval.arg_names).args = vkd3d_malloc(sizeof(*(yyval.arg_names).args))))
                YYABORT;
            (yyval.arg_names).args[0] = (yyvsp[0].string);
            (yyval.arg_names).count = 1;
        }
#line 1736 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 351 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            char **new_array;

            if (!(new_array = vkd3d_realloc((yyvsp[-2].arg_names).args, ((yyvsp[-2].arg_names).count + 1) * sizeof(*(yyval.arg_names).args))))
            {
                free_parse_arg_names(&(yyvsp[-2].arg_names));
                YYABORT;
            }
            (yyval.arg_names).args = new_array;
            (yyval.arg_names).count = (yyvsp[-2].arg_names).count + 1;
            (yyval.arg_names).args[(yyvsp[-2].arg_names).count] = (yyvsp[0].string);
        }
#line 1753 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 366 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            vkd3d_string_buffer_init(&(yyval.string_buffer));
        }
#line 1761 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 370 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (vkd3d_string_buffer_printf(&(yyval.string_buffer), "%s ", (yyvsp[0].string)) < 0)
            {
                vkd3d_free((yyvsp[0].string));
                YYABORT;
            }
            vkd3d_free((yyvsp[0].string));
        }
#line 1774 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 379 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (vkd3d_string_buffer_printf(&(yyval.string_buffer), "%s ", (yyvsp[0].const_string)) < 0)
                YYABORT;
        }
#line 1783 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 393 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "(";
        }
#line 1791 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 397 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = ")";
        }
#line 1799 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 401 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "[";
        }
#line 1807 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 405 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "]";
        }
#line 1815 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 409 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "{";
        }
#line 1823 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 413 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "}";
        }
#line 1831 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 417 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = ",";
        }
#line 1839 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 421 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "+";
        }
#line 1847 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 425 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "-";
        }
#line 1855 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 429 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "!";
        }
#line 1863 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 433 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "*";
        }
#line 1871 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 437 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "/";
        }
#line 1879 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 441 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "<";
        }
#line 1887 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 445 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = ">";
        }
#line 1895 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 449 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "&";
        }
#line 1903 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 453 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "|";
        }
#line 1911 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 457 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "^";
        }
#line 1919 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 461 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "?";
        }
#line 1927 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 465 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = ":";
        }
#line 1935 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 469 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "##";
        }
#line 1943 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 473 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "<=";
        }
#line 1951 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 477 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = ">=";
        }
#line 1959 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 481 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "==";
        }
#line 1967 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 485 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "!=";
        }
#line 1975 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 489 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "&&";
        }
#line 1983 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 493 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "||";
        }
#line 1991 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 497 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.const_string) = "defined";
        }
#line 1999 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 503 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (!preproc_add_macro(ctx, &(yyloc), (yyvsp[-2].string), NULL, 0, &(yylsp[-1]), &(yyvsp[-1].string_buffer)))
            {
                vkd3d_free((yyvsp[-2].string));
                vkd3d_string_buffer_cleanup(&(yyvsp[-1].string_buffer));
                YYABORT;
            }
        }
#line 2012 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 512 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (!preproc_add_macro(ctx, &(yylsp[-1]), (yyvsp[-5].string), (yyvsp[-3].arg_names).args, (yyvsp[-3].arg_names).count, &(yylsp[-1]), &(yyvsp[-1].string_buffer)))
            {
                vkd3d_free((yyvsp[-5].string));
                free_parse_arg_names(&(yyvsp[-3].arg_names));
                vkd3d_string_buffer_cleanup(&(yyvsp[-1].string_buffer));
                YYABORT;
            }
        }
#line 2026 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 522 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            struct preproc_macro *macro;

            if ((macro = preproc_find_macro(ctx, (yyvsp[-1].string))))
            {
                TRACE("Removing macro definition %s.\n", debugstr_a((yyvsp[-1].string)));
                rb_remove(&ctx->macros, &macro->entry);
                preproc_free_macro(macro);
            }
            vkd3d_free((yyvsp[-1].string));
        }
#line 2042 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 534 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (!preproc_push_if(ctx, !!(yyvsp[-1].integer)))
                YYABORT;
        }
#line 2051 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 539 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            preproc_push_if(ctx, !!preproc_find_macro(ctx, (yyvsp[-1].string)));
            vkd3d_free((yyvsp[-1].string));
        }
#line 2060 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 544 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            preproc_push_if(ctx, !preproc_find_macro(ctx, (yyvsp[-1].string)));
            vkd3d_free((yyvsp[-1].string));
        }
#line 2069 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 549 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            const struct preproc_file *file = preproc_get_top_file(ctx);

            if (file->if_count)
            {
                struct preproc_if_state *state = &file->if_stack[file->if_count - 1];

                if (state->seen_else)
                {
                    preproc_warning(ctx, &(yyloc), VKD3D_SHADER_WARNING_PP_INVALID_DIRECTIVE, "Ignoring #elif after #else.");
                }
                else
                {
                    state->current_true = (yyvsp[-1].integer) && !state->seen_true && preproc_was_writing(ctx);
                    state->seen_true = (yyvsp[-1].integer) || state->seen_true;
                }
            }
            else
            {
                preproc_warning(ctx, &(yyloc), VKD3D_SHADER_WARNING_PP_INVALID_DIRECTIVE,
                        "Ignoring #elif without prior #if.");
            }
        }
#line 2097 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 573 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            const struct preproc_file *file = preproc_get_top_file(ctx);

            if (file->if_count)
            {
                struct preproc_if_state *state = &file->if_stack[file->if_count - 1];

                if (state->seen_else)
                {
                    preproc_warning(ctx, &(yyloc), VKD3D_SHADER_WARNING_PP_INVALID_DIRECTIVE, "Ignoring #else after #else.");
                }
                else
                {
                    state->current_true = !state->seen_true && preproc_was_writing(ctx);
                    state->seen_else = true;
                }
            }
            else
            {
                preproc_warning(ctx, &(yyloc), VKD3D_SHADER_WARNING_PP_INVALID_DIRECTIVE,
                        "Ignoring #else without prior #if.");
            }
        }
#line 2125 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 597 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            struct preproc_file *file = preproc_get_top_file(ctx);

            if (file->if_count)
                --file->if_count;
            else
                preproc_warning(ctx, &(yyloc), VKD3D_SHADER_WARNING_PP_INVALID_DIRECTIVE,
                        "Ignoring #endif without prior #if.");
        }
#line 2139 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 607 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            preproc_error(ctx, &(yyloc), VKD3D_SHADER_ERROR_PP_ERROR_DIRECTIVE, "Error directive.");
        }
#line 2147 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 611 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            preproc_error(ctx, &(yyloc), VKD3D_SHADER_ERROR_PP_ERROR_DIRECTIVE, "Error directive: %s", (yyvsp[-1].string));
            vkd3d_free((yyvsp[-1].string));
        }
#line 2156 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 616 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            PFN_vkd3d_shader_open_include open_include = ctx->preprocess_info->pfn_open_include;
            struct vkd3d_shader_code code;
            char *filename;
            int result;

            if (!(filename = vkd3d_malloc(strlen((yyvsp[-1].string)) - 1)))
                YYABORT;

            if (!open_include)
                open_include = default_open_include;

            memcpy(filename, (yyvsp[-1].string) + 1, strlen((yyvsp[-1].string)) - 2);
            filename[strlen((yyvsp[-1].string)) - 2] = 0;

            if (!(result = open_include(filename, (yyvsp[-1].string)[0] == '"', get_parent_data(ctx),
                    ctx->preprocess_info->include_context, &code)))
            {
                if (!preproc_push_include(ctx, filename, &code))
                {
                    preproc_close_include(ctx, &code);
                    vkd3d_free(filename);
                }
            }
            else
            {
                preproc_error(ctx, &(yyloc), VKD3D_SHADER_ERROR_PP_INCLUDE_FAILED, "Failed to open %s.", (yyvsp[-1].string));
                vkd3d_free(filename);
            }
            vkd3d_free((yyvsp[-1].string));
        }
#line 2192 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 648 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            FIXME("#line directive.\n");
            vkd3d_free((yyvsp[-1].string));
        }
#line 2201 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 653 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            FIXME("#line directive.\n");
            vkd3d_free((yyvsp[-2].string));
            vkd3d_free((yyvsp[-1].string));
        }
#line 2211 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 661 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = vkd3d_parse_integer((yyvsp[0].string));
            vkd3d_free((yyvsp[0].string));
        }
#line 2220 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 666 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = 0;
            vkd3d_free((yyvsp[0].string));
        }
#line 2229 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 671 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = !!preproc_find_macro(ctx, (yyvsp[0].string));
            vkd3d_free((yyvsp[0].string));
        }
#line 2238 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 676 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = !!preproc_find_macro(ctx, (yyvsp[-1].string));
            vkd3d_free((yyvsp[-1].string));
        }
#line 2247 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 681 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-1].integer);
        }
#line 2255 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 688 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[0].integer);
        }
#line 2263 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 692 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = -(yyvsp[0].integer);
        }
#line 2271 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 696 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = !(yyvsp[0].integer);
        }
#line 2279 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 703 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) * (yyvsp[0].integer);
        }
#line 2287 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 707 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            if (!(yyvsp[0].integer))
            {
                preproc_warning(ctx, &(yylsp[0]), VKD3D_SHADER_WARNING_PP_DIV_BY_ZERO, "Division by zero.");
                (yyvsp[0].integer) = 1;
            }
            (yyval.integer) = (yyvsp[-2].integer) / (yyvsp[0].integer);
        }
#line 2300 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 719 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) + (yyvsp[0].integer);
        }
#line 2308 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 723 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) - (yyvsp[0].integer);
        }
#line 2316 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 730 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) < (yyvsp[0].integer);
        }
#line 2324 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 734 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) > (yyvsp[0].integer);
        }
#line 2332 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 738 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) <= (yyvsp[0].integer);
        }
#line 2340 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 742 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) >= (yyvsp[0].integer);
        }
#line 2348 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 749 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) == (yyvsp[0].integer);
        }
#line 2356 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 753 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) != (yyvsp[0].integer);
        }
#line 2364 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 760 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) & (yyvsp[0].integer);
        }
#line 2372 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 767 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) ^ (yyvsp[0].integer);
        }
#line 2380 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 774 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) | (yyvsp[0].integer);
        }
#line 2388 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 781 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) && (yyvsp[0].integer);
        }
#line 2396 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 788 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-2].integer) || (yyvsp[0].integer);
        }
#line 2404 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 795 "../wine-source/libs/vkd3d/libs/vkd3d-shader/preproc.y" /* yacc.c:1646  */
    {
            (yyval.integer) = (yyvsp[-4].integer) ? (yyvsp[-2].integer) : (yyvsp[0].integer);
        }
#line 2412 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
    break;


#line 2416 "libs/vkd3d/libs/vkd3d-shader/preproc.tab.c" /* yacc.c:1646  */
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
      yyerror (&yylloc, scanner, ctx, YY_("syntax error"));
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
        yyerror (&yylloc, scanner, ctx, yymsgp);
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
                      yytoken, &yylval, &yylloc, scanner, ctx);
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
                  yystos[yystate], yyvsp, yylsp, scanner, ctx);
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
  yyerror (&yylloc, scanner, ctx, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, ctx);
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
