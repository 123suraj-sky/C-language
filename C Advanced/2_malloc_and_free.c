#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    // int *p;
    // p = (int *)malloc(sizeof(int));
    // if (p == NULL)
    // {
    //     puts("failed to allocate memory");
    //     puts("try again later");
    // }
    // else
    // {
    //     *p = 20;
    //     printf("%d\n", *p);
    //     free(p);
    // }

    char *p;
    int length;
    puts("Enter the lenth of the string that you are gonna enter");
    scanf("%d", &length);

    p = (char *)malloc(sizeof(char) * length + 1); // 1 is added for NULL character
    if (p == NULL)
    {
        puts("memory is not available");
    }
    else
    {
        fflush(stdin);
        puts("Enter the string");
        gets(p);
        puts(p);
        free(p);
    }

    return 0;
}