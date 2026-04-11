%{
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

%}





%union {                                    /* union bebohar kori sob type er data use korar jonno .nahole sudu ek type er data bebohar korthe partam*/   
    double songka;
    char *bornomala;
    struct {
        double values[100];
        int count;
    } array_Data;
}






%token <bornomala> BORNOMALA                             /* aikhane token er sathe bola hoiche karon aita sudhu token ai na er vitore value  ache */
%token <songka> SONGKA

%token JUG BIYUG GUN VAG BORGOMUL BORGO                       /* aikhane token delcear kora hoiche */
%token DEKHAU
%token JODI OTHOBA
%token SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN
%token JOTOKHON BIROTI CHOLUK FEROT ABONG BA JONNO
%token NA
%token BBONDONI DBONDONI BT_BONDONI DT_BONDONI
%token ARMAN COMMA
%token SAJAU CHUTO_THAKE BORO_THAKE
%token PALINDROME ULTA
%token SORBUCHO SORBONIMNO
%token  DITIYO_SORBUCHO DITIYO_SORBONIMNO 

%type <songka> exp condition statement index_expr statement_list BLOCK                       /* type declear kora hoiche . sob token er type declear kore lage na karon sob token value carray kore na */
%type <array_Data> array_value_list array_values

%left BA
%left ABONG
%right NA
%left SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN                    /* left dea precedence bola hoiche nich thake upore bam thake dane */
%left JUG BIYUG
%left GUN VAG
%left BORGO BORGOMUL 
%left BBONDONI DBONDONI



%%



/*Input > flex > Token > bison > Rules match > C code run > Output*/

                                
input:                   /* input full program chalanur entry point hisabe kaj kore */
                         /*empty line thakle error dibe na  */
    | input statement     /*input a aber input kai call kore then satement run .tar mane onek input nibe aita recursively kaj kore */
    ;


statement:                  /* aita exceution unit */

    | exp {
          printf("%lf\n", $1);      /*1st er ta $1 then 2$ aivabe kaj kore */      
          $$ = $1;
      }
    | BORNOMALA ARMAN exp {                           /* aigula  input a kivabe lekha thake call orbe oita */
        set_Variable_Value($1, $3);
        printf("%lf\n", $3);
        $$ = $3;
      }

    | DEKHAU BBONDONI exp DBONDONI {
        printf("%lf\n", $3);
        $$ = $3;
      }

    | DEKHAU BBONDONI BORNOMALA DBONDONI {

        printf("%s\n", $3);
        $$ = 0;                                   /* statement er return value 0 */
    }


    | BORNOMALA ARMAN BT_BONDONI array_value_list DT_BONDONI {
        initialize_Array_With_Values($1, $4.values, $4.count);
        $$ = 0;
      }
    | BORNOMALA BT_BONDONI SONGKA DT_BONDONI ARMAN exp {
        set_Array_Value($1, (int)$3, $6);                        /* $3  int type a convert convert kora hoiche */
        printf("%lf\n", $6);
        $$ = $6;
      }
    | BORNOMALA BT_BONDONI index_expr DT_BONDONI ARMAN exp {
        set_Array_Value($1, $3, $6);
        printf("%lf\n", $6);
        $$ = $6;
      }
    | SAJAU BORNOMALA CHUTO_THAKE{
        sort_Array($2, 1);
        $$ = 0;
      }
    | SAJAU BORNOMALA BORO_THAKE{
        sort_Array($2, 0);
        $$ = 0;
      }

    
    | PALINDROME BBONDONI BORNOMALA DBONDONI {
        int result = is_palindrome_string($3);
        if (result) {
            printf("'%s' aita ekta palindrome\n", $3);
            printf("1\n");
            $$ = 1;
        } else {
            printf("'%s' aita ekta palindrome na\n", $3);
            printf("0\n");
            $$ = 0;
        }
    }
    
    
    | PALINDROME BBONDONI SONGKA DBONDONI {
        int result = is_palindrome_number((int)$3);
        if (result) {
            printf("%.0lf aita ekta palindrome\n", $3);
            printf("1\n");
            $$ = 1;
        } else {
            printf("%.0lf aita ekta palindrome na\n", $3);
            printf("0\n");
            $$ = 0;
        }
    }


    |ULTA BBONDONI exp DBONDONI {
        double result = reverse_number((int)$3);
        printf("%.0lf er ulta sonkha %.0lf\n", $3, result);
        $$ = result;
    }

    | ULTA BBONDONI BORNOMALA DBONDONI  {
        char *result = reverse_string($3);              /* string return korar ekmatro way pointer use kora .nahole sudhu charecter return korbe */        
        printf("'%s' er ulta '%s'\n", $3, result);
        free(result);                       /*memory > use > free() > memory release */
        $$ = 0;
    }


        
    

    
    | SORBUCHO BBONDONI BORNOMALA DBONDONI {
        double result = get_largest_from_array($3);
        printf("'%s' Sorbucho Songkha : %lf\n", $3, result);
        $$ = result;
    }
    
   
   

    
    | SORBONIMNO BBONDONI BORNOMALA DBONDONI {
        double result = get_smallest_from_array($3);
        printf("'%s' Sorbonimno Songkha : %lf\n", $3, result);
        $$ = result;
    }
    
  



    
    | DITIYO_SORBUCHO BBONDONI BORNOMALA DBONDONI {
        double result = get_second_largest_from_array($3);
        if (result != -1) {                                       /* array tha 2nd largest na thakle function -1 return kore */
            printf("'%s' Ditio Sorbucho Songkha : %lf\n", $3, result);
        }
        $$ = result;
    }
    
    
 



    | DITIYO_SORBONIMNO BBONDONI BORNOMALA  DBONDONI {
        double result = get_second_smallest_from_array($3);
        if (result != -1) {
            printf("'%s' Ditio Sorbonimno Songkha : %lf\n", $3, result);
        }
        $$ = result;
    }
    





    
    | JODI BBONDONI condition DBONDONI BLOCK {
        if ($3) {
            $$ = $5;
        } else {
            $$ = 0;
        }
      }
    | JODI BBONDONI condition DBONDONI BLOCK OTHOBA BLOCK {
        if ($3) {
            $$ = $5;
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            $$ = $7;
        }
      }
    | JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI {
        if ($3) {
            $$ = $6;
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            $$ = 0;
        }
      }
    | JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI
      OTHOBA BBONDONI statement_list DBONDONI {
        if ($3) {
            $$ = $6;
            printf("JODI condition sotikh hoyeche\n");
        } else {
            printf("JODI condition sotikh hoyni\n");
            $$ = $10;
        }
      }
    | JOTOKHON BBONDONI condition DBONDONI BLOCK {
        while ($3) {
            $$ = $5;
            printf("JOTOKHON condition sotikh thakbe, loop cholbe\n");
            if($$ == -1) break;
            if($$ == -2) continue;                   /* -1 , -2 aigula flag value condition ($3) cholbe kina decide kore -1 hobe loop sas -2 hole loop cholbe */
        }
        $$ = 0;
      }
    | JOTOKHON BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI {
        while ($3) {
            $$ = $6;
            printf("JOTOKHON condition sotikh thakbe, loop cholbe\n");
            if($$ == -1) break;
            if($$ == -2) continue;
        }
        $$ = 0;
      }

    
    | BIROTI {
        $$ = -1;
      }
    | CHOLUK {
        $$ = -2;
      }
    ;













