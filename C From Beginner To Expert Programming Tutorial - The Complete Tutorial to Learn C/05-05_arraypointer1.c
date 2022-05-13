#include <stdio.h>

int main()
{
    int array[] = {11, 13, 17, 19};
    int *aptr;
    aptr = array;
    *(aptr + 2) = 0; // aptr += 2;
                     // *aptr = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("Element %d: %d\n", i + 1, array[i]);
    }

    return 0;
}