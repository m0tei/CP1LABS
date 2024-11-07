#include <stdio.h>
#include <stdlib.h>

void interclasare(int A[100], int B[100], int C[100], int a, int b, int *c){
    int i=0,j=0;
    *c=-1;
    while(i<a && j<b){
        if(A[i]<B[j]){
            C[++(*c)]=A[i];
            i++;
        //we add om the vector c, the value from A that is smaller that the value from B
        }else if(B[j]<A[i]){
            C[++(*c)]=B[j];
            j++;
        // we add the smallest value from the current possition
        }else{
            C[++(*c)]=B[j];
            i++;
            j++;
        // if equal, we only add one of the values, thus removing duplicates
        }
    }
    while(i<a){
        C[++(*c)]=A[i];
        i++;
    }
    while(j<b){
        C[++(*c)]=B[j];
        j++;
    }
    // we add the remaining itmes from the longer vector
}

int main(){
    int A[100],B[100],C[200], a,b,c=-1;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i=0;i<a;i++){
        scanf("%d", &A[i]);
    }
    for(int i=0;i<b;i++){
        scanf("%d", &B[i]);
    }

    interclasare(A,B,C,a,b,&c);
    for(int i=0;i<=c;i++){
        printf("%d ", C[i]);
    }
}