#include <stdio.h>

void bolha (int *v)
{
    int troca = 1;
    int i = 0;
    int aux;
    int x; // Tamanho do vetor - Assuming the size of the array is known or passed as an argument
    while (troca)
    {
        troca = 0;
        while (i < x - 1)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = 1;
            }
            i++;
        }
        i = 0;
    }
}