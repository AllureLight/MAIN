#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int horaextra, horafalta;
    float H;
    printf("Digite suas horas extras:\n");
    scanf("%d", &horaextra);
    printf("Digite suas horas faltadas:\n");
    scanf("%d", &horafalta);
    H = (horaextra)-2/3*(horafalta);
    if(H>=2400){
        printf("Sua gratificacao é de 500 reais");
    }
    else if(H>=1800 && H<2400){
        printf("Sua gratificacao é de 400 reais");
    }
    else if(H>=1200 && H<1800){
        printf("Sua gratificacao é de 300 reais");
    }
    else if(H>=600 && H<1200){
        printf("Sua gratificacao é de 200 reais");
    }
    else if(H<600){
        printf("Sua gratificacao é de 100 reais");
    }
    return 0;
}