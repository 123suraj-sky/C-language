#include <stdio.h>

int main()
{
    int a = 10;
    double b = 20.3;
    // int *p = &a;
    // p = &b; // Invalid b/c b is double and p is integer

    // But if we declare pointer as void the both is correct i.e.
    void *p = &a;
    p = &b;
    // *p = 99; // invalid b/c compiler doesn't know the data type of p yet so we have to typecast it
    *(int *)p = 99;
    printf("a is %d\n", a);
    *(double *)p = 99.9;
    printf("b is %lf\n", b);
    return 0;
}