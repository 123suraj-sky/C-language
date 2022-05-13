#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 34; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 34234;
    return 0;
}

int func3(int arr[][6])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][6] = {{1, 2, 3, 5, 342, 54}, {4, 7, 6, 45, 67, 8}}; // Two dimenstional array only for func3
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);

    // func2(arr);
    // func2(arr);

    func3(arr);
    return 0;
}