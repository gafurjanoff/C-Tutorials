#include <stdio.h>

#define PI 3.14159

#define value 89


#define add(x , y) x + y


#define STRING "%s\n"
#define NESO "Welcome to my community!"

#define greater(a , b) if(a > b) \
printf("a is greater than b >> a is %d and b is %d\n", a , b); \
else  \
printf("a is less than b >> a is %d and b is %d\n", a , b); 

#define addtwo(a,b) a + b




int main(){


    const int var = 67;
    int num  = 052;
    // var = 67;
    greater(12,14);

    printf(STRING, NESO);
    printf("Here is octal conversion: %d\n", num);
    printf("Here is octal conversion: %o\n", num);
    printf("Var value: %d\n", var);
    printf("the result of the expression a * b  + c is: %d\n", 5 * addtwo(4,3));
    printf("The sum of x + y >>> %d\n", add(12,5));
    printf("PI value:  %5f\n", PI);
    printf("value: %d\n",  value);



    printf("Date: %s\t", __DATE__);
    printf("Time: %s\n", __TIME__);



    return 0;
}