/*Ask the user to enter thier first name and print it back to
them and also try this with their full name */

#include <stdio.h>
int main(){
    // char firstname[60];
    // printf("Enter first name: ");
    // scanf("%s",firstname);
    // printf("Your name is: %s\n",firstname);
    // printf("\n");
    char fullname[60];
    printf("Enter full  name: ");
    scanf("%s",fullname);
    printf("Your name is: %s\n",fullname);
    /*Here we learn scanf only and only stores the 1st word
    it ignores words after spcae, since it cannot input 
    multi-word strings with spaces
    
    
    here we use: gets()  & puts()
    
    */


    
}