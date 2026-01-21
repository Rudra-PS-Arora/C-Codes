/*realloc() - reallocate(increase or decrease) memmory 
using the same pointer and size

ptr = realloc(ptr,newsize);
*/

#include <stdio.h>
#include <stdlib.h>
//Q.3 Allocate memory for 5 numbers and then dynamically increase
//it to 8 numbers

int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    for(int i=0; i<5; i++){
        printf("%d",ptr[i]);
    }
    ptr = realloc(ptr,8);
    printf("\n");
    for(int i=0; i<8; i++){
        printf("%d\n",ptr[i]);
    }

}