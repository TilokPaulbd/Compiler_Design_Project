%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Bison.tab.h"

int yylex(void);
int yyerror(const char *s);
extern FILE *yyin;


double pow_function(double base, double exponent);
double sqrt_function(double value);

typedef struct{
    char variable_Name[100];
    double variable_Value;
    int is_Assigned;
} Variable;




Variable vars[100];
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





%union {
    double songka;
    char *bornomala;
    struct {
        double values[100];
        int count;
    } array_Data;
}






%token <bornomala> BORNOMALA
%token <songka> SONGKA

%token JUG BIYUG GUN VAG BORGOMUL BORGO
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

%type <songka> exp condition statement index_expr statement_list BLOCK
%type <array_Data> array_value_list array_values

%left BA
%left ABONG
%right NA
%left SOMAN OSOMAN CHOTO BORO CHOTO_SOMAN BORO_SOMAN
%left JUG BIYUG
%left GUN VAG
%left BORGO BORGOMUL 



%%






input:
    
    | input statement
    ;


statement:
      exp ';' {
          printf("%lf\n", $1);
          $$ = $1;
      }
    | exp {
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

        printf("%s\n", $3);
        $$ = 0;
    }




    | BORNOMALA ARMAN BT_BONDONI array_value_list DT_BONDONI {
        initialize_Array_With_Values($1, $4.values, $4.count);
        $$ = 0;
      }
    | BORNOMALA BT_BONDONI SONGKA DT_BONDONI ARMAN exp {
        set_Array_Value($1, (int)$3, $6);
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
            printf("'%s' একটি প্যালিনড্রোম!\n", $3);
            printf("1\n");
            $$ = 1;
        } else {
            printf("'%s' একটি প্যালিনড্রোম নয়!\n", $3);
            printf("0\n");
            $$ = 0;
        }
    }
    
    
    | PALINDROME BBONDONI SONGKA DBONDONI {
        int result = is_palindrome_number((int)$3);
        if (result) {
            printf("%.0lf একটি প্যালিনড্রোম সংখ্যা!\n", $3);
            printf("1\n");
            $$ = 1;
        } else {
            printf("%.0lf একটি প্যালিনড্রোম সংখ্যা নয়!\n", $3);
            printf("0\n");
            $$ = 0;
        }
    }


    |ULTA BBONDONI exp DBONDONI {
        double result = reverse_number((int)$3);
        printf("%.0lf এর উল্টো: %.0lf\n", $3, result);
        $$ = result;
    }

    | ULTA BBONDONI BORNOMALA DBONDONI  {
        char *result = reverse_string($3);
        printf("'%s' এর উল্টো: '%s'\n", $3, result);
        free(result);
        $$ = 0;
    }


        
    

    
    | SORBUCHO BBONDONI BORNOMALA DBONDONI {
        double result = get_largest_from_array($3);
        printf("'%s' অ্যারের সবচেয়ে বড় সংখ্যা: %lf\n", $3, result);
        $$ = result;
    }
    
   
   

    
    | SORBONIMNO BBONDONI BORNOMALA DBONDONI {
        double result = get_smallest_from_array($3);
        printf("'%s' অ্যারের সবচেয়ে ছোট সংখ্যা: %lf\n", $3, result);
        $$ = result;
    }
    
  



    
    | DITIYO_SORBUCHO BBONDONI BORNOMALA DBONDONI {
        double result = get_second_largest_from_array($3);
        if (result != -1) {
            printf("'%s' অ্যারের দ্বিতীয় সবচেয়ে বড় সংখ্যা: %lf\n", $3, result);
        }
        $$ = result;
    }
    
    
 



    | DITIYO_SORBONIMNO BBONDONI BORNOMALA  DBONDONI {
        double result = get_second_smallest_from_array($3);
        if (result != -1) {
            printf("'%s' অ্যারের দ্বিতীয় সবচেয়ে ছোট সংখ্যা: %lf\n", $3, result);
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
        } else {
            $$ = $7;
        }
      }
    | JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI {
        if ($3) {
            $$ = $6;
        } else {
            $$ = 0;
        }
      }
    | JODI BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI
      OTHOBA BBONDONI statement_list DBONDONI {
        if ($3) {
            $$ = $6;
        } else {
            $$ = $10;
        }
      }
    | JOTOKHON BBONDONI condition DBONDONI BLOCK {
        while ($3) {
            $$ = $5;
            if($$ == -1) break;
            if($$ == -2) continue;
        }
        $$ = 0;
      }
    | JOTOKHON BBONDONI condition DBONDONI BBONDONI statement_list DBONDONI {
        while ($3) {
            $$ = $6;
            if($$ == -1) break;
            if($$ == -2) continue;
        }
        $$ = 0;
      }

    
    | BIROTI ';' {
        $$ = -1;
      }
    | BIROTI {
        $$ = -1;
      }
    | CHOLUK ';' {
        $$ = -2;
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
        $$.values[0] = $1;
        $$.count = 1;
    }
    | array_values COMMA exp {
        $$ = $1;
        $$.values[$$.count] = $3;
        $$.count++;
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
            printf("শূন্য দিয়ে ভাগ করা যায় না!\n");
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
        printf("পাওয়ার: %.4lf ^ %.4lf = %.4lf\n", base, exponent, result);
        $$ = result;
    }
    |BORGOMUL BBONDONI exp DBONDONI {
        double value = $3;
        if (value < 0) {
            printf("ত্রুটি: ঋণাত্মক সংখ্যার বর্গমূল নেওয়া যায় না!\n");
            $$ = 0;
        } else {
            double result = sqrt_function(value);
            printf("বর্গমূল: √%.4lf = %.4lf\n", value, result);
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
    yyin = fopen("Input.txt", "r");
    if (!yyin) {
        printf("ফাইল খোলা যায়নি!\n");
        return 1;
    }
    
    printf("==================\n");
    yyparse();
    printf("========== ========\n");
    
    fclose(yyin);
    return 0;
}

int yyerror(const char *s)
{
    printf("ভুল হয়েছে : %s\n", s);
    return 0;
}










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



























int get_Array_Index(char *name) {
    for (int i = 0; i < array_Count; i++) {
        if (strcmp(arrays[i].array_Name, name) == 0) {
            return i;
        }
    }
    return -1;
}





double get_Array_Value(char *name, int index) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' পাওয়া যায়নি।\n", name);
        return 0;
    }
    if (index < 0 || index >= arrays[arr_idx].size) {
        printf("ইনডেক্স %d সীমানার বাইরে। '%s' এর সাইজ %d\n", index, name, arrays[arr_idx].size);
        return 0;
    }
    return arrays[arr_idx].array_Values[index];
}







