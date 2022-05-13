#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number you want the multiplilcation table of :\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows: \n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %-2d = %d\n", num, i + 1, num * (i + 1));
    }

    return 0;
}