/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Bison.tab.h"

int yylex(void);                       /*Flex sudhu rules likhe, oi rules thake toiri houa function yylex() token banay */
int yyerror(const char *s);            /*syntax error dhorar jonno ar error message dekhanur jonno */
extern FILE *yyin;                     /*input file thake newar jonno */



double pow_function(double base, double exponent);
double sqrt_function(double value);

typedef struct{
    char variable_Name[100];
    double variable_Value;
    int is_Assigned;
} Variable;




Variable vars[100];                   /* variable type er array*/
int var_Count = 0;





double get_Variable_Value(char *name);
void set_Variable_Value(char *name, double value);









typedef struct{
    char array_Name[100];
    double array_Values[100];  
    int size;                   
    int is_Initialized;
} ArrayVariable;




ArrayVariable arrays[100];
int array_Count = 0;




int get_Array_Index(char *name);
double get_Array_Value(char *name, int index);
void set_Array_Value(char *name, int index, double value);
void initialize_Array_With_Values(char *name, double *values, int size);




void sort_Array(char *name, int order);


int is_palindrome_string(char *str);
int is_palindrome_number(int num);

double get_largest_from_array(char *array_name);
double get_smallest_from_array(char *array_name);



double get_second_largest_from_array(char *array_name) ;
double get_second_smallest_from_array(char *array_name) ;

double reverse_number(int num);
char* reverse_string(char *str) ;


