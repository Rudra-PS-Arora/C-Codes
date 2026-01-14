//Create a 2D Array, storing  the tables of 2 and 3.

#include <stdio.h>
int main(){
    int tables[2][10];
    for(int i=0; i<10; i++){
        tables[0][i] = 2 *(i+1);
        tables[1][i] = 3*(1+i);

    }
    for(int i=0; i <10; i++) {
        printf("%d  %d\n", tables[0][i], tables[1][i]);
    }
}