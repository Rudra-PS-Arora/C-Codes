/*write a program to check whether a number if a give 
is armstrong number or not.  */

#include <stdio.h>

int main () {
    int num, original , digit , digit2,sum ;
    printf("Enter a number: ");
    scanf("%d",&num);
    original = num;

    digit = num %10; // digit = 9
    original= original / 10; // 73

    digit2 = original % 10;// digit2 = 3
    original = original / 10; // 7

    sum = ( (digit* digit* digit)+ (digit2*digit2*digit2) +(original*original*original));
    
    if (num == sum) {
        printf("ARMSTRONG");
    } 
    else {
        printf("NOT armstrong");
    }

}