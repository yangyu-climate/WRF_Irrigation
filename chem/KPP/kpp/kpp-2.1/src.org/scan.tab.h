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

#ifndef YY_YY_SCAN_TAB_H_INCLUDED
# define YY_YY_SCAN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    JACOBIAN = 258,
    DOUBLE = 259,
    FUNCTION = 260,
    DEFVAR = 261,
    DEFRAD = 262,
    DEFFIX = 263,
    SETVAR = 264,
    SETRAD = 265,
    SETFIX = 266,
    HESSIAN = 267,
    STOICMAT = 268,
    STOCHASTIC = 269,
    INITVALUES = 270,
    EQUATIONS = 271,
    LUMP = 272,
    INIEQUAL = 273,
    EQNEQUAL = 274,
    EQNCOLON = 275,
    LMPCOLON = 276,
    LMPPLUS = 277,
    SPCPLUS = 278,
    SPCEQUAL = 279,
    ATOMDECL = 280,
    CHECK = 281,
    CHECKALL = 282,
    REORDER = 283,
    MEX = 284,
    DUMMYINDEX = 285,
    EQNTAGS = 286,
    LOOKAT = 287,
    LOOKATALL = 288,
    TRANSPORT = 289,
    TRANSPORTALL = 290,
    MONITOR = 291,
    USES = 292,
    SPARSEDATA = 293,
    WRFCONFORM = 294,
    WRITE_ATM = 295,
    WRITE_SPC = 296,
    WRITE_MAT = 297,
    WRITE_OPT = 298,
    INITIALIZE = 299,
    XGRID = 300,
    YGRID = 301,
    ZGRID = 302,
    USE = 303,
    LANGUAGE = 304,
    INTFILE = 305,
    DRIVER = 306,
    RUN = 307,
    INLINE = 308,
    ENDINLINE = 309,
    PARAMETER = 310,
    SPCSPC = 311,
    INISPC = 312,
    INIVALUE = 313,
    EQNSPC = 314,
    EQNSIGN = 315,
    EQNCOEF = 316,
    RATE = 317,
    LMPSPC = 318,
    SPCNR = 319,
    ATOMID = 320,
    LKTID = 321,
    MNIID = 322,
    INLCTX = 323,
    INCODE = 324,
    SSPID = 325,
    EQNLESS = 326,
    EQNTAG = 327,
    EQNGREATER = 328,
    TPTID = 329,
    USEID = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "scan.y" /* yacc.c:1909  */

  char str[80];

#line 134 "scan.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SCAN_TAB_H_INCLUDED  */
