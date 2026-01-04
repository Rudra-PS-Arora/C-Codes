//calculate the sum of all no betwen 5 and 50 includinf 5 and 50

#include <stdio.h>
int main() {
    int sum=0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;

    }
    printf("%d",sum);
}
