#include <stdio.h>
#include <stdbool.h>

bool divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return true;
    }
    else {
        int resto = arr[tam-1] % x;
        if (resto != 0) {
            return false;
        }
        else {
            return divisiveis(arr, tam-1, x);
        }
    }
}

void mostrar(int arr[], int tam) {
    printf("[ ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    int array[] = {21, 27, 33, 60};
    int n = sizeof(array)/sizeof(array[0]);
    mostrar(array, n);
    printf("Valor de x: ");
    int x;
    if (scanf("%d", &x) != 1) { return 1; }    
    if (divisiveis(array, n, x)) {
        printf("Todos são divisíveis por %d.\n", x);
    }
    else {
        printf("Nem todos são divisíveis por %d.\n", x);
    }
    return 0;
}