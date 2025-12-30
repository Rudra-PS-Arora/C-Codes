// Write a program to check if a num is natural or not

#include <stdio.h>
int main () {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if (num <=0) {
        printf("Not natural no");
    }
    else{
        printf("natural no");
    }
}