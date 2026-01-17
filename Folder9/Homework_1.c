/*Write a program to replace lowercase letters with uppercase and 
vice versa in a string*/

/*islower(c) → checks lowercase
isupper(c) → checks uppercase
toupper(c) → converts to uppercase
tolower(c) → converts to lowercase*/

#include <stdio.h>
#include <ctype.h>
void Case(char arr[]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (islower(arr[i])) {
            arr[i] = toupper(arr[i]);
        }
        else if (isupper(arr[i])) {
            arr[i] = tolower(arr[i]);
        }
    }
    printf("%s",arr);
}
int main(){
    char str[100];
    scanf("%s",str);
    Case(str);;
}