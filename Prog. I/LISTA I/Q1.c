#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if (media < 4) {
        printf("Reprovado");
    }
    else if (media < 7) {
        printf("Exame");
    }
    else {
        printf("Aprovado");
    }

    return 0;
}