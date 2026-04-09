%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
int yyerror(const char *s);
extern FILE *yyin;


typedef struct{
    char variable_Name[100];
    double variable_Value;
    int is_Assigned;
} Variable;

Variable vars[100];
int var_Count = 0;


double get_Variable_Value(char *name) {
    for (int i = 0; i < var_Count; i++) {
        if (strcmp(vars[i].variable_Name, name) == 0) {
            if (vars[i].is_Assigned) {
                return vars[i].variable_Value;
            } else {
                printf("ভেরিয়েবল '%s' এর মান নির্ধারণ করা হয়নি।\n", name);
                return 0;
            }
        }
    }
    printf("ভেরিয়েবল '%s' পাওয়া যায়নি।\n", name);
    return 0;
}

void set_Variable_Value(char *name, double value) {
    for (int i = 0; i < var_Count; i++) {
        if (strcmp(vars[i].variable_Name, name) == 0) {
            vars[i].variable_Value = value;
            vars[i].is_Assigned = 1;
            return;
        }
    }

    strcpy(vars[var_Count].variable_Name, name);
    vars[var_Count].variable_Value = value;
    vars[var_Count].is_Assigned = 1;
    var_Count++;
}

%}



%union {
    double songka;
    char *bornomala;
}



%token <bornomala> BORNOMALA
%token <songka> SONGKA

%token JUG BIYUG GUN VAG
%token DEKHAU
%token JODI OTHOBA
%token SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN
%token JOTOKHON BIROTI CHOLUK FEROT ABONG BA JONNO
%token AND OR NA
%token BBONDONI DBONDONI
%token ARMAN



%type <songka> exp condition statement 



%left OR
%left AND
%right NA
%left SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN
%left JUG BIYUG
%left GUN VAG



%%



input:
   
    | input statement_list
    ;

statement_list:
    statement
    | statement_list statement
    ;




statement:
      exp {
          printf("%lf\n", $1);
          $$ = $1;
      }

    | BORNOMALA ARMAN exp {
        set_Variable_Value($1, $3);
        printf("%lf\n", $3);
        $$ = $3;
      }

    | DEKHAU BBONDONI exp DBONDONI {
        printf("%lf\n", $3);
        $$ = $3;
      }

    | DEKHAU BBONDONI BORNOMALA DBONDONI {
        double val = get_Variable_Value($3);
        printf("%lf\n", val);
        $$ = val;
      }

    | JODI BBONDONI condition DBONDONI BBONDONI statement DBONDONI {
        if ($3) $$ = $6;
        else $$ = 0;
      }

    | JODI BBONDONI condition DBONDONI BBONDONI statement DBONDONI
      OTHOBA BBONDONI statement DBONDONI {
        if ($3) $$ = $6;
        else $$ = $10;
      }
;



exp:
      SONGKA { $$ = $1; }

    | BORNOMALA { $$ = get_Variable_Value($1); }

    | exp JUG exp { $$ = $1 + $3; }
    | exp BIYUG exp { $$ = $1 - $3; }
    | exp GUN exp { $$ = $1 * $3; }
    | exp VAG exp { $$ = $1 / $3; }

    | BBONDONI exp DBONDONI { $$ = $2; }
;



condition:
      exp SOMAN exp { $$ = ($1 == $3); }
    | exp OSOMAN exp { $$ = ($1 != $3); }
    | exp CHOTO exp { $$ = ($1 < $3); }
    | exp BORO exp { $$ = ($1 > $3); }
    | exp CHOTO_SOMAN exp { $$ = ($1 <= $3); }
    | exp BORO_SOMAN exp { $$ = ($1 >= $3); }

    | condition AND condition { $$ = ($1 && $3); }
    | condition OR condition { $$ = ($1 || $3); }
    | NA condition { $$ = (!$2); }
;

%%


int main()
{
    yyin = fopen("Input.txt", "r");


    yyparse();

    fclose(yyin);
    return 0;
}



int yyerror(const char *s)
{
    printf("ভুল হয়েছে : %s\n", s);
    return 0;
}
