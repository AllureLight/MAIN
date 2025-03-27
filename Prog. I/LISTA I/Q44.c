#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, maior = 0, coordenada[1], B[10][15];
    coordenada[0] = 0;
    coordenada[1] = 0;
    for(i=0;i<10;i++){
        for(j=0;j<15;i++){
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &B[i][j]);
            if(maior<B[i][j]){
                maior = B[i][j];
                coordenada[0]=i;
                coordenada[1]=j;
            }
        }
    }
    printf("O maior valor é %d na coordenada %d %d", maior, coordenada[0], coordenada[1]);
    return 0;
}