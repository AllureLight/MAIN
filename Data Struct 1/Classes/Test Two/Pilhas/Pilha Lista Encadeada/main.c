#include <stdio.h>
#include <stdlib.h>

typedef struct Nolista{
    float info;
    struct Nolista *prox;
}NoLista;

typedef struct pilha{
    NoLista* prim;
}Pilha;

Pilha* criarPilha(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

int estaVazia(Pilha *p){
    return(p->prim == NULL);
}

void push(Pilha *p, float v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo!=NULL){
        novo->info = v;
        novo->prox = p->prim;
        p->prim = novo;
    }
    else
        printf("Nao foi possivel adicionar elemento!\n");
}

float pop(Pilha *p){
    if(!estaVazia(p)){
        float aux;
        NoLista* temp = p->prim;
        aux = p->prim->info;
        p->prim = p->prim->prox;
        free(temp);
        return aux;
    }
    else{
        printf("Está Vazia!\n");
        return -1;
    }
}

void imprimirPilha(Pilha* p){
    if(!estaVazia(p)){
        for(NoLista *aux = p->prim; aux != NULL; aux = aux->prox){
            printf("%f ", aux->info);
        }
        printf("\n\n");
    }
    else
        printf("Está Vazia!\n");
}

void liberarPilha(Pilha *p){
    if(!estaVazia(p)){
        NoLista* aux;
        for(NoLista* x = p->prim; x!=NULL; x = aux){
            aux = x->prox;
            free(x);
        }
        p->prim = NULL;
    }
    else
        printf("Está Vazia!\n");
}

int main() {
    Pilha *p = criarPilha();
    
    push(p, 80.5);
    push(p, 495);
    push(p, 90666);
    imprimirPilha(p);
    pop(p);
    imprimirPilha(p);
    liberarPilha(p);
    imprimirPilha(p);
    return 0;
}