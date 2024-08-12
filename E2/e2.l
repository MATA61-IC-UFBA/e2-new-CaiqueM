/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"
int yyval;
%}

%%
[0-9]+{
    yyval = atoi(yytext);
    return NUMBER;
}

"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return TIMES; }
"/"     { return DIV; }
.       { return ERROR; }
[ \t]   {}
%%





