#include <stdio.h>
#include <stdlib.h>


#define LINHA 10
#define COLUNA 10

void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna]);
void preencherMatriz(int linha, int coluna, int matriz[linha][coluna]);

int main(){
    int matriz[LINHA][COLUNA];

    preencherMatriz(LINHA, COLUNA, matriz);

    float soma = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == j){
                soma += matriz[i][j];
                break;
            }
        }

    }

    float media = soma / 10;

    imprimirMatriz(LINHA, COLUNA, matriz);

    printf("\n");
    printf("A media eh: %.2f", media);

    return 0;
}

void preencherMatriz(int linha, int coluna, int matriz[linha][coluna]){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

}

void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna]){

    for(int i = 0; i < linha; i++){
        printf("| ");
        for(int j = 0; j < coluna; j++){
            printf("%3d ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
}