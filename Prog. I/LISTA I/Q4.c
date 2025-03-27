#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, reajuste, novoValor;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario <= 300) {
        reajuste = salario * 0.35;
        novoValor = salario + reajuste;
    }
    else if (salario > 300) {
        reajuste = salario * 0.15;
        novoValor = salario + reajuste;
    }

    printf("O novo salario com reajuste sera de %.2f", novoValor);

    return 0;
}