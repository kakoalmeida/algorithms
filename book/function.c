#include <stdio.h>

int pot(int, int);

int main(){

    int i;
    int m;
    int n;

    printf("Qual numero gostaria de obter a potenciacao?\n");
    scanf("%d", &n);
    printf("\nQuantas vezes?\n");
    scanf("%d", &m);

    for(i=0; i < m; ++i)
        printf("%d\t %d\n", i, pot(n,i));
    return 0;
}

int pot(int base, int n){

    int p;

    for(p = 1; n > 0; --n)
        p = p * base;
    return p;
}
