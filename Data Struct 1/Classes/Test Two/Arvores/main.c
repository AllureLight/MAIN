#include <stdlib.h>
#include <stdio.h>

typedef struct arvore{
    char info;
    struct arvore *dir;
    struct arvore *esq;
}Arvore;

Arvore* criarArvoreVazia(){
    return NULL;
}

Arvore* criarArvore(char c, Arvore* sae, Arvore* sad){
    Arvore* a = (Arvore*)malloc(sizeof(Arvore));
    if(a != NULL){
        a->info = c;
        a->esq = sae;
        a->dir = sad;
        return a;
    }
    else{
        printf("nao foi possivel criar a arvore");
        return a;
    }
}

int main(){
    Arvore *f = criarArvore('f', criarArvoreVazia(), criarArvoreVazia());

    Arvore *e = criarArvore('e', criarArvoreVazia(), criarArvoreVazia());

    Arvore *c = criarArvore('c', f, criarArvoreVazia());

    Arvore *d = criarArvore('d', criarArvoreVazia(), criarArvoreVazia());

    Arvore *b = criarArvore('b', d, e);

    Arvore *a = criarArvore('a', b, c);
}