#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num, i;
    printf("Digite um valor:\n");
    scanf("%d", &num);
    for(i=num-1;i>1;i--){
        num *= i;
    }
    printf("O fatorial e %d", num);
    return 0;
}