#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct coordenadas{
    float X1, Y1, X2, Y2, D;
};

int main(){

    struct coordenadas cord;

    printf("Informe as coordenadas X1 e Y1:\n");
    scanf("%f", &cord.X1);
    scanf("%f", &cord.Y1);
    printf("Informe as coordenadas X2 e Y2:\n");
    scanf("%f", &cord.X2);
    scanf("%f", &cord.Y2);
    cord.D = sqrt(pow((cord.X2-cord.X1), 2)+pow((cord.Y2-cord.Y1), 2));
    printf("A distancia e %f", cord.D);
return 0;
}