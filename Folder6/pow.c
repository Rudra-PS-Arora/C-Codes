// make your own pow() funciton

#include <stdio.h>

int power(int a, int b){
    int result = 1;
    for(int i=0;i<b;i++){
        result = result * a;
    }

    return result;
}

int main(){
    printf("%d",power(2,4));
    return 0;
}