#include <stdio.h> // Estruturas de Repetição - while

int main() {
    int i = 1; // Inicializa a variável i com 1

    while (i <= 5) { // Enquanto i for menor ou igual a 5
        printf("%d\n", i); // Imprime o valor de i
        i++; // Incrementa i em 1
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
    // O loop imprime os números de 1 a 5, um por linha
}