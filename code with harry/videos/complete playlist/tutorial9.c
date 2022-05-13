#include <stdio.h>
#define PI 3.14

int main()
{
    // int a = 1;
    // float b = 34.333;
    // printf("The value of a is %d and value of b is %f\n", a, b);
    // printf("%8.4f\n", b); // 34.333 has 6 characters so when we give space for more than 6 \
    //                          then it will start acquiring space from left side
    //                       // In our example it acquire space for 8-6=2 space
    //                       // we can also use printf("%-8.4f\n", b); for leaving space from right side
    //                       // .4 means print the values upto accuracy of 4 decimal places
    
    
    int a = 1;
    const float b = 3.333;
    // b = 3; // a constant cannot be changed
    // PI = 5; // a constant cannot be changed
    printf("%f\n", b);
    printf("%f\n", PI);
    
    
    
    
    
    // printf("my backlash is \"); // con't be printed next line is correct
    printf("my backlash is \\\n");
    printf("my backlash n is \\n \n");
    
    return 0;
}