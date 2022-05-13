// What is error in this program

#include <stdio.h>
#include <ctype.h>

char *encrypt(char *input);

int main()
{
    char *instructions = "Deliver the package to Berlin";
    printf("Here are your secret instructions:\n%s\n", encrypt(instructions));
    return 0;
}

char *encrypt(char *input)
{
    static char output[64];
    // char output[64]; // If we don't use static program shows random values or garbage values
    // or fail to run
    int x = 0;

    while (*input)
    {
        // if (isalpha(*input))
        // {
        //     output[x] = *input + 1;
        // }
        // else
        // {
        //     output[x] = *input;
        // }
        output[x] = *input + 1;
        x++;
        input;
    }
}