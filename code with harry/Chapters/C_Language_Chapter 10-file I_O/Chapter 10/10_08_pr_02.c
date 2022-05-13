#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the integer whose table you want to print\n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, (i + 1), num * (i + 1));
    }
    
    printf("\nSuccessfully generated the table of %d to table.txt\n", num);
    fclose(ptr);
    return 0;
}