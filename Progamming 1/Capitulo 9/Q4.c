#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
atualize todas as posições de um vetor com o número inteiro lido, depois imprima
os valores. Utilize ponteiros para as operações.*/

int main(){
    int *num, i, pnum[3];
    printf("digite um valor:\n");
    scanf("%d", num);

    for(i=0;i<3;i++){
        pnum[i] = *num;
        printf("\n%d\n", pnum[i]);
    }
return 0;
}