#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int invoke(int x, int y, int (*p)(int, int))
{
    return p(x, y);
}

int main()
{
    int (*p)(int, int);
    int n, m;

    p = add;
    printf("add is %d\n", p(10, 20));

    p = sub;
    printf("sub is %d\n", p(10, 20));

    n = invoke(10, 20, add);
    m = invoke(10, 20, sub);
    printf("invoke add is %d\n", n);
    printf("invoke sub is %d\n", m);

    return 0;
}