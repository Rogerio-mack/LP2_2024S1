#include <stdio.h>

int verificaMaior(int linhas, int colunas, int matriz[linhas][colunas]) {
    int maior = matriz[0][0]; // Inicializa o maior com o primeiro elemento da matriz

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}

int main() {
    int matriz[3][3] = {{3, 5, 2},
                        {18, 1, 4},
                        {7, 6, 9}};
    int linhas = 3;
    int colunas = 3;

    int maior = verificaMaior(linhas, colunas, matriz);

    printf("O maior elemento na matriz é: %d\n", maior);

    return 0;
}