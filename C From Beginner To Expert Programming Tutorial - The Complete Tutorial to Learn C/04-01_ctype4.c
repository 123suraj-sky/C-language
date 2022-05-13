#include <stdio.h>

int iscaps(int ch);      // constructing our own charcter test
                         // It is replica of isupper
int isLowerCase(int ch); // constructing our own charcter test
                         // It is replica of islower

int main()
{
    int c;
    printf("iscaps is used: \n");
    do
    {
        c = getchar();
        if (iscaps(c))
        {
            putchar(c);
        }
    } while (c != '\n');

    printf("\n");
    printf("isLowerCase is used: \n");
    do
    {
        c = getchar();
        if (isLowerCase(c))
        {
            putchar(c);
        }
    } while (c != '\n');
    printf("\n");
    return 0;
}

int iscaps(int ch)
{
    if (ch < 'A' || ch > 'Z')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int isLowerCase(int ch)
{
    if (ch < 'a' || ch > 'z')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}