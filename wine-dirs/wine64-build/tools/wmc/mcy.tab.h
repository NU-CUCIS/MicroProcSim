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

#ifndef YY_MCY_TOOLS_WMC_MCY_TAB_H_INCLUDED
# define YY_MCY_TOOLS_WMC_MCY_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef MCY_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define MCY_DEBUG 1
#  else
#   define MCY_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define MCY_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined MCY_DEBUG */
#if MCY_DEBUG
extern int mcy_debug;
#endif

/* Token type.  */
#ifndef MCY_TOKENTYPE
# define MCY_TOKENTYPE
  enum mcy_tokentype
  {
    tSEVNAMES = 258,
    tFACNAMES = 259,
    tLANNAMES = 260,
    tBASE = 261,
    tCODEPAGE = 262,
    tTYPEDEF = 263,
    tNL = 264,
    tSYMNAME = 265,
    tMSGEND = 266,
    tSEVERITY = 267,
    tFACILITY = 268,
    tLANGUAGE = 269,
    tMSGID = 270,
    tIDENT = 271,
    tLINE = 272,
    tFILE = 273,
    tCOMMENT = 274,
    tNUMBER = 275,
    tTOKEN = 276
  };
#endif

/* Value type.  */
#if ! defined MCY_STYPE && ! defined MCY_STYPE_IS_DECLARED

union MCY_STYPE
{
#line 100 "../wine-source/tools/wmc/mcy.y" /* yacc.c:1909  */

	WCHAR		*str;
	unsigned	num;
	struct token	*tok;
	struct lanmsg	*lmp;
	struct msg	*msg;
	struct lan_cp	lcp;

#line 93 "tools/wmc/mcy.tab.h" /* yacc.c:1909  */
};

typedef union MCY_STYPE MCY_STYPE;
# define MCY_STYPE_IS_TRIVIAL 1
# define MCY_STYPE_IS_DECLARED 1
#endif


extern MCY_STYPE mcy_lval;

int mcy_parse (void);

#endif /* !YY_MCY_TOOLS_WMC_MCY_TAB_H_INCLUDED  */
