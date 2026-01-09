/* Write a function that takes marks of 3 subject and 
prints the percent of the student. (marks are out of 100)
*/
#include <stdio.h>
void marks(float a, float b, float c);

int main() {
    marks(90,91,99);
    return 0;
}

void marks(float a, float b, float c){
    float m = (a+b+c) /3;
    printf("%.2f",m);
}

