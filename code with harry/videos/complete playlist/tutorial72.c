#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello World\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testind the function
    int (*fptr)(int, int);  // Declaring a function pointer
                            // here fptr is pointer which points to any function and it takes 2 integer values and return 1 integer value
    fptr = &sum;  // now fptr points to sum pointer
    // fptr = &greet; // we cannot do this because it is pointing to void function while it initialized as int
    int d = (*fptr)(4, 6); // derefrencing a function pointer gives the function
    printf("The value of d is %d\n", d);
    return 0;
}