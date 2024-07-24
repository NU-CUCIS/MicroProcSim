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

#ifndef YY_PARSER_TOOLS_WIDL_PARSER_TAB_H_INCLUDED
# define YY_PARSER_TOOLS_WIDL_PARSER_TAB_H_INCLUDED
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
    aIDENTIFIER = 258,
    aPRAGMA = 259,
    aKNOWNTYPE = 260,
    aNUM = 261,
    aHEXNUM = 262,
    aDOUBLE = 263,
    aSTRING = 264,
    aWSTRING = 265,
    aSQSTRING = 266,
    aUUID = 267,
    aEOF = 268,
    aACF = 269,
    SHL = 270,
    SHR = 271,
    MEMBERPTR = 272,
    EQUALITY = 273,
    INEQUALITY = 274,
    GREATEREQUAL = 275,
    LESSEQUAL = 276,
    LOGICALOR = 277,
    LOGICALAND = 278,
    ELLIPSIS = 279,
    tACTIVATABLE = 280,
    tAGGREGATABLE = 281,
    tAGILE = 282,
    tALLNODES = 283,
    tALLOCATE = 284,
    tANNOTATION = 285,
    tAPICONTRACT = 286,
    tAPPOBJECT = 287,
    tASYNC = 288,
    tASYNCUUID = 289,
    tAUTOHANDLE = 290,
    tBINDABLE = 291,
    tBOOLEAN = 292,
    tBROADCAST = 293,
    tBYTE = 294,
    tBYTECOUNT = 295,
    tCALLAS = 296,
    tCALLBACK = 297,
    tCASE = 298,
    tCDECL = 299,
    tCHAR = 300,
    tCOCLASS = 301,
    tCODE = 302,
    tCOMMSTATUS = 303,
    tCONST = 304,
    tCONTEXTHANDLE = 305,
    tCONTEXTHANDLENOSERIALIZE = 306,
    tCONTEXTHANDLESERIALIZE = 307,
    tCONTRACT = 308,
    tCONTRACTVERSION = 309,
    tCONTROL = 310,
    tCPPQUOTE = 311,
    tCUSTOM = 312,
    tDECLARE = 313,
    tDECODE = 314,
    tDEFAULT = 315,
    tDEFAULTBIND = 316,
    tDELEGATE = 317,
    tDEFAULTCOLLELEM = 318,
    tDEFAULTVALUE = 319,
    tDEFAULTVTABLE = 320,
    tDISABLECONSISTENCYCHECK = 321,
    tDISPLAYBIND = 322,
    tDISPINTERFACE = 323,
    tDLLNAME = 324,
    tDONTFREE = 325,
    tDOUBLE = 326,
    tDUAL = 327,
    tENABLEALLOCATE = 328,
    tENCODE = 329,
    tENDPOINT = 330,
    tENTRY = 331,
    tENUM = 332,
    tERRORSTATUST = 333,
    tEVENTADD = 334,
    tEVENTREMOVE = 335,
    tEXCLUSIVETO = 336,
    tEXPLICITHANDLE = 337,
    tEXTERN = 338,
    tFALSE = 339,
    tFASTCALL = 340,
    tFAULTSTATUS = 341,
    tFLAGS = 342,
    tFLOAT = 343,
    tFORCEALLOCATE = 344,
    tHANDLE = 345,
    tHANDLET = 346,
    tHELPCONTEXT = 347,
    tHELPFILE = 348,
    tHELPSTRING = 349,
    tHELPSTRINGCONTEXT = 350,
    tHELPSTRINGDLL = 351,
    tHIDDEN = 352,
    tHYPER = 353,
    tID = 354,
    tIDEMPOTENT = 355,
    tIGNORE = 356,
    tIIDIS = 357,
    tIMMEDIATEBIND = 358,
    tIMPLICITHANDLE = 359,
    tIMPORT = 360,
    tIMPORTLIB = 361,
    tIN = 362,
    tIN_LINE = 363,
    tINLINE = 364,
    tINPUTSYNC = 365,
    tINT = 366,
    tINT32 = 367,
    tINT3264 = 368,
    tINT64 = 369,
    tINTERFACE = 370,
    tLCID = 371,
    tLENGTHIS = 372,
    tLIBRARY = 373,
    tLICENSED = 374,
    tLOCAL = 375,
    tLONG = 376,
    tMARSHALINGBEHAVIOR = 377,
    tMAYBE = 378,
    tMESSAGE = 379,
    tMETHODS = 380,
    tMODULE = 381,
    tMTA = 382,
    tNAMESPACE = 383,
    tNOCODE = 384,
    tNONBROWSABLE = 385,
    tNONCREATABLE = 386,
    tNONE = 387,
    tNONEXTENSIBLE = 388,
    tNOTIFY = 389,
    tNOTIFYFLAG = 390,
    tNULL = 391,
    tOBJECT = 392,
    tODL = 393,
    tOLEAUTOMATION = 394,
    tOPTIMIZE = 395,
    tOPTIONAL = 396,
    tOUT = 397,
    tOVERLOAD = 398,
    tPARTIALIGNORE = 399,
    tPASCAL = 400,
    tPOINTERDEFAULT = 401,
    tPRAGMA_WARNING = 402,
    tPROGID = 403,
    tPROPERTIES = 404,
    tPROPGET = 405,
    tPROPPUT = 406,
    tPROPPUTREF = 407,
    tPROXY = 408,
    tPTR = 409,
    tPUBLIC = 410,
    tRANGE = 411,
    tREADONLY = 412,
    tREF = 413,
    tREGISTER = 414,
    tREPRESENTAS = 415,
    tREQUESTEDIT = 416,
    tREQUIRES = 417,
    tRESTRICTED = 418,
    tRETVAL = 419,
    tRUNTIMECLASS = 420,
    tSAFEARRAY = 421,
    tSHORT = 422,
    tSIGNED = 423,
    tSINGLENODE = 424,
    tSIZEIS = 425,
    tSIZEOF = 426,
    tSMALL = 427,
    tSOURCE = 428,
    tSTANDARD = 429,
    tSTATIC = 430,
    tSTDCALL = 431,
    tSTRICTCONTEXTHANDLE = 432,
    tSTRING = 433,
    tSTRUCT = 434,
    tSWITCH = 435,
    tSWITCHIS = 436,
    tSWITCHTYPE = 437,
    tTHREADING = 438,
    tTRANSMITAS = 439,
    tTRUE = 440,
    tTYPEDEF = 441,
    tUIDEFAULT = 442,
    tUNION = 443,
    tUNIQUE = 444,
    tUNSIGNED = 445,
    tUSESGETLASTERROR = 446,
    tUSERMARSHAL = 447,
    tUUID = 448,
    tV1ENUM = 449,
    tVARARG = 450,
    tVERSION = 451,
    tVIPROGID = 452,
    tVOID = 453,
    tWCHAR = 454,
    tWIREMARSHAL = 455,
    tAPARTMENT = 456,
    tNEUTRAL = 457,
    tSINGLE = 458,
    tFREE = 459,
    tBOTH = 460,
    CAST = 461,
    PPTR = 462,
    POS = 463,
    NEG = 464,
    ADDRESSOF = 465
  };
