#include <stdio.h>

//Escreva um c�digo-fonte para verificar se uma letra � mai�scula ou n�o.

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
