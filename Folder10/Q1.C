/*Enter address (houseno, block, city, state) of 5 ppl */

#include <stdio.h>

struct address{
    int house_no;
    int block;
    char city[100];
    char state[100];
};
void printppl(struct address ppl){
    printf("Address is: %d, %d, %s, %s\n",ppl.block,ppl.house_no,ppl.city,ppl.state);
}
int main(){
    struct address ppl[5];
    for(int i=0; i<5; i++){
        printf("Enter info of %dst person: ",i);
        scanf("%d",&ppl[i].house_no);
        scanf("%d",&ppl[i].block);
        scanf("%s",ppl[i].city);
        scanf("%s",ppl[i].state);
    }
    printppl(ppl[0]);
    printppl(ppl[1]);
    printppl(ppl[2]);
    printppl(ppl[3]);
    printppl(ppl[4]);

}


