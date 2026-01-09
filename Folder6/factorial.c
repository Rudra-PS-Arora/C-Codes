// Print factorial of n
#include <stdio.h>

// function prototype
int factorial(int n);

int main() {
    int y = 3;
    printf("%d", factorial(y));
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    printf("Printing the factoriral of: %d\n",n);
    int fNm1 = factorial(n - 1);
    int result = fNm1 * n;
    return result;
}