#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[]\n");

    int sum = 0;
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]); // atoi converts string to int
                                  // defined in stdlib.h
        }
        printf("Total = %d\n", sum);
    }
    return 0;
}