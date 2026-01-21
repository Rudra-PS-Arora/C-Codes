/*Replace the data in the file of Q(a) with the number of vowels
in the string.*/
#include <stdio.h>
#include <ctype.h>
int main(){
    FILE *fptr;
    fptr = fopen("homework_1.txt","r");
    char ch;
    ch = fgetc(fptr);
    int count = 0;
    while((ch = fgetc(fptr)) != EOF){
        ch = tolower(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
    }
    fclose(fptr);
    fptr = fopen("homework_1.txt","w");
    fprintf(fptr,"%d",count);
    fclose(fptr);
}