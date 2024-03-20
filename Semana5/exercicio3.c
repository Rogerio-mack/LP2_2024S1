#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) { return true; }
    }
    return false;
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
    if (contem(vetor, n, elemento)) { printf("Elemento está no vetor!\n"); }
    else { printf("Elemento NÃO ESTÁ no vetor!\n"); }
    return 0;
}
