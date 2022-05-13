#include <stdio.h>
#include <string.h>

int main()
{
    char *st = "Batman";
    char st2[45];
    strcpy(st2, st);
    printf("Now st2 is %s\n", st2);
    return 0;
}