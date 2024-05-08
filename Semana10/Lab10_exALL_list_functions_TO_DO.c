#include <stdio.h>

#define MAX_SIZE 100

void append(int list[], int *size, int element) {
    if (*size < MAX_SIZE) {
        list[*size] = element;
        (*size)++;
    }
}

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

void insert(int list[], int *size, int position, int element) {
    if (*size < MAX_SIZE && position >= 0 && position <= *size) {
        for (int i = *size; i > position; i--) {
            list[i] = list[i - 1];
        }
        list[position] = element;
        (*size)++;
    }
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
    int list[MAX_SIZE] = {0};
    int size = 0;

    append(list, &size, 5);
    append(list, &size, 3);
    append(list, &size, 7);

    printf("Lista: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Count of 3: %d\n", count(list, size, 3));
    printf("Index of 7: %d\n", index(list, size, 7));

    insert(list, &size, 1, 2);
    printf("Lista com inserção: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    printf("Popped element: %d\n", pop(list, &size, 1));
    printf("Lista com pop: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    remove_element(list, &size, 2);
    printf("Lista com remoção: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

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
