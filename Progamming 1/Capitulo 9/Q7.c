#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Considere um vetor de 10 elementos, contendo valores inteiros. Faça um pro-
grama que leia os valores para preencher esse vetor, após a leitura o programa
deve invocar uma função que calcule e devolva as frequências absoluta e relativa
desses valores no conjunto. (Observação: a frequência absoluta de um valor é
o número de vezes que esse valor aparece no conjunto de dados; a frequência
relativa é a frequência absoluta dividida pelo número total de dados.). Utilize
outros dois vetores para armazenar as frequências relativas e absolutas e ao final
do programa, imprima de forma tabulada os números e suas frequências absoluta
e relativa.*/

/*NAO CONSEGUI FAZER, TENTAR NOVAMENTE DPS*/

void compara(int *vet, int *rela, int *pabso){
    int j, d, aux;
    for(j=0;j<3;j++){
        for(d=j+1;d<3;d++){
            if(vet[j]==vet[d]){
                *pabso += 1;
                aux = pabso;
            }
        }
        *rela = aux/3;
    }
}

int main(){
    int vet[3], rela[3], abso[3], i;
    
    for(i=0;i<3;i++){
        printf("Digite os elementos:\n");
        scanf("%d", &vet[i]);
    }

    compara(vet, rela, abso);

    printf("\n\nElementos:\tFreq.Abso.:\tFreq.Rela:\n");
    for(i=0;i<3;i++){
        printf("%d\t\t%d\t\t%d\n", vet[i], rela[i], abso[i]);
    }
}