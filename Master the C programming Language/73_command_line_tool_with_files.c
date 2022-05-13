/*
A small command line utility to copy the content of one file to the other

Input: copy     source.txt      destination.txt
       argv[0]  argv[1]         argv[2]
copied
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *srcFile, *destFile;
    char ch;

    if (argc != 3)
    {
        printf("Usage! fileName.exe <srcFile> <destFile>\n");
        exit(1);
    }

    // FILE *srcFile = fopen("source.txt", "r");
    // FILE *destFile = fopen("destination.txt", "w");
    srcFile = fopen(argv[1], "r");
    if (srcFile == NULL)
    {
        printf("%s file doesn't exits\n", argv[1]);
        // When file doesn't exits
        // or file is corrupted
        // or we don't have permission to open the file
    }

    destFile = fopen(argv[2], "w");
    if (destFile == NULL)
    {
        printf("%s could not be opened for writing\n", argv[2]);
        // When the memory is full or some other error
    }

    while ((ch = fgetc(srcFile)) != EOF)
    {
        fputc(ch, destFile);
    }

    fclose(srcFile);
    fclose(destFile);

    return 0;
}