#include <stdio.h>
// modulus operator

int main()
{
    int a = 7, b;
    while (a < 30)
    {
        b = a % 7;
        printf("%d %% 7 = %d\n", a, b);
        a++;
    }
    return 0;
}