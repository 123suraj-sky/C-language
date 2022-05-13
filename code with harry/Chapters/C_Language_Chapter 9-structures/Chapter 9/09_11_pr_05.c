#include <stdio.h>
typedef struct complexNum
{
    int x;
    float y;
} CN;

int main()
{
    CN num1, num2;
    num1.x = 45;
    num2.y = 54;

    printf("Complex number is %d + %.0fi\n", num1.x, num2.y);
    return 0;
}