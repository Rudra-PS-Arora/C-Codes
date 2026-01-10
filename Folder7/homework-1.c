/*Write a program to print all the letter in english alphabet using 
a pointer.*/

#include <stdio.h>
int main(){
    char i = 'A';
    char j = 'Z';
    char k = 'a';
    char l = 'z';

    char *a = &i;
    char *b = &j;
    char *c = &k;
    char *d = &l;

    for(int x = *a; x<=*b; x++){
        printf("%C ", x);
        
    }
    printf("\n");
     for(int y = *c; y<=*d; y++){
        printf("%C ", y);
        
    }
    
    return 0;

}