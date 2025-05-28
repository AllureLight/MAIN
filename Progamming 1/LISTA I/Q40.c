#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, MAT1[3][5], MAT2[3][5], MSOMA[3][1];
    for(i=0;i<3;i++){
        for(j=0;j<5;i++){
            printf("Digite um valor para a Matriz1\n");
            scanf("%d", &MAT1[i][j]);
            printf("Digite um valor para a Matriz2\n");
            scanf("%d", &MAT2[i][j]);
            MSOMA[i][1] = MSOMA[i][1] + MAT2[i][j] + MAT1[i][j];
        }
    }
    for(i=0;i<3;i++){
        printf("%d", MSOMA[i][1]);
    }
    return 0;
}