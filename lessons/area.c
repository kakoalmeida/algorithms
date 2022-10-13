#include <stdio.h>

int main(){

    //A = π r²)

    float pi = 3.1415;
    float raio, area;

    printf("Qual o raio do circulo? \n");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    printf("\nA area do circulo e: %.2f\n", area);
 
    return 0;
}
