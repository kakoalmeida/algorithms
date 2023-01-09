#include <stdio.h>

//Escreva um codigo-fonte para copiar uma variavel string para outra variavel string.

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
    new_str[i] = '\0';

    printf("original: %s", str);
    printf("\ncopia: %s", new_str);

    return 0;
}
