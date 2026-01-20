/*Create a structure to store complex numbers. (Use arrow operator)
*/

#include <stdio.h>

typedef struct complex_number{
   int real;
   int imaginary; 
}complex;

int main(){
    complex one = {34,-5};
    complex *ptr = &one;
    printf("%d",ptr->imaginary);
    printf("\n");
    printf("%d",ptr->real);

}