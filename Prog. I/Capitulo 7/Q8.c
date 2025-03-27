#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float calculo1 (int num){
    return (2*3.14*num);   
}

float calculo2 (int num){
    return (pow(num,2)*3.14);
}

int main(){
    int num;
    printf("Informe o raio:\n");
    scanf("%d", &num);
    printf("\nO perimetro e %.2f", calculo1(num));
    printf("\nA area e %.2f", calculo2 (num));
    return 0;
}