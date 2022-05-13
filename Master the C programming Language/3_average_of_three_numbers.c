#include <stdio.h>

int main()
{
    int a, b, c, result;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    result = (a + b + c) / 3;
    printf("The average of three numbers is %d\n", result);
    return 0;
}