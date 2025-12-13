#include  <stdio.h>


                    // Operators


        // Name of operators,Operators

        // Arithmetic operators,"+ , - , * , / , %"

        // Increment/Decrement operators,"++, --"

        //Relational operators,"== , != , <= , >= , < , >"

        //Logical operators,"&& , || , !"

        // Bitwise operators,"& , ^ , | , ~ , >> , <<"


        // Assignment operators,"= , += , -= , *= , /= , %=, <<= , >>= , &= , ^= , |="

        //Other operators,"?:   &   *   sizeof()   ,"





int main() {


                // Arithmetic Operators

        // "+ , - , * , / , %"

    // all are binary operators, which means two operands are required to perform operation

    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Result of Division %d/%d is: %d\n",a , b, a/b);
    printf("Result of Remainder %d %% %d is: %d\n", a , b, a%b);
    printf("Result of Multiplication %d*%d is: %d\n", a , b, a*b);
    printf("Result of Addition %d+%d is: %d\n", a , b, a+b);


    // Operator precedence and associativity 

    int x = 2, y = 3, c = 4, d = 5;
    printf("x * y / c = %d\n", x*y/c);
    printf("x + y - c = %d\n", x+y-c);
    printf("x + y * d - c %% x = %d\n", x+y*d-c%x);



    return 0;
}
