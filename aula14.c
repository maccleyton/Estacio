#include <stdio.h>

int main() {
    double numP01 = 3.141592653589793;
    long double numP02 = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numP01);
    printf("Número muito preciso (long double): %.21lf\n", numP02);

    return 0;
}