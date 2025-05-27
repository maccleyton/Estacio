#include <stdio.h>

void insertion (int *v) {
    int i, j, aux;
    int iv; // Assuming iv is the size of the array, which should be defined or passed as an argument
    for (i = 0; iv[j] && j > 0; j) {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }