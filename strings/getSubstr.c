#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "Oi, como voce esta?";
    char substring[] = "como";

    if (strstr(string, substring) != NULL) {
        printf("'%s' encontrada em '%s'\n", substring, string);
    } else {
        printf("'%s' não encontrada em '%s'\n", substring, string);
    }

    return 0;
}

