#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculo (int num){
    int i;
    for (i=num-1 ; i>=1 ; i--){
        num*=i;
    }
    return (num);
}

int main(){
    int num;
    printf("Informe o numero:\n");
    scanf("%d", &num);
    printf("o fatorial e %d", calculo(num));
    return 0;
}