#include <stdio.h>

int main()
{
    const int NUM = 5; // this is constant so it cannot be modified
                       // we write the variable name in capital
                       // because generally we write constants in Capital letters
                       // although it is not necessary
    // int const NUM = 5;
    printf("%d\n", NUM);
    printf("Hello\n");  // Here "Hello" is also considered to be constant
                        // because we can't change its value
    printf("%d\n", 70); // here '70' is also considered as const
    // num = 8;
    // printf("%d\n", num);
    return 0;
}