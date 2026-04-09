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
    DEKHAU = 264,                  /* DEKHAU  */
    JODI = 265,                    /* JODI  */
    OTHOBA = 266,                  /* OTHOBA  */
    SOMAN = 267,                   /* SOMAN  */
    OSOMAN = 268,                  /* OSOMAN  */
    CHOTO = 269,                   /* CHOTO  */
    BORO = 270,                    /* BORO  */
    CHOTO_SOMAN = 271,             /* CHOTO_SOMAN  */
    BORO_SOMAN = 272,              /* BORO_SOMAN  */
    JOTOKHON = 273,                /* JOTOKHON  */
    BIROTI = 274,                  /* BIROTI  */
    CHOLUK = 275,                  /* CHOLUK  */
    FEROT = 276,                   /* FEROT  */
    ABONG = 277,                   /* ABONG  */
    BA = 278,                      /* BA  */
    JONNO = 279,                   /* JONNO  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    NA = 282,                      /* NA  */
    BBONDONI = 283,                /* BBONDONI  */
    DBONDONI = 284,                /* DBONDONI  */
    ARMAN = 285                    /* ARMAN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "Bison.y"

    double songka;
    char *bornomala;

#line 99 "Bison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
