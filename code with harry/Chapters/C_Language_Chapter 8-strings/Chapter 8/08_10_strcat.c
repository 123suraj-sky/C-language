#include <stdio.h>
#include <string.h>

int main()
{
    char st1[45] = "I am";
    char *st2 = "Batman";
    strcat(st1, st2);
    printf("Now st1 is %s\n", st1);
    return 0;
}