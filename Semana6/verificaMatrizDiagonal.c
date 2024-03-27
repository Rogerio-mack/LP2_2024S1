#include <stdio.h>
#include <stdbool.h>

bool verificaMatrizDiagonal(int linhas, int colunas, int matriz[linhas][colunas]) {
  
    if (linhas != colunas){ 
      return false; 
    }
  
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false; // Se algum elemento fora da diagonal não for zero, não é diagonal
            }
        }
    }
    return true; // Se todos os elementos fora da diagonal forem zero, é diagonal
}
int main() {
    int matriz3x3d[3][3] = {{1, 0, 0},
                           {0, 2, 0},
                           {0, 0, 3}};
    int matriz3x3n[3][3] = {{1, 0, 0},
                           {1, 2, 0},
                           {0, 2, 3}};
    int matriz3x2n[3][2] = {{1, 0},
                           {0, 2},
                           {0, 0}};

    if (verificaMatrizDiagonal(3,3,matriz3x3d)) {
        printf("A matriz 3x3d é diagonal.\n");
    } else {
        printf("A matriz 3x3d não é diagonal.\n");
    }

    if (verificaMatrizDiagonal(3,3,matriz3x3n)) {
      printf("A matriz 3x3n é diagonal.\n");
    } else {
      printf("A matriz 3x3n não é diagonal.\n");
    }

    if (verificaMatrizDiagonal(3,2,matriz3x2n)) {
        printf("A matriz 3x2d é diagonal.\n");
    } else {
        printf("A matriz 3x2d não é diagonal.\n");
    }

    return 0;
}

