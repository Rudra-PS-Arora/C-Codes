/*Make a program that inputs user's name & prints its length*/

#include <stdio.h>
void nameLength(char arr[]) {
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != '\n') { // ignore newline from fgets
            count++;
        }
    }
    printf("Length: %d\n", count);
}
int main(){
    char name[100];
    printf("Enter name: ");
    fgets(name, 100, stdin);
    nameLength(name);


}