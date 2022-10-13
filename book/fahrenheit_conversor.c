#include <stdio.h>

#define START 0
#define END 300
#define INCR 20

int main(){

    /* utilizando laço for
    int fahr;

    for(fahr = START; fahr <= END; fahr = fahr + INCR)
        printf("%3d == %5.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    */

    // utilizando laço while e float
    float celsius, fahr;

    fahr = START;
    printf("Conversao de fahrenheit para celsius\n");
    while(fahr <= END){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f \n", fahr, celsius);
        fahr = fahr + INCR;
    }
}
