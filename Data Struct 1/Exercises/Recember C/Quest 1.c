#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int primo(int *n){
    return((*n%2!=0 && *n%3!=0 && *n%5!=0) || *n==2 || *n==3 || *n==5);
}

int main(){
    int n;
    printf("Write a number:\n");
    scanf("%d", &n);
    if (primo(&n) == 1)
        printf("is cousin");
    else
        printf("Not cousin");
}