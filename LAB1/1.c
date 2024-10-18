#include <stdlib.h>
#include <stdio.h>

int cmmdc(int a, int b){
    while(b!=0){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int palindrom(int a){
    int inv=0,ca=a;
    while(a){
        inv=inv*10+a%10;
        a/=10;
    }
    if(ca==inv)
        return 1;
    return 0;
}

int main(){
    int a,b;
    scanf("%d", &a);
    printf("%d", palindrom(a));
    return 0;
}