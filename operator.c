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



    /*
    Increment (Pre-increment and Post-increment) operators
               ++a;                a++;

    Decrement (Pre-decrement and Post-decrement) operators
                --a;                a--;
    */ 



    int son1=3, son2=2, son3 = 4, son4 = 3, son5=5, son6=6;

    // first use and the increment or decrement
    printf("%d\n", son1+++son2 );

    printf("Son1 : %d\n", son1);
    printf("Son3 : %d\n", son4);

    // first increment or decrement and then use
    printf("Result: %d\n", son3+ ++son4);

    printf("Son5 : %d\n", son5);
    printf("Result: %d\n", son5++ + ++son6);
    printf("Son6 : %d\n", son6);
    printf("Son5 : %d\n", son5);


    /*Relational Operators
    
    == ;   !=;  <=;  >=;  < ; >;

    4 == 5 is equivalent to is 4 == 5 ? 

    Answer: False

    4 != 5  is equivalent to 4 != 5 ?

    Answer: True

    All relational operators will return  either True or False;
    */ 



    // Logical Operators

    /*
    
    && (AND) ; || (OR)  ;  ! (NOT);

    */


    // Concept of Short Circuit 

    int number1 = 5, number2 = 6;

    int incre;

    // incre = (number1 > number2) && (number2++);

    // printf("Case is: %d\n", incre);
    // printf("The result is: %d\n", number2);


    // incre = (number1 < number2) && (number2++);
    
    // printf("Case is: %d\n", incre);
    // printf("The result is: %d\n", number2);


    // incre = (number1 < number2) || (number2++);
    
    // printf("Case is: %d\n", incre);
    // printf("The result is: %d\n", number2);


    incre = (number1 > number2) || (number2++);
    
    printf("Case is: %d\n", incre);
    printf("The result is: %d\n", number2);



    return 0;


}
