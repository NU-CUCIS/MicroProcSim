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
#define YYSTYPE         HLSL_YYSTYPE
#define YYLTYPE         HLSL_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         hlsl_yyparse
#define yylex           hlsl_yylex
#define yyerror         hlsl_yyerror
#define yydebug         hlsl_yydebug
#define yynerrs         hlsl_yynerrs


/* Copy the first part of user declarations.  */

#line 75 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:339  */

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
#ifndef HLSL_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HLSL_YYDEBUG 1
#  else
#   define HLSL_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HLSL_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HLSL_YYDEBUG */
#if HLSL_YYDEBUG
extern int hlsl_yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:355  */


#include "hlsl.h"
#include <stdio.h>

#define HLSL_YYLTYPE struct vkd3d_shader_location

struct parse_fields
{
    struct hlsl_struct_field *fields;
    size_t count, capacity;
};

struct parse_parameter
{
    struct hlsl_type *type;
    const char *name;
    struct hlsl_semantic semantic;
    struct hlsl_reg_reservation reg_reservation;
    unsigned int modifiers;
};

struct parse_colon_attribute
{
    struct hlsl_semantic semantic;
    struct hlsl_reg_reservation reg_reservation;
};

struct parse_initializer
{
    struct hlsl_ir_node **args;
    unsigned int args_count;
    struct list *instrs;
    bool braces;
};

struct parse_array_sizes
{
    uint32_t *sizes; /* innermost first */
    unsigned int count;
};

struct parse_variable_def
{
    struct list entry;
    struct vkd3d_shader_location loc;

    char *name;
    struct parse_array_sizes arrays;
    struct hlsl_semantic semantic;
    struct hlsl_reg_reservation reg_reservation;
    struct parse_initializer initializer;
};

struct parse_function
{
    char *name;
    struct hlsl_ir_function_decl *decl;
};

struct parse_if_body
{
    struct list *then_instrs;
    struct list *else_instrs;
};

enum parse_assign_op
{
    ASSIGN_OP_ASSIGN,
    ASSIGN_OP_ADD,
    ASSIGN_OP_SUB,
    ASSIGN_OP_MUL,
    ASSIGN_OP_DIV,
    ASSIGN_OP_MOD,
    ASSIGN_OP_LSHIFT,
    ASSIGN_OP_RSHIFT,
    ASSIGN_OP_AND,
    ASSIGN_OP_OR,
    ASSIGN_OP_XOR,
};

struct parse_attribute_list
{
    unsigned int count;
    const struct hlsl_attribute **attrs;
};


#line 199 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef HLSL_YYTOKENTYPE
# define HLSL_YYTOKENTYPE
  enum hlsl_yytokentype
  {
    KW_BLENDSTATE = 258,
    KW_BREAK = 259,
    KW_BUFFER = 260,
    KW_CBUFFER = 261,
    KW_COLUMN_MAJOR = 262,
    KW_COMPILE = 263,
    KW_CONST = 264,
    KW_CONTINUE = 265,
    KW_DEPTHSTENCILSTATE = 266,
    KW_DEPTHSTENCILVIEW = 267,
    KW_DISCARD = 268,
    KW_DO = 269,
    KW_DOUBLE = 270,
    KW_ELSE = 271,
    KW_EXTERN = 272,
    KW_FALSE = 273,
    KW_FOR = 274,
    KW_GEOMETRYSHADER = 275,
    KW_GROUPSHARED = 276,
    KW_IF = 277,
    KW_IN = 278,
    KW_INLINE = 279,
    KW_INOUT = 280,
    KW_MATRIX = 281,
    KW_NAMESPACE = 282,
    KW_NOINTERPOLATION = 283,
    KW_OUT = 284,
    KW_PASS = 285,
    KW_PIXELSHADER = 286,
    KW_PRECISE = 287,
    KW_RASTERIZERSTATE = 288,
    KW_RENDERTARGETVIEW = 289,
    KW_RETURN = 290,
    KW_REGISTER = 291,
    KW_ROW_MAJOR = 292,
    KW_RWTEXTURE1D = 293,
    KW_RWTEXTURE2D = 294,
    KW_RWTEXTURE3D = 295,
    KW_SAMPLER = 296,
    KW_SAMPLER1D = 297,
    KW_SAMPLER2D = 298,
    KW_SAMPLER3D = 299,
    KW_SAMPLERCUBE = 300,
    KW_SAMPLER_STATE = 301,
    KW_SAMPLERCOMPARISONSTATE = 302,
    KW_SHARED = 303,
    KW_STATEBLOCK = 304,
    KW_STATEBLOCK_STATE = 305,
    KW_STATIC = 306,
    KW_STRING = 307,
    KW_STRUCT = 308,
    KW_SWITCH = 309,
    KW_TBUFFER = 310,
    KW_TECHNIQUE = 311,
    KW_TECHNIQUE10 = 312,
    KW_TEXTURE = 313,
    KW_TEXTURE1D = 314,
    KW_TEXTURE1DARRAY = 315,
    KW_TEXTURE2D = 316,
    KW_TEXTURE2DARRAY = 317,
    KW_TEXTURE2DMS = 318,
    KW_TEXTURE2DMSARRAY = 319,
    KW_TEXTURE3D = 320,
    KW_TEXTURECUBE = 321,
    KW_TEXTURECUBEARRAY = 322,
    KW_TRUE = 323,
    KW_TYPEDEF = 324,
    KW_UNIFORM = 325,
    KW_VECTOR = 326,
    KW_VERTEXSHADER = 327,
    KW_VOID = 328,
    KW_VOLATILE = 329,
    KW_WHILE = 330,
    OP_INC = 331,
    OP_DEC = 332,
    OP_AND = 333,
    OP_OR = 334,
    OP_EQ = 335,
    OP_LEFTSHIFT = 336,
    OP_LEFTSHIFTASSIGN = 337,
    OP_RIGHTSHIFT = 338,
    OP_RIGHTSHIFTASSIGN = 339,
    OP_ELLIPSIS = 340,
    OP_LE = 341,
    OP_GE = 342,
    OP_NE = 343,
    OP_ADDASSIGN = 344,
    OP_SUBASSIGN = 345,
    OP_MULASSIGN = 346,
    OP_DIVASSIGN = 347,
    OP_MODASSIGN = 348,
    OP_ANDASSIGN = 349,
    OP_ORASSIGN = 350,
    OP_XORASSIGN = 351,
    OP_UNKNOWN1 = 352,
    OP_UNKNOWN2 = 353,
    OP_UNKNOWN3 = 354,
    OP_UNKNOWN4 = 355,
    C_FLOAT = 356,
    C_INTEGER = 357,
    PRE_LINE = 358,
    VAR_IDENTIFIER = 359,
    NEW_IDENTIFIER = 360,
    STRING = 361,
    TYPE_IDENTIFIER = 362
  };
#endif

/* Value type.  */
#if ! defined HLSL_YYSTYPE && ! defined HLSL_YYSTYPE_IS_DECLARED

union HLSL_YYSTYPE
{
#line 3077 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:355  */

    struct hlsl_type *type;
    INT intval;
    FLOAT floatval;
    bool boolval;
    char *name;
    DWORD modifiers;
    struct hlsl_ir_node *instr;
    struct list *list;
    struct parse_fields fields;
    struct parse_function function;
    struct parse_parameter parameter;
    struct parse_initializer initializer;
    struct parse_array_sizes arrays;
    struct parse_variable_def *variable_def;
    struct parse_if_body if_body;
    enum parse_assign_op assign_op;
    struct hlsl_reg_reservation reg_reservation;
    struct parse_colon_attribute colon_attribute;
    struct hlsl_semantic semantic;
    enum hlsl_buffer_type buffer_type;
    enum hlsl_sampler_dim sampler_dim;
    struct hlsl_attribute *attr;
    struct parse_attribute_list attr_list;

#line 345 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:355  */
};

typedef union HLSL_YYSTYPE HLSL_YYSTYPE;
# define HLSL_YYSTYPE_IS_TRIVIAL 1
# define HLSL_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HLSL_YYLTYPE && ! defined HLSL_YYLTYPE_IS_DECLARED
typedef struct HLSL_YYLTYPE HLSL_YYLTYPE;
struct HLSL_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HLSL_YYLTYPE_IS_DECLARED 1
# define HLSL_YYLTYPE_IS_TRIVIAL 1
#endif



int hlsl_yyparse (void *scanner, struct hlsl_ctx *ctx);
/* "%code provides" blocks.  */
#line 114 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:355  */


int yylex(HLSL_YYSTYPE *yylval_param, HLSL_YYLTYPE *yylloc_param, void *yyscanner);


#line 377 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:355  */



/* Copy the second part of user declarations.  */

#line 383 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 121 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:359  */


#define YYLLOC_DEFAULT(cur, rhs, n) (cur) = YYRHSLOC(rhs, !!n)

static void yyerror(YYLTYPE *loc, void *scanner, struct hlsl_ctx *ctx, const char *s)
{
    hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_SYNTAX, "%s", s);
}

static struct hlsl_ir_node *node_from_list(struct list *list)
{
    return LIST_ENTRY(list_tail(list), struct hlsl_ir_node, entry);
}

static struct list *make_empty_list(struct hlsl_ctx *ctx)
{
    struct list *list;

    if ((list = hlsl_alloc(ctx, sizeof(*list))))
        list_init(list);
    return list;
}

static void destroy_instr_list(struct list *list)
{
    hlsl_free_instr_list(list);
    vkd3d_free(list);
}

static void check_invalid_matrix_modifiers(struct hlsl_ctx *ctx, DWORD modifiers, struct vkd3d_shader_location loc)
{
    if (modifiers & HLSL_MODIFIERS_MAJORITY_MASK)
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                "'row_major' and 'column_major' modifiers are only allowed for matrices.");
}

static bool hlsl_types_are_componentwise_compatible(struct hlsl_ctx *ctx, struct hlsl_type *src,
        struct hlsl_type *dst)
{
    unsigned int k, count = hlsl_type_component_count(dst);

    if (count > hlsl_type_component_count(src))
        return false;

    for (k = 0; k < count; ++k)
    {
        struct hlsl_type *src_comp_type, *dst_comp_type;

        src_comp_type = hlsl_type_get_component_type(ctx, src, k);
        dst_comp_type = hlsl_type_get_component_type(ctx, dst, k);

        if ((src_comp_type->type != HLSL_CLASS_SCALAR || dst_comp_type->type != HLSL_CLASS_SCALAR)
                && !hlsl_types_are_equal(src_comp_type, dst_comp_type))
            return false;
    }
    return true;
}

static bool hlsl_types_are_componentwise_equal(struct hlsl_ctx *ctx, struct hlsl_type *src,
        struct hlsl_type *dst)
{
    unsigned int k, count = hlsl_type_component_count(src);

    if (count != hlsl_type_component_count(dst))
        return false;

    for (k = 0; k < count; ++k)
    {
        struct hlsl_type *src_comp_type, *dst_comp_type;

        src_comp_type = hlsl_type_get_component_type(ctx, src, k);
        dst_comp_type = hlsl_type_get_component_type(ctx, dst, k);

        if (!hlsl_types_are_equal(src_comp_type, dst_comp_type))
            return false;
    }
    return true;
}

static bool type_contains_only_numerics(struct hlsl_type *type)
{
    unsigned int i;

    if (type->type == HLSL_CLASS_ARRAY)
        return type_contains_only_numerics(type->e.array.type);
    if (type->type == HLSL_CLASS_STRUCT)
    {
        for (i = 0; i < type->e.record.field_count; ++i)
        {
            if (!type_contains_only_numerics(type->e.record.fields[i].type))
                return false;
        }
        return true;
    }
    return type->type <= HLSL_CLASS_LAST_NUMERIC;
}

static bool compatible_data_types(struct hlsl_ctx *ctx, struct hlsl_type *src, struct hlsl_type *dst)
{
    if (src->type <= HLSL_CLASS_LAST_NUMERIC && src->dimx == 1 && src->dimy == 1 && type_contains_only_numerics(dst))
        return true;

    if (src->type == HLSL_CLASS_MATRIX && dst->type == HLSL_CLASS_MATRIX
            && src->dimx >= dst->dimx && src->dimy >= dst->dimy)
        return true;

    if ((src->type == HLSL_CLASS_MATRIX && src->dimx > 1 && src->dimy > 1)
            && hlsl_type_component_count(src) != hlsl_type_component_count(dst))
        return false;

    if ((dst->type == HLSL_CLASS_MATRIX && dst->dimy > 1)
            && hlsl_type_component_count(src) != hlsl_type_component_count(dst))
        return false;

    return hlsl_types_are_componentwise_compatible(ctx, src, dst);
}

static bool implicit_compatible_data_types(struct hlsl_ctx *ctx, struct hlsl_type *src, struct hlsl_type *dst)
{
    if ((src->type <= HLSL_CLASS_LAST_NUMERIC) != (dst->type <= HLSL_CLASS_LAST_NUMERIC))
        return false;

    if (src->type <= HLSL_CLASS_LAST_NUMERIC)
    {
        /* Scalar vars can be converted to any other numeric data type */
        if (src->dimx == 1 && src->dimy == 1)
            return true;
        /* The other way around is true too */
        if (dst->dimx == 1 && dst->dimy == 1)
            return true;

        if (src->type == HLSL_CLASS_MATRIX || dst->type == HLSL_CLASS_MATRIX)
        {
            if (src->type == HLSL_CLASS_MATRIX && dst->type == HLSL_CLASS_MATRIX)
                return src->dimx >= dst->dimx && src->dimy >= dst->dimy;

            /* Matrix-vector conversion is apparently allowed if they have
            * the same components count, or if the matrix is 1xN or Nx1
            * and we are reducing the component count */
            if (src->type == HLSL_CLASS_VECTOR || dst->type == HLSL_CLASS_VECTOR)
            {
                if (hlsl_type_component_count(src) == hlsl_type_component_count(dst))
                    return true;

                if ((src->type == HLSL_CLASS_VECTOR || src->dimx == 1 || src->dimy == 1) &&
                        (dst->type == HLSL_CLASS_VECTOR || dst->dimx == 1 || dst->dimy == 1))
                    return hlsl_type_component_count(src) >= hlsl_type_component_count(dst);
            }

            return false;
        }
        else
        {
            return src->dimx >= dst->dimx;
        }
    }

    return hlsl_types_are_componentwise_equal(ctx, src, dst);
}

static struct hlsl_ir_load *add_load_component(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *var_instr,
        unsigned int comp, const struct vkd3d_shader_location *loc);

static struct hlsl_ir_node *add_cast(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *node, struct hlsl_type *dst_type, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *src_type = node->data_type;
    struct hlsl_ir_expr *cast;

    if (hlsl_types_are_equal(src_type, dst_type))
        return node;

    if (src_type->type > HLSL_CLASS_VECTOR || dst_type->type > HLSL_CLASS_VECTOR)
    {
        unsigned int src_comp_count = hlsl_type_component_count(src_type);
        unsigned int dst_comp_count = hlsl_type_component_count(dst_type);
        struct hlsl_deref var_deref;
        bool broadcast, matrix_cast;
        struct hlsl_ir_load *load;
        struct hlsl_ir_var *var;
        unsigned int dst_idx;

        broadcast = src_type->type <= HLSL_CLASS_LAST_NUMERIC && src_type->dimx == 1 && src_type->dimy == 1;
        matrix_cast = !broadcast && dst_comp_count != src_comp_count
                && src_type->type == HLSL_CLASS_MATRIX && dst_type->type == HLSL_CLASS_MATRIX;
        assert(src_comp_count >= dst_comp_count || broadcast);
        if (matrix_cast)
        {
            assert(dst_type->dimx <= src_type->dimx);
            assert(dst_type->dimy <= src_type->dimy);
        }

        if (!(var = hlsl_new_synthetic_var(ctx, "cast", dst_type, loc)))
            return NULL;
        hlsl_init_simple_deref_from_var(&var_deref, var);

        for (dst_idx = 0; dst_idx < dst_comp_count; ++dst_idx)
        {
            struct hlsl_type *dst_comp_type;
            struct hlsl_ir_store *store;
            struct hlsl_block block;
            unsigned int src_idx;

            if (broadcast)
            {
                src_idx = 0;
            }
            else if (matrix_cast)
            {
                unsigned int x = dst_idx % dst_type->dimx, y = dst_idx / dst_type->dimx;

                src_idx = y * src_type->dimx + x;
            }
            else
            {
                src_idx = dst_idx;
            }

            dst_comp_type = hlsl_type_get_component_type(ctx, dst_type, dst_idx);

            if (!(load = add_load_component(ctx, instrs, node, src_idx, loc)))
                return NULL;

            if (!(cast = hlsl_new_cast(ctx, &load->node, dst_comp_type, loc)))
                return NULL;
            list_add_tail(instrs, &cast->node.entry);

            if (!(store = hlsl_new_store_component(ctx, &block, &var_deref, dst_idx, &cast->node)))
                return NULL;
            list_move_tail(instrs, &block.instrs);
        }

        if (!(load = hlsl_new_var_load(ctx, var, *loc)))
            return NULL;
        list_add_tail(instrs, &load->node.entry);

        return &load->node;
    }
    else
    {
        if (!(cast = hlsl_new_cast(ctx, node, dst_type, loc)))
            return NULL;
        list_add_tail(instrs, &cast->node.entry);
        return &cast->node;
    }
}

static struct hlsl_ir_node *add_implicit_conversion(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *node, struct hlsl_type *dst_type, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *src_type = node->data_type;

    if (hlsl_types_are_equal(src_type, dst_type))
        return node;

    if (!implicit_compatible_data_types(ctx, src_type, dst_type))
    {
        struct vkd3d_string_buffer *src_string, *dst_string;

        src_string = hlsl_type_to_string(ctx, src_type);
        dst_string = hlsl_type_to_string(ctx, dst_type);
        if (src_string && dst_string)
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Can't implicitly convert from %s to %s.", src_string->buffer, dst_string->buffer);
        hlsl_release_string_buffer(ctx, src_string);
        hlsl_release_string_buffer(ctx, dst_string);
        return NULL;
    }

    if (dst_type->dimx * dst_type->dimy < src_type->dimx * src_type->dimy)
        hlsl_warning(ctx, loc, VKD3D_SHADER_WARNING_HLSL_IMPLICIT_TRUNCATION, "Implicit truncation of %s type.",
                src_type->type == HLSL_CLASS_VECTOR ? "vector" : "matrix");

    return add_cast(ctx, instrs, node, dst_type, loc);
}

static DWORD add_modifiers(struct hlsl_ctx *ctx, DWORD modifiers, DWORD mod, const struct vkd3d_shader_location loc)
{
    if (modifiers & mod)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_modifiers_to_string(ctx, mod)))
            hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                    "Modifier '%s' was already specified.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return modifiers;
    }
    if ((mod & HLSL_MODIFIERS_MAJORITY_MASK) && (modifiers & HLSL_MODIFIERS_MAJORITY_MASK))
    {
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                "'row_major' and 'column_major' modifiers are mutually exclusive.");
        return modifiers;
    }
    return modifiers | mod;
}

static bool append_conditional_break(struct hlsl_ctx *ctx, struct list *cond_list)
{
    struct hlsl_ir_node *condition, *not;
    struct hlsl_ir_jump *jump;
    struct hlsl_ir_if *iff;

    /* E.g. "for (i = 0; ; ++i)". */
    if (list_empty(cond_list))
        return true;

    condition = node_from_list(cond_list);
    if (!(not = hlsl_new_unary_expr(ctx, HLSL_OP1_LOGIC_NOT, condition, condition->loc)))
        return false;
    list_add_tail(cond_list, &not->entry);

    if (!(iff = hlsl_new_if(ctx, not, condition->loc)))
        return false;
    list_add_tail(cond_list, &iff->node.entry);

    if (!(jump = hlsl_new_jump(ctx, HLSL_IR_JUMP_BREAK, condition->loc)))
        return false;
    list_add_head(&iff->then_instrs.instrs, &jump->node.entry);
    return true;
}

enum loop_type
{
    LOOP_FOR,
    LOOP_WHILE,
    LOOP_DO_WHILE
};

static struct list *create_loop(struct hlsl_ctx *ctx, enum loop_type type, struct list *init, struct list *cond,
        struct list *iter, struct list *body, struct vkd3d_shader_location loc)
{
    struct list *list = NULL;
    struct hlsl_ir_loop *loop = NULL;
    struct hlsl_ir_if *cond_jump = NULL;

    if (!(list = make_empty_list(ctx)))
        goto oom;

    if (init)
        list_move_head(list, init);

    if (!(loop = hlsl_new_loop(ctx, loc)))
        goto oom;
    list_add_tail(list, &loop->node.entry);

    if (!append_conditional_break(ctx, cond))
        goto oom;

    if (type != LOOP_DO_WHILE)
        list_move_tail(&loop->body.instrs, cond);

    list_move_tail(&loop->body.instrs, body);

    if (iter)
        list_move_tail(&loop->body.instrs, iter);

    if (type == LOOP_DO_WHILE)
        list_move_tail(&loop->body.instrs, cond);

    vkd3d_free(init);
    vkd3d_free(cond);
    vkd3d_free(body);
    return list;

oom:
    vkd3d_free(loop);
    vkd3d_free(cond_jump);
    vkd3d_free(list);
    destroy_instr_list(init);
    destroy_instr_list(cond);
    destroy_instr_list(iter);
    destroy_instr_list(body);
    return NULL;
}

static unsigned int initializer_size(const struct parse_initializer *initializer)
{
    unsigned int count = 0, i;

    for (i = 0; i < initializer->args_count; ++i)
    {
        count += hlsl_type_component_count(initializer->args[i]->data_type);
    }
    return count;
}

static void free_parse_initializer(struct parse_initializer *initializer)
{
    destroy_instr_list(initializer->instrs);
    vkd3d_free(initializer->args);
}

static struct hlsl_ir_swizzle *get_swizzle(struct hlsl_ctx *ctx, struct hlsl_ir_node *value, const char *swizzle,
        struct vkd3d_shader_location *loc)
{
    unsigned int len = strlen(swizzle), component = 0;
    unsigned int i, set, swiz = 0;
    bool valid;

    if (value->data_type->type == HLSL_CLASS_MATRIX)
    {
        /* Matrix swizzle */
        bool m_swizzle;
        unsigned int inc, x, y;

        if (len < 3 || swizzle[0] != '_')
            return NULL;
        m_swizzle = swizzle[1] == 'm';
        inc = m_swizzle ? 4 : 3;

        if (len % inc || len > inc * 4)
            return NULL;

        for (i = 0; i < len; i += inc)
        {
            if (swizzle[i] != '_')
                return NULL;
            if (m_swizzle)
            {
                if (swizzle[i + 1] != 'm')
                    return NULL;
                y = swizzle[i + 2] - '0';
                x = swizzle[i + 3] - '0';
            }
            else
            {
                y = swizzle[i + 1] - '1';
                x = swizzle[i + 2] - '1';
            }

            if (x >= value->data_type->dimx || y >= value->data_type->dimy)
                return NULL;
            swiz |= (y << 4 | x) << component * 8;
            component++;
        }
        return hlsl_new_swizzle(ctx, swiz, component, value, loc);
    }

