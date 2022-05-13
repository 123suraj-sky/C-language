#include <stdio.h>

int max(int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

int main()
{
    printf("Max is %d\n", max(100, 10, 510));
    if (!(3 < 2 || 20 > 5))
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }

    return 0;
}