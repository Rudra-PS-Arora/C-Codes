/* Pointer can be incremented & decremented

Case-1:
int age = 34;
int *ptr = &age;
ptr++;

here value of ptr is increaing by 4 bytes, it will increase 
or decrease by its assigned data type.

So, in memory there is a container called age its memory locaiton 
is stored in ptr, we increased it so, now ptr stores address of the 
second container, which has memory location of age +4 .

Case-2
float price = 3.0;
float *ptr = &price;
ptr++;

Case -3
char start = '*';
cahr *ptr = &star;
ptr++;

Note: We can subtract two same pointer of same data type
they donot return a number rather a data value, (1 = 1 int value)

Note: We can also compare two ame pointer
they can return true or false.

*/