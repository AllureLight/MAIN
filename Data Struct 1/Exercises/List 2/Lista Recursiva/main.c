#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    struct noLista *prox;
    int info;
}NoLista;

void criarLista(NoLista** l){
    *l = NULL;
}

int estaVazia(NoLista** l){
    return(*l==NULL);
}

void inserirElemento(NoLista** l, int v){
    NoLista* novo = (NoLista*) malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = *l;
        *l = novo;
    }
    else
        printf("Nn foi possivel!\n");
}

void imprimeRecursiva(NoLista** l){
    if(*l == NULL)
        return;
    else{
        printf("%d ", (*l)->info);
        return imprimeRecursiva(&(*l)->prox);
    }
}

void imprimeRecursivaInversa(NoLista** l){
    
}

void liberarLista(NoLista** l){
    if(*l==NULL)
        return;
    else{
        return liberarLista(&(*l)->prox);
        free(*l);
    }
}

NoLista* buscaRecursiva(NoLista** l, int v){
    if(*l !=NULL){
        if((*l)->info == v){
            return *l;
        }
        return buscaRecursiva(&(*l)->prox, v);
    }
    else
        return NULL;
}

void removerElemento(NoLista** l, int v){
    if(*l != NULL){
        if((*l)->info == v){
            NoLista* p = *l;
            *l = (*l)->prox;
            free(p);
            removerElemento(l,v);
        }
        else
            return removerElemento(&(*l)->prox, v);
    }
}

int main(){
    NoLista* lista;
    criarLista(&lista);

    inserirElemento(&lista, 7);
    inserirElemento(&lista, 10);
    inserirElemento(&lista, 3);
    inserirElemento(&lista, 5);
    imprimeRecursiva(&lista);
    removerElemento(&lista, 7);
    printf("\n");
    imprimeRecursivaInversa(&lista);
    NoLista *teste = buscaRecursiva(&lista, 10);
    printf("\n%d\n", teste->info);
}