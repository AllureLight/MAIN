#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Digite a medida dos 3 lados do triangulo:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b+c && b<a+c && c<b+a)
        printf("O triangulo existe!");
    else
        printf("O triangulo nn existe!");
    return 0;
}