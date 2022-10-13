#include <stdio.h>

#define ESC 27
/* copia entrada para a saida */

main(){

    int c;

    /*
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    } */

    //printf("EOF value %d\n", EOF);

    while((c = getchar()) != EOF) {
        putchar(c);
    }
}
