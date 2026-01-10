// Pointers in funtion call
/*We can all value of a funtion in two types one:
1. call by value: (pass a value) parameter is a copy of argument.
2. call by reference: we use address of the variable to perfomr
opertaion on the value*/

#include <stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int no = 3;
    square(no); // call by value
    printf("Number is: %d\n",no); // 
    _square(&no);
    printf("Number is: %d\n",no); // 

    return 0;
}
// call by value
void square(int n){
    n = n*n;
    printf("Square is: %d\n",n);
}
// call by reference
void _square(int *n){
    *n = (*n) * (*n);
    printf("Square is: %d\n",*n);
}