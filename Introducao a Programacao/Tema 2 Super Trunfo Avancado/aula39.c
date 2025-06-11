#include <stdio.h>

int main() {

    int condicao1, condicao2;

    // Estrutura de decisão aninhada
    if (condicao1) {
        if (condicao2) {
            // Código a ser executado se condicao1 e condicao2 forem verdadeiras
        }
    }

    // Estrutura de decisão encadeada
    if (condicao1) {
        // Código a ser executado se a condicao1 for verdadeira
    } else if (condicao2) {
        // Código a ser executado se a condicao1 for falsa e a condicao2 for verdadeira
    } else {
        // Código a ser executado se todas as condições anteriores forem falsas
    }
}