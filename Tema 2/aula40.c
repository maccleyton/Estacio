#include <stdio.h>

int main() { // Estrutura de decisão encadeada

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade < 12) {
        printf("Você é uma criança.\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Você é adolescente.\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Você é adulto.\n");
    } else {
        printf("Você é idoso.\n");
    }
}