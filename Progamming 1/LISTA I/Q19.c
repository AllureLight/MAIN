#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float peso, altura, massa;
    printf("Digite seu peso e sua altura:\n");
    scanf("%f %f", &peso, &altura);
    massa = peso/(altura*altura);
    if(massa<20){
        printf("Voce esta abaixo do peso ideal.");
    }
    else if(massa >= 20 && massa <25){
        printf("Parabens! vc esta em seu peso normal!");
    }
    else if(massa >= 25 && massa <30){
        printf("Voce esta a cima de seu peso(sobrepeso).");
    }
    else if(massa >= 30 && massa <35){
        printf("Obersidade moderada(grau I).");
    }
    else if(massa >= 35 && massa <40){
        printf("Obersidade severa(grau II).");
    }
    else if(massa >= 40){
        printf("Obersidade morbida(grau III).");
    }
    return 0;
}