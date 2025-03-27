#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int b;

struct dados{
    int a;
};

int calculo(int a){
    if (b==1){
        return a;
    }
    else{
        b = b-1;
        return a + calculo(a);
    }
}

int main(){
    struct dados da;

    printf("Digite dois valores para iniciar:\n");
    scanf("%d %d", &da.a, &b);
    printf("\nO resultado e: %d", calculo(da.a));
}