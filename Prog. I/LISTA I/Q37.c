#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num[10], i, numf[10], j;
    for(i=0;i<10;i++){
        printf("Digite um valor:\n");
        scanf("%d", &num[i]);
        numf[i] = num[i];
        for (j=num[i]-1;j>1;j--){
            numf[i] *= j;
        }
    }
    for(i=0;i<10;i++){
        printf("Numero:\tFatorial:\tInverso:\n%d\t%d\t\t1/%d\n", num[i], numf[i], num[i]);
    }
    return 0;
}