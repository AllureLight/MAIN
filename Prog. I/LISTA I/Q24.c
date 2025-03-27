#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num[20], maior, menor, i, media=0;
    printf("Digite valores:\n");
    scanf("%d", &num[0]);
    maior = num[0];
    menor = num[0];
    media = media + num[0];
    for(i=1;i<20;i++){
        printf("Digite valores:\n");
        scanf("%d", &num[i]);
        media = media + num[i];
        if(maior<num[i])
            maior=num[i];
        if(menor>num[i])
            menor=num[i];
    }
    printf("MAIOR:\tMENOR:\tMEDIA:\n%d\t%d\t%d", maior, menor, media/2);
    return 0;
}