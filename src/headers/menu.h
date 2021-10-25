#include <stdio.h>

void menuDisplay() {
    printf("\n\n");
    printf("Menu Prinpical\n");
    printf("--------------\n");
    printf("[1] - Cadastrar Aluno\n");
    printf("[2] - Consultar por RA\n");
    printf("[3] - Listar Todos\n");
    printf("[4] - Consultar por Nome\n");
    printf("[5] - Excluir Todos\n");
    printf("[6] - Exibir Maior e Menor Nome\n");
    printf("[0] - Sair\n");
}

void menuOptions(int op) {
    switch (op) {
    case 1:
        printf("Cadastro completo\n");
        break;
    case 2:
        printf("RA: 21 - Matheus\n");
        break;
    case 3:
        printf("1 - Jean\n2 - Maicon\n3 - Jean\n");
        break;
    case 4:
        printf("1 - Fernanda\n");
        break;
    case 5:
        printf("Lista deletada\n");
        break;
    case 6:
        printf("1 - Ana\n2 - Maicon\n");
        break;
    case 0:
        printf("Saindo\n");
        break;
    
    default:
    printf("Operação invalida. Por favor tente novamente.\n");
        break;
    }
}