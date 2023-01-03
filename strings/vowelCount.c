#include <stdio.h>

//Escreva um código-fonte para contar o número total de vogais ou consoantes em uma string.

#define LENGTH 50

int main(){

    char str[LENGTH];
    int vogal, consoante = 0;

    printf("digite uma palavra: ");
    fgets(str, LENGTH, stdin);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vogal++;
           } else{
                consoante++;
           }
        i++;
    }

    printf("Vogais: %d | Consoantes: %d", vogal, (consoante -1 ));

    return 0;
}
