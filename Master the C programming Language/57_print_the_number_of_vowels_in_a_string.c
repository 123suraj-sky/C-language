#include <stdio.h>

int main()
{
    char s[20];
    int i = 0, count = 0;
    printf("Enter the text: ");
    scanf("%s", &s);

    i = 0, count = 0;

    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count++;
        }
        i++;
    }

    printf("Number of vowels found are %d\n", count);

    return 0;
}