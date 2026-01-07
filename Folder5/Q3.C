// Write three functions one: that calculates area of a circle
// area of rectangle
// and area of square

float circle(int r);
float square(int a);
float rectangle(int w, int l);

#include <stdio.h>
int main(){
    circle(3);
    square(3);
    rectangle(2,3);
    return 0;
}

float circle(int r){
    float area = 3.14 * r * r;
    printf("The area is %.2f\n",area);
}

float square(int a){
    float area = a*a;
    printf("The area is: %.2f\n",area);
}

float rectangle(int w, int l){
    float area = w *l;
    printf("The area is: %.2f\n",area);
}