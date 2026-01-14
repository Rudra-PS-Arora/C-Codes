//Write a program to print the largest no in an array

#include <stdio.h>

void largeno(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,69};
    largeno(arr,6);

}

void largeno(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

    }
    printf("Largest number is: %d\n", largest);
}