void set_Array_Value(char *name, int index, double value) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' আগে তৈরি করতে হবে!\n", name);
        return;
    }
    if (index < 0 || index >= arrays[arr_idx].size) {
        printf("ইনডেক্স %d সীমানার বাইরে। '%s' এর সাইজ %d\n", index, name, arrays[arr_idx].size);
        return;
    }
    arrays[arr_idx].array_Values[index] = value;
}




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
    printf("'%s' তৈরি করা হয়েছে (সাইজ: %d)\n", name, size);
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%.0lf", arrays[arr_idx].array_Values[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

















void sort_Array(char *name, int order) {
    int arr_idx = get_Array_Index(name);
    if (arr_idx == -1) {
        printf("'%s' পাওয়া যায়নি।\n", name);
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
    
    printf("'%s' সাজানো হয়েছে ", name);
    if (order == 1) {
        printf("(আরোহী ক্রমে):\n");
    } else {
        printf("(অবরোহী ক্রমে):\n");
    }
    printf("%s = [", name);
    for (int i = 0; i < size; i++) {
        printf("%.0lf", arrays[arr_idx].array_Values[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}






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

















double get_largest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' অ্যারে পাওয়া যায়নি!\n", array_name);
        return 0;
    }
    
    if (arrays[arr_idx].size == 0) {
        printf("'%s' অ্যারেটি খালি!\n", array_name);
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



double get_smallest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' অ্যারে পাওয়া যায়নি!\n", array_name);
        return 0;
    }
    
    if (arrays[arr_idx].size == 0) {
        printf("'%s' অ্যারেটি খালি!\n", array_name);
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
















double get_second_largest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' অ্যারে পাওয়া যায়নি!\n", array_name);
        return -1;
    }
    
    if (arrays[arr_idx].size < 2) {
        printf("'%s' অ্যারেতে কমপক্ষে ২টি উপাদান প্রয়োজন!\n", array_name);
        return -1;
    }
    
    double first_max = -1e9, second_max = -1e9;
    
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
        printf("'%s' অ্যারেতে দ্বিতীয় বৃহত্তম সংখ্যা নেই!\n", array_name);
        return -1;
    }
    
    return second_max;
}












double get_second_smallest_from_array(char *array_name) {
    int arr_idx = get_Array_Index(array_name);
    if (arr_idx == -1) {
        printf("'%s' অ্যারে পাওয়া যায়নি!\n", array_name);
        return -1;
    }
    
    if (arrays[arr_idx].size < 2) {
        printf("'%s' অ্যারেতে কমপক্ষে ২টি উপাদান প্রয়োজন!\n", array_name);
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
        printf("'%s' অ্যারেতে দ্বিতীয় ক্ষুদ্রতম সংখ্যা নেই!\n", array_name);
        return -1;
    }
    
    return second_min;
}
















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
    
    if (reversed == NULL) {
        printf("মেমোরি বরাদ্দ করা যায়নি!\n");
        return "";
    }
    
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    
    return reversed;
}