#line 157 "Bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BORNOMALA = 3,                  /* BORNOMALA  */
  YYSYMBOL_SONGKA = 4,                     /* SONGKA  */
  YYSYMBOL_JUG = 5,                        /* JUG  */
  YYSYMBOL_BIYUG = 6,                      /* BIYUG  */
  YYSYMBOL_GUN = 7,                        /* GUN  */
  YYSYMBOL_VAG = 8,                        /* VAG  */
  YYSYMBOL_BORGOMUL = 9,                   /* BORGOMUL  */
  YYSYMBOL_BORGO = 10,                     /* BORGO  */
  YYSYMBOL_DEKHAU = 11,                    /* DEKHAU  */
  YYSYMBOL_JODI = 12,                      /* JODI  */
  YYSYMBOL_OTHOBA = 13,                    /* OTHOBA  */
  YYSYMBOL_SOMAN = 14,                     /* SOMAN  */
  YYSYMBOL_OSOMAN = 15,                    /* OSOMAN  */
  YYSYMBOL_CHOTO = 16,                     /* CHOTO  */
  YYSYMBOL_BORO = 17,                      /* BORO  */
  YYSYMBOL_CHOTO_SOMAN = 18,               /* CHOTO_SOMAN  */
  YYSYMBOL_BORO_SOMAN = 19,                /* BORO_SOMAN  */
  YYSYMBOL_JOTOKHON = 20,                  /* JOTOKHON  */
  YYSYMBOL_BIROTI = 21,                    /* BIROTI  */
  YYSYMBOL_CHOLUK = 22,                    /* CHOLUK  */
  YYSYMBOL_FEROT = 23,                     /* FEROT  */
  YYSYMBOL_ABONG = 24,                     /* ABONG  */
  YYSYMBOL_BA = 25,                        /* BA  */
  YYSYMBOL_JONNO = 26,                     /* JONNO  */
  YYSYMBOL_NA = 27,                        /* NA  */
  YYSYMBOL_BBONDONI = 28,                  /* BBONDONI  */
  YYSYMBOL_DBONDONI = 29,                  /* DBONDONI  */
  YYSYMBOL_BT_BONDONI = 30,                /* BT_BONDONI  */
  YYSYMBOL_DT_BONDONI = 31,                /* DT_BONDONI  */
  YYSYMBOL_ARMAN = 32,                     /* ARMAN  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_SAJAU = 34,                     /* SAJAU  */
  YYSYMBOL_CHUTO_THAKE = 35,               /* CHUTO_THAKE  */
  YYSYMBOL_BORO_THAKE = 36,                /* BORO_THAKE  */
  YYSYMBOL_PALINDROME = 37,                /* PALINDROME  */
  YYSYMBOL_ULTA = 38,                      /* ULTA  */
  YYSYMBOL_SORBUCHO = 39,                  /* SORBUCHO  */
  YYSYMBOL_SORBONIMNO = 40,                /* SORBONIMNO  */
  YYSYMBOL_DITIYO_SORBUCHO = 41,           /* DITIYO_SORBUCHO  */
  YYSYMBOL_DITIYO_SORBONIMNO = 42,         /* DITIYO_SORBONIMNO  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_input = 44,                     /* input  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_BLOCK = 46,                     /* BLOCK  */
  YYSYMBOL_statement_list = 47,            /* statement_list  */
  YYSYMBOL_array_value_list = 48,          /* array_value_list  */
  YYSYMBOL_array_values = 49,              /* array_values  */
  YYSYMBOL_index_expr = 50,                /* index_expr  */
  YYSYMBOL_exp = 51,                       /* exp  */
  YYSYMBOL_condition = 52                  /* condition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   142,   142,   144,   148,   150,   154,   160,   165,   172,
     176,   181,   186,   190,   196,   210,   224,   230,   242,   252,
     263,   276,   290,   297,   306,   315,   325,   334,   345,   348,
     366,   379,   382,   394,   397,   409,   413,   427,   430,   440,
     441,   442,   445,   448,   449,   450,   451,   459,   465,   472,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BORNOMALA", "SONGKA",
  "JUG", "BIYUG", "GUN", "VAG", "BORGOMUL", "BORGO", "DEKHAU", "JODI",
  "OTHOBA", "SOMAN", "OSOMAN", "CHOTO", "BORO", "CHOTO_SOMAN",
  "BORO_SOMAN", "JOTOKHON", "BIROTI", "CHOLUK", "FEROT", "ABONG", "BA",
  "JONNO", "NA", "BBONDONI", "DBONDONI", "BT_BONDONI", "DT_BONDONI",
  "ARMAN", "COMMA", "SAJAU", "CHUTO_THAKE", "BORO_THAKE", "PALINDROME",
  "ULTA", "SORBUCHO", "SORBONIMNO", "DITIYO_SORBUCHO", "DITIYO_SORBONIMNO",
  "$accept", "input", "statement", "BLOCK", "statement_list",
  "array_value_list", "array_values", "index_expr", "exp", "condition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -117,   104,  -117,    25,  -117,   -25,   -22,   -17,    -7,     5,
    -117,  -117,    43,    33,    11,    15,    26,    35,    38,    42,
    -117,   194,    45,    28,    43,    43,    78,    41,    41,    56,
      54,    66,   107,    81,    69,    86,    89,   100,    43,    43,
      43,    43,  -117,    64,    74,    43,   194,    92,     2,    90,
     128,    41,    41,   358,    -5,    93,   146,  -117,  -117,  -117,
      83,    94,   122,   162,    98,   102,   110,   133,   153,   153,
    -117,  -117,    97,   139,   148,   147,   194,  -117,    43,  -117,
    -117,  -117,   342,   134,    43,    43,    43,    43,    43,    43,
      41,    41,   161,   164,   159,   166,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,    43,    43,  -117,    43,   169,  -117,
     194,   194,   194,   194,   194,   194,  -117,   179,   304,   195,
     304,  -117,  -117,  -117,   194,   194,   194,  -117,  -117,   144,
     181,   184,   197,  -117,   304,  -117,  -117,   183,   224,   304,
    -117,   264,  -117
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    40,    39,     0,     0,     0,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     5,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,    33,     6,     0,     0,    40,
       0,     0,     0,     0,     0,     0,     0,    47,    12,    13,
       0,     0,    40,     0,     0,     0,     0,     0,    43,    44,
      45,    46,    41,    42,     0,    34,    35,    49,     0,     8,
       7,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    17,    16,
      18,    19,    20,    21,     0,     0,     9,     0,     0,    59,
      50,    51,    52,    53,    54,    55,    56,    57,     4,    22,
       4,    26,    41,    42,    10,    11,    36,    48,    31,     0,
       0,     0,    24,    32,     4,    23,    27,     0,     0,     4,
      30,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,    -1,   -88,  -116,  -117,  -117,   151,   -11,   -26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,   128,   119,   129,    74,    75,    44,    21,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    30,    55,    24,   131,   121,    25,    38,    39,    40,
      41,    26,    46,    47,    48,    50,    53,    53,   138,    90,
      91,    27,    63,   141,    92,    81,    83,    68,    69,    70,
      71,    29,     4,    28,    76,    78,    31,     5,     6,    32,
      53,    82,   135,    33,    29,     4,    29,     4,    42,    43,
       5,     6,     5,     6,    34,    22,    12,    23,    45,    38,
      39,    40,    41,    35,   116,   117,    36,   108,    51,    52,
      37,    12,    64,   110,   111,   112,   113,   114,   115,    53,
      53,    49,     4,    57,    62,     4,    56,     5,     6,    65,
       5,     6,    66,   124,   125,    72,   126,    38,    39,    40,
      41,    58,    59,    67,     2,    73,    12,     3,     4,    12,
      60,    61,    96,     5,     6,     7,     8,    90,    91,    79,
      56,    77,    93,    97,     9,    10,    11,   100,   133,   104,
     133,   101,    12,    38,    39,    40,    41,   133,    13,   102,
     133,    14,    15,    16,    17,    18,    19,     3,     4,    42,
      94,    98,    56,     5,     6,     7,     8,    80,    90,    91,
      40,    41,   103,   109,     9,    10,    11,    38,    39,    40,
      41,   105,    12,   132,    38,    39,    40,    41,    13,   106,
     107,    14,    15,    16,    17,    18,    19,     3,     4,   118,
     122,    99,   120,     5,     6,     7,     8,   123,   127,    38,
      39,    40,    41,    90,     9,    10,    11,    95,   130,   134,
     137,   139,    12,   136,     0,     0,     0,     0,    13,     0,
       0,    14,    15,    16,    17,    18,    19,     3,     4,     0,
       0,     0,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,    12,   140,     0,     0,     0,     0,    13,     0,
       0,    14,    15,    16,    17,    18,    19,     3,     4,     0,
       0,     0,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,    12,   142,     0,     0,     0,     0,    13,     0,
       0,    14,    15,    16,    17,    18,    19,     3,     4,     0,
       0,     0,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,    13,     0,
       0,    14,    15,    16,    17,    18,    19,    38,    39,    40,
      41,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,     0,    38,    39,    40,    41,     0,     0,     0,
       0,    57,    84,    85,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       1,    12,    28,    28,   120,    93,    28,     5,     6,     7,
       8,    28,    23,    24,    25,    26,    27,    28,   134,    24,
      25,    28,    33,   139,    29,    51,    52,    38,    39,    40,
      41,     3,     4,    28,    45,    33,     3,     9,    10,    28,
      51,    52,   130,    28,     3,     4,     3,     4,     3,     4,
       9,    10,     9,    10,    28,    30,    28,    32,    30,     5,
       6,     7,     8,    28,    90,    91,    28,    78,    27,    28,
      28,    28,     3,    84,    85,    86,    87,    88,    89,    90,
      91,     3,     4,    29,     3,     4,    30,     9,    10,     3,
       9,    10,     3,   104,   105,    31,   107,     5,     6,     7,
       8,    35,    36,     3,     0,    31,    28,     3,     4,    28,
       3,     4,    29,     9,    10,    11,    12,    24,    25,    29,
      30,    29,    29,    29,    20,    21,    22,    29,   129,    32,
     131,    29,    28,     5,     6,     7,     8,   138,    34,    29,
     141,    37,    38,    39,    40,    41,    42,     3,     4,     3,
       4,    29,    30,     9,    10,    11,    12,    29,    24,    25,
       7,     8,    29,    29,    20,    21,    22,     5,     6,     7,
       8,    32,    28,    29,     5,     6,     7,     8,    34,    31,
      33,    37,    38,    39,    40,    41,    42,     3,     4,    28,
      31,    29,    28,     9,    10,    11,    12,    31,    29,     5,
       6,     7,     8,    24,    20,    21,    22,    56,    13,    28,
      13,    28,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,     3,     4,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,     3,     4,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,     3,     4,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    29,    14,    15,    16,    17,    18,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,     0,     3,     4,     9,    10,    11,    12,    20,
      21,    22,    28,    34,    37,    38,    39,    40,    41,    42,
      45,    51,    30,    32,    28,    28,    28,    28,    28,     3,
      51,     3,    28,    28,    28,    28,    28,    28,     5,     6,
       7,     8,     3,     4,    50,    30,    51,    51,    51,     3,
      51,    27,    28,    51,    52,    52,    30,    29,    35,    36,
       3,     4,     3,    51,     3,     3,     3,     3,    51,    51,
      51,    51,    31,    31,    48,    49,    51,    29,    33,    29,
      29,    52,    51,    52,    14,    15,    16,    17,    18,    19,
      24,    25,    29,    29,     4,    50,    29,    29,    29,    29,
      29,    29,    29,    29,    32,    32,    31,    33,    51,    29,
      51,    51,    51,    51,    51,    51,    52,    52,    28,    46,
      28,    46,    31,    31,    51,    51,    51,    29,    45,    47,
      13,    47,    29,    45,    28,    46,    29,    13,    47,    28,
      29,    47,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     3,     4,     4,     5,
       6,     6,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     7,     7,    11,     5,     7,     1,     1,
       3,     1,     2,     0,     1,     1,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     3,     3,     6,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* statement: exp  */
