#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C chamada PAR, que deve retornar o valor 
inteiro “0” se o número recebido por parâmetro for é par.*/

int PAR(int num){
    if (num%2==0)
        return 0;
    else
        return 1;
}

int main(){
    int i, nu;
    for(i=0;i<=10;i++){
        printf("digite um valor:\n");
        scanf("%d", &nu);
        printf("O valor e par %d\n", PAR(nu));
    }
}