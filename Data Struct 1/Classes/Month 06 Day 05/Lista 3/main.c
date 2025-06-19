/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 2 de Junho de 2025, 15:07
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct noLista *prox;
}NoLista;

typedef struct descritor{
    NoLista *prim;
    NoLista *ult;
    int n;
}Descritor;

void criarLista(Descritor *l){
    l->prim = l->ult = NULL;
    l->n=0;
}

int estaVazia(Descritor *l){
    return(l->n==0);
}

void insereNoInicio(Descritor *l, int v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info=v;
        novo->prox=l->prim;
        l->prim=novo;
        if(l->n==0){
            l->ult=novo;
        }
        l->n++;
    }
    else
        printf("nn foi possivel inserir o elemento!");
}

void insereNoFim(Descritor *l, int v){
    NoLista *novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info=v;
        novo->prox=NULL;
        if(!estaVazia(l)){
            l->ult->prox = novo;
            l->ult = novo;
        }
        else{
            l->ult=novo;
            l->prim=novo;
        }
        l->n++;
    }
    else
        printf("nn foi possivel inserir o elemento!");
}

void imprime(Descritor *l){
    if(!estaVazia(l)){
        for(NoLista *p = l->prim; p!=NULL; p=p->prox){
            printf("%d ", p->info);
        }
    }
    else
        printf("Está Vazia!");
}

void remover(Descritor *l, int v){
    NoLista *p, *ant = NULL;
    for(p=l->prim; p!=NULL && p->info!=v; p=p->prox){
        ant = p;
    }
    if(p==NULL){
        printf("nn encontrou o elemento!");
    }
    else{
        if(ant==NULL){
            l->prim=p->prox;
            if(l->prim==NULL){
                l->ult==NULL;
            }
        }
        else{
            ant->prox=p->prox;
            if(ant->prox==NULL){
                l->ult=ant;
            }
        }
        free(p);
        l->n--;
    }
}

void liberar(Descritor *l){
    NoLista *p, *temp;
    for(p=l->prim;p!=NULL;p=temp){
        temp=p->prox;
        free(p);
    }
    l->prim=l->ult=NULL;
    l->n=0;
}

NoLista* busca(Descritor *l, int v){
    for(NoLista*p=l->prim; p!=NULL; p=p->prox)
        if(p->info==v)
            return p;
}
    
int main() {
    Descritor lista;
    criarLista(&lista);
    insereNoInicio(&lista, 5);
    insereNoInicio(&lista, 45);
    insereNoFim(&lista, 10);
    imprime(&lista);
    printf("\n\n");
    remover(&lista, 5);
    imprime(&lista);
    printf("\n\n");
    NoLista* p= busca(&lista, 45);
    if(p!=NULL)
        printf("%d", p->info);
    printf("\n\n");
    liberar(&lista);
    imprime(&lista);
}