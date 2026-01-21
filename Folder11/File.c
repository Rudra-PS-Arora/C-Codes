#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("hello.txt","r"); //opening 
    if(fptr == NULL){ //checking if exist 
        printf("File does not exist \n");
    } else{
        fclose(fptr); // closing 
    }

}