#include <stdio.h>

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
        printf("Aluno Deletado\n");
        break;
    case 6:
        printf("Lista deletada\n");
        break;
    case 7:
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