#include <stdio.h>

#define IN 1
#define OUT 0

/*conta linhas, palavras, caracteres de entrada */

int main(){
    int c, nl, np, nc, state;

    state = OUT;
    nl = (np = (nc = 0));

    while((c = getchar())!= EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == '\n' || c == ' ' || c == '\t')
            state = OUT;
        else if( state == OUT){
            state = IN;
            ++np;
        }
    }
    printf("%d %d %d\n", nl, np, nc);
}
