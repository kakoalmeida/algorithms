#include <stdio.h>

/* conta linhas na entrada */

int main(){

    int c, nl;

    nl = 0;

    while((c = getchar()) != EOF)
        if(c == '\n' || c == ' ' || c == '\t')
            ++nl;
    printf("%d\n", nl);

}
