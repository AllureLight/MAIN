#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Escreva um programa que contenha duas variáveis inteiras. Compare seus ender-
ços e exiba o maior endereço.*/

int main(){
    int a=1, b=0;
    if(&a<&b)
        printf("%d", &b);
    else
        printf("%d", &a);

return 0;
}