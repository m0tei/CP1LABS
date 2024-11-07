#include <stdlib.h>
#include <stdio.h>

int romanValue(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int transform(char string_roman[100]){
    int no=0, i=0;
    while(string_roman[i]!=0){
        no+=romanValue(string_roman[i]);
        i++;
    }
    return no;
}

int main(){
    char string_roman[100];
    scanf("%99s", &string_roman);

    int num = transform(string_roman);
    printf("%d", num);  
}