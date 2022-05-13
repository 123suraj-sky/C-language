#include <stdio.h>
int my_strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[] = "Suraj";
    int l = my_strlen(st);
    printf("The length of this string is %d\n", l);

    return 0;
}