#include <stdio.h>
#include <limits.h>

int main() {


    int v = 2147483648;


    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);

    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);



    printf("Size of short int %li\n", sizeof(long int));

    printf("Experiment %d\n", v );
}