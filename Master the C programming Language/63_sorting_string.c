#include <stdio.h>
#include <string.h>

void sort(char b[][10], int n)
{
    //// int i, j;
    char temp[10];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(b[i], b[j]) > 0)
            {
                strcpy(temp, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], temp);
            }
        }
    }
}

int main()
{
    char names[5][10];
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d string: ", i);
        scanf("%s", &names[i]);
    }

    sort(names, n);

    printf("\nSorted Names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}