// Refer to page http://www.asciitable.com/ for ascii table whose values are used in this programme

#include <stdio.h>

int main()
{
    // 97-122 --> a-z
    char ch;
    printf("Enter the character here\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The enterd charcter is lowercase\n");
    }

    else
    {
        printf("The entered character is not lowercase\n");
    }
    return 0;
}