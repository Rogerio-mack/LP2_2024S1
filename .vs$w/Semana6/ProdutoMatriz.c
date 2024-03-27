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

void ProdutoMatriz(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Calcula o produto de A por B
            }
        }
    }
}

int main() {
    int A[3][2] = {{1, 2},
                   {3, 4},
                   {5, 6}};
    int B[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int C[3][3];

    ProdutoMatriz(3, 2, 3, A, B, C);

    imprime(3, 2, A);
    printf("\n");
    imprime(2, 3, B);
    printf("\n");
    imprime(3, 3, C);

    return 0;
}
