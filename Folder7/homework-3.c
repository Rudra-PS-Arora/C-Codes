/*Write a program in C to find the maximum 
number between two numbers using a pointer*/

#include <stdio.h>
int main(){
    int x,y;

    printf("Enter 1st no: ");
    scanf("%d",&x);

    printf("Enter 2nd no: ");
    scanf("%d",&y);

    int *ptr = &x;
    int *pptr = &y;

    if(*ptr>*pptr){
        printf("1st no is greater, %d", *ptr);
    }

    else{
        printf("2nd no is greater, %d",*pptr);
    }
}