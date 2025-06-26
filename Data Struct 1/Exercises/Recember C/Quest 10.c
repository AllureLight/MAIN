#include <stdio.h>
#include <stdlib.h>

int SomaSerie(int i,int j,int k){
    if(i>j)
        return j;
    else
        return i + SomaSerie(i + k, j, k);
}

int main(){
    int i = 10;
    int j = 20;
    int k = 3;
    printf("A soma e %d", SomaSerie(i, j, k));
}