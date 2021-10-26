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

listAlunos * findAlunoByRa(listAlunos * point, int ra) {

    while (point != NULL) {
        
        if(ra == point ->ra) {
            
            return point;
        } else {
            point = point -> next;
        }
    }

    return NULL;
}

void printAllAluno(listAlunos * point) {

    listAlunos * pre;
    while(point != NULL) {

        printf("RA: %d\nName: %s\n\n", point -> ra, point -> name);
        pre = point;
        point = point -> next;
    }
}

int removeByRa(listAlunos * point, int ra) {

    listAlunos * aux;
    if(point == NULL) {

        return 0;
    } else if( ra == point -> ra) {
        
        aux = point;
        init = point -> next;
        init -> pre = NULL;
        free(aux);
        return 1;
    } else {

        while(point -> next != NULL) {
            if(ra == point -> next -> ra) {
                aux = point -> next;
                point -> next = aux -> next;
                if(aux -> next != NULL) {
                    aux -> next -> pre = aux -> pre;
                }
                free(aux);
                return 1;
            } else {
                point = point -> next;
            }
        }
    }

    return 0;
}

void removeAllAlunos(listAlunos * point) {

    while (point != NULL) {

        init = point -> next;
        free(point);
        point = init;
    }
}