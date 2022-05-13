#include <stdio.h>
#include <stdlib.h>
// int sum = 0;
int *functionDangling()
{
    // int a, b, sum2;
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main2()
{
    // Case 1: De allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 37;
    ptr[2] = 36;
    ptr[3] = 35;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: function returning local variable address
    int *dangPtr = functionDangling(); // ptr is now a dangling pointer

    // case 3: If a variable goes out of scope
    int *danglingPtr3;
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is
    // pointing to a location which is freed and hence danglingPtr3 is now  a dangling pointer
    return 0;
}