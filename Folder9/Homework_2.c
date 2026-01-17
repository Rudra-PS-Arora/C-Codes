/*Write a program to remove blank space in a string*/

#include <stdio.h>
#include <ctype.h>
void slice_space(char arr[]) {
    char newarr[100];
    int j=0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i]!= ' ') {
            newarr[j] = arr[i];
            j++;
        }
    }
    newarr[j] = '\0';
    printf("%s",newarr);
}
int main(){
    char name[100];
    fgets(name, 100, stdin);
    slice_space(name);
}