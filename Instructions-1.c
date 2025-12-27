// Instructions are statements in a prgram
/*Types
(1) Type declarations INstructions: They declare a variable and its type
int a =4; // example
int b = a;
int c = b+1
int d = 1, e // here is a variable without any value
int a , b, c ;
a = b = c =4;
NOTE: DECLARE BEFORE CALLING A VARIABLE 

(2) Arithematic Instructions
ex:  c = a+b    
here a and b are operand and '+' is the operator
NOTE--> SINGLE VARIABLE ON Left hand side, cause value goes from right to left

NOTE--> pow(x,y) for x to the power y 
NOTE ---> TO USE pow() we have to #include <math.h>  

% -- modulo operator, returns remainder
5%3=2
In c we cannot use % with flaot and if numerator is -ve then the remander is also -ve

TYPE CONVERSION:
int op flaot = flaot
int op int = int
flaot op flaot = float

op = operation like +,-,/,% 

*/

// VERY IMPORANT QUESTION:
// Q. print the value of a if, int a = 1.99999;

/*#include <stdio.h>
int main() {
    int a=  1.999999;
    printf("%d",a);
    // here C stores the float value inside a int variable
    // do do so it cuts the decimal part no rounding off
}*/

//Operator Precedence 
/*
1.) *,/,%
2.) +,-
*/

/*
(3) Control Instructions: Used to determine flow of program
a. Sequence Control
b. Decision Control
c. Loop control
d. Case control
*/

/*   Operators 
1. Arthimatic --> +,-,/,%
2. Relational ->  ==, !=, >, <, >=, <=

3. Logical --> && , ||(OR) , !
NOTE--> Preccedence: 1. ! , 2 Arithimatic (*,/,%) then +,- 3. Relational (<,<=,>,>=) then
(==,!=) then and && then or || then = 

4. Bitwise --> 
5. Assignment -->=, +=, -=, *=, /=, %=
6. Ternary
*/
// Write a program to check if a number is divisible by 2 or not
 #include <stdio.h>
 int main() {
    int x;
    printf("Enter a nmber: ");
    scanf("%d",&x);
    printf("%d\n",x % 2==0); // 1 --> yes 0--> no

    // Even or odd
    int y;
    printf("Enter a nmber: ");
    scanf("%d",&x);
    printf("%d\n",x % 2==0); 

    // If 2 digit
    int z;
    printf("Enter a nmber: ");
    scanf("%d",&x);
    printf("%d",x >9 && x<100); 

 }