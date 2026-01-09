// write a function to print n terms of fibonacci series???
#include <stdio.h>

int series(int n);
int main() {
    int n=5;
    printf("%d",series(n));
    return 0;
}
int series(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int Fmn =series(n-1);
    int Fmn2 = series(n-2);
    int result = Fmn + Fmn2;
    //printf("Fib of %d is: %d \n", n,result);
    return result;
}


/*
| Problem   | Recursive idea        |
| --------- | --------------------- |
| Factorial | `n × fact(n−1)`       |
| Sum       | `n + sum(n−1)`        |
| Fibonacci | `fib(n−1) + fib(n−2)` |

*/