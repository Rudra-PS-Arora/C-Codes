/*Check if a give character is present in a string or not */

#include <stdio.h>
#include <ctype.h>
void present(char arr[], char ch) {
    int found = 0; 
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i]== ch) {
            printf("Element found at index %d.\n", i);
            found = 1;
        }
    }
    printf("Element NOT FOUND\n");
}
int main(){
    char name[] = "Rudrar";
    present(name,'r');

}