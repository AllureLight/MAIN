#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float calculo (float ang){
    return ((ang*3.14)/180);
}

int main(){
    float ang;
    printf("Informe o angulo:\n");
    scanf("%f", &ang);
    printf("em radianos e %f", calculo(ang));
    return 0;
}