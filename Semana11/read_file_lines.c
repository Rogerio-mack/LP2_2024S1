#include <stdio.h>
#include <string.h>

int main() {
FILE* arq;
char linha[50];
  
arq = fopen("arquivo.txt", "r");

while (!feof(arq)) {

  fgets(linha, 50, arq);
  
  int n = strlen(linha);
  
  printf("Produto %s", linha, n);
}

fclose(arq);
return 0;
}
