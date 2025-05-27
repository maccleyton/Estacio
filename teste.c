#include <stdio.h>

/*
int main() { // Entradas 2 4 8 5 7
    int ind, num, soma = 0;

    for (ind = 1; ind <= 5; ind++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num %2 ==0)
        soma += num;
    }
    printf("%d\n", soma);
    return 0;
}

int main() {
    int controle, ind, num, menor;
    ind = 1;
    while (ind <= 5) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (controle == 1 && num % 2 == 0) {
            menor = num;
        } else {
            if (num < menor)
            menor = num;
        ind++;
        }
    }
    return 0;
}
*/

int main () {
    int controle, cont, num, menor;

    controle = 0;

    for (cont = 1; cont <= 20; cont++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (controle == 1) {
            menor = num;
        } else if (num < menor) {
            menor = num;
            controle++;
        }
    }

    return 0;
}