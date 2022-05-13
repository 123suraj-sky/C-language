#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a:-\n");
    scanf("%d", &a);
    printf("Enter the value of b:-\n");
    scanf("%d", &b);
    printf("Enter the value of c:-\n");
    scanf("%d", &c);

    // Finding percentage
    printf("The value of average is %f\n", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3; // Here we typecast(assign) float to take result in floating numbers
                                     // Otherwise it will always give result in integer
    return result;
}