    /* Vector swizzle */
    if (len > 4)
        return NULL;

    for (set = 0; set < 2; ++set)
    {
        valid = true;
        component = 0;
        for (i = 0; i < len; ++i)
        {
            char c[2][4] = {{'x', 'y', 'z', 'w'}, {'r', 'g', 'b', 'a'}};
            unsigned int s = 0;

            for (s = 0; s < 4; ++s)
            {
                if (swizzle[i] == c[set][s])
                    break;
            }
            if (s == 4)
            {
                valid = false;
                break;
            }

            if (s >= value->data_type->dimx)
                return NULL;
            swiz |= s << component * 2;
            component++;
        }
        if (valid)
            return hlsl_new_swizzle(ctx, swiz, component, value, loc);
    }

    return NULL;
}

static struct hlsl_ir_jump *add_return(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *return_value, struct vkd3d_shader_location loc)
{
    struct hlsl_type *return_type = ctx->cur_function->return_type;
    struct hlsl_ir_jump *jump;

    if (return_value)
    {
        struct hlsl_ir_store *store;

        if (!(return_value = add_implicit_conversion(ctx, instrs, return_value, return_type, &loc)))
            return NULL;

        if (!(store = hlsl_new_simple_store(ctx, ctx->cur_function->return_var, return_value)))
            return NULL;
        list_add_after(&return_value->entry, &store->node.entry);
    }
    else if (ctx->cur_function->return_var)
    {
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_RETURN, "Non-void function must return a value.");
        return NULL;
    }

    if (!(jump = hlsl_new_jump(ctx, HLSL_IR_JUMP_RETURN, loc)))
        return NULL;
    list_add_tail(instrs, &jump->node.entry);

    return jump;
}

static struct hlsl_ir_load *add_load_index(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *var_instr,
        struct hlsl_ir_node *idx, const struct vkd3d_shader_location *loc)
{
    const struct hlsl_deref *src;
    struct hlsl_ir_load *load;

    if (var_instr->type == HLSL_IR_LOAD)
    {
        src = &hlsl_ir_load(var_instr)->src;
    }
    else
    {
        struct hlsl_ir_store *store;
        struct hlsl_ir_var *var;

        if (!(var = hlsl_new_synthetic_var(ctx, "deref", var_instr->data_type, &var_instr->loc)))
            return NULL;

        if (!(store = hlsl_new_simple_store(ctx, var, var_instr)))
            return NULL;
        list_add_tail(instrs, &store->node.entry);

        src = &store->lhs;
    }

    if (!(load = hlsl_new_load_index(ctx, src, idx, loc)))
        return NULL;
    list_add_tail(instrs, &load->node.entry);

    return load;
}

static struct hlsl_ir_load *add_load_component(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *var_instr,
        unsigned int comp, const struct vkd3d_shader_location *loc)
{
    const struct hlsl_deref *src;
    struct hlsl_ir_load *load;
    struct hlsl_block block;

    if (var_instr->type == HLSL_IR_LOAD)
    {
        src = &hlsl_ir_load(var_instr)->src;
    }
    else
    {
        struct hlsl_ir_store *store;
        struct hlsl_ir_var *var;

        if (!(var = hlsl_new_synthetic_var(ctx, "deref", var_instr->data_type, &var_instr->loc)))
            return NULL;

        if (!(store = hlsl_new_simple_store(ctx, var, var_instr)))
            return NULL;
        list_add_tail(instrs, &store->node.entry);

        src = &store->lhs;
    }

    if (!(load = hlsl_new_load_component(ctx, &block, src, comp, loc)))
        return NULL;
    list_move_tail(instrs, &block.instrs);

    return load;
}

static bool add_record_load(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *record,
        unsigned int idx, const struct vkd3d_shader_location loc)
{
    struct hlsl_ir_constant *c;

    assert(idx < record->data_type->e.record.field_count);

    if (!(c = hlsl_new_uint_constant(ctx, idx, &loc)))
        return false;
    list_add_tail(instrs, &c->node.entry);

    return !!add_load_index(ctx, instrs, record, &c->node, &loc);
}

static struct hlsl_ir_node *add_binary_arithmetic_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        const struct vkd3d_shader_location *loc);

static bool add_matrix_index(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *matrix, struct hlsl_ir_node *index, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *mat_type = matrix->data_type, *ret_type;
    struct hlsl_deref var_deref;
    struct hlsl_ir_load *load;
    struct hlsl_ir_var *var;
    unsigned int i;

    if (hlsl_type_is_row_major(mat_type))
        return add_load_index(ctx, instrs, matrix, index, loc);

    ret_type = hlsl_get_vector_type(ctx, mat_type->base_type, mat_type->dimx);

    if (!(var = hlsl_new_synthetic_var(ctx, "index", ret_type, loc)))
        return false;
    hlsl_init_simple_deref_from_var(&var_deref, var);

    for (i = 0; i < mat_type->dimx; ++i)
    {
        struct hlsl_ir_load *column, *value;
        struct hlsl_ir_store *store;
        struct hlsl_ir_constant *c;
        struct hlsl_block block;

        if (!(c = hlsl_new_uint_constant(ctx, i, loc)))
            return false;
        list_add_tail(instrs, &c->node.entry);

        if (!(column = add_load_index(ctx, instrs, matrix, &c->node, loc)))
            return false;

        if (!(value = add_load_index(ctx, instrs, &column->node, index, loc)))
            return false;

        if (!(store = hlsl_new_store_component(ctx, &block, &var_deref, i, &value->node)))
            return false;
        list_move_tail(instrs, &block.instrs);
    }

    if (!(load = hlsl_new_var_load(ctx, var, *loc)))
        return false;
    list_add_tail(instrs, &load->node.entry);

    return true;
}

static struct hlsl_ir_node *add_zero_mipmap_level(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *index, unsigned int dim_count, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_load *coords_load;
    struct hlsl_deref coords_deref;
    struct hlsl_ir_constant *zero;
    struct hlsl_ir_store *store;
    struct hlsl_ir_var *coords;

    if (!(coords = hlsl_new_synthetic_var(ctx, "coords",
            hlsl_get_vector_type(ctx, HLSL_TYPE_UINT, dim_count + 1), loc)))
        return NULL;

    hlsl_init_simple_deref_from_var(&coords_deref, coords);
    if (!(store = hlsl_new_store_index(ctx, &coords_deref, NULL, index, (1u << dim_count) - 1, loc)))
        return NULL;
    list_add_tail(instrs, &store->node.entry);

    if (!(zero = hlsl_new_uint_constant(ctx, 0, loc)))
        return NULL;
    list_add_tail(instrs, &zero->node.entry);

    if (!(store = hlsl_new_store_index(ctx, &coords_deref, NULL, &zero->node, 1u << dim_count, loc)))
        return NULL;
    list_add_tail(instrs, &store->node.entry);

    if (!(coords_load = hlsl_new_var_load(ctx, coords, *loc)))
        return NULL;
    list_add_tail(instrs, &coords_load->node.entry);

    return &coords_load->node;
}

static bool add_array_load(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *array,
        struct hlsl_ir_node *index, const struct vkd3d_shader_location *loc)
{
    const struct hlsl_type *expr_type = array->data_type, *index_type = index->data_type;
    struct hlsl_ir_expr *cast;

    if (expr_type->type == HLSL_CLASS_OBJECT
            && (expr_type->base_type == HLSL_TYPE_TEXTURE || expr_type->base_type == HLSL_TYPE_UAV)
            && expr_type->sampler_dim != HLSL_SAMPLER_DIM_GENERIC)
    {
        struct hlsl_resource_load_params load_params = {.type = HLSL_RESOURCE_LOAD};
        unsigned int dim_count = hlsl_sampler_dim_count(expr_type->sampler_dim);
        /* Only HLSL_IR_LOAD can return an object. */
        struct hlsl_ir_load *object_load = hlsl_ir_load(array);
        struct hlsl_ir_resource_load *resource_load;

        if (index_type->type > HLSL_CLASS_VECTOR || index_type->dimx != dim_count)
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_type_to_string(ctx, expr_type)))
                hlsl_error(ctx, &index->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Array index of type '%s' must be of type 'uint%u'.", string->buffer, dim_count);
            hlsl_release_string_buffer(ctx, string);
            return false;
        }

        if (!(index = add_implicit_conversion(ctx, instrs, index,
                hlsl_get_vector_type(ctx, HLSL_TYPE_UINT, dim_count), &index->loc)))
            return false;

        if (!(index = add_zero_mipmap_level(ctx, instrs, index, dim_count, loc)))
            return false;

        load_params.format = expr_type->e.resource_format;
        load_params.resource = object_load->src;
        load_params.coords = index;

        if (!(resource_load = hlsl_new_resource_load(ctx, &load_params, loc)))
            return false;
        list_add_tail(instrs, &resource_load->node.entry);
        return true;
    }

    if (index_type->type != HLSL_CLASS_SCALAR)
    {
        hlsl_error(ctx, &index->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE, "Array index is not scalar.");
        return false;
    }

    if (!(cast = hlsl_new_cast(ctx, index, hlsl_get_scalar_type(ctx, HLSL_TYPE_UINT), &index->loc)))
        return false;
    list_add_tail(instrs, &cast->node.entry);
    index = &cast->node;

    if (expr_type->type == HLSL_CLASS_MATRIX)
        return add_matrix_index(ctx, instrs, array, index, loc);

    if (expr_type->type != HLSL_CLASS_ARRAY && expr_type->type != HLSL_CLASS_VECTOR)
    {
        if (expr_type->type == HLSL_CLASS_SCALAR)
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_INDEX, "Scalar expressions cannot be array-indexed.");
        else
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_INDEX, "Expression cannot be array-indexed.");
        return false;
    }

    if (!add_load_index(ctx, instrs, array, index, loc))
        return false;

    return true;
}

static const struct hlsl_struct_field *get_struct_field(const struct hlsl_struct_field *fields,
        size_t count, const char *name)
{
    size_t i;

    for (i = 0; i < count; ++i)
    {
        if (!strcmp(fields[i].name, name))
            return &fields[i];
    }
    return NULL;
}

static struct hlsl_type *apply_type_modifiers(struct hlsl_ctx *ctx, struct hlsl_type *type,
        unsigned int *modifiers, struct vkd3d_shader_location loc)
{
    unsigned int default_majority = 0;
    struct hlsl_type *new_type;

    /* This function is only used for declarations (i.e. variables and struct
     * fields), which should inherit the matrix majority. We only explicitly set
     * the default majority for declarations—typedefs depend on this—but we
     * want to always set it, so that an hlsl_type object is never used to
     * represent two different majorities (and thus can be used to store its
     * register size, etc.) */
    if (!(*modifiers & HLSL_MODIFIERS_MAJORITY_MASK)
            && !(type->modifiers & HLSL_MODIFIERS_MAJORITY_MASK)
            && type->type == HLSL_CLASS_MATRIX)
    {
        if (ctx->matrix_majority == HLSL_COLUMN_MAJOR)
            default_majority = HLSL_MODIFIER_COLUMN_MAJOR;
        else
            default_majority = HLSL_MODIFIER_ROW_MAJOR;
    }

    if (!default_majority && !(*modifiers & HLSL_TYPE_MODIFIERS_MASK))
        return type;

    if (!(new_type = hlsl_type_clone(ctx, type, default_majority, *modifiers & HLSL_TYPE_MODIFIERS_MASK)))
        return NULL;

    *modifiers &= ~HLSL_TYPE_MODIFIERS_MASK;

    if ((new_type->modifiers & HLSL_MODIFIER_ROW_MAJOR) && (new_type->modifiers & HLSL_MODIFIER_COLUMN_MAJOR))
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                "'row_major' and 'column_major' modifiers are mutually exclusive.");

    return new_type;
}

static void free_parse_variable_def(struct parse_variable_def *v)
{
    free_parse_initializer(&v->initializer);
    vkd3d_free(v->arrays.sizes);
    vkd3d_free(v->name);
    vkd3d_free((void *)v->semantic.name);
    vkd3d_free(v);
}

static bool shader_is_sm_5_1(const struct hlsl_ctx *ctx)
{
    return ctx->profile->major_version == 5 && ctx->profile->minor_version >= 1;
}

static bool gen_struct_fields(struct hlsl_ctx *ctx, struct parse_fields *fields,
        struct hlsl_type *type, unsigned int modifiers, struct list *defs)
{
    struct parse_variable_def *v, *v_next;
    size_t i = 0;

    if (type->type == HLSL_CLASS_MATRIX)
        assert(type->modifiers & HLSL_MODIFIERS_MAJORITY_MASK);

    memset(fields, 0, sizeof(*fields));
    fields->count = list_count(defs);
    if (!hlsl_array_reserve(ctx, (void **)&fields->fields, &fields->capacity, fields->count, sizeof(*fields->fields)))
        return false;

    LIST_FOR_EACH_ENTRY_SAFE(v, v_next, defs, struct parse_variable_def, entry)
    {
        struct hlsl_struct_field *field = &fields->fields[i++];
        bool unbounded_res_array = false;
        unsigned int k;

        field->type = type;

        if (shader_is_sm_5_1(ctx) && type->type == HLSL_CLASS_OBJECT)
        {
            for (k = 0; k < v->arrays.count; ++k)
                unbounded_res_array |= (v->arrays.sizes[k] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT);
        }

        if (unbounded_res_array)
        {
            if (v->arrays.count == 1)
            {
                hlsl_fixme(ctx, &v->loc, "Unbounded resource arrays as struct fields.");
                free_parse_variable_def(v);
                vkd3d_free(field);
                continue;
            }
            else
            {
                hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Unbounded resource arrays cannot be multi-dimensional.");
            }
        }
        else
        {
            for (k = 0; k < v->arrays.count; ++k)
            {
                if (v->arrays.sizes[k] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT)
                {
                    hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Implicit size arrays not allowed in struct fields.");
                }

                field->type = hlsl_new_array_type(ctx, field->type, v->arrays.sizes[k]);
            }
        }
        vkd3d_free(v->arrays.sizes);
        field->loc = v->loc;
        field->name = v->name;
        field->semantic = v->semantic;
        field->modifiers = modifiers;
        if (v->initializer.args_count)
        {
            hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_SYNTAX, "Illegal initializer on a struct field.");
            free_parse_initializer(&v->initializer);
        }
        vkd3d_free(v);
    }
    vkd3d_free(defs);
    return true;
}

static bool add_typedef(struct hlsl_ctx *ctx, DWORD modifiers, struct hlsl_type *orig_type, struct list *list)
{
    struct parse_variable_def *v, *v_next;
    struct hlsl_type *type;
    unsigned int i;
    bool ret;

    LIST_FOR_EACH_ENTRY_SAFE(v, v_next, list, struct parse_variable_def, entry)
    {
        if (!v->arrays.count)
        {
            if (!(type = hlsl_type_clone(ctx, orig_type, 0, modifiers)))
            {
                free_parse_variable_def(v);
                continue;
            }
        }
        else
        {
            type = orig_type;
        }

        ret = true;
        for (i = 0; i < v->arrays.count; ++i)
        {
            if (v->arrays.sizes[i] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT)
            {
                hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Implicit size arrays not allowed in typedefs.");
            }

            if (!(type = hlsl_new_array_type(ctx, type, v->arrays.sizes[i])))
            {
                free_parse_variable_def(v);
                ret = false;
                break;
            }
        }
        if (!ret)
            continue;
        vkd3d_free(v->arrays.sizes);

        vkd3d_free((void *)type->name);
        type->name = v->name;

        if (type->type != HLSL_CLASS_MATRIX)
            check_invalid_matrix_modifiers(ctx, type->modifiers, v->loc);

        if ((type->modifiers & HLSL_MODIFIER_COLUMN_MAJOR)
                && (type->modifiers & HLSL_MODIFIER_ROW_MAJOR))
            hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                    "'row_major' and 'column_major' modifiers are mutually exclusive.");

        ret = hlsl_scope_add_type(ctx->cur_scope, type);
        if (!ret)
            hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                    "Type '%s' is already defined.", v->name);
        free_parse_initializer(&v->initializer);
        vkd3d_free(v);
    }
    vkd3d_free(list);
    return true;
}

static bool add_func_parameter(struct hlsl_ctx *ctx, struct list *list,
        struct parse_parameter *param, const struct vkd3d_shader_location loc)
{
    struct hlsl_ir_var *var;

    if (param->type->type == HLSL_CLASS_MATRIX)
        assert(param->type->modifiers & HLSL_MODIFIERS_MAJORITY_MASK);

    if ((param->modifiers & HLSL_STORAGE_OUT) && (param->modifiers & HLSL_STORAGE_UNIFORM))
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                "Parameter '%s' is declared as both \"out\" and \"uniform\".", param->name);

    if (!(var = hlsl_new_var(ctx, param->name, param->type, loc, &param->semantic, param->modifiers, &param->reg_reservation)))
        return false;
    var->is_param = 1;

    if (!hlsl_add_var(ctx, var, false))
    {
        hlsl_free_var(var);
        return false;
    }
    list_add_tail(list, &var->param_entry);
    return true;
}

static struct hlsl_reg_reservation parse_reg_reservation(const char *reg_string)
{
    struct hlsl_reg_reservation reservation = {0};

    if (!sscanf(reg_string + 1, "%u", &reservation.index))
    {
        FIXME("Unsupported register reservation syntax.\n");
        return reservation;
    }
    reservation.type = reg_string[0];
    return reservation;
}

static const struct hlsl_ir_function_decl *get_func_decl(struct rb_tree *funcs, char *name, struct list *params)
{
    struct hlsl_ir_function *func;
    struct rb_entry *entry;

    if ((entry = rb_get(funcs, name)))
    {
        func = RB_ENTRY_VALUE(entry, struct hlsl_ir_function, entry);

        if ((entry = rb_get(&func->overloads, params)))
            return RB_ENTRY_VALUE(entry, struct hlsl_ir_function_decl, entry);
    }
    return NULL;
}

static struct list *make_list(struct hlsl_ctx *ctx, struct hlsl_ir_node *node)
{
    struct list *list;

    if (!(list = make_empty_list(ctx)))
    {
        hlsl_free_instr(node);
        return NULL;
    }
    list_add_tail(list, &node->entry);
    return list;
}

static unsigned int evaluate_array_dimension(struct hlsl_ir_node *node)
{
    if (node->data_type->type != HLSL_CLASS_SCALAR)
        return 0;

    switch (node->type)
    {
        case HLSL_IR_CONSTANT:
        {
            struct hlsl_ir_constant *constant = hlsl_ir_constant(node);
            const union hlsl_constant_value *value = &constant->value[0];

            switch (constant->node.data_type->base_type)
            {
                case HLSL_TYPE_UINT:
                    return value->u;
                case HLSL_TYPE_INT:
                    return value->i;
                case HLSL_TYPE_FLOAT:
                case HLSL_TYPE_HALF:
                    return value->f;
                case HLSL_TYPE_DOUBLE:
                    return value->d;
                case HLSL_TYPE_BOOL:
                    return !!value->u;
                default:
                    vkd3d_unreachable();
            }
        }

        case HLSL_IR_EXPR:
        case HLSL_IR_LOAD:
        case HLSL_IR_RESOURCE_LOAD:
        case HLSL_IR_SWIZZLE:
            FIXME("Unhandled type %s.\n", hlsl_node_type_to_string(node->type));
            return 0;

        case HLSL_IR_IF:
        case HLSL_IR_JUMP:
        case HLSL_IR_LOOP:
        case HLSL_IR_RESOURCE_STORE:
        case HLSL_IR_STORE:
            WARN("Invalid node type %s.\n", hlsl_node_type_to_string(node->type));
            return 0;

        default:
            vkd3d_unreachable();
    }
}

static bool expr_compatible_data_types(struct hlsl_type *t1, struct hlsl_type *t2)
{
    if (t1->base_type > HLSL_TYPE_LAST_SCALAR || t2->base_type > HLSL_TYPE_LAST_SCALAR)
        return false;

    /* Scalar vars can be converted to pretty much everything */
    if ((t1->dimx == 1 && t1->dimy == 1) || (t2->dimx == 1 && t2->dimy == 1))
        return true;

    if (t1->type == HLSL_CLASS_VECTOR && t2->type == HLSL_CLASS_VECTOR)
        return true;

    if (t1->type == HLSL_CLASS_MATRIX || t2->type == HLSL_CLASS_MATRIX)
    {
        /* Matrix-vector conversion is apparently allowed if either they have the same components
           count or the matrix is nx1 or 1xn */
        if (t1->type == HLSL_CLASS_VECTOR || t2->type == HLSL_CLASS_VECTOR)
        {
            if (hlsl_type_component_count(t1) == hlsl_type_component_count(t2))
                return true;

            return (t1->type == HLSL_CLASS_MATRIX && (t1->dimx == 1 || t1->dimy == 1))
                    || (t2->type == HLSL_CLASS_MATRIX && (t2->dimx == 1 || t2->dimy == 1));
        }

        /* Both matrices */
        if ((t1->dimx >= t2->dimx && t1->dimy >= t2->dimy)
                || (t1->dimx <= t2->dimx && t1->dimy <= t2->dimy))
            return true;
    }

    return false;
}

static enum hlsl_base_type expr_common_base_type(enum hlsl_base_type t1, enum hlsl_base_type t2)
{
    if (t1 > HLSL_TYPE_LAST_SCALAR || t2 > HLSL_TYPE_LAST_SCALAR) {
        FIXME("Unexpected base type.\n");
        return HLSL_TYPE_FLOAT;
    }
    if (t1 == t2)
        return t1 == HLSL_TYPE_BOOL ? HLSL_TYPE_INT : t1;
    if (t1 == HLSL_TYPE_DOUBLE || t2 == HLSL_TYPE_DOUBLE)
        return HLSL_TYPE_DOUBLE;
    if (t1 == HLSL_TYPE_FLOAT || t2 == HLSL_TYPE_FLOAT
            || t1 == HLSL_TYPE_HALF || t2 == HLSL_TYPE_HALF)
        return HLSL_TYPE_FLOAT;
    if (t1 == HLSL_TYPE_UINT || t2 == HLSL_TYPE_UINT)
        return HLSL_TYPE_UINT;
    return HLSL_TYPE_INT;
}

