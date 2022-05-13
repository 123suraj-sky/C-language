#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The Address of the variable a is %u\n", ptr);
    printf("The Address of the variable a is %u\n", &a);
    printf("The Value of the variable a is %d\n", *(&a));
    printf("The Value of the variable a is %d\n", *ptr);
    return 0;
}