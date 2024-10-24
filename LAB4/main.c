#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "calculator.h"

void shutdown_animation() {
    // Animation part
    printf("Shutting down calculator...\n");
    sleep(1);  // Delay for 1 second
    printf(".\n");
    sleep(1);  // Delay for 1 second
    printf("..\n");
    sleep(1);
    printf("...\n");
    sleep(1);

    printf("\nGoodbye!\n");
    sleep(1);
}

int main(){
    printf("~ CALCULATOR DE BUZUNAR ~ \n");

    char command;
    int a,b;

    while(1){
        // while true for continuous running
        printf("Type: \n + -> sum \n - -> difference \n * -> multiplication \n ^ -> power \n / -> division \n ! -> factorial \n e -> exits the program \n");
        printf("> ");

        scanf("\n%c", &command);

        // reads from the keyboard the command

        switch(command){
            case '+':
                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);
                printf("\n");
                printf("=> %d \n",sum(a,b));
                break;
            case '-':
                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);
                printf("\n");
                printf("=> %d \n",dif(a,b));
                break;
            case '*':
                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);
                printf("\n");
                printf("=> %d \n",times(a,b));
                break;
            case '/':
                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);
                printf("\n");
                printf("=> %d \n",division(a,b));
                break;
            case '^':
                printf("a = ");
                scanf("%d", &a);
                printf("b = ");
                scanf("%d", &b);
                printf("\n");
                printf("=> %d \n",power(a,b));
                break;
            case '!':
                printf("a = ");
                scanf("%d", &a);
                printf("\n");
                printf("=> %d \n",factorial(a));
                break;
            case 'e':
                shutdown_animation();
                return 0;
            default:
                printf("COMANDA NU ESTE VALIDA");
                break;

        }
        //handles every case using the predifined functions
        
        sleep(1);
    }
}