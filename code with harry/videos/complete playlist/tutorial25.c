#include <stdio.h>
int fib_recursive(int num);
int fib_iterative(int num);

int main()
{
    int num;
    printf("Enter a number to which you want to calculate the sum of fibonacci seires:-\n");
    scanf("%d", &num);

    printf("Sum to %d term of fibonacci sequence from iterative approach is %d\n", num, fib_iterative(num));
    printf("Sum to %d term of fibonacci sequence from recursive approach is %d\n", num, fib_recursive(num));

    return 0;
}

int fib_recursive(int num)
{
    if (num == 2 || num == 1)
    {
        return num - 1;
    }
    else
    {
        return fib_recursive(num - 1) + fib_recursive(num - 2);
    }
}

int fib_iterative(int num)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < (num - 1); i++)
    {
        b = a + b;
        a = b - a;
        
    }
    return a;
}