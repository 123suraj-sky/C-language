#include <stdio.h>

int main()
{
    int a = 9, b = 4;
    int sum = a + b;
    int subtraction = a - b;
    int product = a * b;
    float division = (float)a / b;
    int modulus = a % b;

    printf("Sum = %d\n", sum);
    printf("subtraction = %d\n", subtraction);
    printf("product = %d\n", product);
    printf("division = %f\n", division);
    printf("remainder = %d\n", modulus);
    return 0;
}