static bool expr_common_shape(struct hlsl_ctx *ctx, struct hlsl_type *t1, struct hlsl_type *t2,
        const struct vkd3d_shader_location *loc, enum hlsl_type_class *type, unsigned int *dimx, unsigned int *dimy)
{
    if (t1->type > HLSL_CLASS_LAST_NUMERIC)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, t1)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Expression of type \"%s\" cannot be used in a numeric expression.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return false;
    }

    if (t2->type > HLSL_CLASS_LAST_NUMERIC)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, t2)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Expression of type \"%s\" cannot be used in a numeric expression.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return false;
    }

    if (!expr_compatible_data_types(t1, t2))
    {
        struct vkd3d_string_buffer *t1_string = hlsl_type_to_string(ctx, t1);
        struct vkd3d_string_buffer *t2_string = hlsl_type_to_string(ctx, t2);

        if (t1_string && t2_string)
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Expression data types \"%s\" and \"%s\" are incompatible.",
                    t1_string->buffer, t2_string->buffer);
        hlsl_release_string_buffer(ctx, t1_string);
        hlsl_release_string_buffer(ctx, t2_string);
        return false;
    }

    if (t1->dimx == 1 && t1->dimy == 1)
    {
        *type = t2->type;
        *dimx = t2->dimx;
        *dimy = t2->dimy;
    }
    else if (t2->dimx == 1 && t2->dimy == 1)
    {
        *type = t1->type;
        *dimx = t1->dimx;
        *dimy = t1->dimy;
    }
    else if (t1->type == HLSL_CLASS_MATRIX && t2->type == HLSL_CLASS_MATRIX)
    {
        *type = HLSL_CLASS_MATRIX;
        *dimx = min(t1->dimx, t2->dimx);
        *dimy = min(t1->dimy, t2->dimy);
    }
    else
    {
        if (t1->dimx * t1->dimy <= t2->dimx * t2->dimy)
        {
            *type = t1->type;
            *dimx = t1->dimx;
            *dimy = t1->dimy;
        }
        else
        {
            *type = t2->type;
            *dimx = t2->dimx;
            *dimy = t2->dimy;
        }
    }

    return true;
}

static struct hlsl_ir_node *add_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *operands[HLSL_MAX_OPERANDS],
        struct hlsl_type *type, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *expr;
    unsigned int i;

    if (type->type == HLSL_CLASS_MATRIX)
    {
        struct hlsl_type *vector_type;
        struct hlsl_deref var_deref;
        struct hlsl_ir_load *load;
        struct hlsl_ir_var *var;

        vector_type = hlsl_get_vector_type(ctx, type->base_type, hlsl_type_minor_size(type));

        if (!(var = hlsl_new_synthetic_var(ctx, "split_op", type, loc)))
            return NULL;
        hlsl_init_simple_deref_from_var(&var_deref, var);

        for (i = 0; i < hlsl_type_major_size(type); ++i)
        {
            struct hlsl_ir_node *value, *vector_operands[HLSL_MAX_OPERANDS] = { NULL };
            struct hlsl_ir_store *store;
            struct hlsl_ir_constant *c;
            unsigned int j;

            if (!(c = hlsl_new_uint_constant(ctx, i, loc)))
                return NULL;
            list_add_tail(instrs, &c->node.entry);

            for (j = 0; j < HLSL_MAX_OPERANDS; j++)
            {
                if (operands[j])
                {
                    struct hlsl_ir_load *load;

                    if (!(load = add_load_index(ctx, instrs, operands[j], &c->node, loc)))
                        return NULL;
                    vector_operands[j] = &load->node;
                }
            }

            if (!(value = add_expr(ctx, instrs, op, vector_operands, vector_type, loc)))
                return NULL;

            if (!(store = hlsl_new_store_index(ctx, &var_deref, &c->node, value, 0, loc)))
                return NULL;
            list_add_tail(instrs, &store->node.entry);
        }

        if (!(load = hlsl_new_var_load(ctx, var, *loc)))
            return NULL;
        list_add_tail(instrs, &load->node.entry);

        return &load->node;
    }

    if (!(expr = hlsl_new_expr(ctx, op, operands, type, loc)))
        return NULL;
    list_add_tail(instrs, &expr->entry);

    return expr;
}

static void check_integer_type(struct hlsl_ctx *ctx, const struct hlsl_ir_node *instr)
{
    const struct hlsl_type *type = instr->data_type;
    struct vkd3d_string_buffer *string;

    switch (type->base_type)
    {
        case HLSL_TYPE_BOOL:
        case HLSL_TYPE_INT:
        case HLSL_TYPE_UINT:
            break;

        default:
            if ((string = hlsl_type_to_string(ctx, type)))
                hlsl_error(ctx, &instr->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Expression type '%s' is not integer.", string->buffer);
            hlsl_release_string_buffer(ctx, string);
            break;
    }
}

static struct hlsl_ir_node *add_unary_arithmetic_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {arg};

    return add_expr(ctx, instrs, op, args, arg->data_type, loc);
}

static struct hlsl_ir_node *add_unary_bitwise_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg, const struct vkd3d_shader_location *loc)
{
    check_integer_type(ctx, arg);

    return add_unary_arithmetic_expr(ctx, instrs, op, arg, loc);
}

static struct hlsl_ir_node *add_unary_logical_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};
    struct hlsl_type *bool_type;

    bool_type = hlsl_get_numeric_type(ctx, arg->data_type->type, HLSL_TYPE_BOOL,
            arg->data_type->dimx, arg->data_type->dimy);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg, bool_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, bool_type, loc);
}

static struct hlsl_ir_node *add_binary_arithmetic_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *common_type;
    enum hlsl_base_type base = expr_common_base_type(arg1->data_type->base_type, arg2->data_type->base_type);
    enum hlsl_type_class type;
    unsigned int dimx, dimy;
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};

    if (!expr_common_shape(ctx, arg1->data_type, arg2->data_type, loc, &type, &dimx, &dimy))
        return NULL;

    common_type = hlsl_get_numeric_type(ctx, type, base, dimx, dimy);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg1, common_type, loc)))
        return NULL;

    if (!(args[1] = add_implicit_conversion(ctx, instrs, arg2, common_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, common_type, loc);
}

static struct list *add_binary_arithmetic_expr_merge(struct hlsl_ctx *ctx, struct list *list1, struct list *list2,
        enum hlsl_ir_expr_op op, struct vkd3d_shader_location loc)
{
    struct hlsl_ir_node *arg1 = node_from_list(list1), *arg2 = node_from_list(list2);

    list_move_tail(list1, list2);
    vkd3d_free(list2);
    add_binary_arithmetic_expr(ctx, list1, op, arg1, arg2, &loc);
    return list1;
}

static struct hlsl_ir_node *add_binary_bitwise_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        const struct vkd3d_shader_location *loc)
{
    check_integer_type(ctx, arg1);
    check_integer_type(ctx, arg2);

    return add_binary_arithmetic_expr(ctx, instrs, op, arg1, arg2, loc);
}

static struct list *add_binary_bitwise_expr_merge(struct hlsl_ctx *ctx, struct list *list1, struct list *list2,
        enum hlsl_ir_expr_op op, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg1 = node_from_list(list1), *arg2 = node_from_list(list2);

    list_move_tail(list1, list2);
    vkd3d_free(list2);
    add_binary_bitwise_expr(ctx, list1, op, arg1, arg2, loc);

    return list1;
}

static struct hlsl_ir_node *add_binary_comparison_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        struct vkd3d_shader_location *loc)
{
    struct hlsl_type *common_type, *return_type;
    enum hlsl_base_type base = expr_common_base_type(arg1->data_type->base_type, arg2->data_type->base_type);
    enum hlsl_type_class type;
    unsigned int dimx, dimy;
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};

    if (!expr_common_shape(ctx, arg1->data_type, arg2->data_type, loc, &type, &dimx, &dimy))
        return NULL;

    common_type = hlsl_get_numeric_type(ctx, type, base, dimx, dimy);
    return_type = hlsl_get_numeric_type(ctx, type, HLSL_TYPE_BOOL, dimx, dimy);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg1, common_type, loc)))
        return NULL;

    if (!(args[1] = add_implicit_conversion(ctx, instrs, arg2, common_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, return_type, loc);
}

static struct list *add_binary_comparison_expr_merge(struct hlsl_ctx *ctx, struct list *list1, struct list *list2,
        enum hlsl_ir_expr_op op, struct vkd3d_shader_location loc)
{
    struct hlsl_ir_node *arg1 = node_from_list(list1), *arg2 = node_from_list(list2);

    list_move_tail(list1, list2);
    vkd3d_free(list2);
    add_binary_comparison_expr(ctx, list1, op, arg1, arg2, &loc);
    return list1;
}

static struct hlsl_ir_node *add_binary_logical_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};
    struct hlsl_type *common_type;
    enum hlsl_type_class type;
    unsigned int dimx, dimy;

    if (!expr_common_shape(ctx, arg1->data_type, arg2->data_type, loc, &type, &dimx, &dimy))
        return NULL;

    common_type = hlsl_get_numeric_type(ctx, type, HLSL_TYPE_BOOL, dimx, dimy);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg1, common_type, loc)))
        return NULL;

    if (!(args[1] = add_implicit_conversion(ctx, instrs, arg2, common_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, common_type, loc);
}

static struct list *add_binary_logical_expr_merge(struct hlsl_ctx *ctx, struct list *list1, struct list *list2,
        enum hlsl_ir_expr_op op, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg1 = node_from_list(list1), *arg2 = node_from_list(list2);

    list_move_tail(list1, list2);
    vkd3d_free(list2);
    add_binary_logical_expr(ctx, list1, op, arg1, arg2, loc);

    return list1;
}

static struct hlsl_ir_node *add_binary_shift_expr(struct hlsl_ctx *ctx, struct list *instrs,
        enum hlsl_ir_expr_op op, struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2,
        const struct vkd3d_shader_location *loc)
{
    enum hlsl_base_type base = arg1->data_type->base_type;
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};
    struct hlsl_type *return_type, *integer_type;
    enum hlsl_type_class type;
    unsigned int dimx, dimy;

    check_integer_type(ctx, arg1);
    check_integer_type(ctx, arg2);

    if (base == HLSL_TYPE_BOOL)
        base = HLSL_TYPE_INT;

    if (!expr_common_shape(ctx, arg1->data_type, arg2->data_type, loc, &type, &dimx, &dimy))
        return NULL;

    return_type = hlsl_get_numeric_type(ctx, type, base, dimx, dimy);
    integer_type = hlsl_get_numeric_type(ctx, type, HLSL_TYPE_INT, dimx, dimy);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg1, return_type, loc)))
        return NULL;

    if (!(args[1] = add_implicit_conversion(ctx, instrs, arg2, integer_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, return_type, loc);
}

static struct list *add_binary_shift_expr_merge(struct hlsl_ctx *ctx, struct list *list1, struct list *list2,
        enum hlsl_ir_expr_op op, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg1 = node_from_list(list1), *arg2 = node_from_list(list2);

    list_move_tail(list1, list2);
    vkd3d_free(list2);
    add_binary_shift_expr(ctx, list1, op, arg1, arg2, loc);

    return list1;
}

static struct hlsl_ir_node *add_binary_dot_expr(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_node *arg1, struct hlsl_ir_node *arg2, const struct vkd3d_shader_location *loc)
{
    enum hlsl_base_type base = expr_common_base_type(arg1->data_type->base_type, arg2->data_type->base_type);
    struct hlsl_ir_node *args[HLSL_MAX_OPERANDS] = {0};
    struct hlsl_type *common_type, *ret_type;
    enum hlsl_ir_expr_op op;
    unsigned dim;

    if (arg1->data_type->type == HLSL_CLASS_MATRIX)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, arg1->data_type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Invalid type %s.\n", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return NULL;
    }

    if (arg2->data_type->type == HLSL_CLASS_MATRIX)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, arg2->data_type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Invalid type %s.\n", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return NULL;
    }

    if (arg1->data_type->type == HLSL_CLASS_SCALAR)
        dim = arg2->data_type->dimx;
    else if (arg1->data_type->type == HLSL_CLASS_SCALAR)
        dim = arg1->data_type->dimx;
    else
        dim = min(arg1->data_type->dimx, arg2->data_type->dimx);

    if (dim == 1)
        op = HLSL_OP2_MUL;
    else
        op = HLSL_OP2_DOT;

    common_type = hlsl_get_vector_type(ctx, base, dim);
    ret_type = hlsl_get_scalar_type(ctx, base);

    if (!(args[0] = add_implicit_conversion(ctx, instrs, arg1, common_type, loc)))
        return NULL;

    if (!(args[1] = add_implicit_conversion(ctx, instrs, arg2, common_type, loc)))
        return NULL;

    return add_expr(ctx, instrs, op, args, ret_type, loc);
}

static enum hlsl_ir_expr_op op_from_assignment(enum parse_assign_op op)
{
    static const enum hlsl_ir_expr_op ops[] =
    {
        0,
        HLSL_OP2_ADD,
        0,
        HLSL_OP2_MUL,
        HLSL_OP2_DIV,
        HLSL_OP2_MOD,
        HLSL_OP2_LSHIFT,
        HLSL_OP2_RSHIFT,
        HLSL_OP2_BIT_AND,
        HLSL_OP2_BIT_OR,
        HLSL_OP2_BIT_XOR,
    };

    return ops[op];
}

static bool invert_swizzle(unsigned int *swizzle, unsigned int *writemask, unsigned int *ret_width)
{
    unsigned int i, j, bit = 0, inverted = 0, width, new_writemask = 0, new_swizzle = 0;

    /* Apply the writemask to the swizzle to get a new writemask and swizzle. */
    for (i = 0; i < 4; ++i)
    {
        if (*writemask & (1 << i))
        {
            unsigned int s = (*swizzle >> (i * 2)) & 3;
            new_swizzle |= s << (bit++ * 2);
            if (new_writemask & (1 << s))
                return false;
            new_writemask |= 1 << s;
        }
    }
    width = bit;

    /* Invert the swizzle. */
    bit = 0;
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < width; ++j)
        {
            unsigned int s = (new_swizzle >> (j * 2)) & 3;
            if (s == i)
                inverted |= j << (bit++ * 2);
        }
    }

    *swizzle = inverted;
    *writemask = new_writemask;
    *ret_width = width;
    return true;
}

static struct hlsl_ir_node *add_assignment(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *lhs,
        enum parse_assign_op assign_op, struct hlsl_ir_node *rhs)
{
    struct hlsl_type *lhs_type = lhs->data_type;
    struct hlsl_ir_expr *copy;
    unsigned int writemask = 0;

    if (assign_op == ASSIGN_OP_SUB)
    {
        if (!(rhs = add_unary_arithmetic_expr(ctx, instrs, HLSL_OP1_NEG, rhs, &rhs->loc)))
            return NULL;
        assign_op = ASSIGN_OP_ADD;
    }
    if (assign_op != ASSIGN_OP_ASSIGN)
    {
        enum hlsl_ir_expr_op op = op_from_assignment(assign_op);

        assert(op);
        if (!(rhs = add_binary_arithmetic_expr(ctx, instrs, op, lhs, rhs, &rhs->loc)))
            return NULL;
    }

    if (lhs_type->type <= HLSL_CLASS_LAST_NUMERIC)
        writemask = (1 << lhs_type->dimx) - 1;

    if (!(rhs = add_implicit_conversion(ctx, instrs, rhs, lhs_type, &rhs->loc)))
        return NULL;

    while (lhs->type != HLSL_IR_LOAD && lhs->type != HLSL_IR_RESOURCE_LOAD)
    {
        if (lhs->type == HLSL_IR_EXPR && hlsl_ir_expr(lhs)->op == HLSL_OP1_CAST)
        {
            hlsl_fixme(ctx, &lhs->loc, "Cast on the LHS.");
            return NULL;
        }
        else if (lhs->type == HLSL_IR_SWIZZLE)
        {
            struct hlsl_ir_swizzle *swizzle = hlsl_ir_swizzle(lhs), *new_swizzle;
            unsigned int width, s = swizzle->swizzle;

            if (lhs->data_type->type == HLSL_CLASS_MATRIX)
                hlsl_fixme(ctx, &lhs->loc, "Matrix assignment with a writemask.");

            if (!invert_swizzle(&s, &writemask, &width))
            {
                hlsl_error(ctx, &lhs->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_WRITEMASK, "Invalid writemask.");
                return NULL;
            }

            if (!(new_swizzle = hlsl_new_swizzle(ctx, s, width, rhs, &swizzle->node.loc)))
            {
                return NULL;
            }
            list_add_tail(instrs, &new_swizzle->node.entry);

            lhs = swizzle->val.node;
            rhs = &new_swizzle->node;
        }
        else
        {
            hlsl_error(ctx, &lhs->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_LVALUE, "Invalid lvalue.");
            return NULL;
        }
    }

    if (lhs->type == HLSL_IR_RESOURCE_LOAD)
    {
        struct hlsl_ir_resource_load *load = hlsl_ir_resource_load(lhs);
        struct hlsl_ir_resource_store *store;
        struct hlsl_type *resource_type;
        struct hlsl_ir_swizzle *coords;
        unsigned int dim_count;

        /* Such an lvalue was produced by an index expression. */
        assert(load->load_type == HLSL_RESOURCE_LOAD);
        resource_type = hlsl_deref_get_type(ctx, &load->resource);
        assert(resource_type->type == HLSL_CLASS_OBJECT);
        assert(resource_type->base_type == HLSL_TYPE_TEXTURE || resource_type->base_type == HLSL_TYPE_UAV);

        if (resource_type->base_type != HLSL_TYPE_UAV)
            hlsl_error(ctx, &lhs->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Read-only resources cannot be stored to.");

        dim_count = hlsl_sampler_dim_count(resource_type->sampler_dim);

        if (writemask != ((1u << resource_type->e.resource_format->dimx) - 1))
            hlsl_error(ctx, &lhs->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_WRITEMASK,
                    "Resource store expressions must write to all components.");

        /* Remove the (implicit) mipmap level from the load expression. */
        assert(load->coords.node->data_type->type == HLSL_CLASS_VECTOR);
        assert(load->coords.node->data_type->base_type == HLSL_TYPE_UINT);
        assert(load->coords.node->data_type->dimx == dim_count + 1);
        if (!(coords = hlsl_new_swizzle(ctx, HLSL_SWIZZLE(X, Y, Z, W), dim_count, load->coords.node, &lhs->loc)))
            return NULL;
        list_add_tail(instrs, &coords->node.entry);

        if (!(store = hlsl_new_resource_store(ctx, &load->resource, &coords->node, rhs, &lhs->loc)))
            return NULL;
        list_add_tail(instrs, &store->node.entry);
    }
    else
    {
        struct hlsl_ir_store *store;

        if (!(store = hlsl_new_store_index(ctx, &hlsl_ir_load(lhs)->src, NULL, rhs, writemask, &rhs->loc)))
            return NULL;
        list_add_tail(instrs, &store->node.entry);
    }

    /* Don't use the instruction itself as a source, as this makes structure
     * splitting easier. Instead copy it here. Since we retrieve sources from
     * the last instruction in the list, we do need to copy. */
    if (!(copy = hlsl_new_copy(ctx, rhs)))
        return NULL;
    list_add_tail(instrs, &copy->node.entry);
    return &copy->node;
}

static bool add_increment(struct hlsl_ctx *ctx, struct list *instrs, bool decrement, bool post,
        struct vkd3d_shader_location loc)
{
    struct hlsl_ir_node *lhs = node_from_list(instrs);
    struct hlsl_ir_constant *one;

    if (lhs->data_type->modifiers & HLSL_MODIFIER_CONST)
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_MODIFIES_CONST,
                "Argument to %s%screment operator is const.", post ? "post" : "pre", decrement ? "de" : "in");

    if (!(one = hlsl_new_int_constant(ctx, 1, &loc)))
        return false;
    list_add_tail(instrs, &one->node.entry);

    if (!add_assignment(ctx, instrs, lhs, decrement ? ASSIGN_OP_SUB : ASSIGN_OP_ADD, &one->node))
        return false;

    if (post)
    {
        struct hlsl_ir_expr *copy;

        if (!(copy = hlsl_new_copy(ctx, lhs)))
            return false;
        list_add_tail(instrs, &copy->node.entry);

        /* Post increment/decrement expressions are considered const. */
        if (!(copy->node.data_type = hlsl_type_clone(ctx, copy->node.data_type, 0, HLSL_MODIFIER_CONST)))
            return false;
    }

    return true;
}

static void initialize_var_components(struct hlsl_ctx *ctx, struct list *instrs,
        struct hlsl_ir_var *dst, unsigned int *store_index, struct hlsl_ir_node *src)
{
    unsigned int src_comp_count = hlsl_type_component_count(src->data_type);
    struct hlsl_deref dst_deref;
    unsigned int k;

    hlsl_init_simple_deref_from_var(&dst_deref, dst);

    for (k = 0; k < src_comp_count; ++k)
    {
        struct hlsl_type *dst_comp_type;
        struct hlsl_ir_store *store;
        struct hlsl_ir_load *load;
        struct hlsl_ir_node *conv;
        struct hlsl_block block;

        if (!(load = add_load_component(ctx, instrs, src, k, &src->loc)))
            return;

        dst_comp_type = hlsl_type_get_component_type(ctx, dst->data_type, *store_index);

        if (!(conv = add_implicit_conversion(ctx, instrs, &load->node, dst_comp_type, &src->loc)))
            return;

        if (!(store = hlsl_new_store_component(ctx, &block, &dst_deref, *store_index, conv)))
            return;
        list_move_tail(instrs, &block.instrs);

        ++*store_index;
    }
}

static bool type_has_object_components(struct hlsl_type *type, bool must_be_in_struct)
{
    if (type->type == HLSL_CLASS_OBJECT)
        return !must_be_in_struct;
    if (type->type == HLSL_CLASS_ARRAY)
        return type_has_object_components(type->e.array.type, must_be_in_struct);

    if (type->type == HLSL_CLASS_STRUCT)
    {
        unsigned int i;

        for (i = 0; i < type->e.record.field_count; ++i)
        {
            if (type_has_object_components(type->e.record.fields[i].type, false))
                return true;
        }
    }
    return false;
}

static bool type_has_numeric_components(struct hlsl_type *type)
{
    if (type->type <= HLSL_CLASS_LAST_NUMERIC)
        return true;
    if (type->type == HLSL_CLASS_ARRAY)
        return type_has_numeric_components(type->e.array.type);

    if (type->type == HLSL_CLASS_STRUCT)
    {
        unsigned int i;

        for (i = 0; i < type->e.record.field_count; ++i)
        {
            if (type_has_numeric_components(type->e.record.fields[i].type))
                return true;
        }
    }
    return false;
}

