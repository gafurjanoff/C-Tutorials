#include <stdio.h>
#include "sea.h"

int main(void){

   const int   pacific_sea = AREA;     /* in sq kilometers */
   double      acres, sq_miles, sq_feet, sq_inches;

   printf("\nThe Pacific Sea covers an area");
   printf(" of %d square kilometers.\n", pacific_sea);
   sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
   sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
   sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
   acres = ACRES_PER_SQ_MILE * sq_miles;
   printf("In other units of measure this is:\n\n");
   printf("%22.7e acres\n", acres);
   printf("%22.7e square miles\n", sq_miles);
   printf("%22.7e square feet\n", sq_feet);
   printf("%22.7e square inches\n\n", sq_inches);
   return 0;

}


// printf("In other units of measure this is:\n\n");
// printf("%22.7e acres\n", acres);
// printf("%22.7e square miles\n", sq_miles);
// printf("%22.7e square feet\n", sq_feet);
// printf("%22.7e square inches\n\n", sq_inches);

/* 
    %22.7e → prints floating-point number in scientific notation

        22 → width of output

        7 → 7 digits after decimal

        e → exponent format (like 1.2345678e+03)

    Prints all converted area units clearly. */