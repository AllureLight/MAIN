#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int numa[10], numb[10], i;
    for(i=0;i<10;i++){
        printf("Digite os valores do vetor A:\n");
        scanf("%d", &numa[i]);
        printf("Digite os valores do vetor B:\n");
        scanf("%d", &numb[i]);
    }
    for(i=0;i<10;i++){
        printf("%d elemento do vetor A: %d\n", i+1, numa[i]);
        printf("%d elemento do vetor B: %d\n", i+1, numb[i]);
    }
    return 0;
}