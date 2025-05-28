/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 15 de Maio de 2025, 15:01
 */

#include <stdio.h>
#include <stdlib.h>

int media(int* vet){
    vet[2] = (vet[1] + vet[2] + vet[0])/3;
    return vet[2];
}
int main() {
    int *vet = NULL;
    vet = (int*)malloc(3*sizeof(int));
    printf("Digite 3 valores:");
    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
    printf("\n\n A media dos valores é %d", media(vet));
    return 0;
}

