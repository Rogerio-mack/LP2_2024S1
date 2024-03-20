#include <stdio.h>
#define TAM 5

void inverter(int v[TAM]) {
    for (int i = 0; i < TAM/2; i++) {
        int aux = v[i];
        v[i] = v[TAM-i-1];
        v[TAM-i-1] = aux;
    }
}

int main() {
    int vetor[TAM];
    for (int i = 0; i < TAM; i++) {
        printf("Valor para a posição %d: ", i);
        if (!scanf("%d", &vetor[i])) { return 1; }
    }
    inverter(vetor);
    printf("Vetor após a inversão: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
