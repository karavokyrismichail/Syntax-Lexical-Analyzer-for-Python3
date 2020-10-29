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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    RELOP = 260,
    COMPOP = 261,
    HASH = 262,
    FROM = 263,
    AS = 264,
    ELIF = 265,
    ELSE = 266,
    IF = 267,
    IMPORT = 268,
    PRINT = 269,
    CLASS = 270,
    IN = 271,
    IS = 272,
    DEF = 273,
    FOR = 274,
    OPBR = 275,
    CLBR = 276,
    OPSQ = 277,
    CLSQ = 278,
    SETDEFAULT = 279,
    COMMENT = 280,
    OPCL = 281,
    CLCL = 282,
    US = 283,
    DQ = 284,
    DOT = 285,
    CO = 286,
    COLLON = 287,
    ID = 288,
    SPACE = 289,
    NEWLINE = 290,
    TAB = 291,
    INIT = 292,
    SELF = 293,
    RANGE = 294,
    EQUAL = 295,
    LAMBDA = 296,
    DICT = 297,
    ITEMS = 298
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define RELOP 260
#define COMPOP 261
#define HASH 262
#define FROM 263
#define AS 264
#define ELIF 265
#define ELSE 266
#define IF 267
#define IMPORT 268
#define PRINT 269
#define CLASS 270
#define IN 271
#define IS 272
#define DEF 273
#define FOR 274
#define OPBR 275
#define CLBR 276
#define OPSQ 277
#define CLSQ 278
#define SETDEFAULT 279
#define COMMENT 280
#define OPCL 281
#define CLCL 282
#define US 283
#define DQ 284
#define DOT 285
#define CO 286
#define COLLON 287
#define ID 288
#define SPACE 289
#define NEWLINE 290
#define TAB 291
#define INIT 292
#define SELF 293
#define RANGE 294
#define EQUAL 295
#define LAMBDA 296
#define DICT 297
#define ITEMS 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "bison.y" /* yacc.c:1909  */

	float f;
	char *s;

#line 145 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
