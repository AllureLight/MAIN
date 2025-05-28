#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char nome[30];
    int residencial=0, comercial=0, industrial=0;
    int  t=1, consumido, media=0, cont=0;
    int consumidoR=0, consumidoC=0, consumidoI=0;
    while(t != 0){
        printf("Digite seu nome:\n");
        scanf("%s", nome);
        printf("Digite quantos Kwh foi consumido:\n");
        scanf("%d", &consumido);
        printf("Digite o tipo de consumidor:\n");
        scanf("%d", &t);
        media = media + consumido;
        switch(t){
            case 1:
                consumidoR = consumidoR + consumido;
                residencial = residencial + 0.3*consumido;
                break;
            case 2:
                consumidoC = consumidoC + consumido;
                comercial = comercial + 0.5*consumido;
                break;
            case 3:
                consumidoI = consumidoI + consumido;
                industrial = industrial + 0.7*industrial;
                break;
        }
        cont++;
    }
    printf("Custo Total do residencial: %d\nCusto Total do comercial: %d\nCusto Total do industrial: %d\n", residencial, comercial, industrial);
    printf("Total consumido do residencial : %d\nTotal consumido do comercial: %d\nTotal consumido do Industrial: %d\n", consumidoR, consumidoC, consumidoI);
    printf("A media consumida foi de %d\n", media/cont);
    return 0;
}