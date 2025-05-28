#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculo (int valor1){
    int dobro = valor1*2;
    return dobro;
}

int main(){
    int i,result[2], valor;
    for(i=0; i<=2; i++){
        printf("Fale um valor:\n");
        scanf("%d", &valor);
        result[i] = calculo(valor);
    }
    for(i=0; i<=2; i++){
        printf("%d\n", result[i]);
    }
    return 0;
}