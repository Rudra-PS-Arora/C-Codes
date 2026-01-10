#include <stdio.h>
int main(){
    int age = 34;
    int *ptr = &age;
    int **pptr = &ptr;

    printf("%p\n",pptr);
    printf("%p",&(ptr));

    return 0;
}
