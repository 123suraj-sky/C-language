#include <stdio.h>

int main()
{
    char names[4][7] = {"Mickey", "Minnie", "Goofy", "Pluto"};
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}