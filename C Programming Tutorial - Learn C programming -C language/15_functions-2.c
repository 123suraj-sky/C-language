#include <stdio.h>

void Sum(int a, int b);

int main()
{
    int x, y;
    printf("Please enter two numbers\n");
    printf("number 1:\n");
    scanf("%d", &x);
    printf("number 2:\n");
    scanf("%d", &y);
    Sum(x, y);
    // Sum(50, 60);
    // Sum(500, 460);
    // Sum(550, 6055);
    // Sum(550, 160);
    return 0;
}

void Sum(int a, int b)
{
    int sum = a + b;
    printf("sum = %d\n", sum);
}