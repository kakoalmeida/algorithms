#include <stdio.h>

#define MAX 15 /* tamanho de entrada de linhas */

int readLine(char line[], int maxLine);
void copyLine(char from[], char to[]);

int main(){

    int tam;
    int max;
    char line [MAX];
    char biggest [MAX];

    max = 0;

    while((tam = readLine(line, MAX)) > 0)
        if(tam > max){
            max = tam;
            copyLine(biggest, line);
        }

    if(max > 0) printf("%s", biggest);
    return 0;
}

// le uma linha em s e retorna o seu tamanho
int readLine(char s[], int lim){

    int c, i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

//copia de um array para outro
void copyLine(char from[], char to[]){

    int i;
    i = 0;

    while((from[i] = to[i]) != '\0')
        ++i;
}