#line 150 "Bison.y"
          {
          printf("%lf\n", (yyvsp[0].songka));      /*1st er ta $1 then 2$ aivabe kaj kore */      
          (yyval.songka) = (yyvsp[0].songka);
      }
#line 1327 "Bison.tab.c"
    break;

  case 6: /* statement: BORNOMALA ARMAN exp  */
#line 154 "Bison.y"
                          {                           /* aigula  input a kivabe lekha thake call orbe oita */
        set_Variable_Value((yyvsp[-2].bornomala), (yyvsp[0].songka));
        printf("%lf\n", (yyvsp[0].songka));
        (yyval.songka) = (yyvsp[0].songka);
      }
#line 1337 "Bison.tab.c"
    break;

  case 7: /* statement: DEKHAU BBONDONI exp DBONDONI  */
#line 160 "Bison.y"
                                   {
        printf("%lf\n", (yyvsp[-1].songka));
        (yyval.songka) = (yyvsp[-1].songka);
      }
#line 1346 "Bison.tab.c"
    break;

  case 8: /* statement: DEKHAU BBONDONI BORNOMALA DBONDONI  */
#line 165 "Bison.y"
                                         {

        printf("%s\n", (yyvsp[-1].bornomala));
        (yyval.songka) = 0;                                   /* statement er return value 0 */
    }
#line 1356 "Bison.tab.c"
    break;

  case 9: /* statement: BORNOMALA ARMAN BT_BONDONI array_value_list DT_BONDONI  */
#line 172 "Bison.y"
                                                             {
        initialize_Array_With_Values((yyvsp[-4].bornomala), (yyvsp[-1].array_Data).values, (yyvsp[-1].array_Data).count);
        (yyval.songka) = 0;
      }
#line 1365 "Bison.tab.c"
    break;

  case 10: /* statement: BORNOMALA BT_BONDONI SONGKA DT_BONDONI ARMAN exp  */
#line 176 "Bison.y"
                                                       {
        set_Array_Value((yyvsp[-5].bornomala), (int)(yyvsp[-3].songka), (yyvsp[0].songka));                        /* $3  int type a convert convert kora hoiche */
        printf("%lf\n", (yyvsp[0].songka));
        (yyval.songka) = (yyvsp[0].songka);
      }
#line 1375 "Bison.tab.c"
    break;

  case 11: /* statement: BORNOMALA BT_BONDONI index_expr DT_BONDONI ARMAN exp  */
#line 181 "Bison.y"
                                                           {
        set_Array_Value((yyvsp[-5].bornomala), (yyvsp[-3].songka), (yyvsp[0].songka));
        printf("%lf\n", (yyvsp[0].songka));
        (yyval.songka) = (yyvsp[0].songka);
      }
#line 1385 "Bison.tab.c"
    break;

  case 12: /* statement: SAJAU BORNOMALA CHUTO_THAKE  */
#line 186 "Bison.y"
                                 {
        sort_Array((yyvsp[-1].bornomala), 1);
        (yyval.songka) = 0;
      }
#line 1394 "Bison.tab.c"
    break;

  case 13: /* statement: SAJAU BORNOMALA BORO_THAKE  */
