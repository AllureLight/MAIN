#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct NoLista* prox;
}NoLista;

typedef struct lista{
    NoLista *cabeca;
    NoLista *cauda;
}Descritor;

void criarLista(Descritor* l){
    l->cabeca=NULL;
    l->cauda=NULL;
}

int estaVazia(Descritor *l){
    return(l->cabeca==NULL);
}

void inserirElementoInicio(Descritor* l, int v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = l->cabeca;
        l->cabeca = novo;
        
        if(l->cauda == NULL)
            l->cauda = novo;
    }
    else
        printf("Nao foi Possivel alocar!\n");
}

void inserirElementoFim(Descritor* l, int v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = NULL;
        if(estaVazia(l)){
            l->cabeca = novo;
            l->cauda = novo;
        }
        else{
            l->cauda->prox = novo;
            l->cauda = novo;
        }
    }
    else
        printf("Nao foi Possivel alocar!\n");
}

void imprimeLista(Descritor* l){
    if(!estaVazia(l)){
        NoLista *p;
        for(p = l->cabeca; p!=NULL; p = p->prox){
            printf("%d ", p->info);
        }
    }
    else
        printf("LISTA VAZIA!\n");
}

void removerElemento(Descritor* l, int v){
    if(!estaVazia(l)){
        NoLista*p, *ant = NULL;
        for(p = l->cabeca; p != NULL && p->info != v; p = p->prox){
            ant = p;
        }
        if(p==NULL)
            printf("Elemento nn encontrado!");
        if(p == l->cabeca){
            l->cabeca = p->prox;
            if(l->cabeca == NULL)
                l->cauda = NULL;
        }
        else{
            ant->prox = p->prox;
            if(p == l->cauda)
                l->cauda == ant;
        }
        free(p);
    }
    else
        printf("LISTA VAZIA!\n");
}

void liberarLista(Descritor* l){
    if(!estaVazia(l)){
        NoLista *p, *temp;
        for(p = l->cabeca; p!= NULL; p = temp){
            temp = p->prox;
            free(p);
        }
        l->cabeca=NULL;
        l->cauda=NULL;
    }
    else
        printf("LISTA VAZIA!\n");
}

int main(){
    Descritor lista;
    criarLista(&lista);
    
    inserirElementoInicio(&lista, 10);
    inserirElementoInicio(&lista, 20);
    inserirElementoFim(&lista, 5);
    imprimeLista(&lista);

    removerElemento(&lista, 5);
    printf("\n");
    imprimeLista(&lista);

    liberarLista(&lista);
    printf("\n");
    imprimeLista(&lista);
}