#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, A[5][4], B[4][5];
    for(i=0;i<5;i++){
        for(j=0;j<4;i++){
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &A[i][j]);
            B[j][i]=A[i][j];
        }
    }
    printf("Valores da Matriz Transposta:\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;i++){
            printf("%d", B[j][i]);
        }
    }
    return 0;
}