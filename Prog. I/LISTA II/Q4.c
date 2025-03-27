#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char nome[30];
int quant;

char repete()
{
    for(int i=quant; i>0; i--){
        printf("%s\n", nome);
    }
    return 0;
}

int main(){
    printf("Fale um nome e um valor:\n");
    scanf("%s", &nome);
    scanf("%d", &quant);
    repete();
    return 0;
}
