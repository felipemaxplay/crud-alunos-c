#include <stdlib.h>
#include <stdio.h>
#include "./headers/menu.h"

int main(int argc, char const *argv[]) {

    int options = 0;

    do  {
        menuDisplay();
        printf("Escolha a operação: ");
        scanf("%d", &options);
        printf("\n");
        menuOptions(options);
    } while (options != 0);
    
    return 0;
}
