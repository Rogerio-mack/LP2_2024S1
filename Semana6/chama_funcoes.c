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
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    criaMatriz(linhas, colunas, matriz);

    printf("\nMatriz gerada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int maior = verificaMaior(linhas, colunas, matriz);
    printf("\nO maior elemento na matriz é: %d\n", maior);

    return 0;
}
