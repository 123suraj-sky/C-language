#include <stdio.h>

#define sqr(x) x *x

int sqrFunction(int x)
{
    return x * x;
}

int main()
{
    int n = sqr(3);
    // expanded as int n = 3 * 3
    // here preprocessor replaces command by x*x, so consumes no extra space/memory
    printf("Value of n is %d\n", n);

    // But when we use functions it goes to that function declare variables (which consumes memory), perform operations(uses more memory) and then returns to the statement

    n = sqr(2 + 5);
    printf("Value of n is %d\n", n);
    // result of above is 17 as it is simply replaces by preprocessor 
    // 2 + 5 * 2 + 5

    int n1 = sqrFunction(2 + 5);
    printf("Value of n1 is %d\n", n);
    // it takes more memory

    return 0;
}