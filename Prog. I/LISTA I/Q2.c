/*Faça um programa em C que receba 2 números, e mostre o menor.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O número %.2f é menor", num2);
    }
    else if (num1 < num2) {
        printf("O número %.2f é menor", num1);
    }

    return 0;
}