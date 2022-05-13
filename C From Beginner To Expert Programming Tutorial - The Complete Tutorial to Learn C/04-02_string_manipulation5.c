#include <stdio.h>
#include <string.h>

int main()
{
    char source_string[] = "I am a stranger in a strange land";
    // char find_me[] = "strange";
    // char find_me[] = "batman";
    char find_me[] = "land";

    if (strstr(source_string, find_me) == NULL) // strstr is used to find one string inside the other
    {
        puts("String not found!");
    }
    else
    {
        printf("Found '%s' in '%s'\n", find_me, source_string);
    }

    return 0;
}