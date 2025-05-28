#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num;
    printf("Insira um valor:\n");
    scanf("%d", &num);
    if(num%10==0)
        printf("O numero e divisivel por 10\n");
    if(num%5==0)
        printf("O numero e divisivel por 5\n");
    if(num%2==0)
        printf("O numero e divisivel por 2\n");
    if(num%10!=0 && num%5!=0 && num%2!=0)
        printf("O numero nao e divisivel por 10, 5 e 2\n");
    return 0;
}