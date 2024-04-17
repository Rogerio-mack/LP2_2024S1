#include <stdio.h>

int soma_digitos(int n) {
    if (n < 0) return soma_digitos(-n);
    int quociente = n / 10;
    int resto = n % 10;
    if (quociente == 0) { return resto; }
    else { return resto + soma_digitos(quociente); }
}

int main() {
    printf("Valor de n: ");
    int n;
    if (scanf("%d", &n) != 1) { return 1; };
    printf("soma dos dígitos de %d = %d\n", n, soma_digitos(n));
    return 0;
}
