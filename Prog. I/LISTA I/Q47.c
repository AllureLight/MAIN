#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i, j, media = 0, A[10][10];
    for(i=0;i<10;i++){
        for(j=0;j<10;i++){
            printf("Digite o valor:\n");
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;i++){
            if(i==j){
                media = media + A[i][j];
            }
        }
    }
    printf("A media é %d", media/10);
    return 0;
}