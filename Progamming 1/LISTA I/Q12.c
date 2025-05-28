#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char sexo;
    float altura, ideal;
    printf("Digite sua altura\n");
    scanf("%f", &altura);
    printf("Digite seu sexo (m/h)");
    scanf("%s", &sexo);
    if(sexo == 'm'){
        ideal = (62.1*altura)-44.7;
        printf("O seu peso ideal e %f", ideal);
    }
    if(sexo == 'h'){
        ideal = (72.7*altura)-58;
        printf("O seu peso ideal e %f", ideal);
    }
    return 0;
}