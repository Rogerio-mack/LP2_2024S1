int imprime(int linhas, int colunas, int matriz[linhas][colunas]) {

  printf("Matriz %d x %d : \n", linhas, colunas);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

}
