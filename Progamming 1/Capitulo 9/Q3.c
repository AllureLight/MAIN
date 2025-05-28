#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crie um programa que contenha um vetor de inteiros com tamanho 5. Utilizando
apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o
dobro de cada valor lido.*/

int main(){
    int *num, i, pnum[3];
    for(i=0;i<3;i++){
        num = &pnum[i];
        printf("Fale um valor:\n");
        scanf("%d", num);
    }
    for(i=0;i<3;i++){
        num = &pnum[i];
        printf("O dobro e %d \n", *num*2);
    }
return 0;
}