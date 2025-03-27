#include <stdio.h>
#include <stdlib.h>

float calculaJuros(float *saldo, float taxa) {
    float juros;
    juros = *saldo * taxa / 100;
    *saldo += juros;
    return juros;
}

void main()
{
    float vSaldo, vTaxa, vResul;
    printf("Informe um saldo: \n");
    scanf("%f", &vSaldo);
    printf("Informe uma taxa: \n");
    scanf("%f", &vTaxa);
    vResul = calculaJuros(&vSaldo, vTaxa);

    printf("Juros.....: %f \n", vResul);
    printf("Saldo Novo: %f \n", vSaldo);
}