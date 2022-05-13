#include <stdio.h>

int main()
{
    FILE *ptr;
    // // fgetc demo for reading a file
    // ptr = fopen("getcdemo.txt", "r");
    // // char c = fgetc(ptr);
    // // printf("%c", c);
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));
    // // printf("%c", (fgetc(ptr)));

    // for (int i = 0; i < 50; i++)
    // {
    //     printf("%c", fgetc(ptr));
    // }

    // printf("\n");








    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}