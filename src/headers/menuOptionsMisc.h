#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void titleName(const char name[]) {

    system("clear");
    printf("%s\n", name);
    for(int i = 0; i < strlen(name); i++) {

        printf("-");
    }

    printf("\n");
}

void clearBuffer() {

    while ((getchar()) != '\n');
}

void anyButtonToContinue() {

    printf("\nAperte qualquer tecla para continuar...\n");
    clearBuffer();
    getchar();    
}