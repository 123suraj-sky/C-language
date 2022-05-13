#include <stdio.h>

int main()
{
    char ch = 'A';
    do
    {
        putchar(ch);
        putchar('\t');
        ch++;
    } while (ch != ('Z' + 1));
    putchar('\n');

    return 0;
}