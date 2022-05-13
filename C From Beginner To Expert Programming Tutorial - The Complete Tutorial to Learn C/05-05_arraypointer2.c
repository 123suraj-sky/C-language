#include <stdio.h>

int main()
{
    int array[] = {11, 13, 17, 19};
    int *aptr;
    aptr = array; // no '&' need for an array
    for (int i = 0; i < 4; i++)
    {
        printf("Element %d: %d\n", i + 1, *aptr);
        aptr++;
    }

    return 0;
}