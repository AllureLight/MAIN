#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, result;
    printf("Digite qual a posicao\n");
    scanf("%d", &num);
    if (num==1){
        printf("\n0");
    }
    else if (num==2){
        printf("\n1");
    }
    else{
        int a = 0;
        int b = 1;
        for(int i=num;i>2;i--){
            result = a + b;
            a = b;
            b = result;
        }
        printf("\n%d", result);
    }
}

