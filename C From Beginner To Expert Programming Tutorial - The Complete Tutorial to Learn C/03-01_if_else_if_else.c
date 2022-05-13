#include <stdio.h>

int main()
{
    int a;
    printf("Type an integer: ");
    scanf("%d", &a);
    printf("You typed %d\n", a);
    if (a > 10)
    {
        printf("%d is greater than 10\n"); // Why this line not giving an error ?
        printf("%d is greater than 10\n", a);
    }
    else if (a < 10)
    {
        printf("%d is less than 10\n", a);
        printf("%d is less than 10\n"); // Why this line not giving an error ?
    }
    else
    {
        printf("%d is 10\n", a);
        printf("%d is 10\n"); // Why this line not giving an error ?
    }
    return 0;
}