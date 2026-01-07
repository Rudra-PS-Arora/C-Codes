// a funtion that sums two number

int sum(int a, int b);

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter number: ");
    scanf("%d",&b);
    int x = sum(a,b);
    printf("Sum of %d and %d is: %d",a , b, x);
    return 0;
}

int sum(int x,int y){
    return x+y;
}