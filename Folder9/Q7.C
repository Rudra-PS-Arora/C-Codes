/*Write a function to count the occurrence of vowels in 
a string*/

#include <stdio.h>
#include <ctype.h>
void vowels(char arr[],int n);
int main(){
    char str[] = "Rudra";
    vowels(str,5);

}
void vowels(char arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        char ch = tolower(arr[i]); // convert to lowercase
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            count++;
        }
    }
    printf("Vowels: %d",count);
}