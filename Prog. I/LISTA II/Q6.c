#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct numeros{
    float num1;
};

float dobro(float number){
    number = 2*number;
    return number;
}

int main(){
    struct numeros num;
    printf("Fale o numero:\n");
    scanf("%f", &num.num1);
    printf("O seu dobro e %f", dobro(num.num1));
}