#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    long d;
    double e;

    printf("An int variable occupies %d bytes of storage\n", sizeof(a));
    printf("An int variable occupies %lu bytes of storage\n", sizeof(a));

    printf("An char variable occupies %d bytes of storage\n", sizeof(b));
    printf("An char variable occupies %lu bytes of storage\n", sizeof(b));

    printf("An float variable occupies %d bytes of storage\n", sizeof(c));
    printf("An float variable occupies %lu bytes of storage\n", sizeof(c));

    printf("An long variable occupies %d bytes of storage\n", sizeof(d));
    printf("An long variable occupies %lu bytes of storage\n", sizeof(d));

    printf("An double variable occupies %d bytes of storage\n", sizeof(e));
    printf("An double variable occupies %lu bytes of storage\n", sizeof(e));
    return 0;
}