#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Supondo que todo carro tem um modelo, marca, ano, cor e preço. Faça um programa
que leia as informações de 10 carros que uma concessionária possui para revenda e
imprima na tela o modelo, marca, cor e o ano dos carros que possuem preço abaixo de
R$ 80.000,00. Faça funções específicas a para leitura e impressão dos dados.*/

char modelo[3][30];
int valor[2], ano[2], i;

int info();

int impre();

int main(){
    printf("----------------------------------\n");
    printf("     BEM VINDO A CONCESSIONARIA\n");
    printf("----------------------------------");
    for(i=0;i<2;i++){
        info();
    }
    for(i=0;i<2;i++){
        if(valor[i]<80){
            impre();
        }
    }
    return 0;
}

int info(){
    printf("\nInforme o Modelo:\n");
    scanf("%s", &modelo[i]);
    printf("Informe o ano:\n");
    scanf("%d", &ano[i]);
    printf("Informe o preco em mil:\n");
    scanf("%d", &valor[i]);
}

int impre(){
    printf("\nModelo:\tano:\tpreco:\n");
    printf("%s\t%d\t%d", modelo[i], ano[i], valor[i]);
}