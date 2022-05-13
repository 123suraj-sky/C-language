#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 3;
    int col = 4;

    int *array;
    int count = 0;

    array = (int *)malloc(row * col * sizeof(int));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(array + i * col + j) = ++count;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\n", *(array + i * col + j));
        }
    }

    return 0;
}