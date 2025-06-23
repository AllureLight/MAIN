#include <stdio.h>
#include <stdlib.h>

int calculo(int num){
    if(num==0){
        printf("%d\n", num);
        return num;
    }
    else{
        printf("%d\n", num);        
        return calculo(num-1);
    }
}

int main() {
    int r=0, num;
        printf("Digite um numero a ser contado\n");
        scanf("%d", &num);
        calculo(num);
        printf("\nDeseja continuar? (sim = 0 / nao = 1)\n");
        scanf("%d", &r);
    if(r==0){
         return main();   
    }
    else{
        printf("PROGRAMA FINALIZADO!");
    }
}

