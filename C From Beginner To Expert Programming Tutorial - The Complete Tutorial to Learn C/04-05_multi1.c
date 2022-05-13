#include <stdio.h>

#define ROWS 4
#define COLUMNS 5

int main()
{
    int grid[ROWS][COLUMNS];

    // Initialize the array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            grid[i][j] = 0;
        }
    }
    grid[2][2] = 1;

    // Displat the array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%d, %d: %d\t", i, j, grid[i][j]);
        }
        putchar('\n');
    }

    return 0;
}