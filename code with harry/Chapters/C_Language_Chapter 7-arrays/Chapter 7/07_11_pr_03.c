#include <stdio.h>

int main()
{
    int mult[10];
    for (int i = 0; i < 10; i++)
    {
        mult[i] = 5 * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n", i + 1, mult[i]);
    }
    return 0;
}