#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct alunos{
    char nome[30];
    float n1,n2,n3;
};

int main(){

    struct alunos al[2];
    int i, me, melhor;
    float maior;
    maior = 0;
    for (i = 0; i <= 2; i++){
        printf("\nInforme o nome do aluno %d:\n", i+1);
        scanf("%s", &al[i].nome);
        printf("Informe as suas 3 notas:\n");
        scanf("%f", &al[i].n1);
        scanf("%f", &al[i].n2);
        scanf("%f", &al[i].n3);
        me=(al[i].n1+al[i].n2+al[i].n3)/3;

        if (me>maior){
            maior=me;
            melhor=i;
        }
    }
    printf("Aluno: %s \n", al[melhor].nome);
    printf("Media %.0f", maior);
return 0;
}