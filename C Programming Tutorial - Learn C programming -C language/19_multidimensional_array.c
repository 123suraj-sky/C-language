#include <stdio.h>

int main()
{
    int MyNumberArray[2][3] = {
        {1, 3, 2}, // row 1
        {5, 6, 8}  // row 2
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("MyNumberArray[%d][%d] = %d\n", i, j, MyNumberArray[i][j]);
        }
    }

    return 0;
}