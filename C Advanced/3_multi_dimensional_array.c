#include <stdio.h>

int main()
{
    char string[] = "hello";

    // char word1 = "one";
    // char word2 = "two";
    // char word3 = "three";

    char an_array_of_words[] = "One\0Two\0Three";
    char *my_pointer = an_array_of_words;
    printf("%s\n", an_array_of_words);
    printf("%s\n", my_pointer);
    printf("%s\n", my_pointer + 4);
    printf("%s\n", my_pointer + 8);

    // printf("%c\n", *(my_pointer + 10));
    printf("%c\n", *(my_pointer + 8 + 2)); // this is more readble because here we know
                                           // that we are going in the thitd word and it's 2nd character
    return 0;
}