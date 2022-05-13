#include <stdio.h>

int main()
{
    int i = 34, j = 67;
    int *a, *b;
    a = &i;
    b = &j;

    printf("The address of pointer a is %d\n", a);
    printf("Addition of a number to the pointer a is: %d\n", a + 1);
    printf("Subtraction of a number to the pointer a is: %d\n", a - 1);
    printf("The address of pointer b is %d\n", b);
    printf("Subtraction of a pointer to the pointer a is: %d\n", a - b);
    // b++;
    if (a == b)
    {
        printf("pointer a and b are same\n");
    }
    else
    {
        printf("pointer a and b are different\n");
    }
    return 0;
}