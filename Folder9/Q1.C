//Create a string FirstName & lastName to store details of user
// and print all the characters using a loop

#include <stdio.h>
void string(char arr[]);
int main(){
    char firstName[] = "Rudra";
    char lastName[] = "Aroara";
    string(firstName);
    string(lastName);

}
void string(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}