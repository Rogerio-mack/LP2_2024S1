#include <stdio.h>

/* Crie uma função em C para calcular o determinante de uma matriz 3x3 e um programa main() em que o usuário entra com os elementos da matriz,
a matriz é mostrada e o determinante calculado com a função. */ 

int determinant(int matrix[3][3]) {
    int det = 0;

    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
          matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
          matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return det;
}

int main() {
    int matrix[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix);
    printf("O determinante da matriz é: %d\n", det);

    return 0;
}
