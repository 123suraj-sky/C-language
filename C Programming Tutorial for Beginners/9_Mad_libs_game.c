#include <stdio.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityN[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural Noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrityF, celebrityN);
    

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityN);
    return 0;
}