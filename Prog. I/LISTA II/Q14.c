#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int FIB(int n){
    int pantes;
    if (0 < n && n < 3){
        return 1;
    }
    else{
        return FIB(n-1) + FIB(n-2);
    }
}

int main(){
    int n;
    printf("Digite um valor:");
    scanf("%d", &n);
    printf("\n\nO numero e o n-enesimo %d",FIB(n));
    return 0;
}