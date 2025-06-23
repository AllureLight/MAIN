#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct noLista* prox;
}NoLista;

void criarLista(NoLista** l){
    *l = NULL;
}

int estaVazia(NoLista** l){
    return (*l==NULL);
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

NoLista* ultimo(NoLista** l){
    if(!estaVazia(l)){
        NoLista* p;
        for(p=*l; p->prox!=NULL; p = p->prox){
        }
        return p;
    }
    else{
        printf("Lista Vazia!\n");
        return NULL;
    }
}

int maiores(NoLista** l, int n){
    if(!estaVazia(l)){
        NoLista* p;
        int num=0;
        for(p=*l;p!=NULL;p=p->prox){
            if(p->info>n)
                num++;
        }
        return num;
    }
    else{
        printf("Lista Vazia!\n");
        return 0;
    }
}

NoLista* concatena(NoLista** l1, NoLista **l2){
    if(!estaVazia(l1) && !estaVazia(l2)){
        NoLista*p;
        for(p=*l1;p->prox!=NULL;p=p->prox){
        }
        p->prox = *l2;
        return *l1;
    }
    else if(!estaVazia(l1) && estaVazia(l2)){
        printf("Lista 2 Vazia!\n");
        return *l1;
    }
    else if(estaVazia(l1) && !estaVazia(l2)){
        printf("Lista 1 Vazia!\n");
        return *l2;
    }
    else{
        printf("Listas Vazias!\n");
        return NULL;
    }
}

NoLista* maiores(NoLista** l, int n){
    
}

int main(){
    NoLista* lista;
    criarLista(&lista);

    insereElemento(&lista, 10);
    insereElemento(&lista, 5);
    insereElemento(&lista, 20);
}