#line 190 "Bison.y"
                                {
        sort_Array((yyvsp[-1].bornomala), 0);
        (yyval.songka) = 0;
      }
#line 1403 "Bison.tab.c"
    break;

  case 14: /* statement: PALINDROME BBONDONI BORNOMALA DBONDONI  */
#line 196 "Bison.y"
                                             {
        int result = is_palindrome_string((yyvsp[-1].bornomala));
        if (result) {
            printf("'%s' aita ekta palindrome\n", (yyvsp[-1].bornomala));
            printf("1\n");
            (yyval.songka) = 1;
        } else {
            printf("'%s' aita ekta palindrome na\n", (yyvsp[-1].bornomala));
            printf("0\n");
            (yyval.songka) = 0;
        }
    }
#line 1420 "Bison.tab.c"
    break;

  case 15: /* statement: PALINDROME BBONDONI SONGKA DBONDONI  */
#line 210 "Bison.y"
                                          {
        int result = is_palindrome_number((int)(yyvsp[-1].songka));
        if (result) {
            printf("%.0lf aita ekta palindrome\n", (yyvsp[-1].songka));
            printf("1\n");
            (yyval.songka) = 1;
        } else {
            printf("%.0lf aita ekta palindrome na\n", (yyvsp[-1].songka));
            printf("0\n");
            (yyval.songka) = 0;
        }
    }
#line 1437 "Bison.tab.c"
    break;

  case 16: /* statement: ULTA BBONDONI exp DBONDONI  */
#line 224 "Bison.y"
                                {
        double result = reverse_number((int)(yyvsp[-1].songka));
        printf("%.0lf er ulta sonkha %.0lf\n", (yyvsp[-1].songka), result);
        (yyval.songka) = result;
    }
#line 1447 "Bison.tab.c"
    break;

  case 17: /* statement: ULTA BBONDONI BORNOMALA DBONDONI  */
#line 230 "Bison.y"
                                        {
        char *result = reverse_string((yyvsp[-1].bornomala));              /* string return korar ekmatro way pointer use kora .nahole sudhu charecter return korbe */        
        printf("'%s' er ulta '%s'\n", (yyvsp[-1].bornomala), result);
        free(result);                       /*memory > use > free() > memory release */
        (yyval.songka) = 0;
    }
#line 1458 "Bison.tab.c"
    break;

  case 18: /* statement: SORBUCHO BBONDONI BORNOMALA DBONDONI  */
#line 242 "Bison.y"
                                           {
        double result = get_largest_from_array((yyvsp[-1].bornomala));
        printf("'%s' Sorbucho Songkha : %lf\n", (yyvsp[-1].bornomala), result);
        (yyval.songka) = result;
    }
#line 1468 "Bison.tab.c"
    break;

  case 19: /* statement: SORBONIMNO BBONDONI BORNOMALA DBONDONI  */
#line 252 "Bison.y"
                                             {
        double result = get_smallest_from_array((yyvsp[-1].bornomala));
        printf("'%s' Sorbonimno Songkha : %lf\n", (yyvsp[-1].bornomala), result);
        (yyval.songka) = result;
    }
#line 1478 "Bison.tab.c"
    break;

  case 20: /* statement: DITIYO_SORBUCHO BBONDONI BORNOMALA DBONDONI  */
#line 263 "Bison.y"
                                                  {
        double result = get_second_largest_from_array((yyvsp[-1].bornomala));
        if (result != -1) {                                       /* array tha 2nd largest na thakle function -1 return kore */
            printf("'%s' Ditio Sorbucho Songkha : %lf\n", (yyvsp[-1].bornomala), result);
        }
        (yyval.songka) = result;
    }
#line 1490 "Bison.tab.c"
    break;

  case 21: /* statement: DITIYO_SORBONIMNO BBONDONI BORNOMALA DBONDONI  */
#line 276 "Bison.y"
                                                     {
        double result = get_second_smallest_from_array((yyvsp[-1].bornomala));
        if (result != -1) {
            printf("'%s' Ditio Sorbonimno Songkha : %lf\n", (yyvsp[-1].bornomala), result);
        }
        (yyval.songka) = result;
    }
#line 1502 "Bison.tab.c"
    break;

  case 22: /* statement: JODI BBONDONI condition DBONDONI BLOCK  */
#line 290 "Bison.y"
                                             {
        if ((yyvsp[-2].songka)) {
            (yyval.songka) = (yyvsp[0].songka);
        } else {
            (yyval.songka) = 0;
        }
      }
#line 1514 "Bison.tab.c"
    break;

  case 23: /* statement: JODI BBONDONI condition DBONDONI BLOCK OTHOBA BLOCK  */
#line 297 "Bison.y"
                                                          {
        if ((yyvsp[-4].songka)) {
            (yyval.songka) = (yyvsp[-2].songka);
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            (yyval.songka) = (yyvsp[0].songka);
        }
      }
#line 1528 "Bison.tab.c"
    break;

  case 24: /* statement: JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI  */
#line 306 "Bison.y"
                                                                        {
        if ((yyvsp[-4].songka)) {
            (yyval.songka) = (yyvsp[-1].songka);
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            (yyval.songka) = 0;
        }
      }
#line 1542 "Bison.tab.c"
    break;

  case 25: /* statement: JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI OTHOBA BBONDONI statement_list DBONDONI  */
#line 316 "Bison.y"
                                              {
        if ((yyvsp[-8].songka)) {
            (yyval.songka) = (yyvsp[-5].songka);
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            (yyval.songka) = (yyvsp[-1].songka);
        }
      }
