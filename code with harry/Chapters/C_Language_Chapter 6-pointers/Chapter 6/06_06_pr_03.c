#include <stdio.h>
int tentimes(int *a)
{
    *a = 10 * (*a);
    printf("10 times is %d\n", *a);
}

int main()
{
    int i = 5, j = 7;
    int *ptr;
    ptr = &i;
    printf("The value of i is %d\n", i);
    tentimes(ptr);
    tentimes(&j);
    printf("The value of i after the function call is 10 times its intial value %d\n", i);
    printf("The value of j after the function call is 10 times its intial value %d\n", j);
    return 0;
}