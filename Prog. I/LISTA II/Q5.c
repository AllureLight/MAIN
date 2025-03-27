#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C chamada CUBO que receba um valor do tipo float e retorne a potência elevado a 3 do mesmo.*/

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