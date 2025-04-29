#include <stdio.h>

// Criar um programa que verifique 3 condições de segurança (temperatura, umidade, nível de estoque)

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("Temperatura está alta!\n");
    } else {
        printf("Temperatura adequada.\n");
    }

    if (umidade > 50) {
        printf("Umidade elevada!\n");
    } else {
        printf("Umidade adequada.\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque está abaixo do mínimo!\n");
    } else {
        printf("Estoque regular.\n");
    }
}