static struct list *declare_vars(struct hlsl_ctx *ctx, struct hlsl_type *basic_type,
        DWORD modifiers, struct list *var_list)
{
    struct parse_variable_def *v, *v_next;
    struct hlsl_ir_function_decl *func;
    struct list *statements_list;
    struct hlsl_ir_var *var;
    struct hlsl_type *type;
    bool local = true;

    if (basic_type->type == HLSL_CLASS_MATRIX)
        assert(basic_type->modifiers & HLSL_MODIFIERS_MAJORITY_MASK);

    if (!(statements_list = make_empty_list(ctx)))
    {
        LIST_FOR_EACH_ENTRY_SAFE(v, v_next, var_list, struct parse_variable_def, entry)
            free_parse_variable_def(v);
        vkd3d_free(var_list);
        return NULL;
    }

    if (!var_list)
        return statements_list;

    LIST_FOR_EACH_ENTRY_SAFE(v, v_next, var_list, struct parse_variable_def, entry)
    {
        bool unbounded_res_array = false;
        unsigned int i;

        type = basic_type;

        if (shader_is_sm_5_1(ctx) && type->type == HLSL_CLASS_OBJECT)
        {
            for (i = 0; i < v->arrays.count; ++i)
                unbounded_res_array |= (v->arrays.sizes[i] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT);
        }

        if (unbounded_res_array)
        {
            if (v->arrays.count == 1)
            {
                hlsl_fixme(ctx, &v->loc, "Unbounded resource arrays.");
                free_parse_variable_def(v);
                continue;
            }
            else
            {
                hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Unbounded resource arrays cannot be multi-dimensional.");
            }
        }
        else
        {
            for (i = 0; i < v->arrays.count; ++i)
            {
                if (v->arrays.sizes[i] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT)
                {
                    unsigned int size = initializer_size(&v->initializer);
                    unsigned int elem_components = hlsl_type_component_count(type);

                    if (i < v->arrays.count - 1)
                    {
                        hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                                "Only innermost array size can be implicit.");
                        free_parse_initializer(&v->initializer);
                        v->initializer.args_count = 0;
                    }
                    else if (elem_components == 0)
                    {
                        hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                                "Cannot declare an implicit size array of a size 0 type.");
                        free_parse_initializer(&v->initializer);
                        v->initializer.args_count = 0;
                    }
                    else if (size == 0)
                    {
                        hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                                "Implicit size arrays need to be initialized.");
                        free_parse_initializer(&v->initializer);
                        v->initializer.args_count = 0;

                    }
                    else if (size % elem_components != 0)
                    {
                        hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                                "Cannot initialize implicit size array with %u components, expected a multiple of %u.",
                                size, elem_components);
                        free_parse_initializer(&v->initializer);
                        v->initializer.args_count = 0;
                    }
                    else
                    {
                        v->arrays.sizes[i] = size / elem_components;
                    }
                }
                type = hlsl_new_array_type(ctx, type, v->arrays.sizes[i]);
            }
        }
        vkd3d_free(v->arrays.sizes);

        if (type->type != HLSL_CLASS_MATRIX)
            check_invalid_matrix_modifiers(ctx, modifiers, v->loc);

        if (modifiers & (HLSL_STORAGE_IN | HLSL_STORAGE_OUT))
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_modifiers_to_string(ctx, modifiers & (HLSL_STORAGE_IN | HLSL_STORAGE_OUT))))
                hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Modifiers '%s' are not allowed on non-parameter variables.", string->buffer);
            hlsl_release_string_buffer(ctx, string);
        }

        if (!(var = hlsl_new_var(ctx, v->name, type, v->loc, &v->semantic, modifiers, &v->reg_reservation)))
        {
            free_parse_variable_def(v);
            continue;
        }

        var->buffer = ctx->cur_buffer;

        if (ctx->cur_scope == ctx->globals)
        {
            local = false;

            if ((modifiers & HLSL_STORAGE_UNIFORM) && (modifiers & HLSL_STORAGE_STATIC))
                hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Variable '%s' is declared as both \"uniform\" and \"static\".", var->name);

            /* Mark it as uniform. We need to do this here since synthetic
             * variables also get put in the global scope, but shouldn't be
             * considered uniforms, and we have no way of telling otherwise. */
            if (!(modifiers & HLSL_STORAGE_STATIC))
                var->modifiers |= HLSL_STORAGE_UNIFORM;

            if (ctx->profile->major_version < 5 && (var->modifiers & HLSL_STORAGE_UNIFORM) &&
                    type_has_object_components(var->data_type, true))
            {
                hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Target profile doesn't support objects as struct members in uniform variables.\n");
            }

            if ((func = hlsl_get_func_decl(ctx, var->name)))
            {
                hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                        "'%s' is already defined as a function.", var->name);
                hlsl_note(ctx, &func->loc, VKD3D_SHADER_LOG_ERROR,
                        "'%s' was previously defined here.", var->name);
            }
        }
        else
        {
            static const unsigned int invalid = HLSL_STORAGE_EXTERN | HLSL_STORAGE_SHARED
                    | HLSL_STORAGE_GROUPSHARED | HLSL_STORAGE_UNIFORM;

            if (modifiers & invalid)
            {
                struct vkd3d_string_buffer *string;

                if ((string = hlsl_modifiers_to_string(ctx, modifiers & invalid)))
                    hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                            "Modifiers '%s' are not allowed on local variables.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
            }
            if (var->semantic.name)
                hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_SEMANTIC,
                        "Semantics are not allowed on local variables.");
        }

        if ((var->modifiers & HLSL_STORAGE_STATIC) && type_has_numeric_components(var->data_type)
                && type_has_object_components(var->data_type, false))
        {
            hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Static variables cannot have both numeric and resource components.");
        }

        if ((type->modifiers & HLSL_MODIFIER_CONST) && !v->initializer.args_count
                && !(modifiers & (HLSL_STORAGE_STATIC | HLSL_STORAGE_UNIFORM)))
        {
            hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_MISSING_INITIALIZER,
                    "Const variable \"%s\" is missing an initializer.", var->name);
            hlsl_free_var(var);
            free_parse_initializer(&v->initializer);
            vkd3d_free(v);
            continue;
        }

        if (!hlsl_add_var(ctx, var, local))
        {
            struct hlsl_ir_var *old = hlsl_get_var(ctx->cur_scope, var->name);

            hlsl_error(ctx, &var->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                    "Variable \"%s\" was already declared in this scope.", var->name);
            hlsl_note(ctx, &old->loc, VKD3D_SHADER_LOG_ERROR, "\"%s\" was previously declared here.", old->name);
            hlsl_free_var(var);
            free_parse_initializer(&v->initializer);
            vkd3d_free(v);
            continue;
        }

        if (v->initializer.args_count)
        {
            if (v->initializer.braces)
            {
                unsigned int size = initializer_size(&v->initializer);
                unsigned int store_index = 0;
                unsigned int k;

                if (hlsl_type_component_count(type) != size)
                {
                    hlsl_error(ctx, &v->loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                            "Expected %u components in initializer, but got %u.",
                            hlsl_type_component_count(type), size);
                    free_parse_initializer(&v->initializer);
                    vkd3d_free(v);
                    continue;
                }

                for (k = 0; k < v->initializer.args_count; ++k)
                {
                    initialize_var_components(ctx, v->initializer.instrs, var,
                            &store_index, v->initializer.args[k]);
                }
            }
            else
            {
                struct hlsl_ir_load *load = hlsl_new_var_load(ctx, var, var->loc);

                assert(v->initializer.args_count == 1);
                list_add_tail(v->initializer.instrs, &load->node.entry);
                add_assignment(ctx, v->initializer.instrs, &load->node, ASSIGN_OP_ASSIGN, v->initializer.args[0]);
            }

            if (modifiers & HLSL_STORAGE_STATIC)
                list_move_tail(&ctx->static_initializers, v->initializer.instrs);
            else
                list_move_tail(statements_list, v->initializer.instrs);
            vkd3d_free(v->initializer.args);
            vkd3d_free(v->initializer.instrs);
        }
        vkd3d_free(v);
    }
    vkd3d_free(var_list);
    return statements_list;
}

struct find_function_call_args
{
    const struct parse_initializer *params;
    const struct hlsl_ir_function_decl *decl;
};

static void find_function_call_exact(struct rb_entry *entry, void *context)
{
    const struct hlsl_ir_function_decl *decl = RB_ENTRY_VALUE(entry, const struct hlsl_ir_function_decl, entry);
    struct find_function_call_args *args = context;
    const struct hlsl_ir_var *param;
    unsigned int i = 0;

    LIST_FOR_EACH_ENTRY(param, decl->parameters, struct hlsl_ir_var, param_entry)
    {
        if (i >= args->params->args_count
                || !hlsl_types_are_equal(param->data_type, args->params->args[i++]->data_type))
            return;
    }
    if (i == args->params->args_count)
        args->decl = decl;
}

static const struct hlsl_ir_function_decl *find_function_call(struct hlsl_ctx *ctx,
        const char *name, const struct parse_initializer *params)
{
    struct find_function_call_args args = {.params = params};
    struct hlsl_ir_function *func;
    struct rb_entry *entry;

    if (!(entry = rb_get(&ctx->functions, name)))
        return NULL;
    func = RB_ENTRY_VALUE(entry, struct hlsl_ir_function, entry);

    rb_for_each_entry(&func->overloads, find_function_call_exact, &args);
    if (!args.decl)
        FIXME("Search for compatible overloads.\n");
    return args.decl;
}

static struct hlsl_ir_node *intrinsic_float_convert_arg(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, struct hlsl_ir_node *arg, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *type = arg->data_type;

    if (type->base_type == HLSL_TYPE_FLOAT || type->base_type == HLSL_TYPE_HALF)
        return arg;

    type = hlsl_get_numeric_type(ctx, type->type, HLSL_TYPE_FLOAT, type->dimx, type->dimy);
    return add_implicit_conversion(ctx, params->instrs, arg, type, loc);
}

static bool intrinsic_abs(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    return !!add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_ABS, params->args[0], loc);
}

/* Find the type corresponding to the given source type, with the same
 * dimensions but a different base type. */
static struct hlsl_type *convert_numeric_type(const struct hlsl_ctx *ctx,
        const struct hlsl_type *type, enum hlsl_base_type base_type)
{
    return hlsl_get_numeric_type(ctx, type->type, base_type, type->dimx, type->dimy);
}

static bool intrinsic_asuint(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *operands[HLSL_MAX_OPERANDS] = {0};
    struct hlsl_type *data_type;

    if (params->args_count != 1 && params->args_count != 3)
    {
        hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                "Wrong number of arguments to function 'asuint': expected 1 or 3, but got %u.", params->args_count);
        return false;
    }

    if (params->args_count == 3)
    {
        hlsl_fixme(ctx, loc, "Double-to-integer conversion.");
        return false;
    }

    data_type = params->args[0]->data_type;
    if (data_type->base_type == HLSL_TYPE_BOOL || data_type->base_type == HLSL_TYPE_DOUBLE)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, data_type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Wrong type for argument 0 of asuint(): expected 'int', 'uint', 'float', or 'half', but got '%s'.",
                    string->buffer);
        hlsl_release_string_buffer(ctx, string);
    }
    data_type = convert_numeric_type(ctx, data_type, HLSL_TYPE_UINT);

    operands[0] = params->args[0];
    return add_expr(ctx, params->instrs, HLSL_OP1_REINTERPRET, operands, data_type, loc);
}

static bool intrinsic_clamp(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *max;

    if (!(max = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MAX, params->args[0], params->args[1], loc)))
        return false;

    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MIN, max, params->args[2], loc);
}

static bool intrinsic_cross(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_swizzle *arg1_swzl1, *arg1_swzl2, *arg2_swzl1, *arg2_swzl2;
    struct hlsl_ir_node *arg1 = params->args[0], *arg2 = params->args[1];
    struct hlsl_ir_node *arg1_cast, *arg2_cast, *mul1_neg, *mul1, *mul2;
    struct hlsl_type *cast_type;
    enum hlsl_base_type base;

    if (arg1->data_type->base_type == HLSL_TYPE_HALF && arg2->data_type->base_type == HLSL_TYPE_HALF)
        base = HLSL_TYPE_HALF;
    else
        base = HLSL_TYPE_FLOAT;

    cast_type = hlsl_get_vector_type(ctx, base, 3);

    if (!(arg1_cast = add_implicit_conversion(ctx, params->instrs, arg1, cast_type, loc)))
        return false;

    if (!(arg2_cast = add_implicit_conversion(ctx, params->instrs, arg2, cast_type, loc)))
        return false;

    if (!(arg1_swzl1 = hlsl_new_swizzle(ctx, HLSL_SWIZZLE(Z, X, Y, Z), 3, arg1_cast, loc)))
        return false;
    list_add_tail(params->instrs, &arg1_swzl1->node.entry);

    if (!(arg2_swzl1 = hlsl_new_swizzle(ctx, HLSL_SWIZZLE(Y, Z, X, Y), 3, arg2_cast, loc)))
        return false;
    list_add_tail(params->instrs, &arg2_swzl1->node.entry);

    if (!(mul1 = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL,
            &arg1_swzl1->node, &arg2_swzl1->node, loc)))
        return false;

    if (!(mul1_neg = hlsl_new_unary_expr(ctx, HLSL_OP1_NEG, mul1, *loc)))
        return false;
    list_add_tail(params->instrs, &mul1_neg->entry);

    if (!(arg1_swzl2 = hlsl_new_swizzle(ctx, HLSL_SWIZZLE(Y, Z, X, Y), 3, arg1_cast, loc)))
        return false;
    list_add_tail(params->instrs, &arg1_swzl2->node.entry);

    if (!(arg2_swzl2 = hlsl_new_swizzle(ctx, HLSL_SWIZZLE(Z, X, Y, Z), 3, arg2_cast, loc)))
        return false;
    list_add_tail(params->instrs, &arg2_swzl2->node.entry);

    if (!(mul2 = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL,
            &arg1_swzl2->node, &arg2_swzl2->node, loc)))
        return false;

    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_ADD, mul2, mul1_neg, loc);
}

static bool intrinsic_dot(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    return !!add_binary_dot_expr(ctx, params->instrs, params->args[0], params->args[1], loc);
}

static bool intrinsic_floor(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    return !!add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_FLOOR, arg, loc);
}

static bool intrinsic_ldexp(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[1], loc)))
        return false;

    if (!(arg = add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_EXP2, arg, loc)))
        return false;

    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, params->args[0], arg, loc);
}

static bool intrinsic_length(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *type = params->args[0]->data_type;
    struct hlsl_ir_node *arg, *dot;

    if (type->type == HLSL_CLASS_MATRIX)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Invalid type %s.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
    }

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    if (!(dot = add_binary_dot_expr(ctx, params->instrs, arg, arg, loc)))
        return false;

    return !!add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_SQRT, dot, loc);
}

static bool intrinsic_lerp(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg, *neg, *add, *mul;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    if (!(neg = add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_NEG, arg, loc)))
        return false;

    if (!(add = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_ADD, params->args[1], neg, loc)))
        return false;

    if (!(mul = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, params->args[2], add, loc)))
        return false;

    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_ADD, arg, mul, loc);
}

static bool intrinsic_max(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MAX, params->args[0], params->args[1], loc);
}

static bool intrinsic_min(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MIN, params->args[0], params->args[1], loc);
}

static bool intrinsic_mul(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg1 = params->args[0], *arg2 = params->args[1], *cast1, *cast2;
    enum hlsl_base_type base = expr_common_base_type(arg1->data_type->base_type, arg2->data_type->base_type);
    struct hlsl_type *cast_type1 = arg1->data_type, *cast_type2 = arg2->data_type, *matrix_type, *ret_type;
    unsigned int i, j, k, vect_count = 0;
    struct hlsl_deref var_deref;
    struct hlsl_ir_load *load;
    struct hlsl_ir_var *var;

    if (arg1->data_type->type == HLSL_CLASS_SCALAR || arg2->data_type->type == HLSL_CLASS_SCALAR)
        return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, arg1, arg2, loc);

    if (arg1->data_type->type == HLSL_CLASS_VECTOR)
    {
        vect_count++;
        cast_type1 = hlsl_get_matrix_type(ctx, base, arg1->data_type->dimx, 1);
    }
    if (arg2->data_type->type == HLSL_CLASS_VECTOR)
    {
        vect_count++;
        cast_type2 = hlsl_get_matrix_type(ctx, base, 1, arg2->data_type->dimx);
    }

    matrix_type = hlsl_get_matrix_type(ctx, base, cast_type2->dimx, cast_type1->dimy);

    if (vect_count == 0)
    {
        ret_type = matrix_type;
    }
    else if (vect_count == 1)
    {
        assert(matrix_type->dimx == 1 || matrix_type->dimy == 1);
        ret_type = hlsl_get_vector_type(ctx, base, matrix_type->dimx * matrix_type->dimy);
    }
    else
    {
        assert(matrix_type->dimx == 1 && matrix_type->dimy == 1);
        ret_type = hlsl_get_scalar_type(ctx, base);
    }

    if (!(cast1 = add_implicit_conversion(ctx, params->instrs, arg1, cast_type1, loc)))
        return false;

    if (!(cast2 = add_implicit_conversion(ctx, params->instrs, arg2, cast_type2, loc)))
        return false;

    if (!(var = hlsl_new_synthetic_var(ctx, "mul", matrix_type, loc)))
        return false;
    hlsl_init_simple_deref_from_var(&var_deref, var);

    for (i = 0; i < matrix_type->dimx; ++i)
    {
        for (j = 0; j < matrix_type->dimy; ++j)
        {
            struct hlsl_ir_node *instr = NULL;
            struct hlsl_ir_store *store;
            struct hlsl_block block;

            for (k = 0; k < cast_type1->dimx && k < cast_type2->dimy; ++k)
            {
                struct hlsl_ir_load *value1, *value2;
                struct hlsl_ir_node *mul;

                if (!(value1 = add_load_component(ctx, params->instrs, cast1, j * cast1->data_type->dimx + k, loc)))
                    return false;

                if (!(value2 = add_load_component(ctx, params->instrs, cast2, k * cast2->data_type->dimx + i, loc)))
                    return false;

                if (!(mul = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, &value1->node, &value2->node, loc)))
                    return false;

                if (instr)
                {
                    if (!(instr = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_ADD, instr, mul, loc)))
                        return false;
                }
                else
                {
                    instr = mul;
                }
            }

            if (!(store = hlsl_new_store_component(ctx, &block, &var_deref, j * matrix_type->dimx + i, instr)))
                return false;
            list_move_tail(params->instrs, &block.instrs);
        }
    }

    if (!(load = hlsl_new_var_load(ctx, var, *loc)))
        return false;
    list_add_tail(params->instrs, &load->node.entry);

    return !!add_implicit_conversion(ctx, params->instrs, &load->node, ret_type, loc);
}

static bool intrinsic_normalize(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_type *type = params->args[0]->data_type;
    struct hlsl_ir_node *dot, *rsq, *arg;

    if (type->type == HLSL_CLASS_MATRIX)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Invalid type %s.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
    }

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    if (!(dot = add_binary_dot_expr(ctx, params->instrs, arg, arg, loc)))
        return false;

    if (!(rsq = add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_RSQ, dot, loc)))
        return false;

    return !!add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, rsq, arg, loc);
}

static bool intrinsic_pow(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *log, *exp, *arg, *mul;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    if (!(log = hlsl_new_unary_expr(ctx, HLSL_OP1_LOG2, arg, *loc)))
        return false;
    list_add_tail(params->instrs, &log->entry);

    if (!(mul = add_binary_arithmetic_expr(ctx, params->instrs, HLSL_OP2_MUL, params->args[1], log, loc)))
        return false;

    if (!(exp = hlsl_new_unary_expr(ctx, HLSL_OP1_EXP2, mul, *loc)))
        return false;
    list_add_tail(params->instrs, &exp->entry);
    return true;
}

static bool intrinsic_round(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    return !!add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_ROUND, arg, loc);
}

static bool intrinsic_saturate(struct hlsl_ctx *ctx,
        const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    struct hlsl_ir_node *arg;

    if (!(arg = intrinsic_float_convert_arg(ctx, params, params->args[0], loc)))
        return false;

    return !!add_unary_arithmetic_expr(ctx, params->instrs, HLSL_OP1_SAT, arg, loc);
}

static const struct intrinsic_function
{
    const char *name;
    int param_count;
    bool check_numeric;
    bool (*handler)(struct hlsl_ctx *ctx, const struct parse_initializer *params,
            const struct vkd3d_shader_location *loc);
}
intrinsic_functions[] =
{
    /* Note: these entries should be kept in alphabetical order. */
    {"abs",                                 1, true,  intrinsic_abs},
    {"asuint",                             -1, true,  intrinsic_asuint},
    {"clamp",                               3, true,  intrinsic_clamp},
    {"cross",                               2, true,  intrinsic_cross},
    {"dot",                                 2, true,  intrinsic_dot},
    {"floor",                               1, true,  intrinsic_floor},
    {"ldexp",                               2, true,  intrinsic_ldexp},
    {"length",                              1, true,  intrinsic_length},
    {"lerp",                                3, true,  intrinsic_lerp},
    {"max",                                 2, true,  intrinsic_max},
    {"min",                                 2, true,  intrinsic_min},
    {"mul",                                 2, true,  intrinsic_mul},
    {"normalize",                           1, true,  intrinsic_normalize},
    {"pow",                                 2, true,  intrinsic_pow},
    {"round",                               1, true,  intrinsic_round},
    {"saturate",                            1, true,  intrinsic_saturate},
};

static int intrinsic_function_name_compare(const void *a, const void *b)
{
    const struct intrinsic_function *func = b;

    return strcmp(a, func->name);
}

static struct list *add_call(struct hlsl_ctx *ctx, const char *name,
        struct parse_initializer *params, struct vkd3d_shader_location loc)
{
    const struct hlsl_ir_function_decl *decl;
    struct intrinsic_function *intrinsic;

    if ((decl = find_function_call(ctx, name, params)))
    {
        hlsl_fixme(ctx, &loc, "Call to user-defined function \"%s\".", name);
        free_parse_initializer(params);
        return NULL;
    }
    else if ((intrinsic = bsearch(name, intrinsic_functions, ARRAY_SIZE(intrinsic_functions),
            sizeof(*intrinsic_functions), intrinsic_function_name_compare)))
    {
        if (intrinsic->param_count >= 0 && params->args_count != intrinsic->param_count)
        {
            hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                    "Wrong number of arguments to function '%s': expected %u, but got %u.",
                    name, intrinsic->param_count, params->args_count);
            free_parse_initializer(params);
            return NULL;
        }

        if (intrinsic->check_numeric)
        {
            unsigned int i;

            for (i = 0; i < params->args_count; ++i)
            {
                if (params->args[i]->data_type->type > HLSL_CLASS_LAST_NUMERIC)
                {
                    struct vkd3d_string_buffer *string;

                    if ((string = hlsl_type_to_string(ctx, params->args[i]->data_type)))
                        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                                "Wrong type for argument %u of '%s': expected a numeric type, but got '%s'.",
                                i + 1, name, string->buffer);
                    hlsl_release_string_buffer(ctx, string);
                    free_parse_initializer(params);
                    return NULL;
                }
            }
        }

        if (!intrinsic->handler(ctx, params, &loc))
        {
            free_parse_initializer(params);
            return NULL;
        }
    }
    else
    {
        hlsl_error(ctx, &loc, VKD3D_SHADER_ERROR_HLSL_NOT_DEFINED, "Function \"%s\" is not defined.", name);
        free_parse_initializer(params);
        return NULL;
    }
    vkd3d_free(params->args);
    return params->instrs;
}

static struct list *add_constructor(struct hlsl_ctx *ctx, struct hlsl_type *type,
        struct parse_initializer *params, struct vkd3d_shader_location loc)
{
    struct hlsl_ir_load *load;
    struct hlsl_ir_var *var;
    unsigned int i, idx = 0;

