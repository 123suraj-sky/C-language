#include <stdio.h>

int main()
{
    // FILE *fpointer = fopen("K:employees.txt", "w");
    // FILE *fpointer = fopen("employees.txt", "w");
    FILE *fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "But aim lower\n");

    fclose(fpointer);
    return 0;
}