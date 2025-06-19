/* File:   main.c
 * Author: guilherme.a.medeiros
 * Created on 5 de Maio de 2025, 15:18*/

#include <stdio.h>
#include <stdlib.h>

int seq(int num){
    if (num==1)
        return 0;
    if (num==2)
        return 1;
    else{
        return seq(num-1) + seq(num-2);
    }
}

int main() {
    int num;
    printf("Digite qual a posicao\n");
    scanf("%d", &num);
    printf("O valor é %d", seq(num));
}

