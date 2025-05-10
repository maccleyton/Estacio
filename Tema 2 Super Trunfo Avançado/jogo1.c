#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <stdlib.h> // Função rand()
#include <time.h> // Função time()

int main() { // Jogo do número secreto
    int opcao;
    int numeroSecreto, palpite, tentativas = 0;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Iniciando o jogo...\n");
        srand(time(0)); // Inicializa o gerador de números aleatórios
        numeroSecreto = rand() % 10; // Gera um número secreto entre 0 e 9
        printf("Digite um número de 0 a 9:\n");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) {
            printf("Você acertou!\n");
        } else {
            printf("Você errou! O número secreto era %d.\n", numeroSecreto);
        }
        break;
    case 2:
        printf("Regras do Jogo:\n"); // Pode ser utilizado outro switch para exibir as regras
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        printf("3. Regra 3\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        // Código para lidar com a opção inválida
        break;
    }
}