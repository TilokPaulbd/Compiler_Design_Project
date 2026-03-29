%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include "Bison.tab.h"


%}
SONGKA [0-9]+(\.[0-9]+)? 
BOROMALA      [a-zA-Z_][a-zA-Z0-9_]*

%%
  

{SONGKA}        { yylval.songka= atof(yytext); return SONGKA; }
{BOROMALA}     { yylval.bornomala= strdup(yytext); return BOROMALA; }


"+"             { return JUG; }
"-"             { return BIYUG; }
"*"             { return GUN; }
"/"             { return VAG; }

\n              { return SAS; }
[ \t]           ;   
.               { printf("অজানা চিহ্ন: %s\n", yytext); }

%%