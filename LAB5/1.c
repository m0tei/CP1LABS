#include <stdio.h>
#include <stdlib.h>

int fact0(int n){
    int no=0;
    for(int i=1;i<=n;i++){
        int c=i;
        while(c!=0 && c%5==0){
            no++;
            c/=5;
        }
    }
    return no;
}

int fact0usor(int n){
    long long sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    int count=0;
    while(sum%10==0){
        count++;
        sum/=10;
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d",fact0usor(n));

    return 0;
}