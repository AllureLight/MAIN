#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct noLista *prox;
}NoLista;

void criarLista(NoLista** l){
    *l = NULL;
}

int estaVazia(NoLista** l){
    /*if(*l==Null) return 1;
    else() return 0;*/
    return(*l==NULL);
}

void insereElemento(NoLista** l, int v){
    NoLista*novo = malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = *l;
        *l = novo;
    }
    else{
        printf("Nâo foi possivel alocar espaco!");
    }
}

void imprime(NoLista** l){
    if(!estaVazia(l)){
        for(NoLista*p=*l; p!=NULL; p = p-> prox){
            printf("%d ", p->info);
        }
    }
    else
        printf("Está vazia!");
}

void libera(NoLista** l){
    NoLista *p, *temp;
    for(p=*l;p!=NULL;p=temp){
        temp = p->prox;
        free(p);
    }
    *l=NULL;
}

void InsereOrdenado(NoLista** l, int v){
    NoLista* p, *ant=NULL;
    for(p=*l; p!=NULL && p->info<v;p=p->prox){
        ant=p;
    }
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
    novo->info=v;
        if(ant==NULL){
            novo->prox=*l;
            *l=novo;
        }
        else{
            novo->prox=p;
            ant->prox=novo;
        }
    }
    else
        printf("Nn foi possivel alocar espaco");
}

NoLista* ultimo(NoLista** l){
    if(!estaVazia(l)){
        NoLista *p;
        for(p = *l; p->prox!=NULL; p=p->prox){
            return p;
        }
    }
    return NULL;
}

int main() {
    NoLista *lista;
    criarLista(&lista);
    insereElemento(&lista, 3);
    insereElemento(&lista, 1);
    insereElemento(&lista, 2);
    imprime(&lista);
    InsereOrdenado(&lista, 1);
    printf("\n\n");
    imprime(&lista);
    NoLista* q = ultimo(&lista);
    printf("\nultimo: %d", q->info); /*olhar dps*/
}
