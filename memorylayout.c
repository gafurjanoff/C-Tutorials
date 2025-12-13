#include <stdio.h>

//    text    data     bss     dec     hex filename
//  1228     552       8    1788     6fc memory

// above information is the memory size of this file.


// stored in bss segment 
static int num1;
static int sum;
static int sum1;
static int sum2;

// stored in data segment
static int num = 10;
static int var = 23;
int main(){
    
    // static int var;

    // stored in text segment of memory
    printf("%d\n", var);
    return 0;
}