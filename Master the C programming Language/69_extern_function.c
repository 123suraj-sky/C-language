#include <stdio.h>
#include <stdlib.h>

// int add(int x, int y); //notes: if we don't mention extern it will be by default extern
extern int add(int x, int y);

void print()
{
    printf("Added value is %d\n", add(100, 200));
}

int main()
{
    print();

    return 0;
}

int add(int x, int y)
{
    return x + y;
}