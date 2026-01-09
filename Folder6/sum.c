// Sum of first n natural numbers

int sum(int n);
#include <stdio.h>
int main(){
    printf("Sum of %d", sum(5));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
/*🧬 The Real Structure of Recursion

Every recursive function has two parts:

1️⃣ Base Case → only handles the smallest problem
if (n == 1) return 1;

2️⃣ Recursive Case → solves the bigger problem
int sumNm1 = sum(n-1);
int sumN = sumNm1 + n;
return sumN;


These must be separate because:

Base Case	Recursive Case
Stops recursion	Continues recursion
Runs only once	Runs for all other values
Does minimal work	Does the real calculation


What is a Recursion Tree?

A recursion tree is a diagram that shows:

All function calls made during recursion
and how they depend on each other.

 */