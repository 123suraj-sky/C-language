#include <stdio.h>

int Product(int a, int b);

int main()
{
    int x, y;
    printf("Please enter two numbers\n");
    printf("number 1: ");
    scanf("%d", &x);
    printf("number 2: ");
    scanf("%d", &y);
    int prod = Product(x, y);
    printf("Product = %d\n", prod);
    printf("result(prod + 10) = %d\n", prod + 10);
    return 0;
}

int Product(int a, int b)
{
    return (a * b);
}