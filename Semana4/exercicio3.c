#include <stdio.h>

void imprimir_tabuada(int n) {
    printf("# Tabuada do %d:\n", n);
    for (int i = 0; i < 11; i++) {
        printf("%2d x %2d = %2d\n", n, i, (n*i));
    }
    printf("\n");
}

int main() {
    for (int i = 1; i < 10; i++) {
        imprimir_tabuada(i);
    }
    return 0;
}
