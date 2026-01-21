#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student(Homework.3).txt","w");

    char name[5][100], course[5][100];
    int marks[5], age[5];

    for(int i = 0; i < 5; i++){
        printf("Enter name: ");
        scanf("%s", name[i]);

        printf("Enter marks: ");
        scanf("%d", &marks[i]);

        printf("Enter course: ");
        scanf("%s", course[i]);

        printf("Enter age: ");
        scanf("%d", &age[i]);
    }

    fprintf(fptr, "Name\tMarks\tCourse\tAge\n");
    fprintf(fptr, "--------------------------------\n");

    for(int i = 0; i < 5; i++){
        fprintf(fptr, "%s\t%d\t%s\t%d\n",
                name[i], marks[i], course[i], age[i]);
    }

    fclose(fptr);
}