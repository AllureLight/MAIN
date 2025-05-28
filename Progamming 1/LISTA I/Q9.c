#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, reajuste, novoValor;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario <= 300) {
        reajuste = salario * 0.5;
        novoValor = salario + reajuste;
    }
    else if (salario > 300 && salario <= 500) {
        reajuste = salario * 0.4;
        novoValor = salario + reajuste;
    }
    else if (salario > 500 && salario <= 700) {
        reajuste = salario * 0.3;
        novoValor = salario + reajuste;
    }
    else if (salario > 700 && salario <= 800) {
        reajuste = salario * 0.2;
        novoValor = salario + reajuste;
    }
    else if (salario > 800 && salario <= 1000) {
        reajuste = salario * 0.1;
        novoValor = salario + reajuste;
    }
    else {
        reajuste = salario * 0.05;
        novoValor = salario + reajuste;
    }

    printf("O novo salario com reajuste sera de %.2f", novoValor);

    return 0;
}