#include <stdio.h>

#define SIZE 5

int main()
{

    char matriz[SIZE][SIZE];
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            matriz[i][j] = 'a' + i * SIZE + j; // assign a letter to each element
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%c ", matriz[i][j]); // print each element with a space
        }
        printf("\n"); // move to next line after printing a row
    }

    return 0;
}
