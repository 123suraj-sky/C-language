#include <stdio.h>
#include <string.h>

int main()
{
    char first[64] = "I would like to go ";
    char second[] = "from here to there\n";
    char storage[64];
    strcpy(storage, first);
    strcat(storage, second);
    // strcat(first, second);
    printf("Here is your string:\n%s\n", first);
    return 0;
}