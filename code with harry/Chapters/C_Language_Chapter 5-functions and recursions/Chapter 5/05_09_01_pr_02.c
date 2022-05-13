#include <stdio.h>
float f(float c);

int main()
{
    float c;
    printf("Enter the value in degree celsius:-\n");
    scanf("%f", &c);

    printf("The value of %.2f degree in farenheit is %.2f\n", c, f(c));
    return 0;
}

float f(float c)
{
    float result;
    result = (c * 1.8) + 32;
    return result;
}