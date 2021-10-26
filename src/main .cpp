#include <stdlib.h>
#include <stdio.h>
#include "./headers/menu.h"
#include "./headers/menuOptions.h"

void appMain() {

    int options = 0;

    do {

        menuDisplay();
        printf("Escolha a operação: ");
        scanf("%d", &options);
        while ((getchar()) != '\n');
        printf("\n");
        menuOptions(options);
    } while (options != 0);
}

int main(int argc, char const *argv[]) {

    appMain();

    return 0;
}
