#include <stdio.h>

int main()
{
    float c, f; // c is for celsius and f is for farenheit
    printf("Enter the value in degree celsius:-\n");
    scanf("%f", &c);

    f = ((c * (1.8)) + 32);
    printf("The value of %.2f degree in farenheit is %.2f\n", c, f);
    return 0;
}