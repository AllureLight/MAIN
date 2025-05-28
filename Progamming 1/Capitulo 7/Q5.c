#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculo (int num){
    if((num%2==0 || num%3==0 || num%5==0) && (num!=2 && num!=3 && num!=5))
        num=1;
    else
        num=0;
    return (num);
}

int main(){
    int num;
    printf("Informe o numero:\n");
    scanf("%d", &num);
    num = calculo(num);
    if(num==1)
        printf("Ele n e primo");
    else
        printf("Ele e primo");
    return 0;
}