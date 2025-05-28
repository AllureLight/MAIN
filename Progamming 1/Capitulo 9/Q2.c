#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Crie um programa que leia números reais em um vetor de tamanho 10. Imprima
o endereço de cada posição desse vetor.*/

int main(){
    int a[2], i;
    for(i=0;i<=2;i++){
        printf("Fale um valor:\n");
        scanf("%d", &a[i]);
    }
    for(i=0;i<=2;i++){
        printf("%d\n", &a[i]);
    }
return 0;
}