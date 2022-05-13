#include <stdio.h>

void MyFunctionName();

int main()
{
    MyFunctionName();
    MyFunctionName();
    MyFunctionName();
    return 0;
}

void MyFunctionName()
{
    printf("sum = %d\n", 10 + 512);
    printf("We are inside a function\n");
}