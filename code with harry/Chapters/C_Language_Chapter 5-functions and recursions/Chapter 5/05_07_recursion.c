#include <stdio.h>
int factorial(int x);

int main()
{
    int a;
    printf("Enter the value of a:-\n");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Value of a neagtive integer is -ve infinity\n");
    }
    printf("The value of factorial %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x)
{
    // printf("Calling factorial value(%d)\n", x);
    // Above command is used to check which factorial is called, but it not works if we are calculating factorial of -ve integer
    
    if (x == 1 || x == 0)  // Base condition
    {
        return 1; // Take value of 1 and return
    }
    else
    {
        return x * factorial(x - 1);
    }
}