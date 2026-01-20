/*Create a structure to store vectors. Then maeke a function to return
sum of 2 vectors */

#include <stdio.h>
struct vector{
    int x;
    int y;

};
void sumofvector(struct vector v1,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("%d\n",sum.x);
    printf("%d\n",sum.y);
}

int main(){
    struct vector v1 = {3,4};
    struct vector v2 = {4,6};
    struct vector sum = {0};
    sumofvector(v1,v2,sum);
}
