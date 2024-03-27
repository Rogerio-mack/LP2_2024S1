#include <stdio.h>

void transposta(int lin, int col, int A[lin][col], int At[col][lin]) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            At[j][i] = A[i][j]; // Troca linhas por colunas para obter a matriz transposta
        }
    }
}

int imprime(int linhas, int colunas, int matriz[linhas][colunas]) {

  printf("Matriz %d x %d : \n", linhas, colunas);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

}


int main() {
    int matriz3x3[3][3] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
    int matriz3x2[3][2] = {{1, 2},
                           {3, 4},
                           {5, 6}};
    int matrizTransposta3x3[3][3];
    int matrizTransposta3x2[2][3];

    transposta(3, 3, matriz3x3, matrizTransposta3x3);
    transposta(3, 2, matriz3x2, matrizTransposta3x2);

    imprime(3,3,matriz3x3);

    imprime(3,3,matrizTransposta3x3);

    imprime(3,2,matriz3x2);

    imprime(2,3,matrizTransposta3x2);

    return 0;
}