#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C chamada METADE que divida um valor do tipo float (passado como parâmetro) pela metade.*/

struct numero{
    float num;
};

float METADE(float number);

int main(){
    struct numero nu;
    printf("Fale um valor:\n");
    scanf("%f", &nu.num);
    printf("A metade e %f", METADE(nu.num));
    return 0;
}

float METADE(float number){
    number = number/2;
    return number;
}