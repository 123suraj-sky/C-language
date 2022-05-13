#include <stdio.h>

int main()
{
    char line[2555];
    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 2555, fpointer);
    // fgets(line, 255, fpointer);
    printf("%s\n", line);

    fclose(fpointer);
    return 0;
}