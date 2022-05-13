#include <stdio.h>

int main()
{
    // char str[] = "Suraj";
    char str[] = {'S', 'u', 'r', 'a', 'j', '\0'};
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}