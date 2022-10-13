#include <stdio.h>

int main(){
	
    float n1, n2, n3, n4;
    float media;
    float total;

    printf("Digite uma nota para n1: \n");
    scanf("%f", &n1);
    printf("\nDigite uma nota para n2: \n");
    scanf("%f", &n2);
    printf("\nDigite uma nota para n3: \n");
    scanf("%f", &n3);
    printf("\nDigite uma nota para n4: \n");
    scanf("%f", &n4);

    total = (n1 + n2 + n3 + n4);
    media = total / 4;

    printf("\nMedia: %.2f\n", media);
 
}
