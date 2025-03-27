#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N, R, i;
    scanf("%d", &N);
    R=1;
    i=2;
    do{
        R = R*2;
        i++;
        printf("%d\n", R);
    }while(i<N);
    return 0;
}