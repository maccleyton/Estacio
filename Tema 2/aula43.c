#include <stdio.h>

int main() { // Estrutura de decisão aninhada
    int idade;
    float renda;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("\n");

    if (idade <= 18 || idade >= 60) {
        if (renda < 2000) {
          printf("Você tem direito ao desconto!\n"); 
        } else {
            printf("Você não atende ao critério de renda!\n");
        }
    } else {
        printf("Você não atende aos critérios devido a idade!\n");
    }
}