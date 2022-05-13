#include <stdio.h>
#include <string.h>

int main()
{
    char st1[45] = "I am";
    char *st2 = "Batman";
    int val = strcmp(st1, st2);
    printf("Now val is %d\n", val);
    return 0;
}