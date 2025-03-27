#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma função em C que leia um vetor A de 30 elementos float e, usando o
procedimento METADE (criado na questão anterior), divida todos seus elementos
pela metade.*/

struct numero{
    float num;
};

float METADE(float number);

int main(){
    struct numero nu[3];
    for(int i=0;i<3;i++){
        printf("\nFale um valor:\n");
        scanf("%f", &nu[i].num);
        nu[i].num=METADE(nu[i].num);
        printf("A metade e %f", nu[i].num);
    }
    return 0;
}

float METADE(float number){
    number = number/2;
    return number;
}