#include <stdio.h>

int main() {
    char variavel;

    printf("Digite um valor: ");
    scanf("%c", &variavel);

    switch (variavel) {
        case 'a':
            printf("Código a ser executado se variável == a\n");
            break;
        case 'b':
            printf("Código a ser executado se variável == b\n");
            break;
        default:
            printf("Código a ser executado se variável não for a ou b\n");
    }
}