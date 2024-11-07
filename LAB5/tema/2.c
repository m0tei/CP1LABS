#include <stdlib.h>
#include <stdio.h>

int checkPerfSq(int n){
    int i=1;
    for(i=1;i*i<=n;i++){
        if(i*i==n){
            return 1;
        }
    }
    return 0;
}


int main() {
    int n, v[100], new_v[100], cont=-1;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }

    for(int i=0;i<n;i++){
        if(checkPerfSq(v[i])){
            new_v[++cont]=v[i];
        }
    }
    for(int i=0;i<=cont;i++){
         printf("%d ", new_v[i]);
    }
}