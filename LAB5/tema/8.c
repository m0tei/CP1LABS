#include <stdlib.h>
#include <stdio.h>

int lung(char string[100]){
    int i=0;
    while(string[i]){
        i++;
    }
    return i;
}

int start(char a[100], char b[100]){
    for(int i=0;i<=lung(a)-lung(b);i++){
        int k=0,j=0;
        while(b[k]==a[j] && b[k]!=0){
            k++;
            j++;
            printf("%c %c", a[j],b[k]);
        }
        if(b[k]==0){
            return i;
        }
        printf("\n");
    }
}

int main(){
    char a[100], b[100];
    scanf("%99s %99s", a, b);
    printf("%d", start(a,b));
}