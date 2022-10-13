#include <stdio.h>

void main (){

    int i;
    int x;

    printf("Digite um numero positivo para X: \n");
    scanf("%d", &x);
    printf("O numero digitado foi: %d \n", x);

    for(i = 0; i < x; i++){
        printf("Esse semestre eu aprovo na disciplina!!!\n");
    }
}
