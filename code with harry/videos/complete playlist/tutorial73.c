#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

float average(float a, float b)
{
    float c = (a + b) / 2;
    return c;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 6 and 7 is %d\n", fptr(6, 7));
}

void greetGdmrngAndExecute(int (*fptr)(int, int))
{
    printf("Good morning User\n");
    printf("The sum of 6 and 7 is %d\n", fptr(6, 7));
}

void greetGn8AndExecute(float (*fptr)(float, float))
{
    printf("Good night User\n");
    printf("The average of 6 and 7 is %.1f\n", fptr(6, 7));
}

int main()
{
    int (*ptr)(int, int);
    // int *ptr(int, int); // if we do this then the compiler thinks that this is a function not function pointer or throw error because we written all other code assuming that it is function pointer
    ptr = sum;
    // ptr = &sum; // both this line and its above line is same
    greetGdmrngAndExecute(ptr);
    greetHelloAndExecute(ptr);

    float (*ptr2)(float, float);
    ptr2 = average;
    greetGn8AndExecute(ptr2);
    return 0;
}