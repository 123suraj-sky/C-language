#include <stdio.h>
void printAdd(int a)
{
    printf("The Address of the variable i is %u\n", &a);
}

int main()
{
    int i = 4;
    printf("The Value of the variable i is %d\n", i);
    printAdd(i);
    printf("The Address of the variable i is %u\n", &i);
    return 0;
}

// Both the address are different because we passes the value of the variable i
// not the address of the variable i

/* Query:-
    Is the difference between both the address is 28?? Why??*/