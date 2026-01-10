/*
Pointers are: a variable that stores the memory addres of another 
variable

SYNTAX
* --> Value at address
& --> address of 
example:

int age = 32;

---------->  // Declaring pointer
int *ptr = &age;
int _age = *ptf;  * means value at, so in here

so, value at addres means, ptr has a address to age,
_age will get the value of age from ptr since ptr has address 
of age,

so _age = 32


here age was int, but it can be

char *ptr
float *ptr

--------> Format specifier: %p(hexadecimeal) or %u(unassignment int)


itn age = 32;
int *ptr = &age;
int _age = *ptf;

printf("%p",&ptr)
printf("%p",ptr)
printf("%p",&age) // same as printf("%p",ptr)


------------> POINTER TO POINTER
A VARIABLE: that stores that memory address of another pointer

SYNTAX:
int **pptr
char **pptr
flaot **pptr



*/