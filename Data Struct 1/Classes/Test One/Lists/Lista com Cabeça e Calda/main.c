#include <stdio.h>
#include <stdlib.h>

typedef struct noLista{
    int info;
    struct noLista* prox;
}NoLista;

typedef struct lista{
    NoLista *cabeca;
    NoLista *cauda;
}Descritor;

void criarLista(Descritor* l){
    l->cabeca=NULL;
    l->cauda=NULL;
}

int estaVazia(Descritor *l){
    return(l->cabeca==NULL);
}

void inserirElementoInicio(Descritor* l, int v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = l->cabeca;
        l->cabeca = novo;
        
        if(l->cauda == NULL)
            l->cauda = novo;
    }
    else
        printf("Nao foi Possivel alocar!\n");
}

void inserirElementoFim(Descritor* l, int v){
    NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
    if(novo != NULL){
        novo->info = v;
        novo->prox = NULL;
        if(estaVazia(l)){
            l->cabeca = novo;
            l->cauda = novo;
        }
        else{
            l->cauda->prox = novo;
            l->cauda = novo;
        }
    }
    else
        printf("Nao foi Possivel alocar!\n");
}

void imprimeLista(Descritor* l){
    if(!estaVazia(l)){
        NoLista *p;
        for(p = l->cabeca; p!=NULL; p = p->prox){
            printf("%d ", p->info);
        }
    }
    else
        printf("LISTA VAZIA!\n");
}

void removerElemento(Descritor* l, int v){
    if(!estaVazia(l)){
        NoLista*p, *ant = NULL;
        for(p = l->cabeca; p != NULL && p->info != v; p = p->prox){
            ant = p;
        }
        if(p==NULL)
            printf("Elemento nn encontrado!");
        if(p == l->cabeca){
            l->cabeca = p->prox;
            if(l->cabeca == NULL)
                l->cauda = NULL;
        }
        else{
            ant->prox = p->prox;
            if(p == l->cauda)
                l->cauda = ant;
        }
        free(p);
    }
    else
        printf("LISTA VAZIA!\n");
}

void liberarLista(Descritor* l){
    if(!estaVazia(l)){
        NoLista *p, *temp;
        for(p = l->cabeca; p!= NULL; p = temp){
            temp = p->prox;
            free(p);
        }
        l->cabeca=NULL;
        l->cauda=NULL;
    }
    else
        printf("LISTA VAZIA!\n");
}

NoLista* maiorValor(Descritor* l){
    if(!estaVazia(l)){
        NoLista *maior = l->cabeca;
        for(NoLista* p = l->cabeca; p!=NULL; p = p->prox){
            if(p->info>maior->info)
                maior = p;
        }
        return maior;
    }
    else{
        printf("LISTA VAZIA!");
        return NULL;
    }
}

Descritor separa(Descritor *l, int n){
    Descritor l2;
    criarLista(&l2);

    if(!estaVazia(l)){
        NoLista *p;
        for(p=l->cabeca; p!=NULL && p->info!= n; p = p->prox){
        }
        if(p==NULL){
            return l2;
        }
        else if(p->prox == NULL){
            return l2;
        }
        else{
            l2.cabeca = p->prox;
            l2.cauda = l->cauda;
            l->cauda = p;
            p->prox = NULL;
        }
        return l2;
    }
    else
        return l2;
}

int compara(Descritor *l1, Descritor *l2){
    if(!estaVazia(l1) && !estaVazia(l2)){
        NoLista *p, *q;
        for(p=l1->cabeca, q=l2->cabeca; p!=NULL && q!=NULL; p=p->prox, q=q->prox){
            if(p->info != q->info)
                return 0;
        }
        if(p!=NULL || q!=NULL)
            return 0;
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
        NoLista *p;
        for(p=l->cabeca; p!=NULL; p=p->prox){
            if(p->info%2!=0){
                NoLista* novo = (NoLista*)malloc(sizeof(NoLista));
                if(novo!=NULL){
                    novo->info = p->info;
                    novo->prox = l2.cabeca;
                    l2.cabeca = novo;
                    if(l2.cauda==NULL){
                        l2.cauda = novo;
                    }
                }
                else
                    return l2;
            }
        }
        return l2;
    }
    else
        return l2;
}

int main(){
    Descritor lista;
    criarLista(&lista);

    inserirElementoInicio(&lista, 10);
    inserirElementoInicio(&lista, 20);
    inserirElementoFim(&lista, 5);
    inserirElementoFim(&lista, 30);
    imprimeLista(&lista);

    NoLista *teste = maiorValor(&lista);
    printf("\nMaior valor: %d", teste->info);

}