#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    char buffer[128];
    long unsigned total;

    total = 0;
    total += sizeof(c);
    total += sizeof(i);
    total += sizeof(f);
    total += sizeof(buffer);

    printf("This program set aside %ld bytes of bytes of storage\n", total);
    return 0;
}