#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct VARIAVEIS{
    int Codigo;
    char NomeObra;
    char NomeAutor[30];
    char Editora;
    char Doado;
    int NumeroPag;
    char PalavraChave;
    char Assunto;
};

int main(){
    struct VARIAVEIS var[3000];
    int pesquisa, cont=0, i, contadorobras=0;
    char nomepesquisado[30];
    printf("DiGITE UM CODIGO DE CATALOGACAO:\n");
    scanf("%d", &pesquisa);
    for(i=0;i<3000;i++){
        if(pesquisa==var[i].Codigo){
            printf("A posicao do vetor é %d", i);
        }
    }
    if(cont==0){
        return -1;
    }
    printf("Digite o nome do autor:\n");
    scanf("%s", nomepesquisado);
    for(i=0;i<3000;i++){
        if(nomepesquisado == var[i].NomeAutor){
            contadorobras = contadorobras + 1;
        }
    }
    printf("O numero de obras cadastradas desse autor é %d", contadorobras);
    return 0;
}