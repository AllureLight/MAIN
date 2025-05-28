#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int vet[10], i;
    for(i=0;i<10;i++){
        printf("Digite um valor:");
        scanf("%d", &vet[i]);
    }
    for(i=9;i>-1;i--){
        printf("%d\n",vet[i]);
    }
    return 0;
}