#include <stdlib.h>
#include <stdio.h>
#include "./alunos.h"

void clearBuffer() {

    while ((getchar()) != '\n');
}

void anyButtonToContinue() {

    printf("\nAperte qualquer tecla para continuar...\n");
    clearBuffer();
    getchar();    
}

void newAluno() {

    char name[40];
    int ra;

    system("clear");
    printf("Cadastrando Aluno\n");
    printf("-----------------\n");
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

    system("clear");
    printf("Procurar Aluno por RA\n");
    printf("---------------------\n");
    printf("Digite o RA que deseja procurar\n");
    printf("RA: ");
    scanf("%d", &ra);
    clearBuffer();
    printf("\nAluno Encontrado\n");
    printf("-----------------\n");
    printf("RA: %d\n", findAlunoByRa(init, ra) -> ra);
    printf("Nome: %s\n", findAlunoByRa(init, ra) -> name);
    anyButtonToContinue();
}

void allAlunos() {

    system("clear");
    printf("Listar Todos\n");
    printf("------------\n");
    printAllAluno(init);
    anyButtonToContinue();
}

void deleteByRa() {

    int ra;

    system("clear");
    printf("Remover Aluno por RA\n");
    printf("--------------------\n");
    printf("Qual o RA do aluno que deseja remover\n");
    printf("RA: ");
    scanf("%d", &ra);
    clearBuffer();
    removeByRa(init, ra);
    printf("\nAluno Removido com Sucesso\n");
    anyButtonToContinue();
}

void deleteAllAlunos() {

    system("clear");
    printf("Deletar Lista de Alunos\n");
    printf("-----------------------\n");
    removeAllAlunos(init);
    printf("Lista deletada com sucesso\n");
    anyButtonToContinue();
}