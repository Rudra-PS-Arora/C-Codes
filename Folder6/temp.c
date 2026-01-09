// Write a function to print hot ot cold 
// depending on the temperature the user
// enters

void temp(float a);

#include <stdio.h>

int main() {
    float x;
    printf("Enter the temp in celsius: ");
    scanf("%f",&x);
    temp(x);

    return 0;           
}

void temp(float a){
    if(a>25.0){
        printf("Hot hot.!");
    } else{
        printf("Cold cold..!");
    }
}