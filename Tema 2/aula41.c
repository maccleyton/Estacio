#include <stdio.h>

int main() { // Estrutura de decisão encadeada

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade > 60) {
        printf("Você é um idoso!\n");
    } else if (idade <= 60 && idade > 18) {
        printf("Você é um adulto!\n");
    } else if (idade <= 18 && idade > 12) {
        printf("Você é adolescente!\n");
    } else {
        printf("Você é uma criança!\n");
    }
    printf("\n");
}