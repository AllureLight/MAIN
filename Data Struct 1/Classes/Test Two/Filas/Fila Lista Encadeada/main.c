#include <stdlib.h>
#include <stdio.h>

typedef struct noLista{
    float info;
    struct noLista* prox;
}NoLista;

typedef struct fila{
    NoLista* ini;
    NoLista* fim;
}Fila;

Fila* criarFila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

int estaVazia(Fila* f){
    return(f->ini == NULL);
}

void inserir(Fila *f, float v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = NULL;
        if(estaVazia(f)){
            f->ini = novo;
            f->fim = novo;
        }
        else{
            f->fim->prox = novo;
            f->fim = novo;
        }            
    }
    else
        printf("nao foi possivel alocar memoria!\n");
}

void imprime(Fila *f){
    if(!estaVazia(f)){
        for(NoLista*p = f->ini; p!=NULL; p = p->prox){
            printf("%.3f ", p->info);
        }
        printf("\n\n");
    }
    else
        printf("esta vazia!\n");
}

float remover(Fila *f){
    if(!estaVazia(f)){
        float aux = f->ini->info;
        NoLista *p = f->ini;
        f->ini = f->ini->prox;
        if(f->ini == NULL)
            f->fim = NULL;
        free(p);
        return aux;
    }
    else{
        printf("esta vazia!\n");
        return -1;
    }
}

void furaFila(Fila*f, float v){
    if(!estaVazia(f)){
        if(f->ini != f->fim){
            NoLista *p;
            NoLista *ant = NULL;
            for(p = f->ini; p!=NULL && p->info!= v; p=p->prox){
                ant = p;
            }
            if(p!=NULL){
                if(p == f->fim){
                    f->fim = ant;
                }
                ant->prox = p->prox;
                p->prox = f->ini;
                f->ini = p;
            }
            else{
                printf("valor nn encontrado!\n");
            }
        }
    }
    else
        printf("esta vazia!\n");
}//elemento procurado vai para a primeira posicao;

void liberar(Fila*f){
    for(NoLista* p = f->ini; p!=NULL; p = f->ini){
        f->ini = p->prox;
        free(p);
    }
    free(f);
}

int main(){
    Fila *fila = criarFila();
    
    inserir(fila, 10.8);
    inserir(fila, 1340.856);
    inserir(fila, 95);
    imprime(fila);
    
    furaFila(fila, 1340.856);
    imprime(fila);
    
    liberar(fila);
}