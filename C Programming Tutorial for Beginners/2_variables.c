#include <stdio.h>
#include <string.h>

int main()
{
    char character_Name[] = "Tom";
    int character_Age = 67;
    printf("There once was a man named %s\n", character_Name);
    printf("He was %d years old.\n", character_Age);

    character_Age = 30;
    printf("He really liked the name %s\n", character_Name);
    printf("but did not like being %d\n", character_Age);
    return 0;
}