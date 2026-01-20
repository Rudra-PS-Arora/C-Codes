#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;

};
// IN main funciton:
// Memory is allocated
// A variable named s1 is created
//  Type = struct student

int main(){
    struct student s1;
    struct student IT[100];
    IT[0].roll_no=34;
    IT[0].cgpa=3.67;
    strcpy(IT[0].name, "Rudra PS");

    strcpy(s1.name,"Rudra");
    s1.roll_no = 155;
    s1.cgpa = 3.5;
    printf("%d\n", s1.roll_no);
    printf("%s\n", s1.name);
    printf("%.2f\n", s1.cgpa);
    // Dot operator is used to assign or access a property 
    // of structure.
    printf("\n");
    printf("Name = %s\n",IT[0].name);
    printf("Roll no: = %d\n",IT[0].roll_no);
    printf("CGPA: = %f\n",IT[0].cgpa);


    /*struct student → data type
    s1 → one variable
    IT → multiple variables of same type*/
}