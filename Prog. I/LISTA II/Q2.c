#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM 10

typedef struct{
    float preco;
    char marca[50];
    char cor[50];
    int ano;
    char modelo[50];
} carro;

void leitura (carro c[] , int tam) {
    for (int i=0; i<tam; i++){
    printf("digite o preco do carro: \n");
    scanf("%f",&c[i].preco);
    printf("digite a marca do carro: \n");
    scanf("%49s",c[i].marca);
    printf("digite a cor do carro: \n");
    scanf("%49s",c[i].cor);
    printf("digie o modelo do carro: \n");
    scanf("%49s",c[i].modelo);
    printf("digite o ano do carro: \n");
    scanf("%d",&c[i].ano);
    printf("-------------------------\n");
    }
}

void impressao(carro c[] , int tam){
printf("Carros com preço abaixo de 80k: \n");
    for(int i=0; i<tam; i++){
        if(c[i].preco <80000 ){
    printf("------------------------------------");
    printf("O preco do carro e: %f\n", c[i].preco);
    printf("a marca do carro e: %s\n", c[i].marca);
    printf("o ano do carro e: %d\n", c[i].ano);
    printf("a cor do carro e: %s\n", c[i].cor);
    printf("o modelo do carro e: %s\n" ,c[i].modelo);
    printf("------------------------------------");
        }
    }
}

int main() {
    carro carros[TAM];

    leitura(carros, TAM);
    impressao(carros, TAM);
    return 0;
}