#line 1556 "Bison.tab.c"
    break;

  case 26: /* statement: JOTOKHON BBONDONI condition DBONDONI BLOCK  */
#line 325 "Bison.y"
                                                 {
        while ((yyvsp[-2].songka)) {
            (yyval.songka) = (yyvsp[0].songka);
            printf("JOTOKHON condition sotikh thakbe, loop cholbe\n");
            if((yyval.songka) == -1) break;
            if((yyval.songka) == -2) continue;                   /* -1 , -2 aigula flag value condition ($3) cholbe kina decide kore -1 hobe loop sas -2 hole loop cholbe */
        }
        (yyval.songka) = 0;
      }
#line 1570 "Bison.tab.c"
    break;

  case 27: /* statement: JOTOKHON BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI  */
#line 334 "Bison.y"
                                                                            {
        while ((yyvsp[-4].songka)) {
            (yyval.songka) = (yyvsp[-1].songka);
            printf("JOTOKHON condition sotikh thakbe, loop cholbe\n");
            if((yyval.songka) == -1) break;
            if((yyval.songka) == -2) continue;
        }
        (yyval.songka) = 0;
      }
#line 1584 "Bison.tab.c"
    break;

  case 28: /* statement: BIROTI  */
#line 345 "Bison.y"
             {
        (yyval.songka) = -1;
      }
#line 1592 "Bison.tab.c"
    break;

  case 29: /* statement: CHOLUK  */
#line 348 "Bison.y"
             {
        (yyval.songka) = -2;
      }
#line 1600 "Bison.tab.c"
    break;

  case 30: /* BLOCK: BBONDONI statement_list DBONDONI  */
#line 366 "Bison.y"
                                     {
        (yyval.songka) = (yyvsp[-1].songka);
    }
#line 1608 "Bison.tab.c"
    break;

  case 31: /* statement_list: statement  */
#line 379 "Bison.y"
              {
        (yyval.songka) = (yyvsp[0].songka);
    }
#line 1616 "Bison.tab.c"
    break;

  case 32: /* statement_list: statement_list statement  */
#line 382 "Bison.y"
                               {
        (yyval.songka) = (yyvsp[0].songka);
    }
#line 1624 "Bison.tab.c"
    break;

  case 33: /* array_value_list: %empty  */
#line 394 "Bison.y"
       {
        (yyval.array_Data).count = 0;
    }
#line 1632 "Bison.tab.c"
    break;

  case 34: /* array_value_list: array_values  */
#line 397 "Bison.y"
                   {
        (yyval.array_Data) = (yyvsp[0].array_Data);
    }
#line 1640 "Bison.tab.c"
    break;

  case 35: /* array_values: exp  */
#line 409 "Bison.y"
        {
        (yyval.array_Data).values[0] = (yyvsp[0].songka);   /* exp (10) > $$.values[0] = 10       $$.count = 1 */
        (yyval.array_Data).count = 1;
    }
#line 1649 "Bison.tab.c"
    break;

  case 36: /* array_values: array_values COMMA exp  */
#line 413 "Bison.y"
                             {
        (yyval.array_Data) = (yyvsp[-2].array_Data);                  /* ager array */
        (yyval.array_Data).values[(yyval.array_Data).count] = (yyvsp[0].songka);   /* notun vaule */
        (yyval.array_Data).count++;                   /*index er number baray dilam */
    }
#line 1659 "Bison.tab.c"
    break;

  case 37: /* index_expr: SONGKA  */
#line 427 "Bison.y"
           {
        (yyval.songka) = (int)(yyvsp[0].songka);
    }
#line 1667 "Bison.tab.c"
    break;

  case 38: /* index_expr: BORNOMALA  */
#line 430 "Bison.y"
                {
        (yyval.songka) = (int)get_Variable_Value((yyvsp[0].bornomala));
    }
#line 1675 "Bison.tab.c"
    break;

  case 39: /* exp: SONGKA  */
#line 440 "Bison.y"
             { (yyval.songka) = (yyvsp[0].songka); }
#line 1681 "Bison.tab.c"
    break;

  case 40: /* exp: BORNOMALA  */
#line 441 "Bison.y"
                { (yyval.songka) = get_Variable_Value((yyvsp[0].bornomala)); }
#line 1687 "Bison.tab.c"
    break;

  case 41: /* exp: BORNOMALA BT_BONDONI SONGKA DT_BONDONI  */
#line 442 "Bison.y"
                                             {
        (yyval.songka) = get_Array_Value((yyvsp[-3].bornomala), (int)(yyvsp[-1].songka));
    }
#line 1695 "Bison.tab.c"
    break;

  case 42: /* exp: BORNOMALA BT_BONDONI index_expr DT_BONDONI  */
#line 445 "Bison.y"
                                                 {
        (yyval.songka) = get_Array_Value((yyvsp[-3].bornomala), (yyvsp[-1].songka));
    }
#line 1703 "Bison.tab.c"
    break;

  case 43: /* exp: exp JUG exp  */
#line 448 "Bison.y"
                  { (yyval.songka) = (yyvsp[-2].songka) + (yyvsp[0].songka); }
#line 1709 "Bison.tab.c"
    break;

  case 44: /* exp: exp BIYUG exp  */
#line 449 "Bison.y"
                    { (yyval.songka) = (yyvsp[-2].songka) - (yyvsp[0].songka); }
#line 1715 "Bison.tab.c"
    break;

  case 45: /* exp: exp GUN exp  */
#line 450 "Bison.y"
                  { (yyval.songka) = (yyvsp[-2].songka) * (yyvsp[0].songka); }
