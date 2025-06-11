#include <stdio.h>

// This program demonstrates the use of an array in C

void decimais() {

    float notas[3] = {85.5, 90.0, 78.3}; // Array de notas

    printf("Nota do aluno 1 é: %.1f \n", notas[0]);
    printf("Nota do aluno 2 é: %.1f \n", notas[1]);
    printf("Nota do aluno 3 é: %.1f \n", notas[2]);
}

void caracteres() {

    char letras[4] = {'A', 'B', 'C', 'D'}; // Array de caracteres

    printf("Letra 1: %c \n", letras[0]);
    printf("Letra 2: %c \n", letras[1]);
    printf("Letra 3: %c \n", letras[2]);
    printf("Letra 4: %c \n", letras[3]);
}

void nomes() {

    char *nomes[] = {"Alice", "Bob", "Charlie"}; // Array de strings

    for (int i = 0; i < 3; i++) {
        printf("%s \n", nomes[i]);
    }
}

int main() {

    printf("Exemplo de array de decimais:\n");
    decimais();

    printf("\nExemplo de array de caracteres:\n");
    caracteres();

    printf("\nExemplo de array de strings:\n");
    nomes();

    return 0;
}