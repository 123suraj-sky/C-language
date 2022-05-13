#include <stdio.h>
// sum is a fuction which takes a and b as input and returns an integer as an output
int sum(int a, int b); // Funtion prototypr declaration

int main()
{
    int c;
    c = sum(2, 5); // Funtion Call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int c;  // This c is different from main function
    c = a + b;
    return c;
}