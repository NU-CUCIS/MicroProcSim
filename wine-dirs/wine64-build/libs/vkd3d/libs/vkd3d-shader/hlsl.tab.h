/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_HLSL_YY_LIBS_VKD3D_LIBS_VKD3D_SHADER_HLSL_TAB_H_INCLUDED
# define YY_HLSL_YY_LIBS_VKD3D_LIBS_VKD3D_SHADER_HLSL_TAB_H_INCLUDED
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
#line 24 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1909  */


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


#line 141 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.h" /* yacc.c:1909  */

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
#line 3077 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1909  */

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

#line 287 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.h" /* yacc.c:1909  */
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
#line 114 "../wine-source/libs/vkd3d/libs/vkd3d-shader/hlsl.y" /* yacc.c:1909  */


int yylex(HLSL_YYSTYPE *yylval_param, HLSL_YYLTYPE *yylloc_param, void *yyscanner);


#line 319 "libs/vkd3d/libs/vkd3d-shader/hlsl.tab.h" /* yacc.c:1909  */

#endif /* !YY_HLSL_YY_LIBS_VKD3D_LIBS_VKD3D_SHADER_HLSL_TAB_H_INCLUDED  */
