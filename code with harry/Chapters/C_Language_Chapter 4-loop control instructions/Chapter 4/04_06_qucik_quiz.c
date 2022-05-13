#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("Enter your value of n\n");
    scanf("%d", &n);

    do
    {
        printf("Your number is %d\n", i + 1);
        i++;
    } while (i < n);
}

// The following is also true but above is true for any values of n
//     int i = 1;

//     do
//     {
//         printf("Your number is %d\n", i);
//         i++;
//     } while (i <= 4);
//     return 0;