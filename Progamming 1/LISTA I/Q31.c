#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int vet1[20], vet2[20], vet3[20], i;
    for (i=0;i<20;i++){
        printf("Digite o valor do primeiro vetor:\n");
        scanf("%d", &vet1[i]);
        printf("Digite o valor do segundo vetor:\n");
        scanf("%d", &vet2[i]);
        vet3[i]=vet1[i]+vet2[i];
    }
    printf("Elementos do novo vetor:\n");
    for (i=0;i<20;i++){
        printf("%d\n", vet3[i]);
    }
    return 0;
}