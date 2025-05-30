#include <stdio.h>

void vetor() { // Vetor é um array unidimensional
    int numeros[5] = {10, 20, 30, 40, 50};
}

void matriz() { // Matriz é um array multidimensional
    int tabela[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
}

void arrays() {
    int numeros[5];  // Declaração de um array de inteiros com 5 elementos
}

void inicializacao() {
    int numeros[5] = {1, 2, 3, 4, 5}; // Inicialização de um array com valores
}

void acesso() {
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("Primeiro elemento: %d\n", numeros[0]); // Acesso ao primeiro elemento
    printf("Segundo elemento: %d\n", numeros[3]); // Acesso ao quarto elemento
}