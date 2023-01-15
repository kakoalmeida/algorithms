#include <stdio.h>

#define SIZE 10

int main(){

    float vetor[SIZE];
    float exp = 1;
    int i = 0;

    while(i < 10){
        vetor[i] = 1 / exp;
        exp = exp * 2;
        i++;
    }

    for(int j = 0; j < SIZE; j++){
        printf("%f \n", vetor[j]);
    }

    return 0;
}
