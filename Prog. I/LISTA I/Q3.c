#include <stdio.h>
#include <stdlib.h>

int main()  {
    int cod;
    float num1, num2, media, divisao;

    printf("Digite um número:");
    scanf("%f", &num1);
    printf("Digite outro número:");
    scanf("%f", &num2);

    printf("Menu:\n1 - Media entre os numeros digitados\n2 - Diferenca do maior pelo menor\n3 - Produto entre os numeros digitados\n4 - Divisao do primeiro pelo segundo");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &cod);

    if (cod == 1) {
        media = (num1 + num2)/2;
        printf("Media: %.2f", media);
    }
    else if (cod == 2) {
        if (num1 > num2) {
            printf("%.2f", num1 - num2);
        }
        else if (num1 < num2) {
            printf("%.2f", num2 - num1);
        }
    }
    else if (cod == 3) {
        printf("Produto: %.2f", num1 * num2);
    }
    else if (cod == 4) {
        if (num2 == 0) {
            printf("Escolha outro número: ");
            scanf("%f", &num2);
        }
        divisao = num1 / num2;
        printf("%.2f", divisao);     
    }
    else {
        printf("Opcao invalida!");
        return 0;
    }
    
    return 0;
}