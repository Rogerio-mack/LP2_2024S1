#include <stdio.h>

/* Escreva um programa em C para reverter um determinado número inteiro usando um loop do-while (sem recursão). */

int main() {
    int num, reversedNum = 0, remainder;

    printf("Entre com um número inteiro: ");
    scanf("%d", &num);

    int originalNum = num;

    do {
        // Extrai o último dígito
        remainder = num % 10;

        // Incrementa o num anterior e adiciona o novo dígito
        reversedNum = reversedNum * 10 + remainder;

        // Remove o dígito já extraído
        num = num / 10;

    } while (num != 0);

    printf("Número original: %d\n", originalNum);
    printf("Número reverso : %d\n", reversedNum);

    return 0;  
}