#line 1721 "Bison.tab.c"
    break;

  case 46: /* exp: exp VAG exp  */
#line 451 "Bison.y"
                  { 
        if ((yyvsp[0].songka) == 0) {
            printf("sunno dea vag kora jay na .infinity hoye hay \n");
            (yyval.songka) = 0;
        } else {
            (yyval.songka) = (yyvsp[-2].songka) / (yyvsp[0].songka); 
        }
    }
#line 1734 "Bison.tab.c"
    break;

  case 47: /* exp: BBONDONI exp DBONDONI  */
#line 459 "Bison.y"
                            { (yyval.songka) = (yyvsp[-1].songka); }
#line 1740 "Bison.tab.c"
    break;

  case 48: /* exp: BORGO BBONDONI exp COMMA exp DBONDONI  */
#line 465 "Bison.y"
                                            {
        double base = (yyvsp[-3].songka);
        double exponent = (yyvsp[-1].songka);
        double result = pow_function(base, exponent);
        printf("Power : %.4lf ^ %.4lf = %.4lf\n", base, exponent, result);
        (yyval.songka) = result;
    }
#line 1752 "Bison.tab.c"
    break;

  case 49: /* exp: BORGOMUL BBONDONI exp DBONDONI  */
#line 472 "Bison.y"
                                    {
        double value = (yyvsp[-1].songka);
        if (value < 0) {
            printf("negative value er borgomul hoy na.Imaginary number hoye jay\n");
            (yyval.songka) = 0;
        } else {
            double result = sqrt_function(value);
            printf("Borgomul : √%.4lf = %.4lf\n", value, result);
            (yyval.songka) = result;
        }
    }
#line 1768 "Bison.tab.c"
    break;

  case 50: /* condition: exp SOMAN exp  */
#line 487 "Bison.y"
                    { (yyval.songka) = ((yyvsp[-2].songka) == (yyvsp[0].songka)); }
#line 1774 "Bison.tab.c"
    break;

  case 51: /* condition: exp OSOMAN exp  */
#line 488 "Bison.y"
                     { (yyval.songka) = ((yyvsp[-2].songka) != (yyvsp[0].songka)); }
#line 1780 "Bison.tab.c"
    break;

  case 52: /* condition: exp CHOTO exp  */
#line 489 "Bison.y"
                    { (yyval.songka) = ((yyvsp[-2].songka) < (yyvsp[0].songka)); }
#line 1786 "Bison.tab.c"
    break;

  case 53: /* condition: exp BORO exp  */
#line 490 "Bison.y"
                   { (yyval.songka) = ((yyvsp[-2].songka) > (yyvsp[0].songka)); }
#line 1792 "Bison.tab.c"
    break;

  case 54: /* condition: exp CHOTO_SOMAN exp  */
#line 491 "Bison.y"
                          { (yyval.songka) = ((yyvsp[-2].songka) <= (yyvsp[0].songka)); }
#line 1798 "Bison.tab.c"
    break;

  case 55: /* condition: exp BORO_SOMAN exp  */
#line 492 "Bison.y"
                         { (yyval.songka) = ((yyvsp[-2].songka) >= (yyvsp[0].songka)); }
#line 1804 "Bison.tab.c"
    break;

  case 56: /* condition: condition ABONG condition  */
#line 493 "Bison.y"
                                { (yyval.songka) = ((yyvsp[-2].songka) && (yyvsp[0].songka)); }
#line 1810 "Bison.tab.c"
    break;

  case 57: /* condition: condition BA condition  */
#line 494 "Bison.y"
                             { (yyval.songka) = ((yyvsp[-2].songka) || (yyvsp[0].songka)); }
#line 1816 "Bison.tab.c"
    break;

  case 58: /* condition: NA condition  */
#line 495 "Bison.y"
                   { (yyval.songka) = (!(yyvsp[0].songka)); }
#line 1822 "Bison.tab.c"
    break;

  case 59: /* condition: BBONDONI condition DBONDONI  */
#line 496 "Bison.y"
                                  { (yyval.songka) = (yyvsp[-1].songka); }
#line 1828 "Bison.tab.c"
    break;


#line 1832 "Bison.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 499 "Bison.y"




int main()
{
    printf("\n");
    printf("====================================================================\n");
    printf("       COMPILER DESIGN LAB PROJECT                                    \n");
    printf("=====================================================================\n");
    printf("   Developed by: Students of Daffodil International University (DIU)  \n");
    printf("   Department: Computer Science & Engineering                          \n");
    printf("=======================================================================\n\n");

    yyin = fopen("Input.txt", "r");                                        /* file open kore ar read korbe tai r */
    if (!yyin) {
        printf("====================================================\n");
        printf("File open hoche na .file name and type check koro.\n");
        printf("====================================================\n");
  
        return 1;
    }
    

    yyparse();
    
    printf("\n====================================================\n");
    printf("        COMPILATION COMPLETED SUCCESSFULLY         \n");
    printf("====================================================\n");
    
    fclose(yyin);
    return 0;
}

int yyerror(const char *s)
{
    printf("Bhul hoyeche : %s\n", s);
    return 0;
}










