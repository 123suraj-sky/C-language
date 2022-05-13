#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch = 'a';
    printf("Big %c\n", toupper(ch));    // used to print the uppercase of an alphabet
    printf("Little %c\n", tolower(ch)); // used to print the lowercase of an alphabet
    printf("What begins with %c?\n", ch);
    return 0;
}