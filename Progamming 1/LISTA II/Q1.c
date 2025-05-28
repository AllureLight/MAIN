#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NUM_ALUNOS 2
#define NUM_DISCIPLINAS 5

typedef struct {
    char nome[50];
    float media[NUM_DISCIPLINAS];
    float prova_final[NUM_DISCIPLINAS];
} Aluno;

void lerDados(Aluno alunos[], char disciplinas[][50]) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            printf("Digite a média da disciplina %s: ", disciplinas[j]);
            scanf("%f", &alunos[i].media[j]);
            printf("Digite a nota da prova final da disciplina %s (0 se não ficou de prova final): ", disciplinas[j]);
            scanf("%f", &alunos[i].prova_final[j]);
        }
    }
}

void exibirReprovados(Aluno *alunos, char disciplinas[][50]) {
    printf("\nAlunos reprovados e disciplinas:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        int reprovado = 0;
        printf("Aluno: %s\n", alunos[i].nome);
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            if(alunos[i].prova_final[j] >=0){
                float nota_final = (alunos[i].media[j] + alunos[i].prova_final[j]) / 2;
                if (nota_final < 6.0) { // Considerando 6.0 como a média mínima para aprovação
                    printf("  Reprovado em: %s\n", disciplinas[j]);
                    reprovado = 1;
                }
            }
        }
        if (!reprovado) {
            printf("  Aprovado em todas as disciplinas.\n");
        }
    }
}

void salvarRegistros(Aluno alunos[], char disciplinas[][50]) {
    FILE *file = fopen("registros.txt", "w+");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        fprintf(file, "Aluno: %s\n", alunos[i].nome);
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            fprintf(file, "  Disciplina: %s, Media: %.2f, Prova Final: %.2f\n", disciplinas[j], alunos[i].media[j], alunos[i].prova_final[j]);
        }
    }

    fclose(file);
    printf("Registros salvos com sucesso em 'registros.txt'.\n");
}

void lerRegistros(Aluno alunos[], char disciplinas[][50]) {
    FILE *file = fopen("registros.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        fscanf(file, "Aluno: %[^\n]\n", alunos[i].nome);
        for (int j = 0; j < NUM_DISCIPLINAS; j++) {
            fscanf(file, "  Disciplina: %[^,], Media: %f, Prova Final: %f\n", disciplinas[j], &alunos[i].media[j], &alunos[i].prova_final[j]);
        }
    }

    fclose(file);
    printf("Registros lidos com sucesso de 'registros.txt'.\n");
}

int main() {
    Aluno alunos[NUM_ALUNOS];
    char disciplinas[NUM_DISCIPLINAS][50] = {
        "Calculo",
        "Programacao",
        "Vetores",
        "Introducao",
        "Ingles"
    };

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Armazenar dados dos alunos\n");
        printf("2. Exibir alunos reprovados\n");
        printf("3. Salvar registros em arquivo\n");
        printf("4. Ler registros de arquivo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lerDados(alunos, disciplinas);
                break;
            case 2:
                exibirReprovados(alunos, disciplinas);
                break;
            
            case 3:
                salvarRegistros(alunos, disciplinas);
                break;
            
            case 4:
                lerRegistros(alunos, disciplinas);
                break;
                
        }
    }while(opcao!=0);
    
}