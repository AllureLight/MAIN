#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int b=0;

struct dados{
    int a;
};

int calculo(int a){
    if (a==0){
        return b;
    }
    else{
        b += a;
        a = a-1;
        return calculo(a);
    }
}

int main(){
    struct dados da;

    printf("Digite valor para iniciar:\n");
    scanf("%d", &da.a);
    printf("\nO resultado e: %d", calculo(da.a));
}