// Print multiplication table of number n, enter by user

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=10; i>=1 ; i--) {
        int m;
        m = i * n;
        printf("%d X %d = %d\n", n, i, m);

        
    }
}
