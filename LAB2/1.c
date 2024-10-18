#include <stdio.h>
#include <stdlib.h>

int prodscal(int n, int v[100], int g[100]){
    int rez[100];
    for(int i=0;i<n;i++){
        int elm=0;
        for(int j=0;j<n;j++){
            elm+=v[i]*g[j];
        }
        rez[i]=elm;
    }
    for(int i=0;i<n;i++){
        printf("%d ", rez[i]);
    }
}

int main(){
    int n, v[100],g[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &g[i]);
    }
    prodscal(n,v,g);
}