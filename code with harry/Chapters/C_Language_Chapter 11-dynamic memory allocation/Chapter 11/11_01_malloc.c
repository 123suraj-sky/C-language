#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // // sizeof operator in c
    // printf("The size of int in my pc is %d\n", sizeof(int));
    // printf("The size of float in my pc is %d\n", sizeof(float));
    // printf("The size of char in my pc is %d\n", sizeof(char));

    ptr = (int *)malloc(6 * sizeof(int)); // we type cast (int *) malloc function because malloc reutrns void and we want int here
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element\n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n", i + 1, ptr[i]);
    }
    return 0;
}