double get_Variable_Value(char *name) {
    for (int i = 0; i < var_Count; i++) {
        if (strcmp(vars[i].variable_Name, name) == 0) { /*strcmp() == 0 use kora hoiche karon C tha strcmp() function a string 2 ta ek hole 0 return . akhane 0 mane false na*/
            if (vars[i].is_Assigned) {
                return vars[i].variable_Value;
            } else {
                printf("Variable '%s' er man nirdharan kora hoy nai\n", name);
                return 0;
            }
        }
    }
    printf("Variable '%s' pawa jay nai\n", name);
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

















int get_Array_Index(char *name) {
    for (int i = 0; i < array_Count; i++) {
        if (strcmp(arrays[i].array_Name, name) == 0) {
            return i;
        }
    }
    return -1;     /*array na pawa gale -1 return kore */
}



/* get_Array_Value(name, index) er flow tha dekhai dichi kivabe kaj kore function gula 

A[1]
        |
get_Array_Index("A")
        |
FOUND array
        |
index check
        |
return arrays[idx].array_Values[1]
        |
OUTPUT value

*/

double get_Array_Value(char *name, int index) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' value pawa jay nai\n", name);
        return 0;
    }
    if (index < 0 || index >= arrays[arr_idx].size) {
        printf("index %d range er bahire '%s' er size%d\n", index, name, arrays[arr_idx].size);
        return 0;
    }
    return arrays[arr_idx].array_Values[index];
}


/* set_Array_Value(name, index, value)

A[1] = 50
        |
get_Array_Index("A")
        |
FOUND array index
        |
index check (valid?)
        |
arrays[idx].array_Values[1] = 50
        |
DONE

*/




void set_Array_Value(char *name, int index, double value) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' age toiri korthe hobe \n", name);
        return;
    }
    if (index < 0 || index >= arrays[arr_idx].size) {
        printf("index %d range er bahire '%s' er size%d\n", index, name, arrays[arr_idx].size);
        return;
    }
    arrays[arr_idx].array_Values[index] = value;
}



/* initialize_Array_With_Values(name, values, size)

input: A = [10, 20, 30]
        |
get_Array_Index("A")
        |
NOT FOUND (-1)
        |
new array create
        |
name store = "A"
size store = 3
values copy = [10,20,30]
array_Count++
        |
PRINT: A 

*/

void initialize_Array_With_Values(char *name, double *values, int size) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx != -1) {
        arrays[arr_idx].size = size;
        for (int i = 0; i < size; i++) {
            arrays[arr_idx].array_Values[i] = values[i];
        }
        arrays[arr_idx].is_Initialized = 1;
    } else {
        arr_idx = array_Count;
        strcpy(arrays[arr_idx].array_Name, name);
        arrays[arr_idx].size = size;
        arrays[arr_idx].is_Initialized = 1;
        for (int i = 0; i < size; i++) {
            arrays[arr_idx].array_Values[i] = values[i];
        }
        array_Count++;
    }
    printf("'%s' Toiri kora holo (size : %d)\n", name, size);
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%.0lf", arrays[arr_idx].array_Values[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}















/* 
Amra bouble sort use korchi

sort_Array(name, order)

input: A = [30, 10, 20]
        |
get_Array_Index("A")
        |
FOUND array index
        |
sort the array based on order (1 for ascending, 0 for descending)
        |
PRINT: A

*/

void sort_Array(char *name, int order) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' Pawa jay nai \n", name);
        return;
    }
    
    int size = arrays[arr_idx].size;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (order == 1) { 
                if (arrays[arr_idx].array_Values[j] > arrays[arr_idx].array_Values[j + 1]) {
                    double temp = arrays[arr_idx].array_Values[j];
                    arrays[arr_idx].array_Values[j] = arrays[arr_idx].array_Values[j + 1];
                    arrays[arr_idx].array_Values[j + 1] = temp;
                }
            } else { 
                if (arrays[arr_idx].array_Values[j] < arrays[arr_idx].array_Values[j + 1]) {
                    double temp = arrays[arr_idx].array_Values[j];
                    arrays[arr_idx].array_Values[j] = arrays[arr_idx].array_Values[j + 1];
                    arrays[arr_idx].array_Values[j + 1] = temp;
                }
            }
        }
    }
    
    printf("'%s' Sajanu hoyeche  ", name);
    if (order == 1) {
        printf("(Choto thake boro ):\n");
    } else {
        printf("(Boro thake choto):\n");
    }
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%.0lf", arrays[arr_idx].array_Values[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}




/*palindrome a amra protom thake charecter ar last thake carecter compare korchi */

int is_palindrome_string(char *str) {
    int len = strlen(str);
    int i;
    
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;  
        }
    }
    return 1;  
}

/*songkha palindrome er somoy amra reverce kore match korchi 2 ta same naki */

int is_palindrome_number(int num) {
    int original = num;
    int reversed = 0;
    int remainder;
    
  
    if (num < 0) {
        return 0;
    }
    
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
  
    return (original == reversed);
}




/*protom ta max dhore bakigular sathe compare korchi jodi boro hoy tokon max update korchi*/

double get_largest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' array pawa jay nai \n", array_name);
        return 0;
    }
    
    if (arrays[arr_idx].size == 0) {
        printf("'%s' array Khali!\n", array_name);
        return 0;
    }
    
    double max = arrays[arr_idx].array_Values[0];
    for (int i = 1; i < arrays[arr_idx].size; i++) {
        if (arrays[arr_idx].array_Values[i] > max) {
            max = arrays[arr_idx].array_Values[i];
        }
    }
    return max;
}


/*max er mothoi sudhu aibar minimum naki saita dekchi */
double get_smallest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' array pawa jay nai \n", array_name);
        return 0;
    }
    
    if (arrays[arr_idx].size == 0) {
        printf("'%s' array Khali!\n", array_name);
        return 0;
    }
    
    double min = arrays[arr_idx].array_Values[0];
    for (int i = 1; i < arrays[arr_idx].size; i++) {
        if (arrays[arr_idx].array_Values[i] < min) {
            min = arrays[arr_idx].array_Values[i];
        }
    }
    return min;
}












