#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void gerar_vetor(int v[], int n) {
    srand(time(NULL));   
    int r = rand();      

  int inicial = 1;
  int sorteado;

    for(int i=0; i<n; i++) {
    sorteado = inicial + rand() % (inicial*2);
        v[i] = sorteado;
    inicial = sorteado + 1;
    }
}

/* 
    Busca o elemento 'e' no vetor 'v', retornando o índice 
    da posicao da primeira ocorrencia.

    retorna -1 se o elemento nao esta presente no vetor.  
*/
int busca_binaria(int v[], int n, int e) {
  int indice_medio;
  int menor_indice = 0;
  int maior_indice = n - 1;
  int it = 0; 
  
  while (maior_indice >= menor_indice) {
    indice_medio = (maior_indice + menor_indice)/2;
    if (v[indice_medio] == e){
      printf("\n %d iterações de busca.\n",it);
      return indice_medio;
    }
    else if (v[indice_medio] > e) 
      maior_indice = indice_medio - 1;
    else
      menor_indice = indice_medio + 1;
    it++;

  }

  return -1;
}

void imprimir(int v[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;
    int dados[10];
    bool sair = false;
    int op;

  // Gera 10 elementos aleatorios no vetor e realiza a busca linear do elemento
    gerar_vetor(dados, n);

    while (!sair) {
        printf("## Dados: ");
        imprimir(dados, n);
        printf("## Elemento a ser buscado de forma binária (ou -1 para sair): ");
        scanf("%d", &op);  

        if(op == -1) {
            sair = true;
        } else {
            int indice = busca_binaria(dados, n, op);
            printf("## Posicao em que o elemento foi encontrado: %d\n\n", indice);
        }
    }
    printf("\n## Fim!");    
}
