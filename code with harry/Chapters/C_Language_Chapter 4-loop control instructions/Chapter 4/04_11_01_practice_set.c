#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n\n\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
    {
        printf("%d X %d = %d\n", n, i, n * i); // --> Here we use X in place of * beacause it will not affect the code and it will act as simple text and it will be printed out
    }
    return 0;
}

// Answers 3 --> (1)atleast once
// Answers 4 --> The statement is true