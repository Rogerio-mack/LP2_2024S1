#include <stdio.h>

float somar(float a, float b, float c) {
    return a + b + c;
}

int main() {
    printf("Primeiro número: ");
    float n1;
    scanf("%f", &n1);
    printf("Segundo número: ");
    float n2;
    scanf("%f", &n2);
    printf("Terceiro número: ");
    float n3;
    scanf("%f", &n3);
    printf("Soma: %f\n", somar(n1, n2, n3));
    return 0;
}
