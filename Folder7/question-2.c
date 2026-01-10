/*
Write a funtion to calculate the sum, product and avg of 
2 numbers. and print the avg in the main function
*/

#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int x = 2, y =4, sum , prod, avg;
    dowork(x,y,&sum,&prod,&avg);

    printf("sum = %d, product = %d, avg = %d\n",sum, prod,avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;

}
