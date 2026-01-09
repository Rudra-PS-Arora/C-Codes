// Convert celsius to fahrenhiet using a function

float temp(float t);

#include <stdio.h>
int main(){
    temp(34.0);
    return 0;
}

float temp(float t){
    float F = (1.8*t)+32;
    printf("The celsius to Fahreniet is: %.2f C --> %.2f\n",t,F);
    return F;
}

// we used 1.8 not 9/5 u can also take 9.0/5.0
// in c 9/5 = 1
/*
Integer ÷ Integer = Integer division
9 / 5  =  1.8   →   1   (the `.8` is chopped off)

*/