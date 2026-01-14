#include <stdio.h>

// Function inserts element at the end and returns new size
int insert_end(int arr[], int n, int element){
    arr[n] = element;  // insert at last index
    n++;                // increment size
    return n;           // return updated size
}

int main(){
    int arr[100] = {1, 2, 3, 4, 5};  // array with extra space
    int n = 5;                        // current size
    int element;

    printf("Enter element to insert at the end: ");
    scanf("%d", &element);

    n = insert_end(arr, n, element);  // call function

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
