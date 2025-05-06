#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado, opcao;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número aleatório entre 1 e 100

    printf("Bem-vindo ao Jogo de Maior, Menor ou Igual!\n");
    printf("Você pode escolher um número entre 1 e 100 e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Escolha o tipo de comparação (M/N/I): ");
    scanf(" %c", &tipoComparacao);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            printf("Você escolheu a opção maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu a opção menor!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu a opção igual!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
            printf("Tipo de comparação inválido!\n");
            break;
    }

    printf("Número do computador é: %d e do jogador é: %d\n", numeroComputador, numeroJogador);
    if (resultado == 1) {
        printf("Parabéns! Você ganhou!\n");
    } else {
        printf("Que pena! Você perdeu!\n");
    }

}