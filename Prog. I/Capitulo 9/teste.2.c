#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void METADE(int *num){
    int nu;
    printf("numero:\n");
    scanf("%d", &nu);
    *num = nu;
}

int main(){
    int num;
    METADE(&num);
    printf("\n%d", num);
}