#include <stdio.h>
int main(){
    char name[100];
    // gets(name);
    // puts(name);
    fgets(name, 100, stdin);
    puts(name); // puts gives a new line after printing 

}