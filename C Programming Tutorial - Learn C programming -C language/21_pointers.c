#include <stdio.h>
// A Pointer is a variable whose value is the address of another variable

int main()
{
    int val = 30;
    int *pointer_p;
    pointer_p = &val;
    printf("Address of val = %x\n", &val); // since address is a hexadecimal value so we use %x
    printf("value of pointer variable = %x\n", pointer_p);
    printf("Value of pointer = %d\n", *pointer_p);
    return 0;
}