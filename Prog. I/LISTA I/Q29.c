#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i=1, larg, comp, areatotal=0;
    char nome[30];
    while(i>0){
        printf("Digite o nome do comodo, a largura e o comprimento:\n");
        scanf("%s", nome);
        scanf("%d %d", &larg, &comp);
        areatotal = areatotal + (larg*comp);
        printf("Deseja adicionar um comodo?(1-Sim e 0-Nao)\n");
        scanf("%d", &i);
    }
    printf("area total : %d\n", areatotal);
    printf("Programa Finalizado!");
    return 0;
}