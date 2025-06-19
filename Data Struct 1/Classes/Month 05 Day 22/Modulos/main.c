/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 22 de Maio de 2025, 15:06
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct lista{
    int itens[MAX];
    int n;
}Lista;

Lista* criarLista(){
    Lista*l = (Lista*) malloc(sizeof(Lista));
    if(l != NULL){
        l->n=0;
        return l;
    }
    else{
        printf("Não foi possivel alocar espaco");
    }
}

int estaVazia(Lista*l){
    /*if(l->n==0) return 1; 
    else return 0*/
    return(l->n==0);
}

int estaCheia(Lista*l){
    /*if(l->n==0) return 1; 
    else return 0*/
    return(l->n==MAX);
}

int main(){
    Lista *lista = criarLista();
}

