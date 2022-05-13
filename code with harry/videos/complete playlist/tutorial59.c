#include <stdio.h>
// #include "tutorial54.c"
#define PI 3.14
#define SQUARE(r) r *r

int main()
{
    float var = PI;
    int r = 4;
    // int *ptr = functionDangling();
    printf("The value of PI is %f\n", var);
    printf("The area of this circle is %f\n", var * SQUARE(r));
    return 0;
}