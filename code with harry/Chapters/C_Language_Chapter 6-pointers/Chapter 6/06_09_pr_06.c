#include <stdio.h>
void tentimes(int a)
{
    a *= 10;
    printf("10 times value is %d\n", a);
}

int main()
{
    int i = 5;
    tentimes(i); // It is call by value
    printf("The value of i after function call is %d\n", i); // It is call by value. So it cannot change the value of i
    return 0;
}