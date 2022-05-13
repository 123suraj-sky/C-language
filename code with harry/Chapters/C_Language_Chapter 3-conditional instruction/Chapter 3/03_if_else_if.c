#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number \n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("The number is 1\n");
    }

    else if (num == 2)
    {
        printf("The number is 2\n");
    }

    else if (num == 3)
    {
        printf("The number is 3\n");
    }

    else
    {
        printf("Your number is not 1,2,3");
    }

    // From line 9 to 23 all excute at a same time because it is a if-elseif-else ladder
    // Above statement meant all statement work simuntansuley and only one will execute from above all given statements
    // If we add another if after line 23 then it will treated as another statement
    // In this case also last else is not important

    return 0;
}