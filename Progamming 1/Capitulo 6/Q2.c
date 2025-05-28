#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct coordenadas{
    float X, Y, final;
};

int main(){

    struct coordenadas cord;

    printf("Informe as coordenadas X e Y:\n");
    scanf("%f", &cord.X);
    scanf("%f", &cord.Y);
    cord.final = sqrt(cord.X*cord.X+cord.Y*cord.Y);
    printf("A distancia e %f", cord.final);
return 0;
}