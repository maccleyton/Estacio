#include <stdio.h>

int main() {
    /*
    Incremento (==)
    Pré-Incremento (++a)
    Pós-Incremento (a++)
    Decremento (--)
    Pré-Decremento (--a)
    Pós-Decremento (a--)
    */

    int numero1 = 1, resultado;
    printf("Antes do incremento: %d\n", numero1);

    //Pós-Incremento:
    //resultado = numero1;
    //numero1++;
    resultado = numero1++;
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-Incremento:
    resultado = ++numero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pós-Decremento:
    //resultado = numero1;
    //numero1++;
    resultado = numero1--;
    printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Pré-Decremento:
    resultado = --numero1;
    printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    numero1++;
    printf("Depois do incremento: %d\n", numero1);

    numero1--;
    printf("Depois do decremento: %d\n", numero1);

}