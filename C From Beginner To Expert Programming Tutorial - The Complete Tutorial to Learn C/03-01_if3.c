#include <stdio.h>

int main()
{
    int a = -3;
    if (a < 0);
    printf("%d is a positive number\n", a);
    printf("%d is a positive number\n"); // here this statement working
                                       // may be because here "if" statement is terminated and it will work inside "if-else-if"
                                       // if they were used in brackets
    return 0;
}