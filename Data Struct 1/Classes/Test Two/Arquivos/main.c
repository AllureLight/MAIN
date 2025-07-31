#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE* arquivo = fopen("teste.txt", "w");
    if(arquivo != NULL){
        fprintf(arquivo, "Quero te dizer\nOi");
        fclose(arquivo);
    }
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    arquivo = fopen("teste.txt", "r");
    if(arquivo != NULL){
        char texto[100];

        while(fgets(texto, sizeof(texto) , arquivo) != NULL){
            printf("%s", texto);
        }
        fclose(arquivo);
    }
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
}