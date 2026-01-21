#include <stdio.h>
int main(){
    FILE *fptr;
    // fptr = fopen("hello.txt","r");
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("Char = %c",ch); //reading char by char
    // fclose(fptr);

    fptr = fopen("hello.txt","a"); //w
    fprintf(fptr,"%c",'a');

    


    return 0;

}