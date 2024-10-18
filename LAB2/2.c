#include <stdio.h>
#include <stdlib.h>

int reuniune(int n,int m, int v[100], int g[100]){
    int nou[200], nr=-1;
    for(int i=0;i<n;i++){
        nou[++nr]=v[i];
    }
    for(int i=0;i<m;i++){
        int ok=1;
        for(int j=0;j<=nr;j++){
            if(nou[j]==g[i]){
                ok=0;
            }
        }
        if(ok){
            nou[++nr] = g[i];
        }
    }
    for(int i=0;i<=nr;i++){
        printf("%d ", nou[i]);
    }
}

int intersectie(int n, int m, int v[100], int g[100]){
    int nou[100], nr=-1;
    for(int i=0;i<n;i++){
        int ok=0;
        for(int j=0;j<m;j++){
            if(v[i]==g[j])
                ok=1;
        }
        if(ok){
            nou[++nr]=v[i];
        }
    }
    for(int i=0;i<=nr;i++){
        printf("%d ", nou[i]);
    }
}

int scadere(int n, int m, int v[100], int g[100]){
    int nou[100],nr=-1;
    for(int i=0;i<n;i++){
        int ok=1;
        for(int j=0;j<m;j++){
            if(v[i]==g[j])
                ok=0;
        }
        if(ok){
            nou[++nr]=v[i];
        }
    }
    for(int i=0;i<=nr;i++){
        printf("%d ", nou[i]);
    }
}

int main(){
    int n, m, v[100],g[100];
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d", &g[i]);
    }
    reuniune(n,m,v,g);
    printf("\n");
    intersectie(n,m,v,g);
    printf("\n");
    scadere(n,m,v,g);
    printf("\n");
}