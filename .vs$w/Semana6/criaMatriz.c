#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criaMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    srand(time(NULL)); // Inicializa a semente para números aleatórios

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 100 + 1; // Gera números aleatórios de 1 a 100
        }
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[3][3];

    criaMatriz(linhas, colunas, matriz);

    printf("Matriz gerada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
