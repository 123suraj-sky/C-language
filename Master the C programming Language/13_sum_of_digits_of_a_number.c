#include <stdio.h>

int main()
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    // while (number != 0)
    while (number > 0)
    {
        sum += (number % 10);
        number /= 10;
    }

    printf("Sum is %d\n", sum);
    return 0;
}