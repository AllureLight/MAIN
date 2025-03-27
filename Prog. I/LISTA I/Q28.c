#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    printf("Digite um valor:\n");
    scanf("%d", &N);
    if(N%2!=0 && N%3!=0 && N%5!=0)
        printf("\ne primo");
    else if (N==2)
        printf("\ne primo");
    else if (N==3)
        printf("\ne primo");
    else if (N==5)
        printf("\ne primo");
    else
        printf("\nnn e primo");
    return 0;
}