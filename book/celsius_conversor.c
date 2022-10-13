#include <stdio.h>

#define START 0
#define END 50
#define INCR 5

float conversor(float);

int main(){

    float celsius, fahr;
    /*
    celsius = START;
    while(celsius <= END){
        fahr = (celsius * 9 / 5) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += INCR;

    } */

   // printf("Temp in celsius: \n");
   // scanf("%f", &celsius);

   // fahr = conversor(celsius);

    for(celsius = START; celsius <= END; celsius = celsius + INCR){
        fahr = conversor(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
    }
}

float conversor(float c){
    return ((c * 9.0 / 5.0) + 32.0);
}