    if (!(var = hlsl_new_synthetic_var(ctx, "constructor", type, &loc)))
        return NULL;

    for (i = 0; i < params->args_count; ++i)
    {
        struct hlsl_ir_node *arg = params->args[i];

        if (arg->data_type->type == HLSL_CLASS_OBJECT)
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_type_to_string(ctx, arg->data_type)))
                hlsl_error(ctx, &arg->loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Invalid type %s for constructor argument.", string->buffer);
            hlsl_release_string_buffer(ctx, string);
            continue;
        }

        initialize_var_components(ctx, params->instrs, var, &idx, arg);
    }

    if (!(load = hlsl_new_var_load(ctx, var, loc)))
        return NULL;
    list_add_tail(params->instrs, &load->node.entry);

    vkd3d_free(params->args);
    return params->instrs;
}

static unsigned int hlsl_offset_dim_count(enum hlsl_sampler_dim dim)
{
    switch (dim)
    {
        case HLSL_SAMPLER_DIM_1D:
        case HLSL_SAMPLER_DIM_1DARRAY:
            return 1;
        case HLSL_SAMPLER_DIM_2D:
        case HLSL_SAMPLER_DIM_2DMS:
        case HLSL_SAMPLER_DIM_2DARRAY:
        case HLSL_SAMPLER_DIM_2DMSARRAY:
            return 2;
        case HLSL_SAMPLER_DIM_3D:
            return 3;
        case HLSL_SAMPLER_DIM_CUBE:
        case HLSL_SAMPLER_DIM_CUBEARRAY:
            /* Offset parameters not supported for these types. */
            return 0;
        default:
            vkd3d_unreachable();
    }
}

static bool add_method_call(struct hlsl_ctx *ctx, struct list *instrs, struct hlsl_ir_node *object,
        const char *name, const struct parse_initializer *params, const struct vkd3d_shader_location *loc)
{
    const struct hlsl_type *object_type = object->data_type;
    struct hlsl_ir_load *object_load;

    if (object_type->type != HLSL_CLASS_OBJECT || object_type->base_type != HLSL_TYPE_TEXTURE
            || object_type->sampler_dim == HLSL_SAMPLER_DIM_GENERIC)
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, object_type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Type '%s' does not have methods.", string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return false;
    }

    /* Only HLSL_IR_LOAD can return an object. */
    object_load = hlsl_ir_load(object);

    if (!strcmp(name, "Load")
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_CUBE
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_CUBEARRAY)
    {
        const unsigned int sampler_dim = hlsl_sampler_dim_count(object_type->sampler_dim);
        const unsigned int offset_dim = hlsl_offset_dim_count(object_type->sampler_dim);
        struct hlsl_resource_load_params load_params = {.type = HLSL_RESOURCE_LOAD};
        struct hlsl_ir_resource_load *load;
        bool multisampled;

        multisampled = object_type->sampler_dim == HLSL_SAMPLER_DIM_2DMS
                || object_type->sampler_dim == HLSL_SAMPLER_DIM_2DMSARRAY;

        if (params->args_count < 1 + multisampled || params->args_count > 3 + multisampled)
        {
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                    "Wrong number of arguments to method 'Load': expected between %u and %u, but got %u.",
                    1 + multisampled, 3 + multisampled, params->args_count);
            return false;
        }
        if (multisampled)
        {
            hlsl_fixme(ctx, loc, "Load() sampling index parameter.");
        }

        assert(offset_dim);
        if (params->args_count > 1 + multisampled)
        {
            if (!(load_params.texel_offset = add_implicit_conversion(ctx, instrs, params->args[1 + multisampled],
                    hlsl_get_vector_type(ctx, HLSL_TYPE_INT, offset_dim), loc)))
                return false;
        }
        if (params->args_count > 2 + multisampled)
        {
            hlsl_fixme(ctx, loc, "Tiled resource status argument.");
        }

        /* +1 for the mipmap level */
        if (!(load_params.coords = add_implicit_conversion(ctx, instrs, params->args[0],
                hlsl_get_vector_type(ctx, HLSL_TYPE_INT, sampler_dim + 1), loc)))
            return false;

        load_params.format = object_type->e.resource_format;
        load_params.resource = object_load->src;

        if (!(load = hlsl_new_resource_load(ctx, &load_params, loc)))
            return false;
        list_add_tail(instrs, &load->node.entry);
        return true;
    }
    else if (!strcmp(name, "Sample")
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_2DMS
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_2DMSARRAY)
    {
        const unsigned int sampler_dim = hlsl_sampler_dim_count(object_type->sampler_dim);
        const unsigned int offset_dim = hlsl_offset_dim_count(object_type->sampler_dim);
        struct hlsl_resource_load_params load_params = {.type = HLSL_RESOURCE_SAMPLE};
        const struct hlsl_type *sampler_type;
        struct hlsl_ir_resource_load *load;
        struct hlsl_ir_load *sampler_load;

        if (params->args_count < 2 || params->args_count > 4 + !!offset_dim)
        {
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                    "Wrong number of arguments to method 'Sample': expected from 2 to %u, but got %u.",
                    4 + !!offset_dim, params->args_count);
            return false;
        }

        sampler_type = params->args[0]->data_type;
        if (sampler_type->type != HLSL_CLASS_OBJECT || sampler_type->base_type != HLSL_TYPE_SAMPLER
                || sampler_type->sampler_dim != HLSL_SAMPLER_DIM_GENERIC)
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_type_to_string(ctx, sampler_type)))
                hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Wrong type for argument 0 of Sample(): expected 'sampler', but got '%s'.", string->buffer);
            hlsl_release_string_buffer(ctx, string);
            return false;
        }

        /* Only HLSL_IR_LOAD can return an object. */
        sampler_load = hlsl_ir_load(params->args[0]);

        if (!(load_params.coords = add_implicit_conversion(ctx, instrs, params->args[1],
                hlsl_get_vector_type(ctx, HLSL_TYPE_FLOAT, sampler_dim), loc)))
            return false;

        if (offset_dim && params->args_count > 2)
        {
            if (!(load_params.texel_offset = add_implicit_conversion(ctx, instrs, params->args[2],
                    hlsl_get_vector_type(ctx, HLSL_TYPE_INT, offset_dim), loc)))
                return false;
        }

        if (params->args_count > 2 + !!offset_dim)
            hlsl_fixme(ctx, loc, "Sample() clamp parameter.");
        if (params->args_count > 3 + !!offset_dim)
            hlsl_fixme(ctx, loc, "Tiled resource status argument.");

        load_params.format = object_type->e.resource_format;
        load_params.resource = object_load->src;
        load_params.sampler = sampler_load->src;

        if (!(load = hlsl_new_resource_load(ctx, &load_params, loc)))
            return false;
        list_add_tail(instrs, &load->node.entry);

        return true;
    }
    else if ((!strcmp(name, "Gather") || !strcmp(name, "GatherRed") || !strcmp(name, "GatherBlue")
            || !strcmp(name, "GatherGreen") || !strcmp(name, "GatherAlpha"))
            && (object_type->sampler_dim == HLSL_SAMPLER_DIM_2D
            || object_type->sampler_dim == HLSL_SAMPLER_DIM_2DARRAY
            || object_type->sampler_dim == HLSL_SAMPLER_DIM_CUBE
            || object_type->sampler_dim == HLSL_SAMPLER_DIM_CUBEARRAY))
    {
        const unsigned int sampler_dim = hlsl_sampler_dim_count(object_type->sampler_dim);
        const unsigned int offset_dim = hlsl_offset_dim_count(object_type->sampler_dim);
        struct hlsl_resource_load_params load_params = {0};
        const struct hlsl_type *sampler_type;
        struct hlsl_ir_resource_load *load;
        struct hlsl_ir_load *sampler_load;
        unsigned int read_channel;

        if (!strcmp(name, "GatherGreen"))
        {
            load_params.type = HLSL_RESOURCE_GATHER_GREEN;
            read_channel = 1;
        }
        else if (!strcmp(name, "GatherBlue"))
        {
            load_params.type = HLSL_RESOURCE_GATHER_BLUE;
            read_channel = 2;
        }
        else if (!strcmp(name, "GatherAlpha"))
        {
            load_params.type = HLSL_RESOURCE_GATHER_ALPHA;
            read_channel = 3;
        }
        else
        {
            load_params.type = HLSL_RESOURCE_GATHER_RED;
            read_channel = 0;
        }

        if (!strcmp(name, "Gather") || !offset_dim)
        {
            if (params->args_count < 2 && params->args_count > 3 + !!offset_dim)
            {
                hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                        "Wrong number of arguments to method '%s': expected from 2 to %u, but got %u.",
                        name, 3 + !!offset_dim, params->args_count);
                return false;
            }
        }
        else if (params->args_count < 2 || params->args_count == 5 || params->args_count > 7)
        {
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                    "Wrong number of arguments to method '%s': expected 2, 3, 4, 6 or 7, but got %u.",
                    name, params->args_count);
            return false;
        }

        if (params->args_count == 3 + !!offset_dim || params->args_count == 7)
            hlsl_fixme(ctx, loc, "Tiled resource status argument.");

        if (params->args_count == 6 || params->args_count == 7)
        {
            hlsl_fixme(ctx, loc, "Multiple %s() offset parameters.", name);
        }
        else if (offset_dim && params->args_count > 2)
        {
            if (!(load_params.texel_offset = add_implicit_conversion(ctx, instrs, params->args[2],
                    hlsl_get_vector_type(ctx, HLSL_TYPE_INT, offset_dim), loc)))
                return false;
        }

        sampler_type = params->args[0]->data_type;
        if (sampler_type->type != HLSL_CLASS_OBJECT || sampler_type->base_type != HLSL_TYPE_SAMPLER
                || sampler_type->sampler_dim != HLSL_SAMPLER_DIM_GENERIC)
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_type_to_string(ctx, sampler_type)))
                hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Wrong type for argument 1 of %s(): expected 'sampler', but got '%s'.", name, string->buffer);
            hlsl_release_string_buffer(ctx, string);
            return false;
        }

        if (read_channel >= object_type->e.resource_format->dimx)
        {
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                    "Method %s() requires at least %u channels.", name, read_channel + 1);
            return false;
        }

        /* Only HLSL_IR_LOAD can return an object. */
        sampler_load = hlsl_ir_load(params->args[0]);

        if (!(load_params.coords = add_implicit_conversion(ctx, instrs, params->args[1],
                hlsl_get_vector_type(ctx, HLSL_TYPE_FLOAT, sampler_dim), loc)))
            return false;

        load_params.format = hlsl_get_vector_type(ctx, object_type->e.resource_format->base_type, 4);
        load_params.resource = object_load->src;
        load_params.sampler = sampler_load->src;

        if (!(load = hlsl_new_resource_load(ctx, &load_params, loc)))
            return false;
        list_add_tail(instrs, &load->node.entry);
        return true;
    }
    else if (!strcmp(name, "SampleLevel")
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_2DMS
            && object_type->sampler_dim != HLSL_SAMPLER_DIM_2DMSARRAY)
    {
        struct hlsl_resource_load_params load_params = {.type = HLSL_RESOURCE_SAMPLE_LOD};
        const unsigned int sampler_dim = hlsl_sampler_dim_count(object_type->sampler_dim);
        const unsigned int offset_dim = hlsl_offset_dim_count(object_type->sampler_dim);
        const struct hlsl_type *sampler_type;
        struct hlsl_ir_resource_load *load;
        struct hlsl_ir_load *sampler_load;

        if (params->args_count < 3 || params->args_count > 4 + !!offset_dim)
        {
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                    "Wrong number of arguments to method 'SampleLevel': expected from 3 to %u, but got %u.",
                    4 + !!offset_dim, params->args_count);
            return false;
        }

        sampler_type = params->args[0]->data_type;
        if (sampler_type->type != HLSL_CLASS_OBJECT || sampler_type->base_type != HLSL_TYPE_SAMPLER
                || sampler_type->sampler_dim != HLSL_SAMPLER_DIM_GENERIC)
        {
            struct vkd3d_string_buffer *string;

            if ((string = hlsl_type_to_string(ctx, sampler_type)))
                hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                        "Wrong type for argument 0 of SampleLevel(): expected 'sampler', but got '%s'.", string->buffer);
            hlsl_release_string_buffer(ctx, string);
            return false;
        }

        /* Only HLSL_IR_LOAD can return an object. */
        sampler_load = hlsl_ir_load(params->args[0]);

        if (!(load_params.coords = add_implicit_conversion(ctx, instrs, params->args[1],
                hlsl_get_vector_type(ctx, HLSL_TYPE_FLOAT, sampler_dim), loc)))
            load_params.coords = params->args[1];

        if (!(load_params.lod = add_implicit_conversion(ctx, instrs, params->args[2],
                hlsl_get_scalar_type(ctx, HLSL_TYPE_FLOAT), loc)))
            load_params.lod = params->args[2];

        if (offset_dim && params->args_count > 3)
        {
            if (!(load_params.texel_offset = add_implicit_conversion(ctx, instrs, params->args[3],
                    hlsl_get_vector_type(ctx, HLSL_TYPE_INT, offset_dim), loc)))
                return false;
        }

        if (params->args_count > 3 + !!offset_dim)
            hlsl_fixme(ctx, loc, "Tiled resource status argument.");

        load_params.format = object_type->e.resource_format;
        load_params.resource = object_load->src;
        load_params.sampler = sampler_load->src;

        if (!(load = hlsl_new_resource_load(ctx, &load_params, loc)))
            return false;
        list_add_tail(instrs, &load->node.entry);
        return true;
    }
    else
    {
        struct vkd3d_string_buffer *string;

        if ((string = hlsl_type_to_string(ctx, object_type)))
            hlsl_error(ctx, loc, VKD3D_SHADER_ERROR_HLSL_NOT_DEFINED,
                    "Method '%s' is not defined on type '%s'.", name, string->buffer);
        hlsl_release_string_buffer(ctx, string);
        return false;
    }
}


#line 3331 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:359  */

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
         || (defined HLSL_YYLTYPE_IS_TRIVIAL && HLSL_YYLTYPE_IS_TRIVIAL \
             && defined HLSL_YYSTYPE_IS_TRIVIAL && HLSL_YYSTYPE_IS_TRIVIAL)))

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
#define YYLAST   1331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  132
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  393

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   362

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   124,     2,     2,     2,   127,   128,     2,
     113,   114,   125,   121,   116,   122,   120,   126,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   115,   108,
     117,   119,   118,   131,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   111,     2,   112,   129,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   109,   130,   110,   123,     2,     2,     2,
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
     105,   106,   107
};

#if HLSL_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  3301,  3301,  3302,  3327,  3328,  3334,  3335,  3338,  3348,
    3354,  3358,  3364,  3365,  3368,  3390,  3411,  3412,  3415,  3436,
    3442,  3443,  3444,  3447,  3453,  3481,  3482,  3485,  3506,  3518,
    3539,  3549,  3568,  3576,  3584,  3622,  3623,  3631,  3636,  3643,
    3649,  3650,  3653,  3658,  3663,  3670,  3683,  3688,  3698,  3703,
    3709,  3719,  3731,  3749,  3753,  3757,  3761,  3765,  3769,  3773,
    3779,  3783,  3787,  3793,  3815,  3819,  3847,  3851,  3855,  3859,
    3863,  3867,  3871,  3875,  3879,  3883,  3897,  3911,  3916,  3925,
    3926,  3927,  3934,  3935,  3938,  3955,  3961,  3968,  3977,  3988,
    3992,  3995,  4001,  4008,  4019,  4026,  4032,  4033,  4036,  4037,
    4042,  4049,  4054,  4087,  4104,  4108,  4112,  4116,  4120,  4124,
    4128,  4132,  4136,  4140,  4144,  4148,  4152,  4156,  4160,  4167,
    4179,  4184,  4191,  4192,  4212,  4215,  4227,  4245,  4249,  4255,
    4256,  4264,  4265,  4266,  4267,  4268,  4269,  4272,  4278,  4287,
    4313,  4318,  4325,  4329,  4333,  4338,  4345,  4350,  4356,  4364,
    4367,  4376,  4385,  4397,  4412,  4416,  4421,  4444,  4445,  4454,
    4463,  4502,  4518,  4553,  4571,  4572,  4581,  4590,  4594,  4599,
    4604,  4610,  4657,  4658,  4662,  4666,  4672,  4673,  4677,  4688,
    4689,  4693,  4699,  4700,  4704,  4708,  4712,  4718,  4719,  4723,
    4729,  4730,  4736,  4737,  4743,  4744,  4750,  4751,  4757,  4758,
    4764,  4765,  4772,  4773,  4790,  4794,  4798,  4802,  4806,  4810,
    4814,  4818,  4822,  4826,  4830,  4836,  4837
};
#endif

#if HLSL_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_BLENDSTATE", "KW_BREAK", "KW_BUFFER",
  "KW_CBUFFER", "KW_COLUMN_MAJOR", "KW_COMPILE", "KW_CONST", "KW_CONTINUE",
  "KW_DEPTHSTENCILSTATE", "KW_DEPTHSTENCILVIEW", "KW_DISCARD", "KW_DO",
  "KW_DOUBLE", "KW_ELSE", "KW_EXTERN", "KW_FALSE", "KW_FOR",
  "KW_GEOMETRYSHADER", "KW_GROUPSHARED", "KW_IF", "KW_IN", "KW_INLINE",
  "KW_INOUT", "KW_MATRIX", "KW_NAMESPACE", "KW_NOINTERPOLATION", "KW_OUT",
  "KW_PASS", "KW_PIXELSHADER", "KW_PRECISE", "KW_RASTERIZERSTATE",
  "KW_RENDERTARGETVIEW", "KW_RETURN", "KW_REGISTER", "KW_ROW_MAJOR",
  "KW_RWTEXTURE1D", "KW_RWTEXTURE2D", "KW_RWTEXTURE3D", "KW_SAMPLER",
  "KW_SAMPLER1D", "KW_SAMPLER2D", "KW_SAMPLER3D", "KW_SAMPLERCUBE",
  "KW_SAMPLER_STATE", "KW_SAMPLERCOMPARISONSTATE", "KW_SHARED",
  "KW_STATEBLOCK", "KW_STATEBLOCK_STATE", "KW_STATIC", "KW_STRING",
  "KW_STRUCT", "KW_SWITCH", "KW_TBUFFER", "KW_TECHNIQUE", "KW_TECHNIQUE10",
  "KW_TEXTURE", "KW_TEXTURE1D", "KW_TEXTURE1DARRAY", "KW_TEXTURE2D",
  "KW_TEXTURE2DARRAY", "KW_TEXTURE2DMS", "KW_TEXTURE2DMSARRAY",
  "KW_TEXTURE3D", "KW_TEXTURECUBE", "KW_TEXTURECUBEARRAY", "KW_TRUE",
  "KW_TYPEDEF", "KW_UNIFORM", "KW_VECTOR", "KW_VERTEXSHADER", "KW_VOID",
  "KW_VOLATILE", "KW_WHILE", "OP_INC", "OP_DEC", "OP_AND", "OP_OR",
  "OP_EQ", "OP_LEFTSHIFT", "OP_LEFTSHIFTASSIGN", "OP_RIGHTSHIFT",
  "OP_RIGHTSHIFTASSIGN", "OP_ELLIPSIS", "OP_LE", "OP_GE", "OP_NE",
  "OP_ADDASSIGN", "OP_SUBASSIGN", "OP_MULASSIGN", "OP_DIVASSIGN",
  "OP_MODASSIGN", "OP_ANDASSIGN", "OP_ORASSIGN", "OP_XORASSIGN",
  "OP_UNKNOWN1", "OP_UNKNOWN2", "OP_UNKNOWN3", "OP_UNKNOWN4", "C_FLOAT",
  "C_INTEGER", "PRE_LINE", "VAR_IDENTIFIER", "NEW_IDENTIFIER", "STRING",
  "TYPE_IDENTIFIER", "';'", "'{'", "'}'", "'['", "']'", "'('", "')'",
  "':'", "','", "'<'", "'>'", "'='", "'.'", "'+'", "'-'", "'~'", "'!'",
  "'*'", "'/'", "'%'", "'&'", "'^'", "'|'", "'?'", "$accept", "hlsl_prog",
  "buffer_declaration", "buffer_body", "buffer_type",
  "declaration_statement_list", "preproc_directive", "struct_declaration",
  "struct_spec", "named_struct_spec", "unnamed_struct_spec",
  "any_identifier", "fields_list", "field_type", "field", "attribute",
  "attribute_list", "func_declaration", "func_prototype_no_attrs",
  "func_prototype", "compound_statement", "scope_start", "var_identifier",
  "colon_attribute", "semantic", "register_opt", "parameters",
  "param_list", "parameter", "texture_type", "uav_type", "type",
  "declaration_statement", "typedef_type", "typedef", "type_specs",
  "type_spec", "declaration", "variables_def_optional", "variables_def",
  "variable_decl", "state", "state_block_start", "state_block",
  "variable_def", "arrays", "var_modifiers", "complex_initializer",
  "complex_initializer_list", "initializer_expr", "initializer_expr_list",
  "boolean", "statement_list", "statement", "jump_statement",
  "selection_statement", "if_body", "loop_statement", "expr_statement",
  "func_arguments", "primary_expr", "postfix_expr", "unary_expr",
  "mul_expr", "add_expr", "shift_expr", "relational_expr", "equality_expr",
  "bitand_expr", "bitxor_expr", "bitor_expr", "logicand_expr",
  "logicor_expr", "conditional_expr", "assignment_expr", "assign_op",
  "expr", YY_NULLPTR
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
     355,   356,   357,   358,   359,   360,   361,   362,    59,   123,
     125,    91,    93,    40,    41,    58,    44,    60,    62,    61,
      46,    43,    45,   126,    33,    42,    47,    37,    38,    94,
     124,    63
};
# endif

#define YYPACT_NINF -264

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-264)))

