#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 3;
    int col = 4;
    int count = 0;
    int *array[row];

    for (int i = 0; i < row; i++)
    {
        array[i] = (int *)malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // array[i][j] = ++count;
            *(*(array + i) + j) = ++count;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // printf("%2d  ", array[i][j]);
            printf("%2d  ", *(*(array + i) + j));
        }
        printf("\n");
    }

    return 0;
}