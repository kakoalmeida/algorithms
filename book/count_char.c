#include <stdio.h>

void main(){

    /*
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%3ld\n", nc); */

    double nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
