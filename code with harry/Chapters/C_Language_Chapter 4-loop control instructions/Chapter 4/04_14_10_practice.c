#include <stdio.h>

int main()
{
    // Disclaimer: This is not the best method to solve this problem

    int i, n, prime = 1; // prime = 1 implies that we assume at start that n is a prime number
    printf("Enter the value of n:-\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}