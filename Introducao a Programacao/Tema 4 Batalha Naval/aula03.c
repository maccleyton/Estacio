#include <stdio.h>

void matrizDetalhada() { // Exemplo de matriz detalhada
    // Declaração e inicialização de uma matriz 3x3
    int matriz[3][3];
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    
    // Acesso aos elementos da matriz
    printf("Elemento [0][0]: %d\n", matriz[0][0]);
    printf("Elemento [0][1]: %d\n", matriz[0][1]);
}

void matrizSimplificada() { // Exemplo de matriz simplificada
    // Declaração e inicialização de uma matriz 2x2
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    // Acesso aos elementos da matriz
    printf("Elemento [0][0]: %d\n", matriz[0][0]);
    printf("Elemento [1][1]: %d\n", matriz[1][1]);
}