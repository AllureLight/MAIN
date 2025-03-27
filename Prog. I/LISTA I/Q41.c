#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, MAT[10][10], SOMA;
    for(i=0;i<10;i++){
        for(j=0;j<10;i++){
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &MAT[i][j]);
            if(i==j){
                SOMA = SOMA+MAT[i][j];
            }
            if(i>j){
                SOMA = SOMA+MAT[i][j];
            }
        }
    }
    printf("\nA soma dos valores é : %d", SOMA);
    return 0;
}