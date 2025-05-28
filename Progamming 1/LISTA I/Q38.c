#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int vetor[20];
    int i, temp;

    printf("Digite %d numeros inteiros:\n", TAM);
    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (i = 0; i < 20 / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[20 - 1 - i];
        vetor[20 - 1 - i] = temp;
    }

    printf("\nVetor modificado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
