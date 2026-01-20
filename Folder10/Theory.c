/*Structures : a collection of values of different data types 
Example:
name(string)
roll no(int)
cgpa(float)

SYNTAX:
struct student{
    char name[100];  //Define
    int roll;
    flaot cgpa;
};

DATA TYPES---> (1)In built data types, int, float etc memory 
allocation is done by the compiler 

(2) User- defined data types, structures, u can set custom memory
for this data types

struct student s1;
s1.cgpa=7.5;
s1.name="Rudra"; // Declare
s1.roll = 34;


Structure In Memory:
Structures are stored in contiguous memory location 

Initializing Structure:
struct student s1 = {"Rudra",1664, 4.6};
struct student s2 = {0};
*/
