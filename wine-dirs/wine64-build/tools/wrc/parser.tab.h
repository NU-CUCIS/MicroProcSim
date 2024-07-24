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

#ifndef YY_PARSER_TOOLS_WRC_PARSER_TAB_H_INCLUDED
# define YY_PARSER_TOOLS_WRC_PARSER_TAB_H_INCLUDED
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
    tNL = 258,
    tNUMBER = 259,
    tLNUMBER = 260,
    tSTRING = 261,
    tIDENT = 262,
    tRAWDATA = 263,
    tACCELERATORS = 264,
    tBITMAP = 265,
    tCURSOR = 266,
    tDIALOG = 267,
    tDIALOGEX = 268,
    tMENU = 269,
    tMENUEX = 270,
    tMESSAGETABLE = 271,
    tRCDATA = 272,
    tVERSIONINFO = 273,
    tSTRINGTABLE = 274,
    tFONT = 275,
    tFONTDIR = 276,
    tICON = 277,
    tHTML = 278,
    tAUTO3STATE = 279,
    tAUTOCHECKBOX = 280,
    tAUTORADIOBUTTON = 281,
    tCHECKBOX = 282,
    tDEFPUSHBUTTON = 283,
    tPUSHBUTTON = 284,
    tRADIOBUTTON = 285,
    tSTATE3 = 286,
    tGROUPBOX = 287,
    tCOMBOBOX = 288,
    tLISTBOX = 289,
    tSCROLLBAR = 290,
    tCONTROL = 291,
    tEDITTEXT = 292,
    tRTEXT = 293,
    tCTEXT = 294,
    tLTEXT = 295,
    tBLOCK = 296,
    tVALUE = 297,
    tSHIFT = 298,
    tALT = 299,
    tASCII = 300,
    tVIRTKEY = 301,
    tGRAYED = 302,
    tCHECKED = 303,
    tINACTIVE = 304,
    tNOINVERT = 305,
    tPURE = 306,
    tIMPURE = 307,
    tDISCARDABLE = 308,
    tLOADONCALL = 309,
    tPRELOAD = 310,
    tFIXED = 311,
    tMOVEABLE = 312,
    tCLASS = 313,
    tCAPTION = 314,
    tCHARACTERISTICS = 315,
    tEXSTYLE = 316,
    tSTYLE = 317,
    tVERSION = 318,
    tLANGUAGE = 319,
    tFILEVERSION = 320,
    tPRODUCTVERSION = 321,
    tFILEFLAGSMASK = 322,
    tFILEOS = 323,
    tFILETYPE = 324,
    tFILEFLAGS = 325,
    tFILESUBTYPE = 326,
    tMENUBARBREAK = 327,
    tMENUBREAK = 328,
    tMENUITEM = 329,
    tPOPUP = 330,
    tSEPARATOR = 331,
    tHELP = 332,
    tTOOLBAR = 333,
    tBUTTON = 334,
    tBEGIN = 335,
    tEND = 336,
    tDLGINIT = 337,
    tNOT = 338,
    pUPM = 339
  };
#endif

/* Value type.  */
#if ! defined PARSER_STYPE && ! defined PARSER_STYPE_IS_DECLARED

union PARSER_STYPE
{
#line 208 "../wine-source/tools/wrc/parser.y" /* yacc.c:1909  */

	string_t	*str;
	int		num;
	int		*iptr;
	char		*cptr;
	resource_t	*res;
	accelerator_t	*acc;
	bitmap_t	*bmp;
	dialog_t	*dlg;
	font_t		*fnt;
	fontdir_t	*fnd;
	menu_t		*men;
	html_t		*html;
	rcdata_t	*rdt;
	stringtable_t	*stt;
	stt_entry_t	*stte;
	user_t		*usr;
	messagetable_t	*msg;
	versioninfo_t	*veri;
	control_t	*ctl;
	name_id_t	*nid;
	font_id_t	*fntid;
	language_t	lan;
	version_t	ver;
	characts_t	chars;
	event_t		*event;
	menu_item_t	*menitm;
	itemex_opt_t	*exopt;
	raw_data_t	*raw;
	lvc_t		*lvc;
	ver_value_t	*val;
	ver_block_t	*blk;
	ver_words_t	*verw;
	toolbar_t	*tlbar;
	toolbar_item_t	*tlbarItems;
	dlginit_t       *dginit;
	style_pair_t	*styles;
	style_t		*style;
	ani_any_t	*ani;

#line 188 "tools/wrc/parser.tab.h" /* yacc.c:1909  */
};

typedef union PARSER_STYPE PARSER_STYPE;
# define PARSER_STYPE_IS_TRIVIAL 1
# define PARSER_STYPE_IS_DECLARED 1
#endif


extern PARSER_STYPE parser_lval;

int parser_parse (void);

#endif /* !YY_PARSER_TOOLS_WRC_PARSER_TAB_H_INCLUDED  */
