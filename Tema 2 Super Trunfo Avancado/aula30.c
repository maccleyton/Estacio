#include <stdio.h>

int main () {

    int numero;
    int resultado;

    numero = 10;

    resultado = numero % 2;

    if (resultado == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }
    printf("O resto da divisão é: %d\n", resultado);
}