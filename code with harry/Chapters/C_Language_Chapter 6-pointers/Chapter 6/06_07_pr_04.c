#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2; // Type casting in float
}

int main()
{
    int a = 5, b = 2, sum;
    float avg;
    // int *ptr1 = &a;
    // int *ptr2 = &b;

    sumAndAvg(a, b, &sum, &avg);
    printf("The value of sum is %5d\n", sum);
    printf("The value of avg is %5.1f\n", avg);
    return 0;
}