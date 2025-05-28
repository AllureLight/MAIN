#include <stdio.h>
#include <stdlib.h>

int main() {
    float custoFabrica, novoValor;

    printf("Informe o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    if (custoFabrica <= 12000) {
        novoValor = (custoFabrica * 0.05) + custoFabrica;
    }
    else if (custoFabrica > 12000 && custoFabrica <= 25000) {
        novoValor = (custoFabrica * 0.1) + (custoFabrica * 0.15) + custoFabrica;
    }
    else {
        novoValor = (custoFabrica * 0.15) + (custoFabrica * 0.2) + custoFabrica;
    }

    printf("Custo do carro: %.2f", novoValor);

    return 0;
}