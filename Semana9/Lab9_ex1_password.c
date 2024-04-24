#include <stdio.h>
#include <string.h>

/* Escreva um programa em C que solicite ao usuário uma senha. 

Ex1a. Use um loop do-while para continuar solicitando a senha até que a senha correta seja inserida.
Ex1b. Altere o programa para, após 3 tentativas, retornar a mensagem: "Acesso revogado".

*/ 

int main() {
    char correctPassword[] = "Love1234";  
    char enteredPassword[10]; 

    do {
        printf("Entre com a password: ");
        scanf("%s", enteredPassword);

        if (strcmp(enteredPassword, correctPassword) == 0) {
            printf("Acesso permitido.\n");
            break;  
        } else {
            printf("Password incorreta. Tente novamente again.\n");
        }

    } while (1);  // Continua o loop indefinidamente até que seja fornecida a password correta 
	
    return 0;  
}