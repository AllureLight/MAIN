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
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
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
                l->ult=NULL;
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
    for(NoLista*p=l->prim; p!=NULL; p=p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}

Descritor separa(Descritor *l, int n){
    Descritor l2;
    criarLista(&l2);

    if(!estaVazia(l)){
        if(l->prim == l->ult){
            printf("Nn pode ser dividida, há apenas 1 elemento");
            return l2;
        }
        NoLista* p;
        for(p = l->prim; p!=NULL && p->info!=n; p=p->prox){
        }
        if(p==NULL){
            printf("elemento nn encontrado!");
            return l2;
        }
        else if(p->prox == NULL){
            printf("nao existe proximo elemento!");
            return l2;
        }
        else{
            l2.prim = p->prox;
            l2.ult = l->ult;
            p->prox = NULL;
            l->ult = p;

            int count = 0;
            for(p=l2.prim; p!=NULL; p = p->prox){
                count++;
            }
            l2.n = count;
            l->n -= count;

            return l2;
        
        }
    }
    else{
        return l2;
    }
}

NoLista* maiorValor(Descritor *l){
    if(!estaVazia(l)){
        NoLista*p, *maior = l->prim;
        for(p = l -> prim; p != NULL; p = p -> prox){
            if(p->info > maior->info){
                maior = p;
            }
        }
        return maior;
    }
    else{
        return NULL;
    }
}

int compara(Descritor* l1 , Descritor *l2){
    if(!estaVazia(l1) && !estaVazia(l2)){
        NoLista *p, *q;
        for(p=l1->prim, q=l2->prim; p!=NULL && q!=NULL; p=p->prox, q=q->prox){
            if(p->info != q->info)
                return 0;
        }
        if(p!=NULL || q!=NULL){
            return 0;
        }
        return 1;
    }
    else if(estaVazia(l1) && estaVazia(l2)){
        return 1;
    }
    else
        return 0;
}

Descritor noval(Descritor *l){
    Descritor l2;
    criarLista(&l2);

    if(!estaVazia(l)){
        NoLista* p;
        for(p=l->prim; p!=NULL; p=p->prox){
            if(p->info%2!=0){
                NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
                novo->info = p->info;
                novo->prox = l2.prim;
                l2.prim = novo;
                if(l2.n==0){
                    l2.ult = novo;

                }
                l2.n++;
            }
        }
        return l2;
    }
    else
        return l2;
}

int main() {
    Descritor lista;
    criarLista(&lista);
    insereNoInicio(&lista, 5);
    insereNoInicio(&lista, 45);
    insereNoFim(&lista, 10);
    imprime(&lista);
    printf("\n\n");
    Descritor lista2 = separa(&lista, 5);
    imprime(&lista);
    printf("\n");
    imprime(&lista2);
}