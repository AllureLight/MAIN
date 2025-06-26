#include <stdio.h>
#include <stdlib.h>

int potencia(int y, int x){
    if(y == 0)
        return 1;
    else
        return x * potencia(y-1, x);
}

int main(){
    int x = 10;
    int y = 5;
    printf("potencia: %d", potencia(y, x));
}