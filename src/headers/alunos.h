#include <stdlib.h>
#include <stdio.h>

typedef struct nodo {

    struct nodo *pre;
    char name[40];
    int ra;
    struct nodo *next;
} listAlunos;

listAlunos *init = NULL; // variavel que irá conter o endereço do nó inicial.

void insertAluno(listAlunos *point, char namePers[40], int raPers) {

    listAlunos *aux;
    aux = ( listAlunos * ) malloc(sizeof(listAlunos)); // aloca dinamicamente um novo nó
    for (int i = 0; i < 40; i++) {

        aux -> name[i] = namePers[i];
    }
    aux -> ra = raPers;

    if (point == NULL) { // verifica se a lista está vazia
        
        init = aux;
        init -> pre = NULL;
        init -> next = NULL;
    } else { // se a lista não estiver vazia
        while (point -> next != NULL) {

            point = point -> next;
        }
        aux -> pre = point;
        aux -> next = NULL;
        point -> next = aux;
    }   
}

listAlunos* findAlunoByRa(listAlunos *point, int ra) {

    while (point != NULL) {
        
        if(ra == point ->ra) {
            
            return point;
        } else {
            point -> next;
        }
    }

    return NULL;
}

void printAllAlunoRightAndLeft(listAlunos * point) {

    listAlunos * pre;
    printf("From left to right: ");
    while(point != NULL) {

        printf("\nRA: %d\nName: %s\n", point -> ra, point -> name);
        pre = point;
        point = point -> next;
    }

    printf("From right to left: ");
    while(pre != NULL) {
        printf("\nRA: %d\nName: %s\n", pre -> ra, pre -> name);
        pre = pre -> pre;
    }
}