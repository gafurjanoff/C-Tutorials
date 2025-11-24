#include <stdio.h>



int main(void){

    int num1, num2, sum;
    
    sum=num1+num2;

    printf ("The sum of %i and %i is %i\n", num1, num2, sum);

    printf("Enter a number with %%i: ");
    scanf("%i", &num1);  // %i interprets base automatically

    printf("Enter a number with %%d: ");
    scanf("%d", &num2);  // %d expects decimal input

    printf("You entered (%%i): %d\n", num1);
    printf("You entered (%%d): %d\n", num2);



    return 0;

}




