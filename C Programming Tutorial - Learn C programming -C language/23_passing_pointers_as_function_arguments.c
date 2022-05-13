#include <stdio.h>

void getValue(int *myPointer);

int main()
{
    int get_the_value;
    getValue(&get_the_value);

    printf("The value of get_the_value = %d\n", get_the_value);
    return 0;
}

void getValue(int *myPointer)
{
    *myPointer = 10000;
    return; // using void in void means the void funtion is ending here
}