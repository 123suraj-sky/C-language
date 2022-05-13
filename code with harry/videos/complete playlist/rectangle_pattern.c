#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter the number of rows upto which you want to print rectangular star pattern\n");
    scanf("%d", &rows);
    printf("Enter the number of coloumns upto which you want to print rectangular star pattern\n");
    scanf("%d", &columns);
    if (rows <= 0 || columns <= 0)
    {
        printf("Negative rows or coloums are not allowed\n");
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}