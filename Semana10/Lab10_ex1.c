#include <stdio.h>
#include <string.h>

int main() {
    char minhastring[100];

    printf("Digite a string: ");
    fgets(minhastring, sizeof(minhastring), stdin);

    minhastring[strcspn(minhastring, "\n")] = '\0';

    // reverte
    printf("Reverso: ");
    for (int i = strlen(minhastring) - 1; i >= 0; i--) {
        printf("%c", minhastring[i]);
    }
    printf("\n");

    return 0;
}
