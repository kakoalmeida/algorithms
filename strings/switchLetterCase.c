#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[256];
    printf("Digite uma frase: ");
    fgets(frase, sizeof frase, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isupper(frase[i])) {
            frase[i] = tolower(frase[i]);
        } else if (islower(frase[i])) {
            frase[i] = toupper(frase[i]);
        }
    }

    printf("Frase modificada: %s\n", frase);
    return 0;
}

