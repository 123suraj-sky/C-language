#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is bigger\n", a);
    }
    else
    {
        printf("bigger is %d\n", b);
    }
    
    return 0;
}