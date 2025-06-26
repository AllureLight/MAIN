/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 15 de Maio de 2025, 15:38
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Fazer uma matriz m[3][2]*/
    int* v1 = (int*)malloc(2*sizeof(int));
    int* v2 = (int*)malloc(2*sizeof(int));
    int* v3 = (int*)malloc(2*sizeof(int));
    int** m=(int**)malloc(3*sizeof(int*));
    m[0]=v1;
    m[1]=v2;
    m[2]=v3;
    
    /*Pelo for*/
    int i;
    int **matriz;
    matriz = (int**)malloc(m*sizeof(int*));
    for(i=0;i<m;i++){
            matriz(i) = (int*)malloc(n*sizeof(int*));
    }
    /*Limpar tudo*/
    for(i=0;i<m;i++){
        free(matriz(i));
    }
    return 0;
}

