#include <stdio.h>
#include <ctype.h>
// What is "isalpha"?
// 1) defined in ctype.h header file
// 2) used to determine whether the typed charcter is a letter of the alphabet or some other character
// 3) The function returns 'true' if it is, 'false' otherwise.

// What is "isupper"?
// 1) defined in ctype.h header file
// 2) used to determine the uppercase variable
// 3) The function returns 'true' if it is, 'false' otherwise.

// Similarly other functions:-
// 1) islower
// 2) isnumber --> Check why this is not available here
// 3) isblank --> for blank spaces, tab, new line
int main()
{
    int acter;
    do
    {
        acter = getchar();
        if (isalpha(acter))
        {
            putchar(acter);
        }
    } while (acter != '\n');

    puts("\n");
    do
    {
        acter = getchar();
        if (isupper(acter))
        {
            putchar(acter);
        }
    } while (acter != '\n');

    printf("\n");
    return 0;
}