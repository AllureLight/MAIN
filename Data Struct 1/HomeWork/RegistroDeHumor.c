#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum humor{
    FELIZ,
    TRISTE,
    ANSIOSO,
    CANSADO,
    MOTIVADO,
    ESTRESSADO,
    NEUTRO,
}Humor;

typedef struct data{
    int Dia, Mes, Ano;
}Data;

typedef struct registrodehumor{
    int id;
    Data dat;
    Humor animo;
    char Motivo[100];
    int NotaDoDia;
}RegistroDeHumor;

int FazerId(Data *d){
    return d->Dia*1000000 + d->Mes*10000 + d->Ano;
}

RegistroDeHumor *criarRegistro(){
    RegistroDeHumor *regist = (RegistroDeHumor*)malloc(sizeof(RegistroDeHumor));
    if(regist != NULL){
        printf("Digite a Data do seu Dia! (Dia / Mes / Ano)\n");
        scanf("%d %d %d", &regist->dat.Dia, &regist->dat.Mes, &regist->dat.Ano);

        printf("\nDigite seu Humor do seu Dia!\n0 - FELIZ\n1 - TRISTE\n2 - ANSIOSO\n3 - CANSADO\n4 - MOTIVADO\n5 - ESTRESSADO\n6 - NEUTRO\n");
        int temp;
        scanf("%d", &temp);
        regist->animo = (Humor) temp;
        getchar();

        printf("\nDigite o Motivo do seu Dia!\n");
        scanf("%[^\n]", regist->Motivo);

        printf("\nDigite a Nota do seu Dia! (De 0 a 10)\n");
        scanf("%d", &regist->NotaDoDia);

        regist->id = FazerId(&regist->dat);
    }
    else
        printf("Nao foi possivel criar o Registro!\n");
    return regist;
}

void ImprimirRegistro(RegistroDeHumor *regist){
    if(regist!=NULL){
        printf("\n-------------------------------------------\n");
        printf("Id do Registro: %d\n", regist->id);
        printf("Data do Registro: %d/%d/%d\n", regist->dat.Dia, regist->dat.Mes, regist->dat.Ano);
        printf("Humor do Registro: ");
        switch(regist->animo){
            case FELIZ: printf("FELIZ\n"); break;
            case TRISTE: printf("TRISTE\n"); break;
            case ANSIOSO: printf("ANSIOSO\n"); break;
            case CANSADO: printf("CANSADO\n"); break;
            case MOTIVADO: printf("MOTIVADO\n"); break;
            case ESTRESSADO: printf("ESTRESSADO\n"); break;
            case NEUTRO: printf("NEUTRO\n"); break;
        }
        printf("Motivo do Registro: %s\n", regist->Motivo);
        printf("NotaDoDia do Registro: %d\n", regist->NotaDoDia);
        printf("-------------------------------------------\n");
    }
    else
        printf("Nao tem Registro!\n");
}

void LiberarRegistro(RegistroDeHumor *p){
    if(p != NULL)
        free(p);
}

int main(){
    RegistroDeHumor *regist = criarRegistro();

    ImprimirRegistro(regist);
    LiberarRegistro(regist);
    regist = NULL;
    printf("\n");
    ImprimirRegistro(regist);
}