#define YYTABLE_NINF -149

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -264,  1094,  -264,  -264,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,  -264,   263,   263,   263,
     -63,  -264,    59,   -57,    59,  -264,  -264,  -264,  1107,  -264,
    -264,    22,  -264,  -264,  -264,   391,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   391,  -264,
    -264,  -264,  -264,  -264,  -264,    41,  -264,  -264,   -56,  -264,
    -264,   502,  -264,   -35,  -264,   -47,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,    52,  -264,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,   -31,  -264,  -264,    59,  -264,  -264,    -4,
       8,    77,  -264,  -264,    59,  -264,   975,  1150,    -2,  -264,
    -264,  -264,    27,   117,  -264,   482,   502,    39,  -264,    70,
     502,    57,    30,    69,   -68,  -264,   502,   502,    81,    97,
     106,   -69,    57,   -55,  -264,  -264,  -264,   975,   975,  -264,
    -264,    81,    97,   975,   975,   975,   975,   975,   118,   502,
    -264,   -78,  -264,  -264,    17,    51,    -9,    76,    29,   -19,
     -38,    62,    85,   107,   128,   -39,  -264,  -264,  -264,  -264,
     391,   123,  -264,  -264,  -264,  -264,   482,   127,   129,   656,
     133,  -264,  -264,  -264,   391,   371,  -264,  -264,  -264,  -264,
    -264,  -264,   -52,   125,  1163,  -264,   131,   722,   -56,  -264,
      59,  -264,   788,   130,   134,  -264,  -264,  -264,  -264,    59,
    -264,  -264,   502,    46,  -264,  -264,  -264,  -264,   854,   136,
     138,   975,  -264,  -264,   975,    59,  -264,  -264,  -264,  -264,
    -264,  -264,  -264,  -264,  -264,  -264,  -264,   975,   975,   975,
     975,   975,   975,   975,   975,   975,   975,   975,   975,   975,
     975,   975,   975,   975,   975,   975,   975,    59,    59,   176,
    -264,   975,  -264,   -29,   975,    45,  -264,  -264,  -264,   975,
     152,  -264,  -264,  1224,  1206,   153,    57,   -40,  -264,  -264,
    -264,   788,  -264,  -264,  -264,  -264,    37,   142,  -264,    60,
    -264,   141,   144,   975,  -264,  -264,   -15,   148,  -264,  -264,
    -264,  -264,  -264,    -9,    -9,    76,    76,    29,    29,    29,
      29,   -19,   -19,   -38,    62,    85,   107,   128,   108,    72,
     149,   962,    75,  -264,    79,  -264,   155,    95,  -264,    59,
    -264,  -264,   156,  -264,    57,    19,  -264,   -53,   157,  -264,
     502,   -56,   162,  -264,    89,  -264,   854,   975,  -264,    59,
     975,   962,   502,   962,   482,   482,   175,   -27,  -264,  -264,
    -264,   159,  -264,  -264,   590,   263,    59,  -264,   975,  -264,
     165,  -264,   167,    93,   975,   975,   267,  -264,  -264,   169,
    -264,   975,  -264,  -264,  -264,   -56,  -264,  -264,  -264,   177,
     101,   104,   482,  -264,    -8,  -264,  -264,   482,   482,  -264,
    -264,  -264,  -264
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   104,     1,    10,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,    11,   104,   104,   104,
       0,     7,     0,     0,     0,     6,    80,    30,   104,     3,
      35,     0,     5,    81,    79,     0,   115,   113,   105,   109,
     116,   118,   106,   117,   107,   114,   108,   110,     0,   111,
     112,    14,    20,    22,    21,     0,    12,     4,    42,    31,
      36,     0,    33,    39,    32,    66,    60,    61,    62,    68,
      69,    70,    71,    72,     0,    73,    53,    57,    54,    58,
      55,    56,    59,    64,    67,    77,    89,    16,    17,    74,
       0,     0,    83,    82,     0,    28,   104,   104,     0,     8,
      43,    44,     0,     0,    37,   104,     0,    78,    23,     0,
       0,   101,     0,    90,    98,    91,     0,     0,    20,    22,
       0,     0,   101,     0,    85,   128,   127,   104,   104,   150,
     151,   153,   156,   104,   104,   104,   104,   104,     0,     0,
     125,     0,   152,   157,   164,   172,   176,   179,   182,   187,
     190,   192,   194,   196,   198,   200,   202,   124,     9,    13,
       0,     0,    45,    78,    40,    41,   104,     0,     0,   104,
       0,   146,   133,   131,     0,   104,   129,   134,   135,   136,
     132,   215,     0,     0,   104,    23,     0,   104,    42,    15,
       0,    95,   104,     0,     0,    39,    88,    87,    84,     0,
     165,   166,     0,     0,   167,   168,   169,   170,   104,     0,
       0,   104,   158,   159,   104,     0,   210,   211,   205,   206,
     207,   208,   209,   212,   213,   214,   204,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,     0,     0,     0,
      39,   104,   138,     0,   104,     0,    38,   130,   147,   104,
       0,    19,    24,     0,   104,     0,   101,     0,    93,    92,
      96,   104,    99,   119,    75,    76,   104,     0,    86,   101,
     154,   149,     0,   104,    29,   126,     0,   160,   203,   173,
     174,   175,   172,   177,   178,   180,   181,   185,   186,   183,
     184,   188,   189,   191,   193,   195,   197,   199,     0,     0,
       0,   104,     0,   137,     0,   216,     0,     0,    26,     0,
      25,    18,     0,   103,   101,     0,   122,     0,    49,    50,
       0,    42,     0,   155,     0,   161,   104,   104,    46,     0,
     104,   104,     0,   104,   104,   104,     0,     0,    63,   102,
     100,     0,    97,   120,   104,   104,     0,    34,   104,   162,
       0,   201,     0,     0,   104,   104,   140,   139,   142,     0,
      27,   104,   121,   123,    51,    42,   171,   163,    47,     0,
       0,     0,   104,    65,     0,    52,   143,   104,   104,   141,
      94,   145,   144
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -264,  -264,  -264,  -264,  -264,  -264,  -264,  -264,   241,  -264,
      31,    -3,   105,  -264,  -264,   265,  -264,  -264,   268,  -264,
     270,  -160,   -58,  -159,  -264,  -264,  -264,  -264,   -51,  -264,
    -264,   -33,    24,  -264,  -264,  -264,    99,   -12,  -264,   -66,
    -264,  -264,  -264,  -264,   112,   -99,    -1,  -239,  -264,  -162,
     -70,  -264,  -264,  -144,  -264,  -264,  -264,  -264,  -263,   -30,
    -264,  -264,   132,    -5,     1,   -60,   -11,    64,    61,    65,
      63,    67,  -264,  -264,   -72,  -264,  -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    57,    24,    97,    25,    26,    86,    87,
      88,   111,   184,   319,   262,    27,    28,    29,    30,    31,
     172,   105,   138,    99,   100,   101,   277,   328,   329,    89,
      90,   255,   173,    94,    33,   123,   124,    34,   112,   121,
     114,   352,   270,   325,   115,   188,   139,   272,   327,   140,
     281,   142,   175,   176,   177,   178,   367,   179,   180,   282,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   181,   227,   182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,   203,    91,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    93,    48,    49,    50,    55,
     113,    58,   249,   197,   157,    32,   141,    61,   103,   268,
     273,   257,   326,   120,   161,   276,   210,   253,   211,   196,
     245,   191,   239,    51,     4,   120,     5,   190,   343,   285,
     240,   192,    56,   198,     6,   267,   258,   353,     7,    98,
       8,   199,     9,   354,   259,    10,    11,   235,   236,    12,
     106,   109,   324,   183,    13,   104,   259,   186,   364,   313,
     365,   370,   286,   193,   194,    14,   110,   259,    15,   190,
     311,   122,   246,   212,   213,   162,   160,   335,   237,   238,
     390,   259,    52,    53,   174,    54,   209,    18,   259,   273,
     233,    19,   234,   116,   308,   373,   228,   229,   230,   312,
     157,   159,   314,    52,    53,   117,    54,   247,   214,   350,
      62,    63,   202,   216,   163,   217,   157,   215,   189,   157,
     218,   219,   220,   221,   222,   223,   224,   225,   -21,    52,
      53,   -48,    54,    95,    96,   288,    52,    53,   283,   107,
     280,   108,   259,    52,    53,   174,    54,   323,   187,   279,
     226,   187,   357,   283,   174,   297,   298,   299,   300,   185,
     332,   118,   119,   263,    54,   190,   338,   315,   339,   344,
     241,   259,   273,   345,   -40,   259,   122,   231,   232,   157,
     366,   368,   163,   359,   108,   211,   244,   379,   363,   259,
     -41,   157,   287,   334,   242,   387,   385,   259,   388,   195,
     259,   164,   165,   337,   259,   349,   293,   294,   301,   302,
     320,   208,   380,   381,   295,   296,   248,   243,   389,   384,
     250,   260,   251,   391,   392,   309,   254,   265,   274,   283,
     284,   310,   275,   347,   316,   322,   331,   211,   333,   200,
     201,   336,   340,   263,   157,   361,   204,   205,   206,   207,
       4,   346,     5,   355,   348,   330,   358,   369,   371,   377,
       6,   378,   157,   382,     7,   386,     8,   383,     9,    92,
     264,    10,    11,    59,   318,    12,    60,   356,   278,   341,
      13,    64,   269,   304,   374,   303,   360,   306,   305,     0,
     342,    14,   307,     0,    15,     0,     0,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,   362,    19,     0,     0,
       0,     0,     0,   174,   174,     0,     0,     0,     0,     0,
       0,     0,     0,   375,   330,     0,     0,     0,     0,     0,
     289,   290,   291,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,     4,     0,
       5,   174,     0,     0,     0,   166,   174,   174,     6,   125,
     167,     0,     7,   168,     8,     0,     9,     0,     0,    10,
      11,     0,     0,    12,     0,     0,   169,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     0,    14,
       0,     0,    15,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,   126,
      17,    18,     0,     0,    74,    19,   170,   127,   128,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,     0,
       0,     0,    83,     0,    84,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,   131,   132,     0,     0,   171,
      63,   256,     0,     0,   133,     0,     0,     0,     0,     4,
     376,     5,   134,   135,   136,   137,   166,     0,    85,     6,
     125,   167,     0,     7,   168,     8,     0,     9,     0,     0,
      10,    11,     0,     0,    12,     0,     0,   169,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      14,     0,     0,    15,     0,     0,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,    72,    73,     0,     0,
     126,    17,    18,     0,     0,   102,    19,   170,   127,   128,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
       0,     0,     0,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,   131,   132,     0,     0,
     171,    63,     0,     0,     0,   133,     0,     4,     0,     5,
       0,     0,     0,   134,   135,   136,   137,     6,   125,    85,
       0,     7,     0,     8,     0,     9,     0,     0,    10,    11,
       0,     0,    12,     0,     0,     0,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
      18,     0,     0,     4,    19,     5,   127,   128,     0,     0,
       0,     0,     0,     6,   125,     0,     0,     7,     0,     8,
       0,     9,     0,     0,    10,    11,     0,     0,    12,     0,
       0,   129,   130,    13,   131,   132,     0,     0,     0,   271,
     372,     0,     0,   133,    14,     0,     0,    15,     0,     0,
       0,   134,   135,   136,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,     0,    18,     0,     0,     4,
      19,     5,   127,   128,     0,     0,     0,     0,     0,     6,
     125,     0,     0,     7,     0,     8,     0,     9,     0,     0,
      10,    11,     0,     0,    12,     0,     0,   129,   130,    13,
     131,   132,     0,     0,   252,     0,     0,     0,     0,   133,
      14,     0,     0,    15,     0,     0,     0,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,    18,     0,     0,     4,    19,     5,   127,   128,
       0,     0,     0,     0,     0,     6,   125,     0,     0,     7,
       0,     8,     0,     9,     0,     0,    10,    11,     0,     0,
      12,     0,     0,   129,   130,    13,   131,   132,     0,     0,
       0,     0,     0,     0,   266,   133,    14,     0,     0,    15,
       0,     0,     0,   134,   135,   136,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,    18,     0,
       0,     4,    19,     5,   127,   128,     0,     0,     0,     0,
       0,     6,   125,     0,     0,     7,     0,     8,     0,     9,
       0,     0,    10,    11,     0,     0,    12,     0,     0,   129,
     130,    13,   131,   132,     0,     0,     0,   271,     0,     0,
       0,   133,    14,     0,     0,    15,     0,     0,     0,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,    18,     0,     0,     0,    19,     0,
     127,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,     0,   131,   132,
       0,     0,     0,     0,     0,     0,     0,   133,  -148,     4,
       0,     5,     0,     0,     0,   134,   135,   136,   137,     6,
     125,     0,     4,     7,     5,     8,     0,     9,     0,     0,
      10,    11,     6,   125,    12,     0,     7,     0,     8,    13,
       9,     0,     0,    10,    11,     0,     0,    12,     0,     0,
      14,     0,    13,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,    15,     0,     0,     0,
     126,     0,    18,     0,     0,     0,    19,     0,   127,   128,
       0,     0,     0,   126,     0,    18,     0,     0,     0,    19,
       0,   127,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,     0,   131,   132,     0,     0,
     171,     0,     0,     0,     0,   133,   129,   130,     0,   131,
     132,     0,     0,   134,   135,   136,   137,     0,   133,     0,
       0,     0,     0,     0,     2,     0,   134,   135,   136,   137,
       3,     4,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     4,     7,     5,     8,     0,     9,
       0,     0,    10,    11,     6,     0,    12,     0,     7,     0,
       8,    13,     9,     0,     0,    10,    11,     0,     0,    12,
       0,     0,    14,     0,    13,    15,     0,     0,     0,    16,
       0,     0,     0,     0,     0,    14,     0,     4,    15,     5,
       0,     0,     0,    17,    18,     0,     0,     6,    19,     0,
       4,     7,     5,     8,     0,     9,     0,    18,    10,    11,
       6,    19,    12,     0,     7,     0,     8,    13,     9,     0,
       0,    10,    11,     0,     0,    12,     0,    20,    14,     0,
      13,    15,    21,     0,     0,    22,     0,     0,     0,     0,
       0,    14,     0,     4,    15,     5,     0,     0,    22,    17,
      18,     0,     0,     6,    19,     0,     0,     7,     0,     8,
       0,     9,     0,    18,    10,    11,     0,    19,    12,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,    14,     0,     0,    15,     0,     0,
     158,     0,    66,    67,    68,    69,    70,    71,    72,    73,
       0,     0,     0,   261,     0,     0,    18,   317,     0,     0,
      19,     0,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,     0,     0,     0,    83,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85
};

static const yytype_int16 yycheck[] =
{
       1,   133,    35,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    48,    17,    18,    19,    22,
      86,    24,   166,   122,    96,     1,    96,    28,    61,   188,
     192,   175,   271,    91,    36,   195,   114,   169,   116,   108,
      79,   109,    80,   106,     7,   103,     9,   116,   311,   211,
      88,   119,   109,   108,    17,   187,   108,   110,    21,   115,
      23,   116,    25,   116,   116,    28,    29,    86,    87,    32,
     117,    74,   112,   106,    37,   110,   116,   110,   341,   108,
     343,   108,   214,   116,   117,    48,   117,   116,    51,   116,
     250,    94,   131,    76,    77,    98,    97,   112,   117,   118,
     108,   116,   104,   105,   105,   107,   139,    70,   116,   271,
      81,    74,    83,   117,   246,   354,   125,   126,   127,   251,
     192,    97,   254,   104,   105,   117,   107,   160,   111,   110,
     108,   109,   133,    82,   107,    84,   208,   120,   108,   211,
      89,    90,    91,    92,    93,    94,    95,    96,   109,   104,
     105,   114,   107,   112,   113,   227,   104,   105,   113,   107,
     114,   109,   116,   104,   105,   166,   107,   266,   111,   202,
     119,   111,   331,   113,   175,   235,   236,   237,   238,   109,
     279,   104,   105,   184,   107,   116,   114,   259,   116,   114,
     128,   116,   354,   114,   113,   116,   199,   121,   122,   271,
     344,   345,   107,   114,   109,   116,    78,   114,   340,   116,
     113,   283,   215,   283,   129,   114,   375,   116,   114,   113,
     116,   104,   105,   115,   116,   324,   231,   232,   239,   240,
     263,   113,   364,   365,   233,   234,   113,   130,   382,   371,
     113,   116,   113,   387,   388,   248,   113,   116,   118,   113,
     112,    75,   118,   319,   102,   102,   114,   116,   114,   127,
     128,   113,   113,   264,   336,   337,   134,   135,   136,   137,
       7,   116,     9,   116,   118,   276,   114,   102,   119,   114,
      17,   114,   354,    16,    21,   108,    23,   118,    25,    48,
     185,    28,    29,    28,   263,    32,    28,   330,   199,   311,
      37,    31,   190,   242,   355,   241,   336,   244,   243,    -1,
     311,    48,   245,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,   339,    74,    -1,    -1,
      -1,    -1,    -1,   344,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   355,    -1,    -1,    -1,    -1,    -1,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     7,    -1,
       9,   382,    -1,    -1,    -1,    14,   387,   388,    17,    18,
      19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    68,
      69,    70,    -1,    -1,    53,    74,    75,    76,    77,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,   108,
     109,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,     7,
     358,     9,   121,   122,   123,   124,    14,    -1,   107,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      68,    69,    70,    -1,    -1,    53,    74,    75,    76,    77,
      58,    59,    60,    61,    62,    -1,    -1,    65,    66,    67,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
     108,   109,    -1,    -1,    -1,   113,    -1,     7,    -1,     9,
      -1,    -1,    -1,   121,   122,   123,   124,    17,    18,   107,
      -1,    21,    -1,    23,    -1,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,     7,    74,     9,    76,    77,    -1,    -1,
      -1,    -1,    -1,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    25,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,   101,   102,    37,   104,   105,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    48,    -1,    -1,    51,    -1,    -1,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,     7,
      74,     9,    76,    77,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,   101,   102,    37,
     104,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,   113,
      48,    -1,    -1,    51,    -1,    -1,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,     7,    74,     9,    76,    77,
      -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    25,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,   101,   102,    37,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,   112,   113,    48,    -1,    -1,    51,
      -1,    -1,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,     7,    74,     9,    76,    77,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    25,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,   101,
     102,    37,   104,   105,    -1,    -1,    -1,   109,    -1,    -1,
      -1,   113,    48,    -1,    -1,    51,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,     7,
      -1,     9,    -1,    -1,    -1,   121,   122,   123,   124,    17,
      18,    -1,     7,    21,     9,    23,    -1,    25,    -1,    -1,
      28,    29,    17,    18,    32,    -1,    21,    -1,    23,    37,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,
      48,    -1,    37,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      68,    -1,    70,    -1,    -1,    -1,    74,    -1,    76,    77,
      -1,    -1,    -1,    68,    -1,    70,    -1,    -1,    -1,    74,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,   113,   101,   102,    -1,   104,
     105,    -1,    -1,   121,   122,   123,   124,    -1,   113,    -1,
      -1,    -1,    -1,    -1,     0,    -1,   121,   122,   123,   124,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,     7,    21,     9,    23,    -1,    25,
      -1,    -1,    28,    29,    17,    -1,    32,    -1,    21,    -1,
      23,    37,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,    48,    -1,    37,    51,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    48,    -1,     7,    51,     9,
      -1,    -1,    -1,    69,    70,    -1,    -1,    17,    74,    -1,
       7,    21,     9,    23,    -1,    25,    -1,    70,    28,    29,
      17,    74,    32,    -1,    21,    -1,    23,    37,    25,    -1,
      -1,    28,    29,    -1,    -1,    32,    -1,   103,    48,    -1,
      37,    51,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    48,    -1,     7,    51,     9,    -1,    -1,   111,    69,
      70,    -1,    -1,    17,    74,    -1,    -1,    21,    -1,    23,
      -1,    25,    -1,    70,    28,    29,    -1,    74,    32,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
     110,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,   110,    -1,    -1,    70,    53,    -1,    -1,
      74,    -1,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   133,     0,     6,     7,     9,    17,    21,    23,    25,
      28,    29,    32,    37,    48,    51,    55,    69,    70,    74,
     103,   108,   111,   134,   136,   138,   139,   147,   148,   149,
     150,   151,   164,   166,   169,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   106,   104,   105,   107,   143,   109,   135,   143,   147,
     150,   178,   108,   109,   152,    26,    38,    39,    40,    41,
      42,    43,    44,    45,    53,    58,    59,    60,    61,    62,
      65,    66,    67,    71,    73,   107,   140,   141,   142,   161,
     162,   163,   140,   163,   165,   112,   113,   137,   115,   155,
     156,   157,    53,   163,   110,   153,   117,   107,   109,   143,
     117,   143,   170,   171,   172,   176,   117,   117,   104,   105,
     154,   171,   143,   167,   168,    18,    68,    76,    77,   101,
     102,   104,   105,   113,   121,   122,   123,   124,   154,   178,
     181,   182,   183,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   110,   164,
     178,    36,   143,   107,   104,   105,    14,    19,    22,    35,
      75,   108,   152,   164,   178,   184,   185,   186,   187,   189,
     190,   206,   208,   163,   144,   109,   163,   111,   177,   108,
     116,   109,   119,   163,   163,   113,   108,   177,   108,   116,
     194,   194,   178,   208,   194,   194,   194,   194,   113,   163,
     114,   116,    76,    77,   111,   120,    82,    84,    89,    90,
      91,    92,    93,    94,    95,    96,   119,   207,   125,   126,
     127,   121,   122,    81,    83,    86,    87,   117,   118,    80,
      88,   128,   129,   130,    78,    79,   131,   163,   113,   185,
     113,   113,   108,   208,   113,   163,   110,   185,   108,   116,
     116,   110,   146,   178,   144,   116,   112,   208,   155,   176,
     174,   109,   179,   181,   118,   118,   153,   158,   168,   163,
     114,   182,   191,   113,   112,   181,   208,   143,   206,   194,
     194,   194,   194,   195,   195,   196,   196,   197,   197,   197,
     197,   198,   198,   199,   200,   201,   202,   203,   208,   143,
      75,   153,   208,   108,   208,   206,   102,    53,   142,   145,
     163,   110,   102,   177,   112,   175,   179,   180,   159,   160,
     178,   114,   177,   114,   182,   112,   113,   115,   114,   116,
     113,   169,   178,   190,   114,   114,   116,   171,   118,   177,
     110,   143,   173,   110,   116,   116,   163,   155,   114,   114,
     191,   206,   143,   208,   190,   190,   185,   188,   185,   102,
     108,   119,   110,   179,   160,   143,   194,   114,   114,   114,
     208,   208,    16,   118,   208,   155,   108,   114,   114,   185,
     108,   185,   185
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   132,   133,   133,   133,   133,   133,   133,   134,   135,
     136,   136,   137,   137,   138,   139,   140,   140,   141,   142,
     143,   143,   143,   144,   144,   145,   145,   146,   147,   147,
     148,   148,   149,   149,   150,   151,   151,   152,   152,   153,
     154,   154,   155,   155,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   162,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   165,   165,   166,   167,   167,   168,   169,   170,
     170,   171,   171,   172,   173,   174,   175,   175,   176,   176,
     176,   177,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   179,   180,   180,   181,   182,   182,   183,   183,   184,
     184,   185,   185,   185,   185,   185,   185,   186,   186,   187,
     188,   188,   189,   189,   189,   189,   190,   190,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   194,   195,   195,   195,   195,   196,   196,   196,   197,
     197,   197,   198,   198,   198,   198,   198,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     2,     2,     3,     3,
       1,     1,     0,     2,     2,     4,     1,     1,     5,     4,
       1,     1,     1,     0,     2,     1,     1,     4,     3,     6,
       1,     2,     2,     2,     7,     1,     2,     2,     4,     0,
       1,     1,     0,     1,     1,     2,     5,     7,     1,     2,
       1,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     8,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     1,     2,     1,
       1,     1,     1,     1,     5,     1,     3,     2,     4,     0,
       1,     1,     3,     3,     4,     0,     0,     2,     1,     3,
       5,     0,     4,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     4,     1,     3,     1,     1,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     2,     5,
       1,     3,     5,     7,     8,     8,     1,     2,     0,     1,
       1,     1,     1,     1,     3,     4,     1,     1,     2,     2,
       3,     4,     5,     6,     1,     2,     2,     2,     2,     2,
       2,     6,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3
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
#if HLSL_YYDEBUG

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
# if defined HLSL_YYLTYPE_IS_TRIVIAL && HLSL_YYLTYPE_IS_TRIVIAL

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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct hlsl_ctx *ctx)
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, struct hlsl_ctx *ctx)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void *scanner, struct hlsl_ctx *ctx)
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
#else /* !HLSL_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HLSL_YYDEBUG */


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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, struct hlsl_ctx *ctx)
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
yyparse (void *scanner, struct hlsl_ctx *ctx)
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
# if defined HLSL_YYLTYPE_IS_TRIVIAL && HLSL_YYLTYPE_IS_TRIVIAL
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
#line 3303 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            const struct hlsl_ir_function_decl *decl;

            decl = get_func_decl(&ctx->functions, (yyvsp[0].function).name, (yyvsp[0].function).decl->parameters);
            if (decl && !decl->func->intrinsic)
            {
                if (decl->has_body && (yyvsp[0].function).decl->has_body)
                {
                    hlsl_error(ctx, &(yyvsp[0].function).decl->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                            "Function \"%s\" is already defined.", (yyvsp[0].function).name);
                    hlsl_note(ctx, &decl->loc, VKD3D_SHADER_LOG_ERROR, "\"%s\" was previously defined here.", (yyvsp[0].function).name);
                    YYABORT;
                }
                else if (!hlsl_types_are_equal(decl->return_type, (yyvsp[0].function).decl->return_type))
                {
                    hlsl_error(ctx, &(yyvsp[0].function).decl->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                            "Function \"%s\" was already declared with a different return type.", (yyvsp[0].function).name);
                    hlsl_note(ctx, &decl->loc, VKD3D_SHADER_LOG_ERROR, "\"%s\" was previously declared here.", (yyvsp[0].function).name);
                    YYABORT;
                }
            }

            hlsl_add_function(ctx, (yyvsp[0].function).name, (yyvsp[0].function).decl, false);
        }
