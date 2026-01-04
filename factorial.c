// print the factorial of number n entered by the user
#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int f = 1;   
    for(int i = x; i >=1; i--) {
        f = f * i;
        
    }

    printf("The factorial of %d is: %d\n", x, f);
    return 0;
}
