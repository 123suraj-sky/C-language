#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("biggest is %d\n", a);
    }
    else if (b > c)
        printf("biggest is %d\n", b);
    else
        printf("biggest is %d\n", c);

    return 0;
}