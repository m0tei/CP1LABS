#include <stdlib.h>
#include <stdio.h>

int highestPerfectSq(int n){
    int i;
    for(i=1;i*i<=n;i++){}
    return (i-1)*(i-1);
}


int main() {
    int n;
    printf("%d",highestPerfectSq(6));
}