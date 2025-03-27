#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void METADE(int *num){
    int j;
    for(j=0;j<3;j++){
        printf("A metade e %d\n", num[j]/2);
    }
}

int main(){
    int num[3];
    int i;
    for(i=0;i<3;i++){
        printf("Digite os valores:\n");
        scanf("%d", &num[i]);
    }
    METADE(num);
}