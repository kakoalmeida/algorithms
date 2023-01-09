#include <stdio.h>
#include <string.h>

/*  Using string.h library
    Create a C algorithm to separate a sentence into words using the space character
*/

int main(){

    char str[] = "int i = 0";
    char *spr;

    printf("Separando %s ...\n", str);
    spr = strtok(str, " ");

    while(spr != NULL){
        printf("%s\n", spr);
        spr = strtok(NULL, " ");
    }

    return 0;
}
