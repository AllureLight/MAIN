#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct pilha{
    float info[MAX];
    int n;
}Pilha;

Pilha* criarPilha(){
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if(p!=NULL){
        p->n = 0;
        return p;
    }
    else
        return NULL;
}

int estaVazia(Pilha *p){
    return(p->n == 0);
}

int estaCheia(Pilha *p){
    return(p->n == (MAX));
}

void push(Pilha *p, float v){
    if(!estaCheia(p)){
       p->info[p->n]=v;
       p->n++;
    }
    else
        printf("Está Cheia\n");
}

float pop(Pilha *p){
    float aux;
    if(!estaVazia(p)){
        aux = p->info[p->n-1];
        p->n--;
        return aux;
    }
    else{
        printf("Está Vazia!\n");
        return -1;
    }
}

void imprimirPilha(Pilha* p){
    if(!estaVazia(p)){
        for(int aux = (p->n)-1; aux >= 0; aux--){
            printf("%f ", p->info[aux]);
        }
        printf("\n\n");
    }
    else
        printf("Está Vazia!\n");
}

void liberarPilha(Pilha *p){
    free(p);
}

int main() {
    Pilha *pilha = criarPilha();
    
    push(pilha, 10);
    push(pilha, 78.5);
    push(pilha, 1950.855);
    imprimirPilha(pilha);
    pop(pilha);
    imprimirPilha(pilha);
    liberarPilha(pilha);
    imprimirPilha(pilha);
    return 0;
}