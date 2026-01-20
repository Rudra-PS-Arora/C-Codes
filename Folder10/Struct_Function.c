/*  Passing Struct to function
// Function prototype
void printinfo(struct student s1);
*/

#include <stdio.h>
struct student{
    char name[100];
    int roll_no;
    float cgpa;
};
void printinfo(struct student s1);

int main(){
    struct student s1 = {"Rudra",34,4.6};
    printinfo(s1); // call be value // a copy is made


}

void printinfo(struct student s1){
    printf("INFO: \n");
    printf("Name = %s\n",s1.name);
    printf("Roll no = %d\n",s1.roll_no);
    printf("CGPA = %.2f\n",s1.cgpa);

}