
/*malloc(): takes a number of bytes to be allocated and returns
a pointer of type void

ptr=(int*)malloc(5*sizeof(int));

*/

/*Checking the size of int, float and char*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //printf("%d\n%d\n%d",sizeof(int),sizeof(char),sizeof(float));
    int *ptr;
    ptr = (int*)malloc(5 *sizeof(int)); //allocation at runtime
    // (int*) type casting void ptr into int ptr
    // if the memory asked is more than system capability it returns null

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0; i<5; i++){
        printf("%d\n",ptr[i]);
    }

}