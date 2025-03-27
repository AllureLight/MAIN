#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int cod;
    float prec;
    printf("Digite o prec do produto:\n");
    scanf("%f", &prec);
    printf("Digite o cod do produto:\n");
    scanf("%d", &cod);
    if(cod == 1){
        printf("Seu produto e do Sul!");
    }
    else if(cod == 2){
        printf("Seu produto e do Norte!");
    }
    else if(cod == 3){
        printf("Seu produto e do Leste!");
    }
    else if(cod == 4){
        printf("Seu produto e do Oeste!");
    }
    else if(cod == 5 || cod == 6){
        printf("Seu produto e do Nordeste!");
    }
    else if(cod==7 || cod == 8 || cod == 9){
        printf("Seu produto e do Sudeste!");
    }
    else if(cod>=10 && cod<=20){
        printf("Seu produto e do Centro-Oeste!");
    }
    else if(cod>=21 && cod<=30){
        printf("Seu produto e do Nordeste!");
    }
    return 0;
}