#include <stdio.h>

//Escreva um código-fonte para classificar os caracteres de uma string em ordem crescente.

void sort(char *str){

    int n;

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    n = i;

    int j, k;
    for(j = 0; j < n - 1; j++){
        int sorted = 1;

        for(k = 0; k < n - j - 1; k++){
            if(str[k] > str[k + 1]){
                char aux = str[k];
                str[k] = str[k + 1];
                str[k + 1] = aux;
                sorted = 0;
            }
        }
        if (sorted){
            break;
        }
    }
}

int main(){
    char str[] = "computadores";

    sort(str);

    printf("%s", str);
    return 0;
}

