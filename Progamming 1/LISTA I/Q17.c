#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    char nome[30];
    int idade, sexo;
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite seu sexo[1=homem/2=mulher]:\n");
    scanf("%d", &sexo);
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    if(idade<18){
        printf("%s e MENOR", nome);
    }
    else if(idade>65 && sexo == '1'){
        printf("%s e APOSENTADO", nome);
    }
    else if(idade>60 && sexo == '2'){
        printf("%s e APOSENTADA", nome);
    }
    return 0;
}