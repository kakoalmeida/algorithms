#include <stdio.h>

//Escreva um código-fonte para copiar uma variável string para outra variável string.

#define LENGTH 50

int main(){

    char str[LENGTH];
    char new_str[LENGTH];

    printf("digite uma frase ou palavra: ");
    fgets(str, LENGTH, stdin);

    int i;
    for(i = 0; str[i] != '\0'; i++){
        new_str[i] = str[i];
    }

    printf("original: %s", str);
    printf("\ncopia: %s", new_str);

    return 0;
}
