// INput
/*Syntax: scanf("%d",&age);
scanf is the function used to take input
we specfoc the input we are going to take, %d = integer
and last the variable name we want to store it in*/

#include <stdio.h>
int main () {
    int age; // we specifiy the variable 1st
    printf("Enter your age: ");
    scanf("%d",&age); // here '&' is address-of operator
    printf("%d",age);
}
