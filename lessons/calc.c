#include <stdio.h>

int main(){
	
    int x, y;
    int produto, xmult, ymetade;
    float z, triplo;

    printf("Um inteiro para x: \n");
    scanf("%d", &x);
    printf("Um inteiro para y: \n");
    scanf("%d", &y);
    printf("Um numero real para z: \n");
    scanf("%f", &z);

    xmult = x * 2;
    ymetade = y / 2;

    triplo = ( (x * 3) + z);

    printf("o produto do dobro do primeiro com metade do segundo: %d \n", (xmult * ymetade));
    printf("a soma do triplo do primeiro com o terceiro: %.2f \n", triplo);
    printf("o terceiro elevado ao cubo %.2f\n", (z * z * z));
 
    return 0;
}
