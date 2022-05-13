#include <stdio.h>

int main(int argc, char const *argv[]) // --> easy way to write this is by using "main" user snippet which is pre-defined
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s\n", i, argv[i]);
    }

    return 0;
}