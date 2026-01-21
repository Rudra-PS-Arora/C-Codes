/*calloc() - continous allocation
initializes with 0 ,at address 0 is store.

ptr = (int*)calloc(5,sizeof(int));*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    printf("%d %d %d ",ptr,*ptr,&ptr);
    //malloc can either assign 0 or random no 


}