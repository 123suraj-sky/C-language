#include <stdio.h>

int main()
{
    int i = 1, n, factorial = 1;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (i; i <= n; i++)
        {
            factorial *= i;
        }
        printf("The value of factorial %d is %d\n", n, factorial);
    }
    else if (n < 0)
    {
        printf("You have entered a negative integer\n   And factorial of any negative integer is INFINITY\n");
    }

    return 0;
}