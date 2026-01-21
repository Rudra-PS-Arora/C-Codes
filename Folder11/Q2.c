/*Make a program to input student information from a user and enter it 
to a file*/
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Student Information.txt","w");
    char name[100];
    int age;
    int marks;

    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter marks: ");
    scanf("%d",&marks);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%d\t",marks);

    fclose(fptr);
}