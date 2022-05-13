#include <stdio.h>
#include <stdlib.h>

void change()
{
    extern int n; //notes: it says 'n is a integer variable defined externally'
    //notes: it says there will be a variable 'n' present externally
    n = 20;
}

// global declaration
int n = 10;

int main()
{
    printf("Before change funciton call, value of n is: %d\n", n);

    change();
    
    printf("After change funciton call, value of n is: %d\n", n);

    return 0;
}