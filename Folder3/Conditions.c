// Types of contions
// (1) If-else 
// (2) Switch

// syntaz
// if (contion) {
// do something if true
// }
//else {
// do something if false
//}

// Note : else is optional 

// Q. Hot check if age is greater than 18.

#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    if (age>=18) {
        printf("You are 18 nice!!");
        printf("You can vote broo!"); // you can remove curly brackets
                // if you only want one statement
    }
    else{
        printf("Bruhhhhhhh, grow up!");
    }
}
