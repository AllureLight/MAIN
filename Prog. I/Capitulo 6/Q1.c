#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario{
    char nome[30];
    int idade, endereco;
};

int main() {

    struct funcionario funk;

    printf("Informe o seu nome, idade e endereco:\n");
    scanf("%s", &funk.nome);
    scanf("%d", &funk.idade);
    scanf("%d", &funk.endereco);
    printf("Nome: %s\nIdade: %d\nendereco: %d", funk.nome, funk.idade, funk.endereco);
return 0;
}