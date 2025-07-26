#include <stdio.h>
#include <stdlib.h>

int main() {
    float imc, height, weight;
    printf("write you height and weight:\n");
    scanf("%f %f", &height, &weight);
    
    imc = weight/(height*height);
    
    if(imc<18.5)
        printf("below normal weight");
    if(imc>=40)
        printf("weight 3");
    if(imc>=35 && imc<40)
        printf("weight 2");
    if(imc>=30 && imc<35)
        printf("weight 1");
    if(imc>=25 && imc<30)
        printf("overweight");
    if(imc>=18.5 && imc<25)
        printf("weight normal");
}

