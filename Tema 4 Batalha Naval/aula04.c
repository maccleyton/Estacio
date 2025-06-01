#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {

    int matriz[LINHAS][COLUNAS];
    int target = 9;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHAS; i++) {          // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {      // Loop interno para as colunas
            matriz[i][j] = soma;                // Preenchimento da matriz com números sequenciais
            soma++;                              // Incrementa o valor para o próximo elemento
            printf("%d ", matriz[i][j]); // Impressão do elemento atual
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHAS; i++) {          // Loop externo para as linhas
        for (int j = 0; j < COLUNAS; j++) {      // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Valor %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    return 0;
}