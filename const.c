#include <stdio.h>

#define PI 3.14159

#define value 89


#define add(x , y) x + y


#define greater(a , b) if(a > b) \
printf("a is greater than b >> a is %d and b is %d\n", a , b); \
else  \
printf("a is less than b >> a is %d and b is %d\n", a , b); 

#define addtwo(a,b) a + b




int main(){

    greater(12,14);

    printf("the result of the expression a * b  + c is: %d\n", 5 * addtwo(4,3));
    printf("The sum of x + y >>> %d\n", add(12,5));
    printf("PI value:  %5f\n", PI);
    printf("value: %d\n",  value);




    return 0;
}