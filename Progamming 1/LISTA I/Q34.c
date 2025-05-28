#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int vet[20], i, cont=0;
    for(i=0;i<20;i++){
        printf("Digite um valor para o vetor:\n");
        scanf("%d", &vet[i]);
        if(vet[i]%2==0){
            cont = cont+1;
        }
    }
    printf("Existem %d valores pares!", cont);
    return 0;
}