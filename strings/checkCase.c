#include <stdio.h>

//Escreva um código-fonte para verificar se uma letra é maiúscula ou não.

int main(){

    char str[100];

    scanf("%s", &str);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            printf("\nMaiuscula");
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            printf("\nMinuscula");
        }
    }

    return 0;
}
