#include <stdlib.h>
#include <stdio.h>

typedef struct nolista{
    int info;
    struct noLista* prox;
    struct noLista* ant;
}NoLista;

void criarLista(NoLista** l){
    *l == NULL;
}

int estaVazia(NoLista **l){
    return (*l==NULL);
}

void inserirElemento (NoLista** l, int v) {
	NoLista* novo = (NoLista*) malloc (sizeof(NoLista));
	if (novo != NULL) {
		novo -> info = v;
		novo -> prox = *l;
		novo -> ant = NULL;
	    if (!estaVazia(l)) {
		    *l -> ant = novo;
	    }
    }
	else {
		printf("Nao foi possivel alocar espaco!");
	}
}

NoLista* ultimoElemento (NoLista** l) {
	if (!estaVazia(l)) {
	    NoLista *p;
		for (p = *l; p -> prox != NULL; p = p -> prox) {
        }
        return p;
    }
    else {
	    printf("Lista vazia!");
    }
}

void ImprimeListaOrdemInversa(NoLista** l){
	if(!estavazia(l)){
		NoLista *p = ultimoElemento(l);
		for(p; p != NULL; p = p->ant)
			printf("%d\n", p->info);
}
	else
		printf("LISTA VAZIA");
}


void removerElemento(NoLista** l, int v){
	NoLista* p = buscaElemento(l, v);
	
    if(p != NULL){
        if(*l == p)
            (*l) = p->prox;
        else
            p->ant->prox = p->prox;
        if(p->prox!=NULL)   
            p->prox->ant = p->ant;
        
        free(p);
    }
}

int main(){
    NoLista *lista;
    criarLista(&lista);
    inserirElemento(&lista, 5);
}