#include <stdio.h>
#include <string.h>

int main()
{
    struct person
    {
        char name[32];
        int age;
    };
    struct person president;
    // president.name = "George Washington"; // this is not valid because it is an array
    strcpy(president.name, "George Washington");
    president.age = 67;

    printf("%s was %d years old\n", president.name, president.age);

    return 0;
}