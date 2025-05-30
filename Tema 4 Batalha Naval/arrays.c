#include <stdio.h>

int main() {
    int index;

    char *alunos[3][3] = {
        {"Alan", "Pt: 30", "Mt: 90"},
        {"Bruno", "Pt: 60", "Mt: 60"},
        {"Carlos", "Pt: 90", "Mt: 30"}
    };

    // Exemplo de matriz detalhada
    printf("Detalhes dos alunos:\n");
    printf("Digite 1 para Alan\n");
    printf("Digite 2 para Bruno\n");
    printf("Digite 3 para Carlos\n");
    printf("Escolha o aluno: ");
    scanf("%d", &index);

    printf("As notas de %s são: %s e %s\n", 
           alunos[index - 1][0], 
           alunos[index - 1][1], 
           alunos[index - 1][2]);

    return 0;
}