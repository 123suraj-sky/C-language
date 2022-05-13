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
    else
    {
        printf("%d is less than or equal 10\n", a);
        printf("%d is less than or equal 10\n");  // Why this line not giving an error ?
    }
    return 0;
}