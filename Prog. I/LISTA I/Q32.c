#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int vet[30], k, i, n=0;
    for (i=0;i<30;i++){
        printf("Digite um valor para o vetor:\n");
        scanf("%d", &vet[i]);
    }
    printf("Encontrar valor\nDigite o valor que quer encontrar:\n");
    scanf("%d", &k);
    for (i=0;i<30;i++){
        if(k==vet[i]){
            printf("Valor encontrado! %d", i);
            n=1;
        }
    }
    if(n==0){
        printf("nao encontrei o valor de k");
    }
    return 0;
}