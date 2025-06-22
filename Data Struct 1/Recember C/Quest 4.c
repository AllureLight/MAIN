#include <stdio.h>
#include <stdlib.h>

typedef struct realtype{
    int left;
    int right;
}Real;

void leReal(Real *r1, Real *r2){
    r1->left = 81;
    r1->right = 15;
    r2->left = 20;
    r2->right = 5;
}

void imprimeReal(Real * r1, Real *r2){
    printf("%d.%d\n", r1->left, r1->right);
    printf("%d.%d", r2->left, r2->right);
}

Real soma(Real *r1, Real *r2){
    Real r3;
    r3.left = r1->left+r2->left;
    r3.right = r1->right+r2->right;
    return r3;
}

int main(){
    Real real1, real2, resultado;
    leReal(&real1, &real2);
    imprimeReal(&real1, &real2);
    resultado = soma(&real1, &real2);
    printf("\n\nSoma: %d.%d\n", resultado.left, resultado.right);
}