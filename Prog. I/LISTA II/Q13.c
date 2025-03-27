#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C que receba dois números inteiros x e y. Essa função deve
verificar se x é divisível por y. No caso positivo, a função deve retornar 1, caso
contrário 0. Escreva também um algoritmo para testar tal função.*/

struct VALORES{
    int x, y, a[1];
};

int TESTE(){
    struct VALORES val;
    printf("Digite o valor de X e Y:\n");
    scanf("%d %d", &val.x, &val.y);

    if (val.x % val.y == 0)
        return 1;
    else
        return 0;
}

int main(){
    printf("\n\n%d", TESTE());
}