/* 
 * File:   main.c
 * Author: guilherme.a.medeiros
 *
 * Created on 22 de Maio de 2025, 15:03
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 20;

typedef struct ponto{
    int x;
    int y;
}Ponto;

void imprime_rec(char *nome){
    if(nome[0] != '\0'){
        printf("%c", nome[0]);
        imprime_rec(&nome[1]);
    }
}
void imprime_rec_contrario(char *nome){
    if(nome[0] != '\0'){
        imprime_rec(&nome[1]);
        printf("%c", nome[0]);
    }
}

/*mexer nisso*/

void captura(struct Ponto p){
    
}
void imprime(struct Ponto p){
    
}


int main() {
    Ponto *p1;
    p1 = (Ponto*) malloc(1*sizeof(Ponto));
    p1->x = 10;
    p1->y = 20;
    char nome[30];
    printf("Digite seu nome\n");
    scanf("%[^\n]", nome);
    imprime_rec(nome);
    printf("\n\n");
    imprime_rec_contrario(nome);
    printf("\n\n");
    captura(&p1);
    imprime(&p1);
    return 0;
}
