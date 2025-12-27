// Q. Write a program to caluculate the are of circle, 
// the radius is needs to be inputed.

#include <stdio.h>
int main() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    float area = 3.14 * radius * radius;
    printf("The are of cicle is: %f",area);

}
//f you don’t write return 0;,
// the compiler automatically returns 0 for you.
// NOte Because in modern C (C99+):

/*
The current and most recent C standard is C23 (formally ISO/IEC 9899:2024)
, which was published in October 2024. */

/*
%    → start of format
.2   → number of digits after the decimal
f    → floating-point number
*/
