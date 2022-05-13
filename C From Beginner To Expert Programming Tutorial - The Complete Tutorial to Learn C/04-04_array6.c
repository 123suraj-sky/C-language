#include <stdio.h>

int main()
{
    char hello[] = "Greetings, human!\n";
    int n = 0;
    // while (hello[n] != '\0')
    while (hello[n])
    {
        putchar(hello[n]);
        n++;
    }

    return 0;
}