#line 5053 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 3329 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!list_empty((yyvsp[0].list)))
                hlsl_fixme(ctx, &(yylsp[0]), "Uniform initializer.");
            destroy_instr_list((yyvsp[0].list));
        }
#line 5063 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 3339 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[0].colon_attribute).semantic.name)
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_INVALID_SEMANTIC, "Semantics are not allowed on buffers.");

            if (!(ctx->cur_buffer = hlsl_new_buffer(ctx, (yyvsp[-2].buffer_type), (yyvsp[-1].name), &(yyvsp[0].colon_attribute).reg_reservation, (yylsp[-1]))))
                YYABORT;
        }
#line 5075 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 3349 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            ctx->cur_buffer = ctx->globals_buffer;
        }
#line 5083 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 3355 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.buffer_type) = HLSL_BUFFER_CONSTANT;
        }
#line 5091 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 3359 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.buffer_type) = HLSL_BUFFER_TEXTURE;
        }
#line 5099 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 3369 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            const char **new_array = NULL;

            ctx->location.line = (yyvsp[-1].intval);
            if (strcmp((yyvsp[0].name), ctx->location.source_name))
                new_array = hlsl_realloc(ctx, ctx->source_files,
                        sizeof(*ctx->source_files) * (ctx->source_files_count + 1));

            if (new_array)
            {
                ctx->source_files = new_array;
                ctx->source_files[ctx->source_files_count++] = (yyvsp[0].name);
                ctx->location.source_name = (yyvsp[0].name);
            }
            else
            {
                vkd3d_free((yyvsp[0].name));
            }
        }
#line 5123 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 3391 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_type *type;
            unsigned int modifiers = (yyvsp[-3].modifiers);

            if (!(yyvsp[-1].list))
            {
                if (!(yyvsp[-2].type)->name)
                    hlsl_error(ctx, &(yylsp[-2]), VKD3D_SHADER_ERROR_HLSL_INVALID_SYNTAX,
                            "Anonymous struct type must declare a variable.");
                if (modifiers)
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                            "Modifiers are not allowed on struct type declarations.");
            }

            if (!(type = apply_type_modifiers(ctx, (yyvsp[-2].type), &modifiers, (yylsp[-3]))))
                YYABORT;
            (yyval.list) = declare_vars(ctx, type, modifiers, (yyvsp[-1].list));
        }
#line 5146 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 3416 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            bool ret;

            (yyval.type) = hlsl_new_struct_type(ctx, (yyvsp[-3].name), (yyvsp[-1].fields).fields, (yyvsp[-1].fields).count);

            if (hlsl_get_var(ctx->cur_scope, (yyvsp[-3].name)))
            {
                hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_REDEFINED, "\"%s\" is already declared as a variable.", (yyvsp[-3].name));
                YYABORT;
            }

            ret = hlsl_scope_add_type(ctx->cur_scope, (yyval.type));
            if (!ret)
            {
                hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_REDEFINED, "Struct \"%s\" is already defined.", (yyvsp[-3].name));
                YYABORT;
            }
        }
#line 5169 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 3437 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_new_struct_type(ctx, NULL, (yyvsp[-1].fields).fields, (yyvsp[-1].fields).count);
        }
#line 5177 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 3448 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.fields).fields = NULL;
            (yyval.fields).count = 0;
            (yyval.fields).capacity = 0;
        }
#line 5187 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 3454 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            size_t i;

            for (i = 0; i < (yyvsp[0].fields).count; ++i)
            {
                const struct hlsl_struct_field *field = &(yyvsp[0].fields).fields[i];
                const struct hlsl_struct_field *existing;

                if ((existing = get_struct_field((yyvsp[-1].fields).fields, (yyvsp[-1].fields).count, field->name)))
                {
                    hlsl_error(ctx, &field->loc, VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                            "Field \"%s\" is already defined.", field->name);
                    hlsl_note(ctx, &existing->loc, VKD3D_SHADER_LOG_ERROR,
                            "'%s' was previously defined here.", field->name);
                }
            }

            if (!hlsl_array_reserve(ctx, (void **)&(yyvsp[-1].fields).fields, &(yyvsp[-1].fields).capacity, (yyvsp[-1].fields).count + (yyvsp[0].fields).count, sizeof(*(yyvsp[-1].fields).fields)))
                YYABORT;
            memcpy((yyvsp[-1].fields).fields + (yyvsp[-1].fields).count, (yyvsp[0].fields).fields, (yyvsp[0].fields).count * sizeof(*(yyvsp[0].fields).fields));
            (yyvsp[-1].fields).count += (yyvsp[0].fields).count;
            vkd3d_free((yyvsp[0].fields).fields);

            (yyval.fields) = (yyvsp[-1].fields);
        }
#line 5217 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 3486 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_type *type;
            unsigned int modifiers = (yyvsp[-3].modifiers);

            if (!(type = apply_type_modifiers(ctx, (yyvsp[-2].type), &modifiers, (yylsp[-3]))))
                YYABORT;
            if (modifiers & ~HLSL_STORAGE_NOINTERPOLATION)
            {
                struct vkd3d_string_buffer *string;

                if ((string = hlsl_modifiers_to_string(ctx, modifiers)))
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                            "Modifiers '%s' are not allowed on struct fields.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
            }
            if (!gen_struct_fields(ctx, &(yyval.fields), type, modifiers, (yyvsp[-1].list)))
                YYABORT;
        }
#line 5240 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 3507 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.attr) = hlsl_alloc(ctx, offsetof(struct hlsl_attribute, args[0]))))
            {
                vkd3d_free((yyvsp[-1].name));
                YYABORT;
            }
            (yyval.attr)->name = (yyvsp[-1].name);
            list_init(&(yyval.attr)->instrs);
            (yyval.attr)->loc = (yyloc);
            (yyval.attr)->args_count = 0;
        }
#line 5256 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 3519 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            unsigned int i;

            if (!((yyval.attr) = hlsl_alloc(ctx, offsetof(struct hlsl_attribute, args[(yyvsp[-2].initializer).args_count]))))
            {
                vkd3d_free((yyvsp[-4].name));
                free_parse_initializer(&(yyvsp[-2].initializer));
                YYABORT;
            }
            (yyval.attr)->name = (yyvsp[-4].name);
            list_init(&(yyval.attr)->instrs);
            list_move_tail(&(yyval.attr)->instrs, (yyvsp[-2].initializer).instrs);
            vkd3d_free((yyvsp[-2].initializer).instrs);
            (yyval.attr)->loc = (yyloc);
            (yyval.attr)->args_count = (yyvsp[-2].initializer).args_count;
            for (i = 0; i < (yyvsp[-2].initializer).args_count; ++i)
                hlsl_src_from_node(&(yyval.attr)->args[i], (yyvsp[-2].initializer).args[i]);
        }
#line 5279 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 3540 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.attr_list).count = 1;
            if (!((yyval.attr_list).attrs = hlsl_alloc(ctx, sizeof(*(yyval.attr_list).attrs))))
            {
                hlsl_free_attribute((yyvsp[0].attr));
                YYABORT;
            }
            (yyval.attr_list).attrs[0] = (yyvsp[0].attr);
        }
#line 5293 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 3550 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            const struct hlsl_attribute **new_array;

            (yyval.attr_list) = (yyvsp[-1].attr_list);
            if (!(new_array = vkd3d_realloc((yyval.attr_list).attrs, ((yyval.attr_list).count + 1) * sizeof(*(yyval.attr_list).attrs))))
            {
                unsigned int i;

                for (i = 0; i < (yyval.attr_list).count; ++i)
                    hlsl_free_attribute((void *)(yyval.attr_list).attrs[i]);
                vkd3d_free((yyval.attr_list).attrs);
                YYABORT;
            }
            (yyval.attr_list).attrs = new_array;
            (yyval.attr_list).attrs[(yyval.attr_list).count++] = (yyvsp[0].attr);
        }
#line 5314 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 3569 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.function) = (yyvsp[-1].function);
            (yyval.function).decl->has_body = true;
            list_move_tail(&(yyval.function).decl->body.instrs, (yyvsp[0].list));
            vkd3d_free((yyvsp[0].list));
            hlsl_pop_scope(ctx);
        }
#line 5326 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 3577 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.function) = (yyvsp[-1].function);
            hlsl_pop_scope(ctx);
        }
#line 5335 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 3585 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            unsigned int modifiers = (yyvsp[-6].modifiers);
            struct hlsl_ir_var *var;
            struct hlsl_type *type;

            if (modifiers & ~HLSL_MODIFIERS_MAJORITY_MASK)
            {
                hlsl_error(ctx, &(yylsp[-6]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Only majority modifiers are allowed on functions.");
                YYABORT;
            }
            if (!(type = apply_type_modifiers(ctx, (yyvsp[-5].type), &modifiers, (yylsp[-6]))))
                YYABORT;
            if ((var = hlsl_get_var(ctx->globals, (yyvsp[-4].name))))
            {
                hlsl_error(ctx, &(yylsp[-4]), VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                        "\"%s\" is already declared as a variable.", (yyvsp[-4].name));
                hlsl_note(ctx, &var->loc, VKD3D_SHADER_LOG_ERROR,
                        "\"%s\" was previously declared here.", (yyvsp[-4].name));
                YYABORT;
            }
            if (hlsl_types_are_equal(type, ctx->builtin_types.Void) && (yyvsp[0].colon_attribute).semantic.name)
            {
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_INVALID_SEMANTIC,
                        "Semantics are not allowed on void functions.");
            }

            if ((yyvsp[0].colon_attribute).reg_reservation.type)
                FIXME("Unexpected register reservation for a function.\n");

            if (!((yyval.function).decl = hlsl_new_func_decl(ctx, type, (yyvsp[-2].list), &(yyvsp[0].colon_attribute).semantic, &(yylsp[-4]))))
                YYABORT;
            (yyval.function).name = (yyvsp[-4].name);
            ctx->cur_function = (yyval.function).decl;
        }
#line 5375 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 3624 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyvsp[0].function).decl->attr_count = (yyvsp[-1].attr_list).count;
            (yyvsp[0].function).decl->attrs = (yyvsp[-1].attr_list).attrs;
            (yyval.function) = (yyvsp[0].function);
        }
#line 5385 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 3632 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
        }
#line 5394 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 3637 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            hlsl_pop_scope(ctx);
            (yyval.list) = (yyvsp[-1].list);
        }
#line 5403 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 3644 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            hlsl_push_scope(ctx);
        }
#line 5411 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 3654 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.colon_attribute).semantic.name = NULL;
            (yyval.colon_attribute).reg_reservation.type = 0;
        }
#line 5420 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 3659 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.colon_attribute).semantic = (yyvsp[0].semantic);
            (yyval.colon_attribute).reg_reservation.type = 0;
        }
#line 5429 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 3664 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.colon_attribute).semantic.name = NULL;
            (yyval.colon_attribute).reg_reservation = (yyvsp[0].reg_reservation);
        }
#line 5438 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 3671 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            char *p;

            for (p = (yyvsp[0].name) + strlen((yyvsp[0].name)); p > (yyvsp[0].name) && isdigit(p[-1]); --p)
                ;
            (yyval.semantic).name = (yyvsp[0].name);
            (yyval.semantic).index = atoi(p);
            *p = 0;
        }
#line 5452 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 3684 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.reg_reservation) = parse_reg_reservation((yyvsp[-1].name));
            vkd3d_free((yyvsp[-1].name));
        }
#line 5461 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 3689 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            FIXME("Ignoring shader target %s in a register reservation.\n", debugstr_a((yyvsp[-3].name)));
            vkd3d_free((yyvsp[-3].name));

            (yyval.reg_reservation) = parse_reg_reservation((yyvsp[-1].name));
            vkd3d_free((yyvsp[-1].name));
        }
#line 5473 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 3699 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
        }
#line 5482 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 3704 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[0].list);
        }
#line 5490 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 3710 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
            if (!add_func_parameter(ctx, (yyval.list), &(yyvsp[0].parameter), (yylsp[0])))
            {
                ERR("Error adding function parameter %s.\n", (yyvsp[0].parameter).name);
                YYABORT;
            }
        }
#line 5504 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 3720 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-2].list);
            if (!add_func_parameter(ctx, (yyval.list), &(yyvsp[0].parameter), (yylsp[0])))
            {
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_REDEFINED,
                        "Parameter \"%s\" is already declared.", (yyvsp[0].parameter).name);
                YYABORT;
            }
        }
#line 5518 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 3732 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_type *type;
            unsigned int modifiers = (yyvsp[-3].modifiers);

            if (!(type = apply_type_modifiers(ctx, (yyvsp[-2].type), &modifiers, (yylsp[-3]))))
                YYABORT;

            (yyval.parameter).modifiers = modifiers;
            if (!((yyval.parameter).modifiers & (HLSL_STORAGE_IN | HLSL_STORAGE_OUT)))
                (yyval.parameter).modifiers |= HLSL_STORAGE_IN;
            (yyval.parameter).type = type;
            (yyval.parameter).name = (yyvsp[-1].name);
            (yyval.parameter).semantic = (yyvsp[0].colon_attribute).semantic;
            (yyval.parameter).reg_reservation = (yyvsp[0].colon_attribute).reg_reservation;
        }
#line 5538 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 3750 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_1D;
        }
#line 5546 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 3754 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_2D;
        }
#line 5554 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 3758 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_3D;
        }
#line 5562 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 3762 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_CUBE;
        }
#line 5570 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 3766 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_1DARRAY;
        }
#line 5578 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 3770 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_2DARRAY;
        }
#line 5586 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 3774 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_CUBEARRAY;
        }
#line 5594 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 3780 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_1D;
        }
#line 5602 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 3784 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_2D;
        }
#line 5610 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 3788 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.sampler_dim) = HLSL_SAMPLER_DIM_3D;
        }
#line 5618 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 3794 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-3].type)->type != HLSL_CLASS_SCALAR)
            {
                struct vkd3d_string_buffer *string;

                string = hlsl_type_to_string(ctx, (yyvsp[-3].type));
                if (string)
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Vector base type %s is not scalar.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
                YYABORT;
            }
            if ((yyvsp[-1].intval) < 1 || (yyvsp[-1].intval) > 4)
            {
                hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_INVALID_SIZE,
                        "Vector size %d is not between 1 and 4.", (yyvsp[-1].intval));
                YYABORT;
            }

            (yyval.type) = hlsl_get_vector_type(ctx, (yyvsp[-3].type)->base_type, (yyvsp[-1].intval));
        }
#line 5644 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 3816 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_get_vector_type(ctx, HLSL_TYPE_FLOAT, 4);
        }
#line 5652 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 3820 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-5].type)->type != HLSL_CLASS_SCALAR)
            {
                struct vkd3d_string_buffer *string;

                string = hlsl_type_to_string(ctx, (yyvsp[-5].type));
                if (string)
                    hlsl_error(ctx, &(yylsp[-5]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Matrix base type %s is not scalar.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
                YYABORT;
            }
            if ((yyvsp[-3].intval) < 1 || (yyvsp[-3].intval) > 4)
            {
                hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_SIZE,
                        "Matrix row count %d is not between 1 and 4.", (yyvsp[-3].intval));
                YYABORT;
            }
            if ((yyvsp[-1].intval) < 1 || (yyvsp[-1].intval) > 4)
            {
                hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_INVALID_SIZE,
                        "Matrix column count %d is not between 1 and 4.", (yyvsp[-1].intval));
                YYABORT;
            }

            (yyval.type) = hlsl_get_matrix_type(ctx, (yyvsp[-5].type)->base_type, (yyvsp[-1].intval), (yyvsp[-3].intval));
        }
#line 5684 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 3848 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_get_matrix_type(ctx, HLSL_TYPE_FLOAT, 4, 4);
        }
#line 5692 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 3852 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.Void;
        }
#line 5700 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 3856 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.sampler[HLSL_SAMPLER_DIM_GENERIC];
        }
#line 5708 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 3860 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.sampler[HLSL_SAMPLER_DIM_1D];
        }
#line 5716 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 3864 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.sampler[HLSL_SAMPLER_DIM_2D];
        }
#line 5724 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 3868 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.sampler[HLSL_SAMPLER_DIM_3D];
        }
#line 5732 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 3872 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = ctx->builtin_types.sampler[HLSL_SAMPLER_DIM_3D];
        }
#line 5740 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 3876 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_new_texture_type(ctx, HLSL_SAMPLER_DIM_GENERIC, NULL);
        }
#line 5748 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 3880 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_new_texture_type(ctx, (yyvsp[0].sampler_dim), hlsl_get_vector_type(ctx, HLSL_TYPE_FLOAT, 4));
        }
#line 5756 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 3884 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-1].type)->type > HLSL_CLASS_VECTOR)
            {
                struct vkd3d_string_buffer *string;

                string = hlsl_type_to_string(ctx, (yyvsp[-1].type));
                if (string)
                    hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Texture data type %s is not scalar or vector.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
            }
            (yyval.type) = hlsl_new_texture_type(ctx, (yyvsp[-3].sampler_dim), (yyvsp[-1].type));
        }
#line 5774 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 3898 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-1].type)->type > HLSL_CLASS_VECTOR)
            {
                struct vkd3d_string_buffer *string;

                string = hlsl_type_to_string(ctx, (yyvsp[-1].type));
                if (string)
                    hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "UAV data type %s is not scalar or vector.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
            }
            (yyval.type) = hlsl_new_uav_type(ctx, (yyvsp[-3].sampler_dim), (yyvsp[-1].type));
        }
#line 5792 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 3912 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_get_type(ctx->cur_scope, (yyvsp[0].name), true);
            vkd3d_free((yyvsp[0].name));
        }
#line 5801 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 3917 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.type) = hlsl_get_type(ctx->cur_scope, (yyvsp[0].name), true);
            if ((yyval.type)->type != HLSL_CLASS_STRUCT)
                hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_REDEFINED, "\"%s\" redefined as a structure.", (yyvsp[0].name));
            vkd3d_free((yyvsp[0].name));
        }
#line 5812 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 3928 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
        }
#line 5821 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 3939 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-3].modifiers) & ~HLSL_TYPE_MODIFIERS_MASK)
            {
                struct parse_variable_def *v, *v_next;
                hlsl_error(ctx, &(yylsp[-4]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Storage modifiers are not allowed on typedefs.");
                LIST_FOR_EACH_ENTRY_SAFE(v, v_next, (yyvsp[-1].list), struct parse_variable_def, entry)
                    vkd3d_free(v);
                vkd3d_free((yyvsp[-1].list));
                YYABORT;
            }
            if (!add_typedef(ctx, (yyvsp[-3].modifiers), (yyvsp[-2].type), (yyvsp[-1].list)))
                YYABORT;
        }
#line 5840 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 3956 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
            list_add_head((yyval.list), &(yyvsp[0].variable_def)->entry);
        }
#line 5850 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 3962 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-2].list);
            list_add_tail((yyval.list), &(yyvsp[0].variable_def)->entry);
        }
#line 5859 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 3969 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.variable_def) = hlsl_alloc(ctx, sizeof(*(yyval.variable_def)));
            (yyval.variable_def)->loc = (yylsp[-1]);
            (yyval.variable_def)->name = (yyvsp[-1].name);
            (yyval.variable_def)->arrays = (yyvsp[0].arrays);
        }
#line 5870 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 3978 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_type *type;
            unsigned int modifiers = (yyvsp[-3].modifiers);

            if (!(type = apply_type_modifiers(ctx, (yyvsp[-2].type), &modifiers, (yylsp[-3]))))
                YYABORT;
            (yyval.list) = declare_vars(ctx, type, modifiers, (yyvsp[-1].list));
        }
#line 5883 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 3989 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = NULL;
        }
#line 5891 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 3996 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
            list_add_head((yyval.list), &(yyvsp[0].variable_def)->entry);
        }
#line 5901 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 4002 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-2].list);
            list_add_tail((yyval.list), &(yyvsp[0].variable_def)->entry);
        }
#line 5910 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 4009 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.variable_def) = hlsl_alloc(ctx, sizeof(*(yyval.variable_def)));
            (yyval.variable_def)->loc = (yylsp[-2]);
            (yyval.variable_def)->name = (yyvsp[-2].name);
            (yyval.variable_def)->arrays = (yyvsp[-1].arrays);
            (yyval.variable_def)->semantic = (yyvsp[0].colon_attribute).semantic;
            (yyval.variable_def)->reg_reservation = (yyvsp[0].colon_attribute).reg_reservation;
        }
#line 5923 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 4020 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            vkd3d_free((yyvsp[-3].name));
            hlsl_free_instr_list((yyvsp[-1].list));
        }
#line 5932 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 4027 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            ctx->in_state_block = 1;
        }
#line 5940 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 4038 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.variable_def) = (yyvsp[-2].variable_def);
            (yyval.variable_def)->initializer = (yyvsp[0].initializer);
        }
