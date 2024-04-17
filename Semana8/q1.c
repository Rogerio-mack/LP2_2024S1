#include <stdio.h>

float potencia(int x, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n < 0) {
        return 1.0/potencia(x, -n);
    }
    else {
        return x * potencia(x, n-1);
    }
}

int main() {
    printf("Valor de x: ");
    int x;
    if (scanf("%d", &x) != 1) { return 1; };
    printf("Valor de n: ");
    int n;
    if (scanf("%d", &n) != 1) { return 1; };
    printf("x^n = %f\n", potencia(x, n));
    return 0;
}
