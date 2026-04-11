%option noyywrap 
/* Flex ka bole dey yywrap() function lagbe na */

%{
/* Declaration Section */
#include <stdio.h>
#include <stdlib.h>                                    /* atof() use korar jonno (string thake  float a convert kore) */
#include "Bison.tab.h"                                 /* flex jathe bison a define kora toknen gula chinthe pare */ 


%}
SONGKA [0-9]+(\.[0-9]+)?                              
BORNOMALA      [a-zA-Z_][a-zA-Z0-9_]*

%%                                                      /* Rules Section */
  

"+"             { return JUG; }                        /* flex jokhon + dekbe tokhon JUG token return korbe */
"-"             { return BIYUG; }
"*"             { return GUN; }
"/"             { return VAG; }

"borgo"        { return BORGO; }                       /* power */
"borgomul"       { return BORGOMUL; }                  /* sqrt */

"dekhau"         { return DEKHAU; }                    /* print */

"jodi"          { return JODI; }                        /* if */
"othoba"        { return OTHOBA; }                      /* else */
"jotokhon"       { return JOTOKHON; }                   /* while */
"jonno"          { return JONNO; }                      /* for */
"biroti"         { return BIROTI; }                     /* break */
"choluk"         { return CHOLUK; }                     /* continue */
"ferot"         { return FEROT; }                       /* return */


"sajau"           { return SAJAU; }                      /* sorting */
"chuto_thake"      { return CHUTO_THAKE; }               /* sorting chuto tahke boro */
"boro_thake"       { return BORO_THAKE; }                 /* sorting boro tahke chuto */

"ulta"  {return ULTA ;}                                   /* reverse */

"palindrome"     { return PALINDROME; }                

"sorbucho"  { return SORBUCHO; }                          /* maximum */
"sorbonimno" { return SORBONIMNO; }                       /* minimum */

"ditiyo_sorbucho"  { return DITIYO_SORBUCHO; }             /* second max */
"ditiyo_sorbonimno" { return DITIYO_SORBONIMNO; }          /* second min */


"=="            { return SOMAN; }
"!="            { return OSOMAN; }
"<"             { return CHOTO; }
">"             { return BORO; }
"<="            { return CHOTO_SOMAN; }
">="            { return BORO_SOMAN; }
"&&"             { return ABONG; }
"||"             { return BA; }
"!"             { return NA; }

"("            { return BBONDONI; }
")"            { return DBONDONI; }
"erman"          { return ARMAN; }                       /* = lekhleu assign korbe aber erman lekhleu */
"="              { return ARMAN; }
"["            { return BT_BONDONI; }
"]"            { return DT_BONDONI; }
","             { return COMMA; }
";"             { return ';'; }


   /*Flex thake number variable er value yylval er madhome Bison patay .jathe bison token er sathe actual datau pay*/                                                               
{SONGKA}        { yylval.songka= atof(yytext); return SONGKA; } 
{BORNOMALA}     { yylval.bornomala= strdup(yytext); return BORNOMALA; }

[ \t\r\n]+      { }
.               { printf("Ojana Chinno : %s\n", yytext); }                 /* uporer ja ache tar baire onno kicu thakle */

%%