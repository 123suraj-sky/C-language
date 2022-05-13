#include <stdio.h>

int main()
{
    int var = 12;
    int *ptr;
    int **ptr1;

    ptr = &var;
    ptr1 = &ptr;
    printf("value of var is %d\n", var);
    printf("value of *ptr is %d\n", *ptr);
    printf("value of **ptr1 is %d\n", **ptr1);
    return 0;
}