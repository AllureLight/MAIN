#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float ler(float leitura){
    printf("Fale um numero:\n");
    scanf("%f", &leitura);
    return leitura;
}

float dobro(float number){
    number = 2*number;
    return number;
}

int main(){
    float num[3];
    for(int i=0; i<3; i++){
        num[i]=ler(num[i]);
    }
    for(int i=0; i<3; i++){
        printf("\nO dobro dos numeros:\n%.2f", dobro(num[i]));
    }
    return 0;
}