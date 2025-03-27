#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, A[3][5], B[5][3], Multiplica[5][3];
    for(i=0;i<5;i++){
        for(j=0;j<3;i++){
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &A[j][i]);
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &B[i][j]);
            Multiplica[i][j] = A[j][i]*B[i][j];
        }
    }
    for(i=0;i<5;i++){
        printf("A multiplicacao na linha %d entre elas é: %d\n", i+1, Multiplica)
    }
    return 0;
}