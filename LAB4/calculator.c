#include "calculator.h"

int sum(int a, int b){
    return a+b;
}

int dif(int a, int b){
    return a-b;
}

int power(int a, int b){
    int rez=1;
    for(int i=1;i<=b;i++){
        rez = rez * a;
    }
    return rez;
}

int times(int a, int b){
    return a*b;
}

int factorial(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum += i;
    }
    return sum;
}

int division(int a, int b){
    return a/b;
}
