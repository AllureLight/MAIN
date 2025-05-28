#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct numero{
    float num;
};

float METADE(float number);

int main(){
    struct numero nu[3];
    for(int i=0;i<3;i++){
        printf("\nFale um valor:\n");
        scanf("%f", &nu[i].num);
        nu[i].num=METADE(nu[i].num);
        printf("A metade e %f", nu[i].num);
    }
    return 0;
}

float METADE(float number){
    number = number/2;
    return number;
}