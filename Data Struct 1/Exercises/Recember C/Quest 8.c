#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ponto{
    int x;
    int y;
}Ponto;

int dentro_ret (Ponto *ie, Ponto *sd, Ponto *p){
    return(ie->x < p->x && ie->y < p->y && sd->x > p->x && sd->y > p->y);
}

int main(){
    Ponto ie, sd, p;
    ie.x=1;
    ie.y=1;
    sd.x=4;
    sd.y=4;
    p.x=5;
    p.y=5;
    if(dentro_ret(&ie, &sd, &p))
        printf("O ponto esta dentro");
    else
        printf("O ponto esta fora");
}