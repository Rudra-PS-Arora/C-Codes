/*
Questions-------->
(A) Write a program to calcualte the perimeter of a rectangle. 
Take sides a & b form the user.

(b) Take a number (n) from user and ddisplay its output  in cube
*/

#include <stdio.h>
int main() {
    // (A)
    int l;
    int w;
    printf("Enter the lenght: ");
    scanf("%d",&l);

    printf("Enter the width: ");
    scanf("%d",&w);

    int perimeter = 2 *(l+w);
    printf("The perimenter is: %d\n",perimeter);
    
    //return 0 ; 
    // Every important concept after this lihne ' return 0; ' the progrma is ended.
    // so i am excluding this or commenting 
    
    // (B)
    float n;
    printf("Enter the value of n: ");
    scanf("%f",&n);
    float cube = n*n*n;
    printf("The cube of n is: %.2f",cube);
}
