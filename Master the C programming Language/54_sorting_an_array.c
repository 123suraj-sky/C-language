#include <stdio.h>
#include <stdlib.h>

const int FAILED = 1; //notes: const should always be written in capital letters
const int SUCCESS = 0;

void read(int *b, int n)
{
    printf("Enter %d values: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
}

void sort(int b[], int n)
{
    int i, j, temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void print(int *b, int n)
{
    printf("Value of the aray are: \n");
    for (int i = 0; i < n; i++)
        printf(" %d ", b[i]);
    printf("\n");
}

int main()
{
    int *a;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Unable to allocate memory\n");
        exit(FAILED);
    }

    read(a, n);
    sort(a, n);
    print(a, n);
    return SUCCESS;
}