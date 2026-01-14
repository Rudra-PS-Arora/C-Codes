// In a array of numebrs, find how many times does a number 'x' occurs
#include <stdio.h>

void count_x(int arr[], int n, int x);

int main(){
    int arr[]= {2,2,2,4,5,6};
    count_x(arr,6,3);
    
}

void count_x(int arr[], int n, int x){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            count = count +1;
        }
    }
    printf("%d",count);
}
