#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num=1, i;
    for(i=0;i<100;i++){
        printf("%d\n", num);
        if(num%10==0){
            printf("Multiplo de 10\n");
        }
        num++;
    }
    return 0;
}