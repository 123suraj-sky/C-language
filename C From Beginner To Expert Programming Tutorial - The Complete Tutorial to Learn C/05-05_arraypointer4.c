// #include <stdio.h>

// int main()
// {
//     char *string = "I'm just a normal string\n";
//     char *ptr;

//     ptr = string;
//     while (*ptr)
//     {
//         putchar(*ptr);
//         ptr++;
//     }

//     return 0;
// }





#include <stdio.h>

int main()
{
    char *string = "I'm just a normal string\n";

    while (*string)
    {
        putchar(*string);
        string++;
    }

    return 0;
}