#include <stdio.h>
#include <stdlib.h>

int soma(int num1,int num2){
    num1= num2+num1;
    return num1;
}

int main() {
    int num1, num2;
    printf("Digite dois valores:\n");
    scanf("%d %d", &num1, &num2);
    printf("A soma e %d", soma(num1,num2));
    return (EXIT_SUCCESS);
}

