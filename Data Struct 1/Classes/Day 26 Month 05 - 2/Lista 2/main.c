#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct noLista *prox;
}NoLista;

void criarLista(NoLista** l){
    *l = NULL;
}

int main() {
    /*opcao para criar a lista
    NoLista *lista = ...*/
    NoLista *lista;
    criarLista(&lista);
    
}

