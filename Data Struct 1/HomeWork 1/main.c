#include <stdio.h>
#include <stdlib.h>
#include "RegistroDeHumor.h"
#include "ListaDuplamenteEnc.h"

int main() {

    int opc;
    NoLista* lista;

    criarLista(&lista);

    do{
    printf("----------------MENU------------------\n");
    printf("1 - Adicionar novo registro\n");
    printf("2 - Remover registro por id\n");
    printf("3 - Buscar por humor\n");
    printf("4 - Imprimir todos os registros\n");
    printf("5 - Mostrar media da notaDoDia\n");
    printf("6 - Mostrar humor mais frequente\n");
    printf("7 - Mostrar os motivos do humor\n");
    printf("8 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    printf("-------------------------------------------\n\n");

    switch (opc) {
        case 1: {
            RegistroDeHumor regist = *criarRegistro();
            insereNoFim(&lista, regist);
            break;
        }
        case 2: {
            removerRegistroPorId(&lista);
            break;
        }
        case 3: {
            buscarRegistroPorHumor(&lista);
            break;
        }
        case 4: {
            imprimirTodosRegistros(&lista);
            break;
        }
        case 5: {
            mediaNotaDoDia(&lista);
            break;
        }
        case 6: {
            humorMaisFrequente(&lista);
            break;
        }
        case 7: {
            motivoDiaHumor(&lista);
            break;
        }
        case 8: {
            printf("Obrigado por utilizar de nosso programa :)");
            break;
        }
        default:
        break;
    }
    }while(opc!=8);
}