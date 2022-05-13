// #include <stdio.h>

// int main()
// {
//     int LucklyNumbers[] = {4, 8, 15, 23, 34};
//     LucklyNumbers[1] = 200;
//     printf("%d\n", LucklyNumbers[0]); // prints 4
//     printf("%d\n", LucklyNumbers[1]);
//     return 0;
// }


#include <stdio.h>

int main()
{
    int LucklyNumbers[10];
    char phrase[20] = "Array";
    LucklyNumbers[1] = 200;
    LucklyNumbers[0] = 20;
    printf("%d\n", LucklyNumbers[0]);
    printf("%d\n", LucklyNumbers[1]);
    return 0;
}