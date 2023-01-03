#include <stdio.h>

// Escreva um código-fonte para encontrar o comprimento de uma string.

#define SIZE 30

int main(){

    char str[SIZE];
    int i;

    printf("Digite uma string: ");

    fgets(str, sizeof str, stdin);

    while(str[i] != '\0')
        i++;

    printf("\nO tamanho da string eh: %d", i - 1);
    return 0;
}
