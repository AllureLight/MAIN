#include <stdlib.h>
#include <stdio.h>

typedef struct noLista{
    float info;
    struct noLista *prox;
}NoLista;

typedef struct fila{
    NoLista* ini;
    NoLista *fim;
}Fila;

Fila* criarFila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

int estaVazia(Fila *f){
    return(f->ini==NULL);
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
        for(NoLista *p = f->ini; p!=NULL; p = p->prox){
            printf("%.3f", p->info);
        }
        printf("\n\n");
    }
    else
        printf("esta vazia!");
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
        printf("esta Vazia!\n");
        return -1;
    }
}

float maior(Fila *f){
    if(!estaVazia(f)){
        float maior = f->ini->info;
        for(NoLista *p = f->ini; p!=NULL; p = p->prox){
            if(maior < p->info)
                maior = p->info;
        }
        return maior;
    }
    else{
        printf("esta Vazia!\n");
        return -1;
    }
}

int main(){

}