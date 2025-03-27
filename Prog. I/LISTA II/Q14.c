#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função recursiva em C chamada FIB(n) que receba o inteiro n e devolva o
n-ésimo termo da sequência de Fibonacci, definida recursivamente por:

fib(n) = fib(n-1)+fib(n-2) se n >= 3
fib(n) = 1 se 0 < n < 3*/

int FIB(int n){
    int pantes;
    if (0 < n && n < 3){
        return 1;
    }
    else{
        return FIB(n-1) + FIB(n-2);
    }
}

int main(){
    int n;
    printf("Digite um valor:");
    scanf("%d", &n);
    printf("\n\nO numero e o n-enesimo %d",FIB(n));
    return 0;
}