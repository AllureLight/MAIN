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

int main(){
    Lista *lista = criarLista();
    
    inserirElemento(lista, 5);
    inserirElemento(lista, 6);
    imprime(lista);
    removerElemento(lista, 1);
    imprime(lista);
}