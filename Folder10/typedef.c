/*typedef keyword: used to create alias for data types
can be done for: int, char , float (genreally avoided)
used to sructures (mostly)
Syntax: 
tydef struct #name{
    int roll_no;
    float cgpa;
    char name[100];
} #alias;


*/

#include <stdio.h>
typedef struct student_information{
    int roll_no;
    char name[100];
    float cgpa;

} SI;

int main(){
    SI s1 = {23,"Rudra",4.6};
    printf("%d, %s, %.2f",s1.roll_no,s1.name,s1.cgpa);
}