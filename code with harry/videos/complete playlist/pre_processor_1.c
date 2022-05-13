#include <stdio.h>
#define ABS(a) (a) < 0 ? -(a) : (a)
void main()
{
    printf("abs of -1 & 1: %d %d\n", ABS(-1), ABS(1));
}