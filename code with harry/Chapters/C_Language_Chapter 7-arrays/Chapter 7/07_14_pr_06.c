#include <stdio.h>
void countPositive(int *arr, int n)
{
    int j = 0;
    for (int k = 0; k < n; k++)
    {
        arr[k];
        if (arr[k] > 0)
        {
            j++;
        }
    }
    printf("The number of positive integers is %d\n", j);
}

int main()
{
    int arr[] = {-1, 1, 2, -2, 3, -3};
    countPositive(arr, 6);
    return 0;
}