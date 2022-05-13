#include <stdio.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p\n", pAge);
    printf("%d\n", &age);
    printf("%d\n", *&age);
    printf("%d\n", &*&age);
    printf("%d\n", *pAge); // Derefrencing pointer
    return 0;
}