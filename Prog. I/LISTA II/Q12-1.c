#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*Faça uma única função em C que retorna o MENOR, o MAIOR e a SOMA de um
vetor com 50 elementos passados por parâmetro. A impressão dos resultados deve ser
feita no programa main. Faça uma versão utilizando ponteiros e outra utilizando
struct.*/

/*NAO CONSEGUI FAZER*/

struct Informa{
    int menor, maior, soma, vet[2], i, valor, j=0;
};

int UNICA(){
    struct Informa inf;
    
    for(inf.i=0;inf.i<2;inf.i++){

    }

    return inf.valor;
}

int main(){
    struct Informa inf;
    for(inf.i=0;inf.i<2;inf.i++){
        printf("Digite os valores:\n");
        scanf("%d", inf.vet[i]);
    }
    inf.menor = UNICA();
    inf.maior = UNICA();
    inf.soma = UNICA()
}