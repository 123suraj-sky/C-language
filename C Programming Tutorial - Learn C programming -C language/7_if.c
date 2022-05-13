#include <stdio.h>

int main()
{
    int age;
    printf("Please enter the age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("The age is greater than 18\n");
    }
    if (age == 18)
    {
        printf("the age is equal to 18\n");
    }
    if (age < 18)
    {
        printf("The age is less than 18\n");
    }

    return 0;
}