#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; //'a' é convertido explicitamente para float

    //tipo da variável antes da operação, força a conversão para outro formato, conhecido como "casting"

    printf("Quociente: %.2f\n", quociente);

    return 0;
}