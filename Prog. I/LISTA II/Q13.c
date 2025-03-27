#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct VALORES{
    int x, y, a[1];
};

int TESTE(){
    struct VALORES val;
    printf("Digite o valor de X e Y:\n");
    scanf("%d %d", &val.x, &val.y);

    if (val.x % val.y == 0)
        return 1;
    else
        return 0;
}

int main(){
    printf("\n\n%d", TESTE());
}