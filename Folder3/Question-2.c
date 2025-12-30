// Grading system
/*marks < 30 is c
30 <= marks <70 is b
70 <= marks <90 is a
90 <= marks <= 100 is a+*/

#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if (marks >= 0 && marks < 30) {
        printf("Your grade is C");
    } 

    else if (marks >= 30 && marks <70) {
        printf("Your grade is B");
    }

    else if (marks >= 70 && marks <90) {
        printf("Your grade is A");
    }

    else if (marks >=90 && marks <=100) {
        printf("Your grade is A+");
    }

    else{
        printf("WRONG INPUT");
    }
}