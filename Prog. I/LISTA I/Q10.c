#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float valor, novoValor;
    int tipo, meses;

    printf("Informe o tipo de investimento (1 ou 2): ");
    scanf("%d", &tipo);
    printf("Informe a quantidade de meses: ");
    scanf("%d", &meses);
    printf("Informe o valor do investimento: ");
    scanf("%f", &valor);

    if (tipo == 1) {
        novoValor = valor * pow(1 + 0.005, meses);
    }
    else if (tipo == 2) {
        novoValor = valor * pow(1 + 0.04, meses);
    }

    printf("O valor corrigido sera %.2f", novoValor);

    return 0;
}