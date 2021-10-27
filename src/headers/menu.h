#include <stdio.h>
#include "./menuOptions.h"

void menuDisplay() {
    
    int options;

    do {

        system("clear");
        printf("Menu Prinpical\n");
        printf("--------------\n");
        printf("[1] - Cadastrar Aluno\n");
        printf("[2] - Consultar por RA\n");
        printf("[3] - Listar Todos\n");
        printf("[4] - Consultar por Nome\n");
        printf("[5] - Exlcuir por RA\n");
        printf("[6] - Excluir Todos os Alunos\n");
        printf("[7] - Exibir Maior e Menor Nome\n");
        printf("[0] - Sair\n");
        printf("Escolha a operação: ");
        scanf("%d", &options);
        while ((getchar()) != '\n');
        printf("\n");
        menuOptions(options);
    } while(options != 0);
}