#include <stdio.h>

int calculaTraco(int ordem, int matriz[ordem][ordem]) {
    int traco = 0;

    for (int i = 0; i < ordem; i++) {
        traco += matriz[i][i]; // Soma os elementos da diagonal principal
    }

    return traco;
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
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int ordem = 3;

    int traco = calculaTraco(ordem, matriz);

    imprime(ordem, ordem, matriz);

    printf("\nO traço da matriz é: %d\n", traco);

    return 0;
}