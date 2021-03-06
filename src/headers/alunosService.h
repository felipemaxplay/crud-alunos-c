#include <stdlib.h>
#include <stdio.h>
#include "./alunos.h"
#include "./menuOptionsMisc.h"

void newAluno() {

    char name[40];
    int ra;

    titleName({"Cadastrando Aluno"});
    printf("Nome: ");
    scanf("%[^\n]s", name);
    clearBuffer();
    printf("RA: ");
    scanf("%d", &ra);
    insertAluno(init, name, ra);
    printf("\nAluno Cadastrado\n");
    anyButtonToContinue();
}

void findByRa() {

    int ra;
    listAlunos * aluno;

    titleName("Procurar Aluno por RA");
    printf("Digite o RA que deseja procurar\n");
    printf("RA: ");
    scanf("%d", &ra);
    clearBuffer();

    if(findAlunoByRa(init, ra) != NULL) {
        
        printf("\nAluno(a) Encontrado(a)\n");
        printf("----------------------\n");
        aluno = findAlunoByRa(init, ra);
        printf("RA: %d\n", aluno -> ra);
        printf("Nome: %s\n", aluno -> name);
    } else {

        printf("\nAluno(a) com o RA %d não foi encontrado(a)\n", ra);
    }
    anyButtonToContinue();
}

void findByName() {

    char name[40];

    titleName("Procurar Aluno por Nome\n");
    printf("Digite o nome que deseja procurar\n");
    printf("Nome: ");
    scanf("%[^\n]s", name);
    clearBuffer();
    printf("\nAluno(s) Encontrado(s)\n");
    printf("----------------------\n");
    findAlunoByName(init, name);
    anyButtonToContinue();
}

void allAlunos() {

    titleName("Listar Todos");
    printAllAluno(init);
    anyButtonToContinue();
}

void deleteByRa() {

    int ra;

    titleName("Remover Aluno por RA");
    printf("Qual o RA do aluno que deseja remover\n");
    printf("RA: ");
    scanf("%d", &ra);
    clearBuffer();
    if(removeByRa(init, ra) != 0) {

    printf("\nAluno Removido com Sucesso\n");
    } else {
    
        printf("\nAluno(a) com o RA %d não foi encontrado(a)\n", ra);
    }

    anyButtonToContinue();
}

void deleteAllAlunos() {

    titleName("Deletar Lista de Alunos");
    removeAllAlunos(init);
    printf("Lista deletada com sucesso\n");
    anyButtonToContinue();
}

void findBigAndSmall() {

    titleName("Maior e Menor Nome da Lista");
    findBiggerAndSmallName(init);
    anyButtonToContinue();
}

void invalidOption() {

    printf("Operação invalida. Por favor tente novamente.\n");
    anyButtonToContinue();
}