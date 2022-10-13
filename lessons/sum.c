#include <stdio.h>

int main(){
    int x, y;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    printf("\nDigite outro numero inteiro: \n");
    scanf("%d", &y);

    printf("A soma de %d + %d e: %d\n", x, y, (x + y));
}
