#include <stdio.h>
#include <stdbool.h>

bool crescente(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (v[i] >= v[i+1]) { return false; }
    }
    return true;
}

bool crescente(int v[], int n) {
    bool ehcrescente = True;
    
    for (int i = 0; i < n-1; i++) {
        if (v[i] >= v[i+1]) { 
          ehcrescente = False;
          break;
        }
    }
    
    return ehcrescente;
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
    if (crescente(vetor, n)) { printf("ESTÁ em ordem crescente!\n"); }
    else { printf("NÃO ESTÁ em ordem crescente!\n"); }
    return 0;
}

