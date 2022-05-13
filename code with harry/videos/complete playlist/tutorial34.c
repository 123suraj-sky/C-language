#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[6] = "harry";

    char str[34];
    gets(str); // In case of string use of scanf is not recomended because it can't read white spaces so we use gets

    printf("Using custom function printStr\n");
    printStr(str);
    printf("Usinf printf %s\n", str);
    printf("Usinf puts \n");
    puts(str);
    return 0;
}