/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 22 de Maio de 2025, 15:06
 */

#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

#define MAX 20

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

void inserirElemento(Lista *l, int v){
    if(!estaCheia(l)){
        l->itens[l->n]=v;
        l->n++;
    }
    else{
        printf("Lista cheia!\n");
    }
}

void imprime(Lista *l){
    if(!estaVazia(l)){
        for(int i = 0; i<l->n; i++){
            printf("%d ", l->itens[i]);
        }
        printf("\n");
    }
    else{
        printf("Lista vazia!");
    }
}

void removerElemento(Lista *l, int i){
    if(i>=1 && i<=l->n){
        for(int x = i; x< l->n; x++){
            l->itens[x-1] = l->itens[x];
        }
        l->n--;
    }
    else{
        printf("Indice invalido!\n");
    }
}