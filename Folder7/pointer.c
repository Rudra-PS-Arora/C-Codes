#include <stdio.h>
int main() {
    int age = 32;
    int *ptr = &age;
    int _age = *ptr;
    
    printf("%p\n",age);  //“Interpreting the number 32 as a memory address.”
    printf("%p\n",*ptr);
    printf("%p\n",&age);
    printf("%p\n",ptr);

    //ADDRESS
    printf("%u\n",&age); // memory address in unassigned int type
    printf("%u\n",ptr);
   
    // print value in pointer
    printf("%d\n",*ptr); // both same 
    printf("%d\n", *(&age)); // both same

    

   
}