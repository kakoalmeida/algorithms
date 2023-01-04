#include <stdio.h>

//Escreva um código-fonte para encontrar o caractere que mais se repete em uma string.

// função que retorna o minimo entre dois valores
int min(int a, int b){
    return (a < b) ? a : b;
}

int main(){

    int counter[256] = {0};
    char str[32];

    printf("Digite uma string: ");
    fgets(str, sizeof str, stdin);

    int i;
    for(i = 0; str[i] != '\0'; i++){
        counter[str[i]]++;
    }

    int max = 0, result = 0;

    for(i = 0; i < 256; i++){
        if(counter[i] > max){
            max = counter[i];
            result = i;
        } else if(counter[i] == max){
            result = min(result, i);
        }
    }

    char occur = (char)result;

    printf("o caractere que mais repete em %s eh %c", str, occur);
    return 0;
}
