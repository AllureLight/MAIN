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
    else{
	    printf("Lista vazia!");
        return NULL;
    }
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
    if (!estaVazia(l)) {
	    NoLista *p;
		for (p = *l; p -> prox != NULL; p = p -> prox) {
            if(p->info==v)
                return p;
        }
        return NULL;
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

NoLista* maiorValor(NoLista** l){
    if (!estaVazia(l)){
        NoLista *p, *maior = *l;
        for(p=*l; p!=NULL; p=p->prox){
            if(p->info>maior->info){
                maior = p;
            }
        }
        return p;
    }
    else{
        printf("Lista Vazia!\n");
        return NULL;
    }
}

NoLista* separa(NoLista**l, int n){
    if(!estaVazia(l)){
        NoLista* p;
        for(p=*l;p!=NULL && p->info != n;p= p->prox){
        }
        if(p==NULL)
            return NULL;
        else if(p->prox == NULL)
            return NULL;
        else{
            NoLista *l2;
            p->prox->ant = NULL;
            l2 = p->prox;
            p->prox = NULL;
            return l2;
        }
    }
    else
        return NULL;
}

int compara(NoLista** l1, NoLista** l2){
    if(!estaVazia(l1) && !estaVazia(l1)){
        NoLista *p, *q;
        for(p=*l1, q=*l2; p!=NULL && q!=NULL; p=p->prox, q=q->prox){
            if(p->info != q->info)
                return 0;
        }
        if(p!=NULL || q!=NULL)
            return 0;
        return 1;
    }
    else if(estaVazia(l1) && estaVazia(l2))
        return 1;
    else
        return 0;
}

NoLista* noval(NoLista** l){
    if (!estaVazia(l)){
        NoLista *p, *l2;
        criarLista(&l2);
        for(p = *l;p!=NULL;p=p->prox){
            if(p->info%2!=0){
                NoLista* novo=(NoLista*)malloc(sizeof(NoLista));
                if(novo!=NULL){
                    novo->info = p->info;
                    novo->prox = l2;
                    novo->ant = NULL;
                    if(l2 != NULL){
                        l2->ant = novo;
                    }
                    l2 = novo;
                }
            }
        }
        return l2;
    }
    else{
        printf("Lista Vazia!\n");
        return NULL;
    }
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

    NoLista* lista2 = noval(&lista);
    printf("\n\nLista 2 em ordem direta:\n");
    ImprimeListaOrdemDireta(&lista2);

    liberarLista(&lista);

    printf("\n\nDepois de liberar:\n");
    ImprimeListaOrdemInversa(&lista);

    return 0;
}