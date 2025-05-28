#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    float valorProduto, valorAumento, valorImposto, valorFinal;
    int categoria;
    char tipoArmazenamento;

    printf("Informe o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Informe a categoria do produto\n");
    printf("1 - Limpeza | 2 - Alimentacao | 3 - Vestuario\n");
    scanf("%d", &categoria);

    printf("Informe a situacao do produto (R - Refrigerado, N - Nao refrigerado): ");
    scanf(" %c", &tipoArmazenamento);

    if (valorProduto <= 25) {
        if (categoria == 1) valorAumento = valorProduto * 0.05;
        else if (categoria == 2) valorAumento = valorProduto * 0.08;
        else valorAumento = valorProduto * 0.10;
    } else {
        if (categoria == 1) valorAumento = valorProduto * 0.12;
        else if (categoria == 2) valorAumento = valorProduto * 0.15;
        else valorAumento = valorProduto * 0.18;
    }

    printf("Aumento: R$ %.2f\n", valorAumento);

    if (categoria == 2 || tipoArmazenamento == 'R') valorImposto = valorProduto * 0.05;
    else valorImposto = valorProduto * 0.08;

    printf("Imposto: R$ %.2f\n", valorImposto);

    valorFinal = (valorProduto + valorAumento) - valorImposto;
    printf("Valor final: R$ %.2f\n", valorFinal);

    if (valorFinal <= 50) printf("O novo valor esta barato.\n");
    else if (valorFinal <= 120) printf("O novo valor esta normal.\n");
    else printf("O novo valor esta caro.\n");

    return 0;
}