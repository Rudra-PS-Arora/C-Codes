/*Write a program in C to print
number between two numbers using a pointer*/

#include <stdio.h>

int main(){
    int a=1;
    int b=100;

    int *p = &a;
    int *q = &b;

    for(int x=*p; x<= *q ; x++){
        printf("%d ",x);
    }
}