#include <stdio.h>

int main()
{
    char *gang[5] = {
        "Spanky",
        "Buckwheat",
        "Alfalfa",
        "Darla",
        "Pete the pup"};

    char *cptr;

    for (int i = 0; i < 5; i++)
    {
        // cptr = gang[i];
        cptr = *(gang + i);
        while (*cptr)
        {
            putchar(*cptr);
            cptr++;
        }
        putchar('\n');

        // printf("%s\n", gang[i]);
        // printf("Address is %p\n\n", gang[i]);
    }

    return 0;
}