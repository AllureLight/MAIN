#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculo (int n1, int n2, int n3){
    return ((n1+n2+n3)/3);
}

int main(){
    int n1, n2, n3;
    printf("Informe as notas:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("A media e %d", calculo(n1, n2, n3));
    return 0;
}