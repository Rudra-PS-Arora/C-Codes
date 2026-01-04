// break --? exit the loop

// #include <stdio.h>
// int main() {
//     for(int i=1; i<=5; i++) {
//         printf("%d\n",i);
//         if(i==3) {
//             break;
//         }
//     }

//     printf(" END ");
//     return 0; 
// }

// Kepp taking input form the user until user enters an odd number

// #include <stdio.h>
// int main() {
//     for(int i=1; i=1; i++) {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     if(x%2!=0) {
//         printf("Loops ended");
//         break;

//     }


//     }
// }

// same question but break the loop when user enters a multiple of 7
#include <stdio.h>
int main() {
    for(int i=1; i=1; i++) {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x % 7 ==0) {
        printf("Loops ended");
        break;

    }


    }
}
// breaak ---> also exits nested loops
