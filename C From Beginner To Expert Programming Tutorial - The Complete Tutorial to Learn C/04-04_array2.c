#include <stdio.h>

int main()
{
    float temp[5] = {84.9, 83.7, 85.8, 88.2, };
    printf("Locak temperature:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Station %d: %.1f\n", i + 1, temp[i]);
    }

    return 0;
}