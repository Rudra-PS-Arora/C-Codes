// Write a function to count the number of odd number in an 
// array.
#include <stdio.h>
void odd(int arr[], int n);

int main(){
    int arr[] = {1,3,5,7,9,2,4,6,8,5};
    odd(arr,10);
    return 0;

}
void odd(int arr[], int n){
    int s = 0;
     for(int i=0; i<n; i++) {
        if(arr[i]%2!=0){
            printf("%d\t",arr[i]);
            printf("\n");
            s++;
        }
    }
    printf("No of odd no: %d",s);
}
