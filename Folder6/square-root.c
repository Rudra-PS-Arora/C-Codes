// Write a function to print the square root of a number

#include <stdio.h>
#include <math.h>
void square_root(float a);
int main(){
    square_root(36.2);
    return 0;
}

void square_root(float a){
    float r = pow(a,0.5);
    // or sqrt(a)
    printf("%.2f",r);


}

/*C does not allow number^(0.5) directly with ** operator.

The only way to do powers in C without math.h is manual multiplication or loops.*/