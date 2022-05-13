#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr;
    ptr = &arr[0];
    // ptr = arr;  --> Both line 7 and 6 will give same result
    ptr += 2; // third element
    if (ptr == &arr[2]) // arr[2] is also third element
    {
        printf("These point to the same address\n");
    }
    else
    {
        printf("These point to the different address\n");
    }
    return 0;
}