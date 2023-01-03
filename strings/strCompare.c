#include <stdio.h>

//Escreva um código-fonte para comparar duas strings.

#define SIZE 30

int main(){

    /* Se o codigo imprimir 0, as strings sao iguais, se imprimir 1 sao diferentes */

    int i;
    char a[SIZE];
    char b[SIZE];
    int aux = 0;

    fgets(a, sizeof a, stdin);
    fgets(b, sizeof b, stdin);

    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i]){
            aux = 1;
        }
        i++;
    }

    printf("\n%d", aux);

    return 0;
}
