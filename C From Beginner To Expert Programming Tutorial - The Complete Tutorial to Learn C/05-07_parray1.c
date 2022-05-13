#include <stdio.h>

int main()
{
    char *gang[5] = {
        "Spanky",
        "Buckwheat",
        "Alfalfa",
        "Darla",
        "Pete the pup"};

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", gang[i]);
        printf("Address is %p\n\n", gang[i]);
    }

    return 0;
}