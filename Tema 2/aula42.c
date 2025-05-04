#include <stdio.h>

int main() { // Estrutura de decisão encadeada

    int nota;

    printf("Digite sua nota: ");
    scanf("%d", &nota);
    printf("\n");

    if (nota >= 90) {
        printf("Nota A!\n");
    } else if (nota >= 80) {
        printf("Nota B!\n");
    } else if (nota >= 70) {
        printf("Nota C!\n");
    } else if (nota >= 60) {
        printf("Nota D!\n");
    } else if (nota >= 50) {
        printf("Nota E!\n");
    } else {
        printf("Nota F!\n");
    }
    printf("\n");
}