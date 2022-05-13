#include <stdio.h>

int main()
{
    // Method 1
    // int n;
    // int row = 1, col;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // while (row <= n)
    // {
    //     col = 1;
    //     while (col <= row)
    //     {
    //         printf("%d", col);
    //         col++;
    //     }
    //     row++;
    //     printf("\n");
    // }

    // Method 2
    int row, col, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}