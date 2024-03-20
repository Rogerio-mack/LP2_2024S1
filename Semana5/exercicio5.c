#include <stdio.h>
#include <stdbool.h>

int busca_ultimo(int v[], int n, int e) {
    for (int i = n-1; i >= 0; i--) {
        if (v[i] == e) { return i; }
    }
    return -1;
}

int main() {
    printf("Entre o número de elementos do vetor: ");
    int n;
    if (!scanf("%d", &n)) { return 1; }
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posição %d: ", i);
        if (!scanf("%d", &vetor[i])) { return 1; }
    }
    printf("Elemento a ser buscado: ");
    int elemento;
    if (!scanf("%d", &elemento)) { return 1; }
    printf("Índice da última ocorrência no vetor: %d\n", busca_ultimo(vetor, n, elemento)); 
    return 0;
}
