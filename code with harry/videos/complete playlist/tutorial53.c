#include <stdio.h>

int main()
{
    int a = 34;
    // int *ptr = NULL;
    int *ptr = &a;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and cannot be derefrenced\n");
    }
    return 0;
}