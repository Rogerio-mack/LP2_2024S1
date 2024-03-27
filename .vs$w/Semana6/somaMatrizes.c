#include <stdio.h>

int imprime(int linhas, int colunas, int matriz[linhas][colunas]) {
    printf("Matriz %d x %d :\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaMatrizes(int linhas, int colunas, int A[linhas][colunas], int B[linhas][colunas], int C[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Soma os elementos correspondentes de A e B
        }
    }
}

int main() {
    int A[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int B[2][3] = {{7, 8, 9},
                   {10, 11, 12}};
    int C[2][3];

    somaMatrizes(2, 3, A, B, C);

    imprime(2, 3, A);
    printf("\n");
    imprime(2, 3, B);
    printf("\n");
    imprime(2, 3, C);

    return 0;
}
