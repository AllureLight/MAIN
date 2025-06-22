#include <stdlib.h>
#include <stdio.h>

typedef struct noLista{
    int info;
    struct noLista* prox;
    struct noLista* ant;
}NoLista;

void criarLista(NoLista** l){
    *l = NULL;
}

int estaVazia(NoLista **l){
    return (*l==NULL);
}

void inserirElemento(NoLista** l, int v) {
	NoLista* novo = (NoLista*) malloc (sizeof(NoLista));
	if (novo != NULL) {
		novo -> info = v;
		novo -> prox = *l;
		novo -> ant = NULL;
	    if (!estaVazia(l)) {
		    (*l)->ant = novo;
	    }
        *l = novo;
    }
	else
		printf("Nao foi possivel alocar espaco!");
}

NoLista* ultimoElemento (NoLista** l) {
	if (!estaVazia(l)) {
	    NoLista *p;
		for (p = *l; p -> prox != NULL; p = p -> prox) {
        }
        return p;
    }
    else
	    printf("Lista vazia!");
}

void ImprimeListaOrdemDireta(NoLista** l){
    if(!estaVazia(l)){
        NoLista *p;
        p=*l;
        do{
            printf("%d ", p->info);
            p = p->prox;
        }while(p != NULL);
    }
    else
        printf("LISTA VAZIA\n");
}

void ImprimeListaOrdemInversa(NoLista** l){
	if(!estaVazia(l)){
		NoLista *p;
		for (p = ultimoElemento(l); p != NULL; p = p->ant) {
            printf("%d ", p->info);
        }
    }
	else
		printf("LISTA VAZIA\n");
}

NoLista* buscaElemento(NoLista** l, int v){
    NoLista* p;
    if (!estaVazia(l)) {
	    NoLista *p;
		for (p = *l; p -> prox != NULL && p-> prox != v; p = p -> prox) {
            if(p->info==v)
                return p;
        }
    }
    else{
        return NULL;
    }
}

void removerElemento(NoLista** l, int v){
	NoLista* p = buscaElemento(l, v);
	
    if(p != NULL){
        if(*l == p){
            (*l) = p->prox;
            if (*l != NULL)
                (*l)->ant = NULL;
        }
        else {
            p->ant->prox = p->prox;
            if (p->prox != NULL)
                p->prox->ant = p->ant;
        }
    free(p);
    }
    else
        printf("Elemento nn encontrado!\n");
}

void liberarLista(NoLista** l){
    NoLista *p, *temp;
    for(p = *l;p!=NULL ;p = temp){
        temp = p->prox;
        free (p);
    }
    *l=NULL;
}

int main(){
    NoLista* lista;
    criarLista(&lista);
    inserirElemento(&lista, 5);
    inserirElemento(&lista, 10);
    inserirElemento(&lista, 20);

    printf("Lista em ordem inversa:\n");
    ImprimeListaOrdemInversa(&lista);

    printf("\n\nLista em ordem direta:\n");
    ImprimeListaOrdemDireta(&lista);

    removerElemento(&lista, 10);

    printf("\n\nDepois de remover 10:\n");
    ImprimeListaOrdemInversa(&lista);

    liberarLista(&lista);

    printf("\n\nDepois de liberar:\n");
    ImprimeListaOrdemInversa(&lista);

    return 0;
}