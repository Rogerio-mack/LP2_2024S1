#include <stdio.h>

int mdc(int a, int b) {

    if (b == 0) { return a; }
    else if (a == 0) { return b; }
    else { 
        int resto = a % b;
        return mdc(b, resto); 
    }
}

int main() {
    printf("Valor de a: ");
    int a;
    if (scanf("%d", &a) != 1) { return 1; };
    if (a < 0) { 
        printf("Valor de a não pode ser negativo!\n");
        return 1;
    }
    printf("Valor de b: ");
    int b;
    if (scanf("%d", &b) != 1) { return 1; };
    if (b < 0) { 
        printf("Valor de b não pode ser negativo!\n"); 
        return 1;
    }    
    printf("mdc(%d, %d) = %d\n", a, b, mdc(a, b));
    return 0;
}