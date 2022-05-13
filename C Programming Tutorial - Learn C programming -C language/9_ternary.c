#include <stdio.h>

int main()
{
    int a = 25, b = 20;
    int c;
    c = (a > b) ? a : b; // ternary operator
    printf("greater of a and b is %d\n", c);
    return 0;
}