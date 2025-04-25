#include <stdio.h>

int main() {
    int numN01 = 2147483647;
    long int numG01 = 2147483647;
    long long int numG02 = 2147483647;

    printf("Número normal (int): %d\n", numN01);
    printf("Número grande (long int): %ld\n", numG01);
    printf("Número grande (long long int): %lld\n", numG02);

    return 0;
}