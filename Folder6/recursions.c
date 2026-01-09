// Recursion is a function calling itself
// multiple times

// the function is called recursive functions

// loops and recursion functions do the same work either 
// in less or more lines

void hello(int a);
#include <stdio.h>
int main(){
    hello(5);
}
void hello(int a){
    if(a ==0) {
        return;
    }
    printf("Hello\n");
    hello(a-1);
}