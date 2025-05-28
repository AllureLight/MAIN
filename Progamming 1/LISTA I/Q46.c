#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, contador = 0, A[10][10], valor;
    for(i=0;i<10;i++){
        for(j=0;j<10;i++){
            printf("Digite o valor:\n");
            scanf("%d", &A[i][j]);
        }
    }
    printf("Digite um valor para verificar:\n");
    scanf("%d", &valor);
    for(i=0;i<10;i++){
        for(j=0;j<10;i++){
            if (A[i][j]==valor) 
            {
                contador = contador + 1;
            }
            
        }
    }
    printf("O numero de valores iguais é %d", contador);
    return 0;
}