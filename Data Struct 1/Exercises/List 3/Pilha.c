#include <stdlib.h>
#include <stdio.h>

typedef struct Nolista{
    float info;
    struct Nolista *prox;
}NoLista;

typedef struct pilha{
    NoLista* prim;
}Pilha;

Pilha* criarPilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
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
        printf("nao foi possivel alocar espaco");
}

float pop(Pilha *p){
    if(!estaVazia(p)){
        float aux = p->prim->info;
        NoLista* temp = p->prim;
        p->prim = p->prim->prox;
        free(temp);
        return aux;
    }
    else{
        printf("Esta Vazia!\n");
        return -1;
    }
}

void concatenaPilha1(Pilha *p1, Pilha *p2)/*primeira versao*/{ 
    if(!estaVazia(p2)){
        Pilha *temp = criarPilha();

        while(!estaVazia(p2)){
            push(temp, pop(p2));
        }
        while(!estaVazia(temp)){
            push(p1, pop(temp));
        }
        free(temp);
    }
    else
        printf("pilha 2 está vazia!\n");
}

void concatenaPilha2(Pilha *p1, Pilha *p2)/*segunda versao*/{
    if(!estaVazia(p2)){
        float x = pop(p2);
        concatenaPilha1(p1, p2);
        push(p1, x);
    }
    else
        return;
}

void concatenaPilha3(Pilha *p1, Pilha *p2)/*terceira versao*/{
    if(p2->prim != NULL){
        while(p2->prim!=NULL){
            NoLista* atual = p2->prim;
            NoLista* anterior = NULL;

            for(; atual->prox!=NULL; atual=atual->prox){
                anterior = atual;
            }

            if (anterior!=NULL)
                anterior->prox = NULL;
            else
                p2->prim = NULL;
            
            atual->prox = p1->prim;
            p1->prim = atual;
        }
        free (p2);
    }
    else
        printf("pilha 2 está vazia!\n");
}

int main(){

}