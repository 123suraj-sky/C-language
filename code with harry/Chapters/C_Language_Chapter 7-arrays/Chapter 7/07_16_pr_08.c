#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is :\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("\n*************\n\n");
}

int main()
{   int m, n;
    printf("Enter the value table you want to print\n");
    scanf("%d", &m);
    printf("Enter the value to which digit you want to print the table\n");
    scanf("%d", &n);
    int mulTable[m][n];
    printTable(mulTable[0], m, n);
    return 0;
}