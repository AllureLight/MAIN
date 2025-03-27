#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldoMedio, credito;

    printf("Digite o saldo medio: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio > 300 && saldoMedio <= 400) {
        credito = saldoMedio * 0.3;
    }
    else if (saldoMedio > 200 && saldoMedio <= 300) {
        credito = saldoMedio * 0.2;
    }
    else if (saldoMedio < 200) {
        credito = saldoMedio * 0.1;
    }
    else {
        credito = saldoMedio * 0.4;
    }

    printf("Saldo medio: %.2f\nCredito: %.2f", saldoMedio, credito);

    return 0;
}
