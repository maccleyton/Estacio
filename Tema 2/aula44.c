#include <stdio.h>

int main() { // Estrutura de decisão aninhada
    int idade, dependentes;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 || idade < 65) {
        if (renda < 3000) {
            if (dependentes > 2) {
                printf("Você tem direito ao benefício!\n");
            } else {
                printf("Você não atende ao critério de dependentes!\n");
            }
            } else {
            printf("Você não atende ao critério de renda!\n");
            }
        } else {
        printf("Você não atende aos critérios devido a idade!\n");
    } 
}