#include <stdio.h>

int main()
{
    char name[15];  // room for 14 characters
    printf("Your name? ");
    scanf("%s", name); // array do not require ampersand operator
    printf("You are %s\n");
    return 0;
}