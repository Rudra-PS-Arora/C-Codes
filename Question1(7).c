// Write a program to calculate area of square.
// Side is 5cm

// we know area = side * side = side**2 or 5 raise power 2

#include <stdio.h>
int main() {
    int side = 5;
    int area = side*side;
    printf("The area is %d\n",area);

    // Or

    int Side;
    printf("Enter the vaule of side: ");
    scanf("%d",&Side);
    int Area = Side*Side;
    printf("The are is %d",Area);

}

// Try to ask user the side.
