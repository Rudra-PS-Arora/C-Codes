// Function is a block if code that performs a particular task
// takes argument ---> do work----> return result
// can be used multiple times
// increase code reusability

// syntax:  step1: Function prototype/declaration
//void #name(); --> nothing comes means it compiler knows a function is 
// there but does nothing since it is proceded by void

// void = return type
// step2: Function Definition
//void printhell() {
// printf("Hello");
//}

// Step3: function call
/*int main() {
    printhello();
    return 0;
}*/


#include <stdio.h>
void printHello();

int main() {
    printHello();
    return 0;
}

void printHello() {
    printf("Hello world");
}

// Execution always starts form main funtion
// Funcitons can call other functions

// Types:
/*
1. Library functions- inbuilt in C
2. User-defined funtions


Funtion take value which is called an argument and gives a value called 
return value.
void #name(int n);
int sum(int a, int b);

*/