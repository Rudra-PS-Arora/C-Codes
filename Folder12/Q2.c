/*Wap to allocate memory of size n,where n is entered
by the user*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*ptr;
    printf("Enter value of 'n': ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));
    printf("%d",*ptr);
}