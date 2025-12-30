// Swtch is just like the real word 

// It matches certain number or character

/*synatx:

switch(number) {
case c1: do something
        break;
case c2: do something
        break;
default: do something
}
}
(1) Nested switch are allowed
(2) case sequence does not matter 
*/

#include <stdio.h>
int main() {
    int day;
    printf("Enter day (1-7): "); // 1= monay 2 = tuesday ...
    scanf("%d",&day);

    switch (day){
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        default: printf("3 and further are not vaild ");
                

    }

}