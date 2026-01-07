// Write a funtion that prints Namaste if user is indian and Bonjour
// if the user is French

void namaste();
void Bonjour();
#include <stdio.h>
int main() {
    char c;
    printf("Enter your country: ");
    scanf(" %c",&c);
    if(c=='I' || c=='i') {
        namaste();
    }
    else{
        Bonjour();
    }
}
void namaste() {
    printf("Namaste");
}
void Bonjour() {
    printf("Bonjour");
}