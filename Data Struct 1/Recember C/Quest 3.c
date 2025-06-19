#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

/*(2 * n - 1) + soma_impares(n - 1)*/

double pi(int n) {
    if (n==0)
        return 1;
    else
        return (pow(-1,n)/((2*n)+1)) + pi(n-1);
}

int main(){
    int n;
    printf("Write a number for pi:\n");
    scanf("%d", &n);
    printf("The pi number is %f", 4 * pi(n));
}