/* Loop control instructions
types: for, while and do while */

/*Synatx
for (initialisation; ocndition ;update) {
// do something
}

*/

// #include <stdio.h>
// int main() {
//     for(int i=1; i<=100; i+=1) {
//         printf("%d\n",i);
//     } 
// }


// Write a progeam to print: 012345678910
// #include <stdio.h>
// int main() {
//     for(int i=0; i<=10; i+=1) { // i++ = i+=1
//         printf("%d",i);
//     } 
// }

// i is called an iterator vairable
// i++ and i-- are called increment and decrement operator


// #include <stdio.h>
// int main() {
//     int i =1;
//     // printf("%d \n",i++); // use then increase by 1 (post increment)
//     // printf("%d \n",i);

//     printf("%d \n",++i); // increase then use  (pre increment)
//     printf("%d \n",i);
// }


// i-- (post decrement)
// --i (pre decreent)

// i can be float and character


#include <stdio.h>
int main() {
    for (char ch = 'a'; ch <='z'; ch++) {
        printf("%c ", ch);
    }
}

// to condition == infinity loop