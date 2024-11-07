#include <stdlib.h>
#include <stdio.h>

float x_to_pow_y(float x, int y){
    float res=1;
    for(int i=1;i<=y;i++){
        res*=x;
    }
    return res;
}

int main() {
    printf("%f", x_to_pow_y(2.3,3));
}