#endif

/* Value type.  */
#if ! defined PARSER_STYPE && ! defined PARSER_STYPE_IS_DECLARED

union PARSER_STYPE
{
#line 126 "../wine-source/tools/widl/parser.y" /* yacc.c:1909  */

	attr_t *attr;
	attr_list_t *attr_list;
	str_list_t *str_list;
	expr_t *expr;
	expr_list_t *expr_list;
	type_t *type;
	var_t *var;
	var_list_t *var_list;
	declarator_t *declarator;
	declarator_list_t *declarator_list;
	statement_t *statement;
	statement_list_t *stmt_list;
	warning_t *warning;
	warning_list_t *warning_list;
	typeref_t *typeref;
	typeref_list_t *typeref_list;
	char *str;
	struct uuid *uuid;
	unsigned int num;
	double dbl;
	typelib_t *typelib;
	struct _import_t *import;
	struct _decl_spec_t *declspec;
	enum storage_class stgclass;
	enum type_qualifier type_qualifier;
	enum function_specifier function_specifier;
	struct namespace *namespace;

#line 303 "tools/widl/parser.tab.h" /* yacc.c:1909  */
};

typedef union PARSER_STYPE PARSER_STYPE;
# define PARSER_STYPE_IS_TRIVIAL 1
# define PARSER_STYPE_IS_DECLARED 1
#endif


extern PARSER_STYPE parser_lval;

int parser_parse (void);

#endif /* !YY_PARSER_TOOLS_WIDL_PARSER_TAB_H_INCLUDED  */
