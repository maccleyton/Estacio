#include <stdio.h>

int main() {
    short int numP = 32767;
    printf("Número pequeno: %d\n", numP);

    numP = 32768;
    printf("Número pequeno atualizado: %d\n", numP);

    printf("\n *** Tamanho das variáveis ***\n");
    printf("short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long int));
    printf("float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));
    
    return 0;
}