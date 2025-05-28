#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Construa uma função que, recebendo como parâmetros quatro números inteiros,
devolva ao módulo que o chamou os dois maiores números dentre os quatro rece-
bidos. Faça um programa que leia tantos conjuntos de quatro valores quantos o
usuário deseje e que acione a função para cada conjunto de valores, apresentando
a cada vez os dois maiores números. Se preferir, utilize vetor para armazenar o
conjunto de valores.*/

void compara(int *valor, int *pmaior1, int *pmaior2){
    int aux;
    for(int i=0; i<4;i++){
        for(int j=i+1;j<4;j++){
            if(valor[i]<valor[j]){
                aux = valor[i];
                valor[i]=valor[j];
                valor[j]=aux;
            }
        }
    }
    *pmaior2 = valor[0];
    *pmaior1 = valor[1];
}

int main(){
    int quant, num[4], maior1, maior2;

    printf("Quantos valores vc quer armazenar?\n");
    scanf("%d", &quant);

    while(quant!=0){
        for(int d=0;d<4;d++){
            printf("Digite os valores que vc deseja comparar:\n");
            scanf("%d", &num[d]);
        }
    compara(num, &maior1, &maior2);
    printf("\nOs dois maiores valores sao: %d %d", maior1, maior2);
    quant--;
    }

return 0;
}