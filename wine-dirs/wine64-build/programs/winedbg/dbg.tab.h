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

#ifndef YY_DBG_PROGRAMS_WINEDBG_DBG_TAB_H_INCLUDED
# define YY_DBG_PROGRAMS_WINEDBG_DBG_TAB_H_INCLUDED
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
#line 41 "../wine-source/programs/winedbg/dbg.y" /* yacc.c:1909  */

    struct dbg_lvalue   lvalue;
    char*               string;
    dbg_lgint_t         integer;
    IMAGEHLP_LINE64     listing;
    struct expr*        expression;
    struct dbg_type     type;
    struct list_string* strings;

#line 167 "programs/winedbg/dbg.tab.h" /* yacc.c:1909  */
};

typedef union DBG_STYPE DBG_STYPE;
# define DBG_STYPE_IS_TRIVIAL 1
# define DBG_STYPE_IS_DECLARED 1
#endif


extern DBG_STYPE dbg_lval;

int dbg_parse (void);

#endif /* !YY_DBG_PROGRAMS_WINEDBG_DBG_TAB_H_INCLUDED  */
