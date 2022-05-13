#include <stdio.h>

int main()
{
    printf("****Multiplication table of 10****\n\n"); // -->> Using \n two times means it will spare two line and then continue the programme
    for (int i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10 * i); // --> Here we use X in place of * beacause it will not affect the code and it will act as simple text and it will be printed out
    }
    return 0;
}