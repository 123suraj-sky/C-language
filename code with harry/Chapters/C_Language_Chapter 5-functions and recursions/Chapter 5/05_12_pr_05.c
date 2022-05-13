#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d", a, ++a, a++);
    /* When we run code it print value as 5, 5, 3
        because compiler takes arguments of "printf" from right to left*/
    return 0;
}