// Write a program using loop, to print numbers from 0 to n, n a input form user

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=0; i<=num; i++) {
        printf("%d\n",i);
    }
}
