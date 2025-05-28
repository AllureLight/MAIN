#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num, i;
    printf("Digite um valor:\n");
    scanf("%d", &num);
    i=num-1;
    while(i>1){
        num *= i;
        i--;
    }
    printf("O fatorial e %d", num);
    return 0;
}