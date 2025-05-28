#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    int menor;
    int maior;
    int soma;
} Resultados;

void calcValoresPonteiros(const int *vet, int tamanho, int *menor, int *maior, int *soma) {
    int i;
    *menor = vet[0];
    *maior = vet[0];
    *soma  = 0;

    for (i = 0; i < tamanho; i++) {
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        *soma += vet[i];
    }
}

Resultados calcValoresStruct(const int *vet, int tamanho) {
    Resultados r;
    r.menor = vet[0];
    r.maior = vet[0];
    r.soma  = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vet[i] < r.menor) {
            r.menor = vet[i];
        }
        if (vet[i] > r.maior) {
            r.maior = vet[i];
        }
        r.soma += vet[i];
    }

    return r;
}

int main() {
    int vet[50];
    int i;
    int menor, maior, soma;
    Resultados r;

    printf("Digite 50 valores inteiros:\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &vet[i]);
    }

    calcValoresPonteiros(vet, 50, &menor, &maior, &soma);
    printf("\nResultados usando ponteiros:\n");
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    printf("Soma: %d\n", soma);

    r = calcValoresStruct(vet, 50);
    printf("\nResultados usando struct:\n");
    printf("Menor: %d\n", r.menor);
    printf("Maior: %d\n", r.maior);
    printf("Soma: %d\n", r.soma);

    return 0;
}