#include <stdio.h>
#include <string.h>

void arrayRev(int arr[])
{
    int temp; // to store the temporary variable while reversing the array
    for (int i = 0; i < 7 / 2; i++)
    {
        // swap arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void printArray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of %d is %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reversing the array:\n");
    printArray(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array:\n");
    printArray(arr);
    return 0;
}