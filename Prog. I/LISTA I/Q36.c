#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int valor[50], valorn[50], pagantes=0, pagdepois=0, i;
    char nome[50][50];
    for(i=0;i<50;i++){
        printf("Digite seu nome:\n");
        scanf("%s", nome[i]);
        printf("Digite seu salario:\n");
        scanf("%d", &valor[i]);
        pagantes = pagantes + valor[i];
        valorn[i] = (valor[i]*1.08);
        pagdepois = pagdepois + valorn[i];
    }
    for(i=0;i<50;i++){
        printf("NOME:\tSALARIO NOVO:\n%s\t%d\n", nome[i], valorn[i]);
    }
    printf("\nTOTAL GASTO COM A FOLHA DE PAGAMENTO ANTES : %d\nTOTAL GASTO COM A FOLHA DE PAGAMENTO DEPOIS : %d", pagantes, pagdepois);
    return 0;
}