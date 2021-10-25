#include <stdlib.h>

typedef struct nodo {

    struct nodo *pre;
    char name[40];
    int ra;
    struct nodo *next;
} listAlunos;

listAlunos *init = NULL; // variavel que irá conter o endereço do nó inicial.
