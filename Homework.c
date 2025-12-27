/*Quesitons:
1. write a program to print the average of 3 numbers.  */
#include <stdio.h>
int main() {
    //(1)
    int x,y,z;
    printf("Enter number: ");
    scanf("%d",&x);

    printf("Enter number: ");
    scanf("%d",&y);

    printf("Enter number: ");
    scanf("%d",&z);

    int avg = (x+y+z)/3;
    printf("The average is %d\n",avg);

}