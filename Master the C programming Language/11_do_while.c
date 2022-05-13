#include <stdio.h>

int main()
{
    int count = 1;
    do
    {
        printf("Hello --> %d\n", count);
        count++;
    } while (count <= 10);

    return 0;
}