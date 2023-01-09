#include <stdio.h>
#include <string.h>

//Escreva um código-fonte para extrair uma substring de uma determinada string.

int main()
{
    char str[] = "A gata mit eh uma gatinha preguicosa";
    char sub[] = "gat";

    printf("Substrin: \"%s\"\n", sub);
    printf("String: \"%s\"\n\n", str);

    char *s = strstr(str, sub);
    if(s != NULL) {
        printf("a primeira ocorrencia de \"%s\" acontece em \"%s\"\n",   sub, s);
    } else
        printf("\"%s\" nao esta contido na string.\n", sub);

    return 0;
}
