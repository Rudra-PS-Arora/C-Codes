//Swap two no a and b.

#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    swap(x,y);
    printf("x = %d and y = %d\n",x,y);

    _swap(&x,&y);
    printf("x = %d and y = %d\n",x,y);

}   

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("x = %d and y = %d\n",a,b);


}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("x = %d and y = %d\n",*a,*b);


}