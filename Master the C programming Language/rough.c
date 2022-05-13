#include <stdio.h>
int main()
{
    int a = 1, b = 5;
    for (a++; a < 5; b += 5)
        a++;
    printf("b is %d\n", b);
    return 0;
}