#include <stdio.h>

int main() {
    int opcao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Iniciando o jogo...\n");
        break;
    case 2:
        printf("Regras do Jogo:\n");
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