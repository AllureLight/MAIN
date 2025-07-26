#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct lista{
    int v[MAX];
}Lista;

void insereElementos(Lista *l){
    for(int i=0; i < MAX; i++){
        l->v[i] = 10+i;
    }
}

void elementos(Lista *l){
    for(int i=0; i < MAX; i++){
        printf("%d\n", l->v[i]);
    }
    printf("\n");
}

void inverte(Lista *l){
    int temp[MAX], i;
    for(i=0; i < MAX; i++){
        temp[i] = l->v[i];
    }
    for(i=0; i < MAX; i++){
        l->v[i] = temp[MAX - 1 - i];
    }
}

int main(){
    Lista lista;
    insereElementos(&lista);
    elementos(&lista);
    inverte(&lista);
    elementos(&lista);
}