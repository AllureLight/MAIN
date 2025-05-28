#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, C[4][9], A[4][2];
    for(i=0;i<5;i++){
        A[i][0] = C[i][0];
        A[i][1] = C[i][0];
        A[i][2] = 0;
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;i++){
            printf("Digite um valor para a Matriz\n");
            scanf("%d", &C[i][j]);
            A[i][2] = A[i][2] + C[i][j];
            if(A[i][0] < C[i][j]){
                A[i][0] = C[i][j];
            }
            if(A[i][1] > C[i][j]){
                A[i][1] = C[i][j];
            } 
        }
    }
    for(i=0;i<5;i++){
        printf("O maior da linha %d é %d\n", i+1, A[i][0]);
        printf("O menor da linha %d é %d\n", i+1, A[i][1]);
        printf("A soma da linha %d é %d\n", i+1, A[i][2]);
    }
    return 0;
}