BLOCK :
    BBONDONI statement_list DBONDONI {
        $$ = $2;
    }
    ;








statement_list:
    statement {
        $$ = $1;
    }
    | statement_list statement {
        $$ = $2;
    }
    ;







array_value_list:
       {
        $$.count = 0;
    }
    | array_values {
        $$ = $1;
    }
    ;







array_values:
    exp {
        $$.values[0] = $1;   /* exp (10) > $$.values[0] = 10       $$.count = 1 */
        $$.count = 1;
    }
    | array_values COMMA exp {
        $$ = $1;                  /* ager array */
        $$.values[$$.count] = $3;   /* notun vaule */
        $$.count++;                   /*index er number baray dilam */
    }
    ;







index_expr:
    SONGKA {
        $$ = (int)$1;
    }
    | BORNOMALA {
        $$ = (int)get_Variable_Value($1);
    }
    ;





exp:
      SONGKA { $$ = $1; }
    | BORNOMALA { $$ = get_Variable_Value($1); }
    | BORNOMALA BT_BONDONI SONGKA DT_BONDONI {
        $$ = get_Array_Value($1, (int)$3);
    }
    | BORNOMALA BT_BONDONI index_expr DT_BONDONI {
        $$ = get_Array_Value($1, $3);
    }
    | exp JUG exp { $$ = $1 + $3; }
    | exp BIYUG exp { $$ = $1 - $3; }
    | exp GUN exp { $$ = $1 * $3; }
    | exp VAG exp { 
        if ($3 == 0) {
            printf("sunno dea vag kora jay na .infinity hoye hay \n");
            $$ = 0;
        } else {
            $$ = $1 / $3; 
        }
    }
    | BBONDONI exp DBONDONI { $$ = $2; }





    | BORGO BBONDONI exp COMMA exp DBONDONI {
        double base = $3;
        double exponent = $5;
        double result = pow_function(base, exponent);
        printf("Power : %.4lf ^ %.4lf = %.4lf\n", base, exponent, result);
        $$ = result;
    }
    |BORGOMUL BBONDONI exp DBONDONI {
        double value = $3;
        if (value < 0) {
            printf("negative value er borgomul hoy na.Imaginary number hoye jay\n");
            $$ = 0;
        } else {
            double result = sqrt_function(value);
            printf("Borgomul : √%.4lf = %.4lf\n", value, result);
            $$ = result;
        }
    }



condition:
      exp SOMAN exp { $$ = ($1 == $3); }
    | exp OSOMAN exp { $$ = ($1 != $3); }
    | exp CHOTO exp { $$ = ($1 < $3); }
    | exp BORO exp { $$ = ($1 > $3); }
    | exp CHOTO_SOMAN exp { $$ = ($1 <= $3); }
    | exp BORO_SOMAN exp { $$ = ($1 >= $3); }
    | condition ABONG condition { $$ = ($1 && $3); }
    | condition BA condition { $$ = ($1 || $3); }
    | NA condition { $$ = (!$2); }
    | BBONDONI condition DBONDONI { $$ = $2; }
    ;

%%



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