/* ager max ta temporary variable rakhe dichi pore oita output dea dichi */

/* 2nd max er mothoi ai bar sunu condition minimum er jonno  */

/*input array name
        |
find array index
        |
not found? → return -1
        |
size < 2? → return -1
        |
init:
   first_max = -1e9             -1e9 aita mane akhono kicu pai nai er poriborthe -INFINITY use korthe partam.
   second_max = -1e9
        |
loop array:
   update first_max
   update second_max
        |
second_max still -1e9?
        |
no second max → error
        |
else return second_max
*/


double get_second_largest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' array pawa jay nai \n", array_name);
        return -1;
    }
    
    if (arrays[arr_idx].size < 2) {
        printf("'%s' array te kompokshe 2ti upadan pryojon!\n", array_name);
        return -1;
    }
    
    double first_max = -1e9, second_max = -1e9;  /*-1e9 aita mane akhono kicu pai nai er poriborthe -INFINITY use korthe partam.*/
                                                 /* -1e9 er mane -1 × 10^9 othoba -1000000000*/
    
    for (int i = 0; i < arrays[arr_idx].size; i++) {
        if (arrays[arr_idx].array_Values[i] > first_max) {
            second_max = first_max;
            first_max = arrays[arr_idx].array_Values[i];
        }
        else if (arrays[arr_idx].array_Values[i] > second_max && 
                 arrays[arr_idx].array_Values[i] != first_max) {
            second_max = arrays[arr_idx].array_Values[i];
        }
    }
    
    if (second_max == -1e9) {
        printf("'%s' array the 2nd sorbucho songkha nai \n", array_name);
        return -1;
    }
    
    return second_max;
}










/* ager tar mothoi sudhu condition minimum er jonno  */

/*ar sudhu -1e9 er poriborthe +1e9 and +INFINITY use korchi */
/* 1e9 er mane 1 × 10^9 othoba 1000000000*/



double get_second_smallest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' array pawa jay nai \n", array_name);
        return -1;
    }
    
    if (arrays[arr_idx].size < 2) {
        printf("'%s' array te kompokshe 2ti upadan pryojon!\n", array_name);
        return -1;
    }
    
    double first_min = 1e9, second_min = 1e9;
    
    for (int i = 0; i < arrays[arr_idx].size; i++) {
        if (arrays[arr_idx].array_Values[i] < first_min) {
            second_min = first_min;
            first_min = arrays[arr_idx].array_Values[i];
        }
        else if (arrays[arr_idx].array_Values[i] < second_min && 
                 arrays[arr_idx].array_Values[i] != first_min) {
            second_min = arrays[arr_idx].array_Values[i];
        }
    }
    
    if (second_min == 1e9) {
        printf("'%s' array te 2nd sorbonimno songkha nai \n", array_name);
        return -1;
    }
    
    return second_min;
}













/*
value = 6
 |
6 < 0 ? → NO
 |
guess = value / 2 = 6 / 2 = 3
epsilon = 0.000001
 |
---------------- ITERATION 1 ----------------
guess = 3
guess² = 9
error = |9 - 6| = 3  > epsilon → loop continues
 |
guess = (3 + 6/3) / 2
      = (3 + 2) / 2
      = 2.5
 |
---------------- ITERATION 2 ----------------
guess = 2.5
guess² = 6.25
error = |6.25 - 6| = 0.25 > epsilon → continue
 |
guess = (2.5 + 6/2.5) / 2
      = (2.5 + 2.4) / 2
      = 2.45
 |
---------------- ITERATION 3 ----------------
guess = 2.45
guess² ≈ 6.0025
error ≈ 0.0025 > epsilon → continue
 |
guess ≈ 2.449
 |
---------------- FINAL ITERATION ----------------
guess² ≈ 6.0000
error ≤ epsilon → STOP
 |
RETURN ≈ 2.449
*/


double sqrt_function(double value) {
    if (value < 0) {
        return -1; 
    }

    double guess = value / 2.0;
    double epsilon = 0.000001;

    while ((guess * guess - value) > epsilon || (value - guess * guess) > epsilon) {
        guess = (guess + value / guess) / 2.0;
    }

    return guess;
}





/*2^2.5
 |
check integer? → NO
 |
split:
 int_part = 2
 frac_part = 0.5
 |
step 1: integer power
 result = 2 × 2 = 4
 |
step 2: fractional approx
 1 + 0.5*(2-1)
 = 1.5
 |
step 3: combine
 result = 4 × 1.5
       = 6
 |
return ≈ 6
*/

double pow_function(double base, double exponent) {
    double result = 1.0;
    int i;

  
    if ((int)exponent == exponent) {
        int exp = (int)exponent;

        if (exp < 0) {
            base = 1 / base;
            exp = -exp;
        }

        for (i = 0; i < exp; i++) {
            result *= base;
        }
    } else {
        
        double temp = exponent;
        int int_part = (int)temp;
        double frac_part = temp - int_part;

        
        for (i = 0; i < int_part; i++) {
            result *= base;
        }

      
        result *= (1 + frac_part * (base - 1));
    }

    return result;
}








double reverse_number(int num) {
    int reversed = 0;
    int original = num;
    int is_negative = 0;
    

    if (num < 0) {
        is_negative = 1;
        num = -num;
    }
    
    
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num = num / 10;
    }
    
    if (is_negative) {
        reversed = -reversed;
    }
    
    return reversed;
}






char* reverse_string(char *str) {
    int len = strlen(str);
    char *reversed = (char*)malloc(len + 1);
    
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    
    return reversed;
}
