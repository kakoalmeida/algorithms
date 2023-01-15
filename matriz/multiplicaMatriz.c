#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void)
{
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int B[ROWS][COLS] = {
        {2, 1, 3},
        {3, 2, 1},
        {1, 3, 2}};

    int C[ROWS][COLS]; // result matrix

    int i, j, k;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = 0; // initialize element to 0
            for (k = 0; k < COLS; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; // multiply and sum the products
            }
        }
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", C[i][j]); // print each element with a space
        }
        printf("\n"); // move to next line after printing a row
    }

    return 0;
}
