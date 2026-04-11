/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BORNOMALA = 258,               /* BORNOMALA  */
    SONGKA = 259,                  /* SONGKA  */
    JUG = 260,                     /* JUG  */
    BIYUG = 261,                   /* BIYUG  */
    GUN = 262,                     /* GUN  */
    VAG = 263,                     /* VAG  */
    BORGOMUL = 264,                /* BORGOMUL  */
    BORGO = 265,                   /* BORGO  */
    DEKHAU = 266,                  /* DEKHAU  */
    JODI = 267,                    /* JODI  */
    OTHOBA = 268,                  /* OTHOBA  */
    SOMAN = 269,                   /* SOMAN  */
    OSOMAN = 270,                  /* OSOMAN  */
    CHOTO = 271,                   /* CHOTO  */
    BORO = 272,                    /* BORO  */
    CHOTO_SOMAN = 273,             /* CHOTO_SOMAN  */
    BORO_SOMAN = 274,              /* BORO_SOMAN  */
    JOTOKHON = 275,                /* JOTOKHON  */
    BIROTI = 276,                  /* BIROTI  */
    CHOLUK = 277,                  /* CHOLUK  */
    FEROT = 278,                   /* FEROT  */
    ABONG = 279,                   /* ABONG  */
    BA = 280,                      /* BA  */
    JONNO = 281,                   /* JONNO  */
    NA = 282,                      /* NA  */
    BBONDONI = 283,                /* BBONDONI  */
    DBONDONI = 284,                /* DBONDONI  */
    BT_BONDONI = 285,              /* BT_BONDONI  */
    DT_BONDONI = 286,              /* DT_BONDONI  */
    ARMAN = 287,                   /* ARMAN  */
    COMMA = 288,                   /* COMMA  */
    SAJAU = 289,                   /* SAJAU  */
    CHUTO_THAKE = 290,             /* CHUTO_THAKE  */
    BORO_THAKE = 291,              /* BORO_THAKE  */
    PALINDROME = 292,              /* PALINDROME  */
    ULTA = 293,                    /* ULTA  */
    SORBUCHO = 294,                /* SORBUCHO  */
    SORBONIMNO = 295,              /* SORBONIMNO  */
    DITIYO_SORBUCHO = 296,         /* DITIYO_SORBUCHO  */
    DITIYO_SORBONIMNO = 297        /* DITIYO_SORBONIMNO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "Bison.y"
                                    /* union bebohar kori sob type er data use korar jonno .nahole sudu ek type er data bebohar korthe partam*/   
    double songka;
    char *bornomala;
    struct {
        double values[100];
        int count;
    } array_Data;

#line 115 "Bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
