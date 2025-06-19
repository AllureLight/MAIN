/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 15 de Maio de 2025, 15:00
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *p = NULL;
    p = (float*)malloc(1*sizeof(float)); /*alocacao dos valores*/
    if (p != NULL){/*verificar se o valor foi alocado*/
        *p= -3.2;
        free(p);/*Libera espaco*/
    }
    else{
        printf("Nn foi alocado!");
        return 0;
    }
    return 0;
}

