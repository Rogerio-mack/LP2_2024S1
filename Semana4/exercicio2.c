#include <stdio.h>

float f2c(float temp) {
    float celsius = (temp - 32) * 5 / 9;
    return celsius;
}

float c2f(float temp) {
    return temp * 9 / 5 + 32;
}

int main() {
    printf("(1) Converter de Celsius para Fahrenheit\n");
    printf("(2) Converter de Fahrenheit para Celsius\n");
    printf("Escolha uma opção: ");
    int op;
    scanf("%d", &op);
    if (op == 1) {
        printf("Temperatura em Celsius: ");
        float tempC;
        scanf("%f", &tempC);
        printf("Temperatura em Fahrenheit: %f\n", c2f(tempC));
    }
    else if (op == 2) {
        printf("Temperatura em Fahrenheit: ");
        float tempF;
        scanf("%f", &tempF);
        printf("Temperatura em Celsius: %f\n", f2c(tempF));        
    }
    else {
        printf("Opção inválida!\n");
    }
    return 0;
}
