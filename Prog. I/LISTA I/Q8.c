#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco, novoPreco;

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50) {
        novoPreco = (preco * 0.05) + preco;
    }
    else if (preco > 50 && preco <= 100) {
        novoPreco = (preco * 0.1) + preco;
    }
    else {
        novoPreco = (preco * 0.15) + preco;
    }

    if (novoPreco <= 80) {
        printf("Novo preco: %.2f\nClassificacao: Barato", novoPreco); 
    }
    else if (novoPreco > 80 && novoPreco <= 120) {
        printf("Novo preco: %.2f\nClassificacao: Normal", novoPreco); 
    }
    else if (novoPreco > 120 && novoPreco <= 200) {
        printf("Novo preco: %.2f\nClassificacao: Caro", novoPreco); 
    }
    else {
        printf("Novo preco: %.2f\nClassificacao: Muito caro", novoPreco); 
    }

    return 0;
}