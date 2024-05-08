#include <stdio.h>

void Calculadora(int *ptr_var1, int *ptr_var2, char operacao, int *ptr_resultado) {
    switch (operacao) {
        case '+':
            *ptr_resultado = *ptr_var1 + *ptr_var2;
            break;
        case '-':
            *ptr_resultado = *ptr_var1 - *ptr_var2;
            break;
        case '*':
            *ptr_resultado = *ptr_var1 * *ptr_var2;
            break;
        case '/':
            if (*ptr_var2 != 0) { // divisão por zero?
                *ptr_resultado = *ptr_var1 / *ptr_var2;
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }
}

int main() {
    int num1 = 10, num2 = 5, resultado;

    Calculadora(&num1, &num2, '+', &resultado); 
    printf("Soma: %d\n", resultado);

    Calculadora(&num1, &num2, '-', &resultado); 
    printf("Subtração: %d\n", resultado);

    Calculadora(&num1, &num2, '*', &resultado); 
    printf("Multiplicação: %d\n", resultado);

    Calculadora(&num1, &num2, '/', &resultado); 
    printf("Divisão: %d\n", resultado);

    return 0;
}

