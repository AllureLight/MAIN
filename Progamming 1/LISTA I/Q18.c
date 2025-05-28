#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num1,num2,num3;
    printf("Digite 3 valores:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num2>num3){
        printf("\n%d %d %d", num1, num2, num3);
    }
    else if(num1>num3 && num3>num2){
        printf("\n%d %d %d", num1, num3, num2);
    }
    else if(num2>num1 && num1>num3){
        printf("\n%d %d %d", num2, num1, num3);
    }
    else if(num2>num3 && num3>num1){
        printf("\n%d %d %d", num2, num3, num1);
    }
    else if(num3>num1 && num1>num2){
        printf("\n%d %d %d", num3, num1, num2);
    }
    else if(num3>num2 && num2>num1){
        printf("\n%d %d %d", num3, num2, num1);
    }
    return 0;
}