#include <stdio.h>
#include <stdbool.h>

bool eh_divisor(int d, int n) {
    return n % d == 0;
}

int qtd_divisores(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (eh_divisor(i, n)) { cont++; }
    }
    return cont;
}

int main() {
    printf("Número inteiro: ");
    int n;
    scanf("%d", &n);
    printf("Quantidade de divisores: %d\n", qtd_divisores(n));
    return 0;
}
