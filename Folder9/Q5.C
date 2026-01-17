/*Salting: Find the salted form of a password entered by the user
if the salt is '123' and added at the end*/

#include <stdio.h>
#include <string.h>
void salt(char arr[]);

int main(){
    char password[100];
    scanf("%s", password);
    salt(password);
}

void salt(char arr[]){
    char salt[] = "123";
    char newstr[200];
    strcpy(newstr,arr);
    strcat(newstr,salt);
    puts(newstr);
}