#line 5949 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 4043 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.variable_def) = (yyvsp[-4].variable_def);
            ctx->in_state_block = 0;
        }
#line 5958 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 4050 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.arrays).sizes = NULL;
            (yyval.arrays).count = 0;
        }
#line 5967 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 4055 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            unsigned int size = evaluate_array_dimension(node_from_list((yyvsp[-2].list)));
            uint32_t *new_array;

            destroy_instr_list((yyvsp[-2].list));

            (yyval.arrays) = (yyvsp[0].arrays);

            if (!size)
            {
                hlsl_error(ctx, &(yylsp[-2]), VKD3D_SHADER_ERROR_HLSL_INVALID_SIZE,
                        "Array size is not a positive integer constant.");
                vkd3d_free((yyval.arrays).sizes);
                YYABORT;
            }

            if (size > 65536)
            {
                hlsl_error(ctx, &(yylsp[-2]), VKD3D_SHADER_ERROR_HLSL_INVALID_SIZE,
                        "Array size %u is not between 1 and 65536.", size);
                vkd3d_free((yyval.arrays).sizes);
                YYABORT;
            }

            if (!(new_array = hlsl_realloc(ctx, (yyval.arrays).sizes, ((yyval.arrays).count + 1) * sizeof(*new_array))))
            {
                vkd3d_free((yyval.arrays).sizes);
                YYABORT;
            }
            (yyval.arrays).sizes = new_array;
            (yyval.arrays).sizes[(yyval.arrays).count++] = size;
        }
#line 6004 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 4088 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            uint32_t *new_array;

            (yyval.arrays) = (yyvsp[0].arrays);

            if (!(new_array = hlsl_realloc(ctx, (yyval.arrays).sizes, ((yyval.arrays).count + 1) * sizeof(*new_array))))
            {
                vkd3d_free((yyval.arrays).sizes);
                YYABORT;
            }

            (yyval.arrays).sizes = new_array;
            (yyval.arrays).sizes[(yyval.arrays).count++] = HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT;
        }
#line 6023 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 4105 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = 0;
        }
#line 6031 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 4109 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_EXTERN, (yylsp[-1]));
        }
#line 6039 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 4113 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_NOINTERPOLATION, (yylsp[-1]));
        }
#line 6047 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 4117 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_MODIFIER_PRECISE, (yylsp[-1]));
        }
#line 6055 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 4121 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_SHARED, (yylsp[-1]));
        }
#line 6063 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 4125 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_GROUPSHARED, (yylsp[-1]));
        }
#line 6071 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 4129 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_STATIC, (yylsp[-1]));
        }
#line 6079 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 4133 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_UNIFORM, (yylsp[-1]));
        }
#line 6087 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 4137 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_VOLATILE, (yylsp[-1]));
        }
#line 6095 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 4141 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_MODIFIER_CONST, (yylsp[-1]));
        }
#line 6103 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 4145 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_MODIFIER_ROW_MAJOR, (yylsp[-1]));
        }
#line 6111 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 4149 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_MODIFIER_COLUMN_MAJOR, (yylsp[-1]));
        }
#line 6119 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 4153 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_IN, (yylsp[-1]));
        }
#line 6127 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 4157 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_OUT, (yylsp[-1]));
        }
#line 6135 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 4161 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.modifiers) = add_modifiers(ctx, (yyvsp[0].modifiers), HLSL_STORAGE_IN | HLSL_STORAGE_OUT, (yylsp[-1]));
        }
#line 6143 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 4168 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.initializer).args_count = 1;
            if (!((yyval.initializer).args = hlsl_alloc(ctx, sizeof(*(yyval.initializer).args))))
            {
                destroy_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.initializer).args[0] = node_from_list((yyvsp[0].list));
            (yyval.initializer).instrs = (yyvsp[0].list);
            (yyval.initializer).braces = false;
        }
#line 6159 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 4180 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.initializer) = (yyvsp[-1].initializer);
            (yyval.initializer).braces = true;
        }
#line 6168 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 4185 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.initializer) = (yyvsp[-2].initializer);
            (yyval.initializer).braces = true;
        }
#line 6177 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 4193 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node **new_args;
            unsigned int i;

            (yyval.initializer) = (yyvsp[-2].initializer);
            if (!(new_args = hlsl_realloc(ctx, (yyval.initializer).args, ((yyval.initializer).args_count + (yyvsp[0].initializer).args_count) * sizeof(*(yyval.initializer).args))))
            {
                free_parse_initializer(&(yyval.initializer));
                free_parse_initializer(&(yyvsp[0].initializer));
                YYABORT;
            }
            (yyval.initializer).args = new_args;
            for (i = 0; i < (yyvsp[0].initializer).args_count; ++i)
                (yyval.initializer).args[(yyval.initializer).args_count++] = (yyvsp[0].initializer).args[i];
            list_move_tail((yyval.initializer).instrs, (yyvsp[0].initializer).instrs);
            free_parse_initializer(&(yyvsp[0].initializer));
        }
#line 6199 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 4216 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.initializer).args_count = 1;
            if (!((yyval.initializer).args = hlsl_alloc(ctx, sizeof(*(yyval.initializer).args))))
            {
                destroy_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.initializer).args[0] = node_from_list((yyvsp[0].list));
            (yyval.initializer).instrs = (yyvsp[0].list);
            (yyval.initializer).braces = false;
        }
#line 6215 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 4228 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node **new_args;

            (yyval.initializer) = (yyvsp[-2].initializer);
            if (!(new_args = hlsl_realloc(ctx, (yyval.initializer).args, ((yyval.initializer).args_count + 1) * sizeof(*(yyval.initializer).args))))
            {
                free_parse_initializer(&(yyval.initializer));
                destroy_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.initializer).args = new_args;
            (yyval.initializer).args[(yyval.initializer).args_count++] = node_from_list((yyvsp[0].list));
            list_move_tail((yyval.initializer).instrs, (yyvsp[0].list));
            vkd3d_free((yyvsp[0].list));
        }
#line 6235 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 4246 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.boolval) = true;
        }
#line 6243 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 4250 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.boolval) = false;
        }
#line 6251 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 4257 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-1].list);
            list_move_tail((yyval.list), (yyvsp[0].list));
            vkd3d_free((yyvsp[0].list));
        }
#line 6261 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 4273 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!add_return(ctx, (yyvsp[-1].list), node_from_list((yyvsp[-1].list)), (yylsp[-2])))
                YYABORT;
            (yyval.list) = (yyvsp[-1].list);
        }
#line 6271 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 4279 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
            if (!add_return(ctx, (yyval.list), NULL, (yylsp[-1])))
                YYABORT;
        }
#line 6282 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 4288 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *condition = node_from_list((yyvsp[-2].list));
            struct hlsl_ir_if *instr;

            if (!(instr = hlsl_new_if(ctx, condition, (yylsp[-4]))))
                YYABORT;
            list_move_tail(&instr->then_instrs.instrs, (yyvsp[0].if_body).then_instrs);
            if ((yyvsp[0].if_body).else_instrs)
                list_move_tail(&instr->else_instrs.instrs, (yyvsp[0].if_body).else_instrs);
            vkd3d_free((yyvsp[0].if_body).then_instrs);
            vkd3d_free((yyvsp[0].if_body).else_instrs);
            if (condition->data_type->dimx > 1 || condition->data_type->dimy > 1)
            {
                struct vkd3d_string_buffer *string;

                if ((string = hlsl_type_to_string(ctx, condition->data_type)))
                    hlsl_error(ctx, &instr->node.loc, VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "if condition type %s is not scalar.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
            }
            (yyval.list) = (yyvsp[-2].list);
            list_add_tail((yyval.list), &instr->node.entry);
        }
#line 6310 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 4314 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.if_body).then_instrs = (yyvsp[0].list);
            (yyval.if_body).else_instrs = NULL;
        }
#line 6319 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 4319 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.if_body).then_instrs = (yyvsp[-2].list);
            (yyval.if_body).else_instrs = (yyvsp[0].list);
        }
#line 6328 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 4326 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = create_loop(ctx, LOOP_WHILE, NULL, (yyvsp[-2].list), NULL, (yyvsp[0].list), (yylsp[-4]));
        }
#line 6336 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 4330 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = create_loop(ctx, LOOP_DO_WHILE, NULL, (yyvsp[-2].list), NULL, (yyvsp[-5].list), (yylsp[-6]));
        }
#line 6344 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 4334 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = create_loop(ctx, LOOP_FOR, (yyvsp[-4].list), (yyvsp[-3].list), (yyvsp[-2].list), (yyvsp[0].list), (yylsp[-7]));
            hlsl_pop_scope(ctx);
        }
#line 6353 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 4339 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = create_loop(ctx, LOOP_FOR, (yyvsp[-4].list), (yyvsp[-3].list), (yyvsp[-2].list), (yyvsp[0].list), (yylsp[-7]));
            hlsl_pop_scope(ctx);
        }
#line 6362 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 4346 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = make_empty_list(ctx)))
                YYABORT;
        }
#line 6371 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 4351 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-1].list);
        }
#line 6379 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 4357 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.initializer).args = NULL;
            (yyval.initializer).args_count = 0;
            if (!((yyval.initializer).instrs = make_empty_list(ctx)))
                YYABORT;
            (yyval.initializer).braces = false;
        }
#line 6391 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 4368 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_constant *c;

            if (!(c = hlsl_new_float_constant(ctx, (yyvsp[0].floatval), &(yylsp[0]))))
                YYABORT;
            if (!((yyval.list) = make_list(ctx, &c->node)))
                YYABORT;
        }
#line 6404 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 4377 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_constant *c;

            if (!(c = hlsl_new_int_constant(ctx, (yyvsp[0].intval), &(yylsp[0]))))
                YYABORT;
            if (!((yyval.list) = make_list(ctx, &c->node)))
                YYABORT;
        }
#line 6417 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 4386 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_constant *c;

            if (!(c = hlsl_new_bool_constant(ctx, (yyvsp[0].boolval), &(yylsp[0]))))
                YYABORT;
            if (!((yyval.list) = make_list(ctx, &c->node)))
            {
                hlsl_free_instr(&c->node);
                YYABORT;
            }
        }
#line 6433 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 4398 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_load *load;
            struct hlsl_ir_var *var;

            if (!(var = hlsl_get_var(ctx->cur_scope, (yyvsp[0].name))))
            {
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_NOT_DEFINED, "Variable \"%s\" is not defined.", (yyvsp[0].name));
                YYABORT;
            }
            if (!(load = hlsl_new_var_load(ctx, var, (yylsp[0]))))
                YYABORT;
            if (!((yyval.list) = make_list(ctx, &load->node)))
                YYABORT;
        }
#line 6452 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 4413 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-1].list);
        }
#line 6460 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 4417 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!((yyval.list) = add_call(ctx, (yyvsp[-3].name), &(yyvsp[-1].initializer), (yylsp[-3]))))
                YYABORT;
        }
#line 6469 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 4422 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (ctx->in_state_block)
            {
                struct hlsl_ir_load *load;
                struct hlsl_ir_var *var;

                if (!(var = hlsl_new_synthetic_var(ctx, "state_block_expr",
                        hlsl_get_scalar_type(ctx, HLSL_TYPE_INT), &(yylsp[0]))))
                    YYABORT;
                if (!(load = hlsl_new_var_load(ctx, var, (yylsp[0]))))
                    YYABORT;
                if (!((yyval.list) = make_list(ctx, &load->node)))
                    YYABORT;
            }
            else
            {
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_NOT_DEFINED, "Identifier \"%s\" is not declared.", (yyvsp[0].name));
                YYABORT;
            }
        }
#line 6494 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 4446 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!add_increment(ctx, (yyvsp[-1].list), false, true, (yylsp[0])))
            {
                destroy_instr_list((yyvsp[-1].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[-1].list);
        }
#line 6507 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 4455 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!add_increment(ctx, (yyvsp[-1].list), true, true, (yylsp[0])))
            {
                destroy_instr_list((yyvsp[-1].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[-1].list);
        }
#line 6520 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 4464 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *node = node_from_list((yyvsp[-2].list));

            if (node->data_type->type == HLSL_CLASS_STRUCT)
            {
                struct hlsl_type *type = node->data_type;
                const struct hlsl_struct_field *field;
                unsigned int field_idx = 0;

                if (!(field = get_struct_field(type->e.record.fields, type->e.record.field_count, (yyvsp[0].name))))
                {
                    hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_NOT_DEFINED, "Field \"%s\" is not defined.", (yyvsp[0].name));
                    YYABORT;
                }

                field_idx = field - type->e.record.fields;
                if (!add_record_load(ctx, (yyvsp[-2].list), node, field_idx, (yylsp[-1])))
                    YYABORT;
                (yyval.list) = (yyvsp[-2].list);
            }
            else if (node->data_type->type <= HLSL_CLASS_LAST_NUMERIC)
            {
                struct hlsl_ir_swizzle *swizzle;

                if (!(swizzle = get_swizzle(ctx, node, (yyvsp[0].name), &(yylsp[0]))))
                {
                    hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_INVALID_SYNTAX, "Invalid swizzle \"%s\".", (yyvsp[0].name));
                    YYABORT;
                }
                list_add_tail((yyvsp[-2].list), &swizzle->node.entry);
                (yyval.list) = (yyvsp[-2].list);
            }
            else
            {
                hlsl_error(ctx, &(yylsp[0]), VKD3D_SHADER_ERROR_HLSL_INVALID_SYNTAX, "Invalid subscript \"%s\".", (yyvsp[0].name));
                YYABORT;
            }
        }
#line 6563 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 4503 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *array = node_from_list((yyvsp[-3].list)), *index = node_from_list((yyvsp[-1].list));

            list_move_tail((yyvsp[-3].list), (yyvsp[-1].list));
            vkd3d_free((yyvsp[-1].list));

            if (!add_array_load(ctx, (yyvsp[-3].list), array, index, &(yylsp[-2])))
            {
                destroy_instr_list((yyvsp[-3].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[-3].list);
        }
#line 6581 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 4519 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if ((yyvsp[-4].modifiers))
            {
                hlsl_error(ctx, &(yylsp[-4]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Modifiers are not allowed on constructors.");
                free_parse_initializer(&(yyvsp[-1].initializer));
                YYABORT;
            }
            if ((yyvsp[-3].type)->type > HLSL_CLASS_LAST_NUMERIC)
            {
                struct vkd3d_string_buffer *string;

                if ((string = hlsl_type_to_string(ctx, (yyvsp[-3].type))))
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Constructor data type %s is not numeric.", string->buffer);
                hlsl_release_string_buffer(ctx, string);
                free_parse_initializer(&(yyvsp[-1].initializer));
                YYABORT;
            }
            if ((yyvsp[-3].type)->dimx * (yyvsp[-3].type)->dimy != initializer_size(&(yyvsp[-1].initializer)))
            {
                hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_WRONG_PARAMETER_COUNT,
                        "Expected %u components in constructor, but got %u.",
                        (yyvsp[-3].type)->dimx * (yyvsp[-3].type)->dimy, initializer_size(&(yyvsp[-1].initializer)));
                free_parse_initializer(&(yyvsp[-1].initializer));
                YYABORT;
            }

            if (!((yyval.list) = add_constructor(ctx, (yyvsp[-3].type), &(yyvsp[-1].initializer), (yylsp[-3]))))
            {
                free_parse_initializer(&(yyvsp[-1].initializer));
                YYABORT;
            }
        }
#line 6620 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 4554 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *object = node_from_list((yyvsp[-5].list));

            list_move_tail((yyvsp[-5].list), (yyvsp[-1].initializer).instrs);
            vkd3d_free((yyvsp[-1].initializer).instrs);

            if (!add_method_call(ctx, (yyvsp[-5].list), object, (yyvsp[-3].name), &(yyvsp[-1].initializer), &(yylsp[-3])))
            {
                hlsl_free_instr_list((yyvsp[-5].list));
                vkd3d_free((yyvsp[-1].initializer).args);
                YYABORT;
            }
            vkd3d_free((yyvsp[-1].initializer).args);
            (yyval.list) = (yyvsp[-5].list);
        }
#line 6640 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 4573 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!add_increment(ctx, (yyvsp[0].list), false, false, (yylsp[-1])))
            {
                destroy_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[0].list);
        }
#line 6653 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 4582 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            if (!add_increment(ctx, (yyvsp[0].list), true, false, (yylsp[-1])))
            {
                destroy_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[0].list);
        }
#line 6666 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 4591 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[0].list);
        }
#line 6674 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 4595 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            add_unary_arithmetic_expr(ctx, (yyvsp[0].list), HLSL_OP1_NEG, node_from_list((yyvsp[0].list)), &(yylsp[-1]));
            (yyval.list) = (yyvsp[0].list);
        }
#line 6683 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 4600 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            add_unary_bitwise_expr(ctx, (yyvsp[0].list), HLSL_OP1_BIT_NOT, node_from_list((yyvsp[0].list)), &(yylsp[-1]));
            (yyval.list) = (yyvsp[0].list);
        }
#line 6692 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 4605 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            add_unary_logical_expr(ctx, (yyvsp[0].list), HLSL_OP1_LOGIC_NOT, node_from_list((yyvsp[0].list)), &(yylsp[-1]));
            (yyval.list) = (yyvsp[0].list);
        }
#line 6701 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 4611 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_type *src_type = node_from_list((yyvsp[0].list))->data_type;
            struct hlsl_type *dst_type;
            unsigned int i;

            if ((yyvsp[-4].modifiers))
            {
                hlsl_error(ctx, &(yylsp[-4]), VKD3D_SHADER_ERROR_HLSL_INVALID_MODIFIER,
                        "Modifiers are not allowed on casts.");
                YYABORT;
            }

            dst_type = (yyvsp[-3].type);
            for (i = 0; i < (yyvsp[-2].arrays).count; ++i)
            {
                if ((yyvsp[-2].arrays).sizes[i] == HLSL_ARRAY_ELEMENTS_COUNT_IMPLICIT)
                {
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE,
                            "Implicit size arrays not allowed in casts.");
                }
                dst_type = hlsl_new_array_type(ctx, dst_type, (yyvsp[-2].arrays).sizes[i]);
            }

            if (!compatible_data_types(ctx, src_type, dst_type))
            {
                struct vkd3d_string_buffer *src_string, *dst_string;

                src_string = hlsl_type_to_string(ctx, src_type);
                dst_string = hlsl_type_to_string(ctx, dst_type);
                if (src_string && dst_string)
                    hlsl_error(ctx, &(yylsp[-3]), VKD3D_SHADER_ERROR_HLSL_INVALID_TYPE, "Can't cast from %s to %s.",
                            src_string->buffer, dst_string->buffer);
                hlsl_release_string_buffer(ctx, src_string);
                hlsl_release_string_buffer(ctx, dst_string);
                YYABORT;
            }

            if (!add_cast(ctx, (yyvsp[0].list), node_from_list((yyvsp[0].list)), dst_type, &(yylsp[-3])))
            {
                hlsl_free_instr_list((yyvsp[0].list));
                YYABORT;
            }
            (yyval.list) = (yyvsp[0].list);
        }
#line 6750 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 4659 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_arithmetic_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_MUL, (yylsp[-1]));
        }
#line 6758 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 4663 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_arithmetic_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_DIV, (yylsp[-1]));
        }
#line 6766 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 4667 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_arithmetic_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_MOD, (yylsp[-1]));
        }
#line 6774 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 4674 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_arithmetic_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_ADD, (yylsp[-1]));
        }
#line 6782 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 4678 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *neg;

            if (!(neg = hlsl_new_unary_expr(ctx, HLSL_OP1_NEG, node_from_list((yyvsp[0].list)), (yylsp[-1]))))
                YYABORT;
            list_add_tail((yyvsp[0].list), &neg->entry);
            (yyval.list) = add_binary_arithmetic_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_ADD, (yylsp[-1]));
        }
#line 6795 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 4690 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_shift_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_LSHIFT, &(yylsp[-1]));
        }
#line 6803 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 4694 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_shift_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_RSHIFT, &(yylsp[-1]));
        }
#line 6811 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 4701 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_LESS, (yylsp[-1]));
        }
#line 6819 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 4705 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[0].list), (yyvsp[-2].list), HLSL_OP2_LESS, (yylsp[-1]));
        }
#line 6827 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 4709 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[0].list), (yyvsp[-2].list), HLSL_OP2_GEQUAL, (yylsp[-1]));
        }
#line 6835 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 4713 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_GEQUAL, (yylsp[-1]));
        }
#line 6843 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 4720 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_EQUAL, (yylsp[-1]));
        }
#line 6851 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 4724 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_comparison_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_NEQUAL, (yylsp[-1]));
        }
#line 6859 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 4731 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_bitwise_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_BIT_AND, &(yylsp[-1]));
        }
#line 6867 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 4738 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_bitwise_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_BIT_XOR, &(yylsp[-1]));
        }
#line 6875 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 4745 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_bitwise_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_BIT_OR, &(yylsp[-1]));
        }
#line 6883 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 4752 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_logical_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_LOGIC_AND, &(yylsp[-1]));
        }
#line 6891 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 4759 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = add_binary_logical_expr_merge(ctx, (yyvsp[-2].list), (yyvsp[0].list), HLSL_OP2_LOGIC_OR, &(yylsp[-1]));
        }
#line 6899 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 4766 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            hlsl_fixme(ctx, &(yyloc), "Ternary operator.");
        }
#line 6907 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 4774 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            struct hlsl_ir_node *lhs = node_from_list((yyvsp[-2].list)), *rhs = node_from_list((yyvsp[0].list));

            if (lhs->data_type->modifiers & HLSL_MODIFIER_CONST)
            {
                hlsl_error(ctx, &(yylsp[-1]), VKD3D_SHADER_ERROR_HLSL_MODIFIES_CONST, "Statement modifies a const expression.");
                YYABORT;
            }
            list_move_tail((yyvsp[0].list), (yyvsp[-2].list));
            vkd3d_free((yyvsp[-2].list));
            if (!add_assignment(ctx, (yyvsp[0].list), lhs, (yyvsp[-1].assign_op), rhs))
                YYABORT;
            (yyval.list) = (yyvsp[0].list);
        }
#line 6926 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 4791 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_ASSIGN;
        }
#line 6934 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 4795 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_ADD;
        }
#line 6942 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 4799 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_SUB;
        }
#line 6950 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 4803 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_MUL;
        }
#line 6958 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 4807 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_DIV;
        }
#line 6966 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 4811 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_MOD;
        }
#line 6974 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 4815 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_LSHIFT;
        }
#line 6982 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 4819 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_RSHIFT;
        }
#line 6990 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 4823 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_AND;
        }
#line 6998 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 4827 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_OR;
        }
#line 7006 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 4831 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.assign_op) = ASSIGN_OP_XOR;
        }
#line 7014 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 4838 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1646  */
    {
            (yyval.list) = (yyvsp[-2].list);
            list_move_tail((yyval.list), (yyvsp[0].list));
            vkd3d_free((yyvsp[0].list));
        }
#line 7024 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
    break;


#line 7028 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.c" /* yacc.c:1646  */
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
