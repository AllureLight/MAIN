#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma_impares(int n) {
    if (n == 1)
        return 1;
    else
        return (2 * n - 1) + soma_impares(n - 1);
}

int main(){
    int n;
    printf("Write a number:\n");
    scanf("%d", &n);
    printf("The sum for the numbers is %d", soma_impares(n));
}