// Write a program to find if user enter a uppercase character or not

#include <stdio.h>
int main () {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') { // comparing ASCII value
        printf("IS-upper-case");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("is-lower-case");
    }

    else{
        printf("NOt in english");
    }
}