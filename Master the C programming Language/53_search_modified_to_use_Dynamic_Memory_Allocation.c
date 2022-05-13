#include <stdio.h>
#include <stdlib.h>

void read(int *b, int n)
// void read(int b[], int n) //notes
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d values:  ", i + 1);
        scanf("%d", &b[i]);
    }
}

int search(int *b, int n, int ele)
// int search(int b[], int n, int ele) //notes
{
    for (int i = 0; i < n; i++)
        if (b[i] == ele)
            return i;
    return -1;
}

int main()
{
    int *a;
    int ele, index, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    read(a, n);

    printf("Enter element to search: ");
    scanf("%d", &ele);

    index = search(a, n, ele);

    if (index == -1)
        printf("NOT FOUND\n");
    else
        printf("FOUND AT %d\n", index);

    return 0;
}