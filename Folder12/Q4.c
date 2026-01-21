/*Create an array of size 5(using calloc) and enter its values
fomr the user*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    printf("Enter values: ");
    for(int i=0; i<5; i++){
        scanf("%d",&ptr[i]);
    }
     for(int i=0; i<5; i++){
        printf("%d\n",ptr[i]);
    }
    

}