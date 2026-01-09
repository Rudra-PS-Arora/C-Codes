//  Write a function to find sunm of digits of a no
#include <stdio.h>
void SUM(int a);

int main(){
    SUM(13);
    return 0;
}

void SUM(int a){
    int b = a % 10;
    int c = a /10;
    int sum = b+c;
    printf("%d",sum);

}