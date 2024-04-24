#include <stdio.h>
#define MAX_SIZE 100

/* Implemente em para um array numérico em C funções equivalentes aos métodos de listas do Python: count, index, reverse e sort. 
Todas as funções podem receber o tamanho do vetor (MAX_SIZE 100). Crie o programa main() que emprega e testa essas funções. */

int count(int list[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            count++;
        }
    }
    return count;
}

int index(int list[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (list[i] == element) {
            return i;
        }
    }
    return -1;
}

void reverse(int list[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

void sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {
    int list[] = {25, 3, 7, 50, 75, 100};
    int size = 0;

    printf("Lista: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Count of 3: %d\n", count(list, size, 3));
    printf("Index of 7: %d\n", index(list, size, 7));

    reverse(list, size);
    printf("Lista com reversão: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    sort(list, size);
    printf("Lista com ordenação: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}