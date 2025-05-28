#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int codig;
    float valor, desc, nvalor;

    printf("Valor do produto:\n");
    scanf("%f", &valor);
    printf("Codigo do produto:\n");
    scanf("%d", &codig);
    if (valor<=30){
        nvalor = valor;
        desc = 0;
        printf("\nATUAL PRECO:\tDESCONTO:\tNOVO PRECO\n%f\t%f\t%f", valor, desc, nvalor);
    }
    else if (valor>30 && valor<100){
        desc = valor*0.1;
        nvalor = valor-desc;
        printf("\nATUAL PRECO:\tDESCONTO:\tNOVOPRECO\n%f\t%f\t%f", valor, desc, nvalor);
    }
    else{
        desc = valor*0.15;
        nvalor = valor-desc;
        printf("\nATUAL PRECO:\tDESCONTO:\tNOVOPRECO\n%f\t%f\t%f", valor, desc, nvalor);
    }
    return 0;
}