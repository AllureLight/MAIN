#include <stdlib.h>
#include <stdio.h>

#define MAX 10

typedef struct fila{
	float info[MAX];
	int n;
	int ini;
}Fila;

Fila *criarFila(){
	Fila* f = (Fila*) malloc(sizeof(Fila));
	if(f!=NULL){
		f->n = 0;
		f->ini = 0;
		return f;
	}
	else
		return NULL;
}

int estaVazia(Fila *f){
	return(f->n == 0);
}

int estaCheia(Fila *f){
	return (f->n == MAX);
}

void inserir(Fila *f, float v){
	if(!estaCheia(f)){
		int fim = (f->ini+f->n)%MAX;
		f->info[fim] = v;
		f->n++;
	}
	else
		printf("Esta cheia\n");
}

void imprime(Fila* f){
	if(!estaVazia(f)){
		int i = f->ini;
		for(int x = 0; x < f->n; x++){
			printf("%f", f->info[i]);
			i = (i+1)%MAX;
		}
		printf("\n\n");
	}
	else
		printf("Esta vazia\n");
}

float remover(Fila *f){
	if(!estaVazia(f)){
		float aux = f->info[f->ini];
		f->ini = (f->ini + 1)%MAX;
		f->n--;
		return aux;
	}
	else{
		printf("Esta cheia\n");
        return -1;
    }
}

void liberar(Fila *f){

}

int main(){
	Fila *fila = criarFila();

	inserir(fila, 10.5);
	inserir(fila, 5);
	inserir(fila, 58544);
	imprime(fila);

	remover(fila);
	imprime(fila);

	liberar(fila);
	imprime(fila);
}

// i = return(i+1) % MAX; <- incremento circular