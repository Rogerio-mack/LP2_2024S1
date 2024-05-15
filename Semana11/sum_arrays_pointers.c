#include <stdio.h>

void soma_arrays(int *array1, int *array2, int *array_soma, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array_soma[i] = array1[i] + array2[i];
    }
}

int main() {
    // Definindo dois arrays de exemplo
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(array1) / sizeof(array1[0]);
    int array_soma[tamanho];

    // Chamando a função para somar os arrays
    soma_arrays(array1, array2, array_soma, tamanho);

    // Imprimindo o resultado
    printf("Resultado da soma dos arrays:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array_soma[i]);
    }
    printf("\n");

    return 0;
}
