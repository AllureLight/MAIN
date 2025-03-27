#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num, i;
    printf("Digite um valor:\n");
    scanf("%d", &num);
    i=num-1;
    if(num==1){
        printf("O fatorial e %d", num);
    }
    else{
        do{
            num *= i;
            i--;
        }while(i>1);
        printf("O fatorial e %d", num);
    }
    return 0;
}