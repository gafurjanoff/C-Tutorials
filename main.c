#include <stdio.h>
#include <stdlib.h>


extern int count;
int main()
{
    int value;

    value = increament();
    value = increament();
    value = increament();
    count  = count + 3;
    value = count;
    printf("Incremented value: %d\n", value);



    return 0;

}