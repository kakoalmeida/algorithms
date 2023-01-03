#include <stdio.h>

// Escreva um código-fonte para ler uma string do teclado e imprimi-la na tela.

#define SIZE 30

int main(){

    char str[SIZE];

    printf("Digita uma string: ");
    fgets(str, sizeof str, stdin);

    printf("\nA string digitada foi: %s", str);

    return 0;
}
