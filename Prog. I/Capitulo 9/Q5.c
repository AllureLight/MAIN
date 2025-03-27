#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça um programa que receba dois valores inteiros, após receber esses dois
valores, uma função deve calcular e retornar para o programa o resultado da soma
e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação,
desta forma, faça uso de ponteiros.*/

void opera(int valor1, int valor2, int *psoma, int *psubtracao){
    *psoma = valor1+valor2;
    *psubtracao = valor1-valor2;
}

int main(){
    int num1, num2, soma, subtracao;
    printf("Informe o primeiro valor:\n");
    scanf("%d", &num1);
    printf("Informe o segundo valor:\n");
    scanf("%d", &num2);

    opera(num1, num2, &soma, &subtracao);

    printf("Soma: %d\n", soma);
    printf("Subtracao %d", subtracao);
return 0;
}