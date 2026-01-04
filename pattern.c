#include <stdio.h>
int main() {
    int x;
    int y; 
    printf("Enter no os stars to print in one line: ");
    scanf("%d",&x);
    printf("Enter no of rows: ");
    scanf("%d",&y);
     
    for(int i=1; i<=y; i++){
        for(int i=1; i<=x; i++) {
            printf("*");
        }
        printf("\n");
    }

    
    return 0;
}