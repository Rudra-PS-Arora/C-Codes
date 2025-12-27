// Q. Take two numbers as input and print their sum.

#include <stdio.h>
int main() {
    int n_one;
    int n_two;
    printf("Enter 1st number: ");
    scanf("%d",&n_one);
    printf("Enter 2nd number: ");
    scanf("%d",&n_two);
    int sum;
    sum = n_one + n_two;
    printf("The sum of two numbers are: %d",sum);
    printf("The sum of two numbers are: %d",n_one + n_two);
}

// If we print '&sum' or & with any variable it prints its memory address

