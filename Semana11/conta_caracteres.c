#include <stdio.h>
#include <string.h>

int main() {
  FILE *arq;
  char linha[50];

  arq = fopen("arquivo.txt", "r");

  while (!feof(arq)) {
    fgets(linha, 50, arq);
    int n = strlen(linha);

    //* if (linha[n-1] == '\n') {
    //*   linha[n-1] = '\0';
    //* }

    printf("nr caracteres, %d , %s\n", n, linha);
  }
  fclose(arq);
  return 0;
}
