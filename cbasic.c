#include <stdio.h>


int main(void){

    

    // int x = 5, y = 6, z = 50;

    int myAge, x, y, z, length, width, area, xlimit;
    x = y = z = 50;

    length = 10;
    width=20;

    area = length * width;
    char myFirstName[]="Samandar";
    char myLastName[]="Gofurjonov";
    char _myNickName[] = "@gafurjanoff";
    
    char myGender;
    float myWeight;

    myWeight = 75.6;
    myAge = 21;
    myGender = 'M';


    printf("Int limit %d\n", xlimit);
    printf("Hello My name is %s and My Lastname is %s\n", myFirstName, myLastName);
    printf("My telegram username is %s\n", _myNickName);
    printf("Now, I'll give info about my age. I am %d year old and My weight is %f\n", myAge, myWeight);
    printf("Hello world, this is my first program in C programming language!\n");
    printf ("Programming is fun.\t");
    printf ("And programming in C is even more fun.\t");
    printf ("Testing...\n..1\n...2\n....3\n");

    printf("Sum of %d and %d is %d\n",x , y,  x + y + z);


    printf("The area of the rectangle with width %d and length %d is: %d \n", width, length, area);



    return 0;
}

