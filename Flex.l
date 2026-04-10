%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>
#include "Bison.tab.h"


%}
SONGKA [0-9]+(\.[0-9]+)? 
BORNOMALA      [a-zA-Z_][a-zA-Z0-9_]*

%%
  

"+"             { return JUG; }
"-"             { return BIYUG; }
"*"             { return GUN; }
"/"             { return VAG; }

"borgo"        { return BORGO; }
"borgomul"       { return BORGOMUL; }

"dekhau"         { return DEKHAU; } //print

"jodi"          { return JODI; } //if
"othoba"        { return OTHOBA; } //else
"jotokhon"       { return JOTOKHON; } //while
"jonno"          { return JONNO; } //for
"biroti"         { return BIROTI; } //break
"choluk"         { return CHOLUK; } //continue
"ferot"         { return FEROT; } //return


"sajau"        { return SAJAU; }
"chuto_thake"           { return CHUTO_THAKE; }
"boro_thake"          { return BORO_THAKE; }

"ulta"  {return ULTA ;} 

"palindrome"     { return PALINDROME; } 

"sorbucho"  { return SORBUCHO; }  
"sorbonimno" { return SORBONIMNO; } 

"ditiyo_sorbucho"  { return DITIYO_SORBUCHO; }  
"ditiyo_sorbonimno" { return DITIYO_SORBONIMNO; } 


"=="            { return SOMAN; }
"!="            { return OSOMAN; }
"<"             { return CHOTO; }
">"             { return BORO; }
"<= "            { return CHOTO_SOMAN; }
">= "            { return BORO_SOMAN; }
"&&"             { return ABONG; }
"||"             { return BA; }
"!"             { return NA; }

"("            { return BBONDONI; }
")"            { return DBONDONI; }
"arman"          { return ARMAN; }
"="              { return ARMAN; }
"["            { return BT_BONDONI; }
"]"            { return DT_BONDONI; }
","             { return COMMA; }
";"             { return ';'; }



{SONGKA}        { yylval.songka= atof(yytext); return SONGKA; }
{BORNOMALA}     { yylval.bornomala= strdup(yytext); return BORNOMALA; }


[ \t\r\n]+           ;   
.               { printf("অজানা চিহ্ন: %s\n", yytext); }

%%