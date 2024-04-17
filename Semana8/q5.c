#include <stdio.h>

float soma_array(float arr[], int tam) {
    if (tam == 0) { return 0; }
    else { return arr[tam-1] + soma_array(arr, tam-1); }
}

void mostrar(float arr[], int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%f ", arr[i]);
    }
    printf("]\n");
}

int main() {
    float array[] = {1.1, 2.2, 3.3, 3.3, 1.1};
    int n = sizeof(array)/sizeof(array[0]);
    mostrar(array, n);
    printf("soma = %f\n", soma_array(array, n));
    return 0;
}