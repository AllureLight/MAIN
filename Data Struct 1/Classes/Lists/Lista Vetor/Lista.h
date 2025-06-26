/* 
 * File:   Lista.h
 * Author: guilherme.a.medeiros
 *
 * Created on 26 de Maio de 2025, 14:54
 */

#ifndef LISTA_H
#define LISTA_H

#define MAX 20

typedef struct lista{
    int itens[MAX];
    int n;
}Lista;

Lista* criarLista();

int estaVazia(Lista*l);

int estaCheia(Lista*l);

void inserirElemento(Lista *l, int v);

void imprime(Lista *l);

void removerElemento(Lista *l, int i);

#endif /*LISTA*/