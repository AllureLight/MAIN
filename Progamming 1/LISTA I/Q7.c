#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, valorRecebe;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if (salario < 350) {
        valorRecebe = (salario + 100) - (salario * 0.07);
    }
    else if (salario > 350 && salario <= 600) {
        valorRecebe = (salario + 75) - (salario * 0.07);
    }
    else if (salario > 600 && salario <= 900) {
        valorRecebe = (salario + 50) - (salario * 0.07);
    }
    else {
        valorRecebe = (salario + 35) - (salario * 0.07);
    }

    printf("Valor a receber: %.2f", valorRecebe);

    return 0;
}