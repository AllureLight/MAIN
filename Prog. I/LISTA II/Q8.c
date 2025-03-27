#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C chamada TROCA que receba duas variáveis inteiras (X e Y) e troque o conteúdo entre elas.*/

struct numero{
    int X, Y, a, b;
};

int troca(int x, int y);

int main(){
    struct numero num;
    printf("Fale os valores de X e Y:\n");
    scanf(" %d %d", &num.X, &num.Y);
    num.a = troca(num.X, num.Y);
    num.b = troca(num.Y, num.X);
    num.Y = num.b;
    num.X = num.a;
    printf("O valor de X=%d e  Y=%d", num.X, num.Y);
}

int troca(int x, int y){
    x = y;
    return x;
}