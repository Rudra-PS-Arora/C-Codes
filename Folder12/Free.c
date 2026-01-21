/*free() - we use it to free memory that is allocated using 
malloc and calloc

free(ptr);*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*ptr;
    printf("Enter value of 'n': ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));
    printf("%d",*ptr);

    free(ptr);
    ptr = (int*)calloc(2,sizeof(int));
    printf("%d",*ptr);
}