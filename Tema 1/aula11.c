#include <stdio.h>

int main() {
    int num1, num2, num3;
    float med;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &num1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &num2);

    printf("Digite a sua terceira nota: \n");
    scanf("%d", &num3);

    med = (float) (num1 + num2 + num3) / 3;

    printf("Sua média é: %.2f \n", med);

    return 0;
}