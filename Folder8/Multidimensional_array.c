/*
Multidimensional Array
int arr[]; // 1D array
int arr[][]; // 2D array
int arr[][] = {{1,2},{3,4}}; // Declare

//Access

arr[0][1] // 2
arr[0][0] // 1

arr[1][0] // 3
arr[1][1] // 4

*/
//Storing marks of 2 student of 3 subjects

#include <stdio.h>
int main(){
    //marks[row][column]
    int marks[2][3]; // [no of arrays] | [size]
    marks[0][0] = 91;
    marks[0][1] = 90;
    marks[0][2] = 95;

    marks[1][0] = 94;
    marks[1][1] = 91;
    marks[1][2] = 75;
    
    printf("%d",marks[0][0]);

}