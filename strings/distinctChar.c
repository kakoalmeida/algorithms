#include <stdio.h>

//Escreva um código-fonte para contar o número total de caracteres distintos em uma string.

#define CHAR 256
#define LENGTH 32

int main(){

    char str[LENGTH];
    int count[CHAR];

    for(int i = 0; i < CHAR; i++)
        count[i] = 0;

    printf("Digite uma frase: ");
    fgets(str, LENGTH, stdin);

    int j = 0;
    while(str[j] != '\0'){
        count[str[j]] += 1;
        j++;
    }

    int distinct = 0;
    for(int i = 0; i < CHAR; i++){
        if(count[i] > 0){
            distinct++;
        }
    }

    printf("a frase possui %d caracteres distintos", distinct - 1);

    return 0;
}
