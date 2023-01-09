#include <stdio.h>

// Escreva um código-fonte para encontrar a frequência de todos os caracteres de uma string.

#define MAX 256 // ascii table characters
int main(){

    char str[100];
    int freq[MAX] = {0};

    scanf("%s", &str);

    for(int i = 0; str[i] != '\0'; i++){
        freq[(int) str[i]]++;
    }

    for(int i = 0; i < MAX; i++){
        if(freq[i] > 0){
            printf("\n'%c' appears %d times", (char) i, freq[i]);
        }
    }
    return 0;
}
