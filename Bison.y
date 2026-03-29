%{
#include <stdio.h>

int yylex(void);
int yyerror(const char *s);
extern FILE *yyin;

%}

%union {
    double songka;
    char *bornomala;
}

%token BOROMALA JUG BIYUG GUN VAG SAS
%token <songka> SONGKA   
%type <songka> exp
%left JUG BIYUG
%left GUN VAG

%%

input:
    
|   input exp SAS { printf("উত্তর: %lf\n", $2); }
;

exp:
    SONGKA { $$ = $1; }
|   exp JUG exp { $$ = $1 + $3; }
|   exp BIYUG exp { $$ = $1 - $3; }
|   exp GUN exp   { $$ = $1 * $3; }
|   exp VAG exp   { $$ = $1 / $3; }
;

%%

int main()
{
    yyin = fopen("Input.txt","r");
    double result = yyparse();
    fclose(yyin);
    return result;
}

int yyerror(const char *s)
{
    printf("ভুল হয়েছে : %s\n", s);
    return 0;
}