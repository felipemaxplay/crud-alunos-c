#include <stdio.h>
#include "./alunosService.h"

void menuOptions(int op) {
    switch (op) {
    case 1:
        newAluno();
        break;
    case 2:
        findByRa();
        break;
    case 3:
        allAlunos();
        break;
    case 4:
        printf("1 - Fernanda\n");
        break;
    case 5:
        deleteByRa();
        break;
    case 6:
        deleteAllAlunos();
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