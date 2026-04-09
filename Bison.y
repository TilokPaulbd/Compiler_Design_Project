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

%token BOROMALA JUG BIYUG GUN VAG 
%token <bornomala> BORNOMALA
%token DEKHAU
%token JODI OTHOBA JOTOKHON JONNO BIROTI CHOLUK FEROT 
%token SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN ABONG BA NA
%token BBONDONI DBONDONI
%token <songka> SONGKA

%type <songka> exp
%type <songka> condition
%type <songka> statement

%left OR
%left AND
%left NA
%left SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN
%left JUG BIYUG
%left GUN VAG

%nonassoc LOWER_THAN_ELSE
%nonassoc OTHOBA
%%

input:
    
|   input statement {printf("%lf\n",$2);}
;

statement:
    exp { $$ = $1; }
|   DEKHAU BBONDONI exp DBONDONI  {$$ = $3; }
|   DEKHAU BBONDONI BORNOMALA DBONDONI {  $$ = $3; }
|   JODI BBONDONI condition DBONDONI BBONDONI statement DBONDONI { if ($3) $$ = $6;else $$ = 0; }
|   JODI BBONDONI condition DBONDONI BBONDONI statement DBONDONI OTHOBA BBONDONI statement DBONDONI { if ($3) $$ = $6; else $$ = $10; }
;   



exp:
    SONGKA { $$ = $1; }
|   exp JUG exp { $$ = $1 + $3; }
|   exp BIYUG exp { $$ = $1 - $3; }
|   exp GUN exp   { $$ = $1 * $3; }
|   exp VAG exp   { $$ = $1 / $3; }
| BBONDONI exp DBONDONI { $$ = $2; printf("%lf\n",$2);}
| BBONDONI exp JUG exp DBONDONI { $$ = $2 + $4; printf("%lf\n",$2 + $4); }
| BBONDONI exp BIYUG exp DBONDONI { $$ = $2 - $4; printf("%lf\n",$2 - $4); }
| BBONDONI exp GUN exp DBONDONI { $$ = $2 * $4 ; printf("%lf\n",$2 * $4); }
| BBONDONI exp VAG exp DBONDONI { $$ = $2 / $4 ; printf("%lf\n",$2 / $4); }

;

condition:
    exp SOMAN exp { $$ = ($1 == $3); }
|   exp OSOMAN exp { $$ = ($1 != $3); }
|   exp CHOTO exp { $$ = ($1 < $3); }
|   exp BORO exp { $$ = ($1 > $3); }
|   exp CHOTO_SOMAN exp { $$ = ($1 <= $3); }
|   exp BORO_SOMAN exp { $$ = ($1 >= $3); }
|   exp AND exp { $$ = ($1 && $3); }
|   exp OR exp { $$ = ($1 || $3); }
|   exp NA exp { $$ = (!$1); }
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