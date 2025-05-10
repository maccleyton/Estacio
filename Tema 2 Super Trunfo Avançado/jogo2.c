#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () { // Jogo de Jokenpô
    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera uma escolha aleatória para o computador

    switch (escolhaJogador) {
        case 1:
            printf("Você escolheu Pedra - ");
            break;
        case 2:
            printf("Você escolheu Papel - ");
            break;
        case 3:
            printf("Você escolheu Tesoura - ");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    switch (escolhaComputador) {
        case 1:
            printf("Computador escolheu Pedra\n");
            break;
        case 2:
            printf("Computador escolheu Papel\n");
            break;
        case 3:
            printf("Computador escolheu Tesoura\n");
            break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("### Empate! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
                (escolhaJogador == 2) && (escolhaComputador == 1) ||
                (escolhaJogador == 3) && (escolhaComputador == 2)) {
        printf("### Parabéns! Você venceu! ###\n");
    } else {
        printf("### Que pena! Você perdeu! ###\n");
    }

    return 0;
}

// Regras do Jogo:
// 1. Pedra vence Tesoura
// 2. Tesoura vence Papel
// 3. Papel vence Pedra
// 4. Empate se ambos escolherem a mesma opção