#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int elevado(int numero){
    numero = pow(numero, 3);
    return numero;
}

int main(){
    int num;
    printf("Numero elevado a 3:\n");
    scanf("%d", &num);
    printf("\nO numero elevado e : %d", elevado(num));
    return 0;
}