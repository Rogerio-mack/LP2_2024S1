#include <stdio.h>
#include <stdlib.h>

int mul(int a, int b) {
    if (abs(a) < abs(b)) { return mul(b, a); }
    else if (b < 0) { return -mul(a, -b); }
    else if (b == 0) { return 0; }
    else { return a + mul(a, b-1); }
}

int main() {
    printf("Valor de a: ");
    int a;
    if (scanf("%d", &a) != 1) { return 1; };
    printf("Valor de b: ");
    int b;
    if (scanf("%d", &b) != 1) { return 1; };
    
    printf("mul(%d, %d) = %d\n", a, b, mul(a, b));
    return 0;
}
