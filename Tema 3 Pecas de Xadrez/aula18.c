#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        recursivo(numero - 1);
        printf("%d \n", numero); // Ao alterar a ordem dos elementos, a contagem se torna crescente
    }
}

int main() {
    int quantidade = 10;
    printf("Contagem regressiva: ");
    recursivo(quantidade);
    return 0;
}