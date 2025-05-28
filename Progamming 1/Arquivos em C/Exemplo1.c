#include <stdio.h>

int main()
{
    void copiarConteudo(FILE *file1, FILE *file2);

    FILE *file1 = fopen("teste.txt", "r");
    FILE *file2 = fopen("teste1.exe", "w");

    if (file1 == NULL || file2 == NULL){
        printf("nao foi possivel abrir o arquivo.");
        return 1;
    }
    copiarConteudo(file1, file2);

    fclose(file1);
    fclose(file2);
    return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){

    char leitor[1000];

    while (fgets(leitor, 1000, file1) != NULL)

    fputs(leitor, file2);
}
