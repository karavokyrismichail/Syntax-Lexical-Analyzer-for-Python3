%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
%}
 
%option yylineno

digit   [0-9]
num    {digit}+
float	[0-9]*\.[0-9]+

%%
{num} {yylval.f = atoi(yytext); return INT;}
{float}	{ yylval.f = atof(yytext); return FLOAT;}                                    
"#" {return HASH;}
"\t" {return TAB;}
"from"  {return FROM;}
"as"  {return AS;}
"elif"  {return ELIF;}
"else"  {return ELSE;}
"if"  {return IF;}
"import"  {return IMPORT;}
"print"  {return PRINT;}
"class"  {return CLASS;}
"in"  {return IN;}
"is" {return IS;}
"def" {return DEF;}
"for" {return FOR;}
"(" {return OPBR;}
")" {return CLBR;}
"[" {return OPSQ;}
"]" {return CLSQ;}
"{" {return OPCL;}
"}" {return CLCL;}
"_" {return US;}
"." {return DOT;}
"," {return CO;}
":" {return COLLON;}
"'" {return DQ;}
"=" {return EQUAL;}
"+"    { return '+'; }
"-"    { return '-'; }
"*"    { return '*'; }
"/"    { return '/'; }
"+="|"-="|"*="|"/="|"%="|"**="|">>="|"<<="|"&="|"^=" {return RELOP;}
"<"|">"|">="|"<="|"<>"|"!="|"==" {return COMPOP;}
"\n" {return NEWLINE;} // ANY CHARACTER BETWEEN NEWLINE OR TAB
"dict" {return DICT;}
".items()" {return ITEMS;}
".setdefault" {return SETDEFAULT;}
"self" {return SELF;}
"range" {return RANGE;}
"lambda" {return LAMBDA;}
[a-zA-Z][a-zA-Z0-9_]* { yylval.s = strdup(yytext); return ID;}
"__init__" {return INIT;}
#.* { return COMMENT;}


%%
int yywrap(){
    return 1;
}
