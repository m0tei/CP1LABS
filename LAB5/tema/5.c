#include <stdio.h>
#include <stdlib.h>

int money[]={500, 200, 100, 50, 20, 10, 5, 1};
int len=8;



int main(){
    int amount;
    int no=0;
    scanf("%d", &amount);
    for(int note=0; note<len; note++){
        while(amount-money[note]>=0){
            amount-=money[note];
            no++;
            printf("%d ", money[note]);
        }
    }
    printf("%d", no);
}