// Print the sum of first n natural number and also print
// them in reverse

#include <stdio.h>
int main() {
    int num;
    int sum =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int j=num ; j>=1 ;j--) {
        sum = sum + j;
        printf("%d\n",j);
    }
    printf("sum is%d ", sum);
}