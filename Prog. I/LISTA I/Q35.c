#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num[30], menor, posi, i;
    printf("Digite um valor:\n");
    scanf("%d", &num[0]);
    menor = num[0];
    posi = 0;
    for(i=1;i<30;i++){
        printf("Digite um valor:\n");
        scanf("%d", &num[i]);
        if(menor>num[i]){
            posi=i;
            menor=num[i];
        }
    }
    printf("O menor valor:\tposicao:\n%d\t\t%d", menor, posi);
    return 0;
}