// write a funtion to print multiplication table of no n
// n is entered by the user

int Table(int a);

#include <stdio.h>
int main() {
    int b;
    printf("Enter a number: ");
    scanf("%d",&b);

    Table(b);// argumernt pr actuall parameter
    return 0;
}
int Table(int a) { //parameter pr formal parater
    for(int i=1; i<=10; i++){
        int z;
        z = a*i;
        printf("%d X %d = %d\n", a , i , z);
    }
}