#include <stdio.h>

void sayHi(char name[], int age);

int main()
{
    printf("top\n");
    sayHi("Suraj", 20);
    printf("bottom\n");
    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d years\n", name, age);
}