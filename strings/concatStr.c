#include <stdio.h>

//Escreva um código-fonte para concatenar duas strings

int main(){

    char first_str[32] = "banana";
    char second_str[] = "prata";


    int i, j;
    for(i = 0; first_str[i] != '\0'; i++)
        ;
    for(j = 0; second_str[j] != '\0'; j++){
        first_str[i + j] = second_str[j];
    }

    first_str[i + j] = '\0';

    printf("Strings concatenadas: %s", first_str);

    return 0;
}
