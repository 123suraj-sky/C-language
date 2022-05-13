#include <stdio.h>

int getSum(int *array_val, int size);

int main()
{
    int my_array[4] = {10, 20, 30, 40};
    int mySum = getSum(my_array, 4);
    printf("The value of my sum is = %d\n", mySum);
    return 0;
}

int getSum(int *array_val, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array_val[i];
    }
    return sum;
}