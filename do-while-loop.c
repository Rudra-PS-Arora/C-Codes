/*Syntax

do {
// do something
} while(condition)
 
*/

// while loop that runs atleast once
#include <stdio.h>
int main() {
    int i=0;
    do {
        printf("%d\n",i);
        i++;
    }while(i<=5);
}