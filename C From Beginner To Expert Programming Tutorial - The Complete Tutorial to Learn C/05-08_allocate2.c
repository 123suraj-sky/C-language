#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
    char *sto;

    sto = (char *)malloc(sizeof(char) * SIZE);
    if (sto == NULL)
    {
        puts("Memory error");
        return 1;
    }
    else
    {
        printf("%d bytes of memory allocated at %p\n", SIZE, sto);
        printf("Type something: ");
        fgets(sto, SIZE, stdin);
        printf("You typed:\n%s\n", sto);
    }

    return 0;
}