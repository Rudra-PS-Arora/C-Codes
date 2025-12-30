// Guess the output

#include <stdio.h>
int main() {
    int x=2;
    if (x=4) {
        printf("X is equal to 1\n");
        printf("%d",x);
    }else {
        printf("X is not equal to 1");
    }
}
/*

The output is :
(a) error
(b) x is equal to 1
(c) c is not equal to 1

*/

/* Why (b)
Because in c, 0 ---------> false
and another value is 1----------> True


So in if condition x was overwritten to 1 and 1 is TRUE

IF IT WAS 0 ---> ELSE block will be runed
*/