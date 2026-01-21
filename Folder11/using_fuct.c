#include <stdio.h>
int main(){
    FILE *fptr;
    // fptr = fopen("hello.txt","r");
    // char ch = fgetc(fptr);
    // printf("%c", ch);
    fptr = fopen("hello.txt","w");
    fputc('F',fptr);
    
    return 0;

}