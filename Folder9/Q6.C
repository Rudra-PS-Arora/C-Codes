/*Write a function named slice, which tales a string and returns
a sliced string from index n to m
*/

#include <stdio.h>
void slice(char arr[], int n , int m);

int main(){
    char string[] = "Helloworld";
    slice(string, 3,6);
}

void slice(char arr[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i =n; i<=m; i++,j++){
        newstr[j] = arr[i];
    }
    newstr[j] = '\0';
    puts(newstr);
                
}