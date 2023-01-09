#include <stdio.h>
#include <string.h>

int main(){

    char a[] = "int";
    char b[] = "int a = 0;";
    char c[] = "int";

    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(b, a));
    printf("\n");
    printf("%d\n", strcmp(c, b));
    printf("%d\n", strcmp(b, c));
    printf("\n");
    printf("%d\n", strcmp(c, a));
    printf("%d\n", strcmp(a, c));

    return 0;
}
