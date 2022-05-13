#include <stdio.h>

int main()
{
    int c;
    printf("Type a letter: ");
    c = getchar();
    // printf("You typed '%c'\n", c);
    printf("You typed '");
    putchar(c);
    putchar('\'');
    putchar('\n');
    return 0;
}