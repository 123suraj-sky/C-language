#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Rows 20
#define Columns 7

int main()
{
    int row, column;
    srand((unsigned)time(NULL));
    for (row = 0; row < Rows; row++)
    {
        for (column = 0; column < Columns; column++)
        {
            printf("%2d\t", rand() % 100);
        }
        putchar('\n');
    }
    return 0;
}