#include <stdio.h>
#include <string.h>

int main()
{
    // char my_string[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char my_other_string[] = "Hello";

    // printf("my string value = %s\n", my_string);
    // printf("my other string value = %s\n", my_other_string);

    char string1[12] = "Hello";
    char string2[12] = "world";
    char string3[12];

    strcpy(string3, string1); // strcpy(destination, source);
    strcat(string1, string2); // add string 2 to string 1
    int length_1 = strlen(string1);
    int value = strcmp(string1, string2);

    printf("strcpy = %s\n", string3);
    printf("strcat = %s\n", string1);
    printf("strlen = %d\n", length_1);
    printf("strcmp = %d\n", value);
    return 0;
}