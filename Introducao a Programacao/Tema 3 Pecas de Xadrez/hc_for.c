#include <stdio.h>

int main() { // tabuada

    int numero, i;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &numero);
    printf("Tabuada do %d:\n", numero);

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    printf("O loop for terminou!\n");
    return 0;
}