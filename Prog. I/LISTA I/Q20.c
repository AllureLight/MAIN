#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int cpf,horas,excessoh, excesso, total;
    printf("Digite seu cpf:\n");
    scanf("%d", &cpf);
    printf("Digite o numero de horas trabalhadas:");
    scanf("%d", &horas);
    if(horas<=50){
        excesso = 0;
        total = horas*10;
        printf("O total foi %d e o excesso %d", total, excesso);
    }
    else{
        excessoh = horas-50;
        horas = horas-excessoh;
        excesso = (excessoh)*20;
        total = (horas*10) + excesso;
        printf("O total foi %d e o excesso %d", total, excesso);
    }
    return 0;
}