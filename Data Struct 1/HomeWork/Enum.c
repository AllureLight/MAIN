#include <stdio.h>
#include <stdlib.h>

typedef enum humor{
    TRISTE,
    FELIZ,
    ANSIOSO,
}Humor;

int main(){
    Humor humo;
    int valor;

    printf("Digite um valor:\n");
    scanf("%d", &valor);

    if (valor >= 0 && valor <= 2) {
        humo = (Humor) valor;

        printf("Humor: ");
        switch (humo) {
            case TRISTE:
                printf("TRISTE\n");
                break;
            case FELIZ:
                printf("FELIZ\n");
                break;
            case ANSIOSO:
                printf("ANSIOSO\n");
                break;
        }
    } else {
        printf("Valor inválido! Digite um número entre 0 e 6.\n");
    }
}